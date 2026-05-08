#!/usr/bin/env python3
"""Create a compact community-supernode graph (top-N communities + Other).

Writes: graphify_b-out/graph_agg.html (compact)
"""
from pathlib import Path
import json
import os
import sys
from collections import defaultdict

from graphify_m.build import build_from_json
from graphify_m.export import to_html
import networkx as nx


def main(top_k: int = 100) -> int:
    cwd = Path.cwd()
    out = cwd / "graphify_b-out"
    extraction_path = out / ".graphify_extract.json"
    analysis_path = out / ".graphify_analysis.json"

    if not extraction_path.exists() or not analysis_path.exists():
        print("Missing graphify_b output files in", out)
        return 2

    extraction = json.loads(extraction_path.read_text(encoding="utf-8"))
    analysis = json.loads(analysis_path.read_text(encoding="utf-8"))

    communities = {int(k): v for k, v in analysis.get("communities", {}).items()}
    community_labels = {int(k): v for k, v in analysis.get("community_labels", {}).items()} if analysis.get("community_labels") else {}

    # Compute sizes and choose top_k communities by member count
    sizes = {cid: len(members) for cid, members in communities.items()}
    top_cids = sorted(sizes.keys(), key=lambda c: -sizes[c])[:top_k]
    top_set = set(top_cids)
    other_cids = [c for c in communities.keys() if c not in top_set]

    # Build node -> community map
    node_to_comm = {}
    for cid, members in communities.items():
        for n in members:
            node_to_comm[n] = cid

    # Original full graph to inspect edges
    G_full = build_from_json(extraction)

    # Aggregate inter-community edge counts into supernodes
    inter = defaultdict(int)
    for u, v in G_full.edges():
        cu = node_to_comm.get(u)
        cv = node_to_comm.get(v)
        if cu is None or cv is None:
            continue
        # Map small communities to a single 'Other' id
        a = cu if cu in top_set else -1
        b = cv if cv in top_set else -1
        if a == b:
            continue
        key = tuple(sorted((a, b)))
        inter[key] += 1

    # Build community-level graph with supernodes
    C = nx.Graph()
    # Compute display labels (prefer analysis labels; otherwise use highest-degree
    # member label from the original graph). Also add nodes to the community graph.
    display_labels: dict[int, str] = {}
    for cid in top_cids:
        node_id = f"C_{cid}"
        if cid in community_labels and community_labels[cid]:
            base_label = community_labels[cid]
        else:
            # choose highest-degree node in this community as representative
            rep = None
            rep_deg = -1
            for n in communities.get(cid, []):
                deg = G_full.degree(n)
                if deg > rep_deg:
                    rep = n
                    rep_deg = deg
            # fall back to numeric label if rep missing
            rep_label = (G_full.nodes[rep].get('label') if rep and rep in G_full.nodes else rep) if rep else f"Community {cid}"
            base_label = rep_label
        display_labels[cid] = str(base_label)
        C.add_node(node_id, label=f"{base_label} ({sizes.get(cid,0)})", member_count=sizes.get(cid, 0))

    # Add 'Other' node(s) if needed. We can split Other into multiple buckets
    # for better visibility when many small communities exist. Controlled by
    # env var GRAPHIFY_OTHER_BUCKETS (default: 1 -> single Other node).
    other_buckets = 1
    try:
        other_buckets = int(os.environ.get('GRAPHIFY_OTHER_BUCKETS', '1'))
    except Exception:
        other_buckets = 1

    other_bucket_ids = []
    if other_cids:
        if other_buckets <= 1 or len(other_cids) <= 1:
            other_count = sum(sizes[c] for c in other_cids)
            C.add_node("C_other", label=f"Other ({len(other_cids)} comms, {other_count} nodes)", member_count=other_count)
            other_bucket_ids.append(('C_other', other_cids))
        else:
            # Partition other_cids (sorted by descending community size) into buckets
            sorted_other = sorted(other_cids, key=lambda c: -sizes.get(c, 0))
            bucket_size = (len(sorted_other) + other_buckets - 1) // other_buckets
            for i in range(other_buckets):
                chunk = sorted_other[i * bucket_size: (i + 1) * bucket_size]
                if not chunk:
                    continue
                comms_in_bucket = len(chunk)
                nodes_in_bucket = sum(sizes.get(c, 0) for c in chunk)
                node_name = f"C_other_{i+1}"
                C.add_node(node_name, label=f"Other {i+1} ({comms_in_bucket} comms, {nodes_in_bucket} nodes)", member_count=nodes_in_bucket)
                other_bucket_ids.append((node_name, chunk))

    # Add edges with aggregated weights
    for (a, b), w in inter.items():
        na = f"C_{a}" if a != -1 else "C_other"
        nb = f"C_{b}" if b != -1 else "C_other"
        if na == nb:
            continue
        C.add_edge(na, nb, weight=w, relation="inter_community", confidence=str(w))

    # Build communities mapping for to_html: map community id -> list of node ids in C
    comm_map = {}
    for cid in top_cids:
        comm_map[cid] = [f"C_{cid}"]
    if other_cids:
        if other_buckets <= 1:
            comm_map[-1] = ["C_other"]
        else:
            # map negative ids -1, -2, ... to bucket node ids
            for idx, (node_name, chunk) in enumerate(other_bucket_ids, start=1):
                comm_map[-idx] = [node_name]

    # member_counts mapping used to size nodes
    member_counts = {cid: sizes[cid] for cid in top_cids}
    if other_cids:
        if other_buckets <= 1:
            member_counts[-1] = sum(sizes[c] for c in other_cids)
        else:
            for idx, (node_name, chunk) in enumerate(other_bucket_ids, start=1):
                member_counts[-idx] = sum(sizes.get(c, 0) for c in chunk)

    out_path = out / "graph_agg.html"
    # Pass computed display labels (prettified later by export) so legend uses them.
    labels_to_pass = {cid: display_labels.get(cid, community_labels.get(cid, f"Community {cid}")) for cid in top_cids}
    if other_cids:
        if other_buckets <= 1:
            labels_to_pass[-1] = 'Other'
        else:
            for idx, (node_name, chunk) in enumerate(other_bucket_ids, start=1):
                labels_to_pass[-idx] = f"Other {idx}"
    to_html(C, comm_map, str(out_path), community_labels=labels_to_pass, member_counts=member_counts)
    print("Wrote", out_path)
    return 0


if __name__ == "__main__":
    _LOCAL = Path('/mnt/e/source/repos/bizdata_github/graphify_b')
    if _LOCAL.exists():
        sys.path.insert(0, str(_LOCAL))
    os.environ.setdefault('GRAPHIFY_VIZ_NODE_LIMIT', '10000')
    # Always use static mode (no physics) for the aggregate view
    os.environ.setdefault('GRAPHIFY_VIZ_MODE', 'static')
    # Allow override via env (default: top 25 communities)
    try:
        k = int(os.environ.get('GRAPHIFY_TOP_COMMUNITIES', '25'))
    except Exception:
        k = 25
    raise SystemExit(main(top_k=k))
