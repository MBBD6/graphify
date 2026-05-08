#!/usr/bin/env python3
"""Produce focused subgraph visualizations.

Usage examples:
  python scripts/visuals/viz_focus.py --top 500
  python scripts/visuals/viz_focus.py --communities 1,2,5 --out graphify_b-out/graph_comm_1_2_5.html
"""
from pathlib import Path
import json
import argparse
from typing import Optional
import os
import sys

# Prefer local graphify_b checkout so edits to export.py are honored.
_LOCAL_GRAPHIFY = Path('/mnt/e/source/repos/bizdata_github/graphify_b')
if _LOCAL_GRAPHIFY.exists():
    sys.path.insert(0, str(_LOCAL_GRAPHIFY))

# Ensure viz limit uses 10000 for these script runs (overrides installed package defaults)
os.environ.setdefault('GRAPHIFY_VIZ_NODE_LIMIT', '10000')

from graphify_m.build import build_from_json
from graphify_m.export import to_html


def parse_args():
    p = argparse.ArgumentParser()
    p.add_argument("--top", type=int, default=500, help="Top-N nodes by degree to include")
    p.add_argument("--communities", type=str, help="Comma-separated community ids to include instead of --top")
    p.add_argument("--out", type=str, help="Output HTML path", default="graphify_b-out/graph_top.html")
    return p.parse_args()


def main() -> int:
    args = parse_args()
    cwd = Path.cwd()
    out = cwd / "graphify_b-out"
    extraction_path = out / ".graphify_extract.json"
    analysis_path = out / ".graphify_analysis.json"

    if not extraction_path.exists() or not analysis_path.exists():
        print("Missing graphify_b output files in", out)
        return 2

    extraction = json.loads(extraction_path.read_text(encoding="utf-8"))
    analysis = json.loads(analysis_path.read_text(encoding="utf-8"))

    G = build_from_json(extraction)

    # Determine selected node set
    selected_nodes = set()
    if args.communities:
        want = {int(x.strip()) for x in args.communities.split(",") if x.strip()}
        comms = {int(k): v for k, v in analysis.get("communities", {}).items()}
        for cid, members in comms.items():
            if cid in want:
                selected_nodes.update(members)
    else:
        # top-N by degree
        deg = dict(G.degree())
        topn = sorted(deg.items(), key=lambda kv: -kv[1])[: args.top]
        selected_nodes.update(n for n, _ in topn)

    subG = G.subgraph(selected_nodes).copy()

    # Filter communities to only include members present
    communities = {int(k): [n for n in v if n in subG.nodes()] for k, v in analysis.get("communities", {}).items()}
    communities = {k: v for k, v in communities.items() if v}
    community_labels = {int(k): v for k, v in analysis.get("community_labels", {}).items()} if analysis.get("community_labels") else None

    out_path = Path(args.out)
    if not out_path.is_absolute():
        out_path = cwd / out_path

    to_html(subG, communities, str(out_path), community_labels=community_labels)
    print("Wrote", out_path)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
