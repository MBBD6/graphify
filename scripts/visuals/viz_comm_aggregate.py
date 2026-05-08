#!/usr/bin/env python3
"""Create a community-level aggregated graph (one node per community).

Writes: graphify-b-out/graph_communities.html
"""
from pathlib import Path
import json
import os
import sys
from collections import defaultdict

from graphify_m.build import build_from_json
from graphify_m.export import to_html
import networkx as nx


def main() -> int:
    cwd = Path.cwd()
    out = cwd / "graphify-b-out"
    extraction_path = out / ".graphify_extract.json"
    analysis_path = out / ".graphify_analysis.json"

    if not extraction_path.exists() or not analysis_path.exists():
        print("Missing graphify-b output files in", out)
        return 2

    extraction = json.loads(extraction_path.read_text(encoding="utf-8"))
    analysis = json.loads(analysis_path.read_text(encoding="utf-8"))

    communities = {int(k): v for k, v in analysis.get("communities", {}).items()}
    community_labels = {int(k): v for k, v in analysis.get("community_labels", {}).items()} if analysis.get("community_labels") else {}

    # Build inter-community edge counts
    # Map node_id -> community id
    node_to_comm = {}
    for cid, members in communities.items():
        for n in members:
            node_to_comm[n] = cid

    # Build original graph for edge iteration
    G_full = build_from_json(extraction)

    inter = defaultdict(int)
    for u, v in G_full.edges():
        cu = node_to_comm.get(u)
        cv = node_to_comm.get(v)
        if cu is None or cv is None or cu == cv:
            continue
        a, b = sorted((cu, cv))
        inter[(a, b)] += 1

    # Community-level graph
    C = nx.Graph()
    for cid, members in communities.items():
        node_id = f"C_{cid}"
        # Prefer provided community label; otherwise pick a representative node
        if cid in community_labels and community_labels[cid]:
            label = community_labels[cid]
        else:
            # choose highest-degree node in this community as representative
            rep = None
            rep_deg = -1
            for n in members:
                try:
                    deg = G_full.degree(n)
                except Exception:
                    deg = 0
                if deg > rep_deg:
                    rep = n
                    rep_deg = deg
            rep_label = (G_full.nodes[rep].get('label') if rep and 'label' in G_full.nodes[rep] else rep) if rep else f"Community {cid}"
            label = rep_label
        C.add_node(node_id, label=label, member_count=len(members))

    for (a, b), w in inter.items():
        na = f"C_{a}"
        nb = f"C_{b}"
        C.add_edge(na, nb, weight=w, relation="inter_community", confidence=str(w))

    # communities mapping for to_html: map community id -> list of node ids in C
    comm_map = {cid: [f"C_{cid}"] for cid in communities.keys()}

    out_path = out / "graph_communities.html"
    to_html(C, comm_map, str(out_path), community_labels=community_labels, member_counts={cid: len(members) for cid, members in communities.items()})
    print("Wrote", out_path)
    return 0


if __name__ == "__main__":
    # Prefer local graphify-b
    _LOCAL = Path('/mnt/e/source/repos/bizdata_github/graphify-b')
    if _LOCAL.exists():
        sys.path.insert(0, str(_LOCAL))
        os.environ.setdefault('GRAPHIFY_VIZ_NODE_LIMIT', '10000')
    raise SystemExit(main())
