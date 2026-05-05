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
# Always produce static (no-physics) HTML for the aggregate view
os.environ.setdefault('GRAPHIFY_VIZ_MODE', 'static')

from graphify_m.build import build_from_json
from graphify_m.export import to_html
import subprocess
import shutil


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

    # Use the compact supernode generator (top-N communities + Other node).
    # This produces a tiny, instant-loading HTML (~26 nodes for top_k=25).
    repo_script = Path(__file__).resolve().parent / "viz_comm_supernodes.py"
    out_path = out / "graph_agg.html"

    if repo_script.exists():
        try:
            subprocess.run([sys.executable, str(repo_script)], check=True)
            if out_path.exists():
                print("Wrote", out_path)
                return 0
        except subprocess.CalledProcessError:
            print("viz_comm_supernodes.py failed; falling back to full-graph aggregate")

    # Fallback: original behavior (may be slow on large graphs)
    G = build_from_json(extraction)
    communities = {int(k): v for k, v in analysis.get("communities", {}).items()}
    member_counts = {cid: len(members) for cid, members in communities.items()}
    community_labels = {int(k): v for k, v in analysis.get("community_labels", {}).items()} if analysis.get("community_labels") else None

    to_html(G, communities, str(out_path), community_labels=community_labels, member_counts=member_counts)
    print("Wrote", out_path)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
