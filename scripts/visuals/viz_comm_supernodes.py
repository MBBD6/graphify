#!/usr/bin/env python3
"""Create a compact community-supernode graph (top-N communities + Other).

Writes: graphify-out/graph_agg.html (compact)
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
    out = cwd / "graphify-out"
    extraction_path = out / ".graphify_extract.json"
    analysis_path = out / ".graphify_analysis.json"

    if not extraction_path.exists() or not analysis_path.exists():
        print("Missing graphify output files in", out)
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
    # Add top community nodes
    for cid in top_cids:
        node_id = f"C_{cid}"
        label = community_labels.get(cid, f"Community {cid}")
        C.add_node(node_id, label=f"{label} ({sizes.get(cid,0)})", member_count=sizes.get(cid, 0))

    # Add 'Other' node if needed
    if other_cids:
        other_count = sum(sizes[c] for c in other_cids)
        C.add_node("C_other", label=f"Other ({len(other_cids)} comms, {other_count} nodes)", member_count=other_count)

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
        comm_map[-1] = ["C_other"]

    # member_counts mapping used to size nodes
    member_counts = {cid: sizes[cid] for cid in top_cids}
    if other_cids:
        member_counts[-1] = sum(sizes[c] for c in other_cids)

    out_path = out / "graph_agg.html"
    to_html(C, comm_map, str(out_path), community_labels={**{cid: community_labels.get(cid, f"Community {cid}") for cid in top_cids}, **({-1: 'Other'} if other_cids else {})}, member_counts=member_counts)
    print("Wrote", out_path)
    return 0


if __name__ == "__main__":
    _LOCAL = Path('/mnt/e/source/repos/bizdata_github/graphify-m')
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
