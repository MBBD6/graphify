Visualization helpers
=====================

These small scripts generate alternative visualizations for large graphs produced
by graphify-b. They live under `scripts/visuals/` and write files to
`graphify-b-out/`.

Usage
-----

Run the full sequence:

```
bash scripts/visuals/viz_run_all.sh
```

Or run individual steps:

```
python scripts/visuals/viz_aggregate.py
python scripts/visuals/viz_focus.py --top 500
python scripts/visuals/viz_community_pages.py --top 60
python scripts/visuals/viz_comm_aggregate.py
```

Agent integration
-----------------

Use `scripts/visuals/skill_viz_wrapper.py <subcommand>` to run a helper and
produce a concise JSON summary the agent can parse. Example:

```
python scripts/visuals/skill_viz_wrapper.py all
```
