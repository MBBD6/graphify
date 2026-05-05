#!/usr/bin/env python3
"""Build a community-aggregated HTML visualization.

Writes: graphify-out/graph_agg.html
"""
from pathlib import Path
import json
import sys
import os

# Prefer local graphify-m checkout so edits to export.py are honored.
_LOCAL_GRAPHIFY = Path('/mnt/e/source/repos/bizdata_github/graphify-m')
if _LOCAL_GRAPHIFY.exists():
    sys.path.insert(0, str(_LOCAL_GRAPHIFY))

# Ensure viz limit uses 10000 for these script runs (overrides installed package defaults)
os.environ.setdefault('GRAPHIFY_VIZ_NODE_LIMIT', '10000')

from graphify_m.build import build_from_json
from graphify_m.export import to_html


def main() -> int:
    cwd = Path.cwd()
    out = cwd / "graphify-out"
    extraction_path = out / ".graphify_extract.json"
    analysis_path = out / ".graphify_analysis.json"

    if not extraction_path.exists() or not analysis_path.exists():
        print("Missing graphify output files in", out)
        return 2

    extraction = json.loads(extraction_path.read_text(encoding="utf-8"))
    analysis = json.loads(analysis_path.read_text(encoding="utf-8"))

    G = build_from_json(extraction)

    # communities in analysis are expected as {cid: [node_ids]}
    communities = {int(k): v for k, v in analysis.get("communities", {}).items()}
    member_counts = {cid: len(members) for cid, members in communities.items()}
    community_labels = {int(k): v for k, v in analysis.get("community_labels", {}).items()} if analysis.get("community_labels") else None

    out_path = out / "graph_agg.html"
    to_html(G, communities, str(out_path), community_labels=community_labels, member_counts=member_counts)
    print("Wrote", out_path)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
