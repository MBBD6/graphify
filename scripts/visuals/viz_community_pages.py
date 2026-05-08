#!/usr/bin/env python3
"""Generate per-community HTML pages for top-N communities.

Writes files: graphify-b-out/graph_comm_{cid}.html
"""
from pathlib import Path
import json
import os
import sys
import argparse

from typing import Dict, List

from graphify_m.build import build_from_json
from graphify_m.export import to_html


def parse_args():
    p = argparse.ArgumentParser()
    p.add_argument("--top", type=int, default=50, help="Generate pages for top-N communities by size")
    return p.parse_args()


def main() -> int:
    args = parse_args()
    cwd = Path.cwd()
    out = cwd / "graphify-b-out"
    extraction_path = out / ".graphify_extract.json"
    analysis_path = out / ".graphify_analysis.json"

    if not extraction_path.exists() or not analysis_path.exists():
        print("Missing graphify-b output files in", out)
        return 2

    extraction = json.loads(extraction_path.read_text(encoding="utf-8"))
    analysis = json.loads(analysis_path.read_text(encoding="utf-8"))

    communities: Dict[int, List[str]] = {int(k): v for k, v in analysis.get("communities", {}).items()}

    # sort communities by size desc
    ranked = sorted(communities.items(), key=lambda kv: -len(kv[1]))
    to_make = ranked[: args.top]

    G = build_from_json(extraction)
    community_labels = {int(k): v for k, v in analysis.get("community_labels", {}).items()} if analysis.get("community_labels") else None

    for cid, members in to_make:
        sub_nodes = set(members)
        subG = G.subgraph(sub_nodes).copy()
        out_path = out / f"graph_comm_{cid}.html"
        try:
            to_html(subG, {cid: [n for n in members if n in subG.nodes()]}, str(out_path), community_labels=community_labels)
            print("Wrote", out_path)
        except Exception as e:
            print("Failed to write", out_path, e)

    return 0


if __name__ == "__main__":
    # Prefer local graphify-b checkout if present
    _LOCAL = Path('/mnt/e/source/repos/bizdata_github/graphify-b')
    if _LOCAL.exists():
        sys.path.insert(0, str(_LOCAL))
        os.environ.setdefault('GRAPHIFY_VIZ_NODE_LIMIT', '10000')
    raise SystemExit(main())
