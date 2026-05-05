#!/usr/bin/env python3
"""Build a community-aggregated HTML visualization.

Writes: graphify-out/graph_agg.html
"""
from pathlib import Path
import json
import shutil
import subprocess
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

    # Prefer to build a true community-aggregated view (one node per community).
    # Reuse the existing viz_comm_aggregate script if present — it's faster and
    # produces a small, responsive community-level HTML. If not present, fall
    # back to the original full-graph aggregate (may be slow for large graphs).
    repo_script = Path(__file__).resolve().parent / "viz_comm_aggregate.py"
    out_path = out / "graph_agg.html"

    if repo_script.exists():
        # Run the community-aggregate generator and copy its output to graph_agg.html
        try:
            subprocess.run([sys.executable, str(repo_script)], check=True)
            src = out / "graph_communities.html"
            if src.exists():
                shutil.copy2(src, out_path)
                print("Wrote", out_path)
                return 0
        except subprocess.CalledProcessError:
            print("viz_comm_aggregate.py failed; falling back to full-graph aggregate")

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
