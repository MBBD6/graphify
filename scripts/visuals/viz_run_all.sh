#!/usr/bin/env bash
set -euo pipefail

# Run all visualization generation steps (aggregate, focused, community pages)
cd "$(dirname "$0")"/../.. || exit 1

echo "1/4: Aggregate community-level graph"
python scripts/visuals/viz_comm_aggregate.py

echo "2/4: Aggregate graph with legend"
python scripts/visuals/viz_aggregate.py

echo "3/4: Focused top-500 subgraph"
python scripts/visuals/viz_focus.py --top 500 --out graphify-b-out/graph_top500.html

echo "4/4: Per-community pages (top 60)"
python scripts/visuals/viz_community_pages.py --top 60

echo "Done. Outputs are in graphify-b-out/"
