#!/usr/bin/env python3
"""Skill handler for /graphify-b viz subcommands.

Usage:
  python scripts/visuals/skill_viz.py aggregate
  python scripts/visuals/skill_viz.py focus --top 500
  python scripts/visuals/skill_viz.py communities --top 60
  python scripts/visuals/skill_viz.py all

This wrapper prefers the local `graphify-b` checkout and sets a sensible
`GRAPHIFY_VIZ_NODE_LIMIT` if not already set.
"""
from __future__ import annotations
import sys
from pathlib import Path
import subprocess
import os
import argparse


def ensure_local_graphify_on_path():
    local = Path('/mnt/e/source/repos/bizdata_github/graphify-b')
    if local.exists():
        sys.path.insert(0, str(local))
        os.environ.setdefault('GRAPHIFY_VIZ_NODE_LIMIT', '10000')


def run_cmd(cmd: list[str]) -> int:
    print('RUN:', ' '.join(cmd))
    try:
        subprocess.run(cmd, check=True)
        return 0
    except subprocess.CalledProcessError as e:
        print('ERROR:', e)
        return e.returncode


def main(argv: list[str] | None = None) -> int:
    argv = argv if argv is not None else sys.argv[1:]
    p = argparse.ArgumentParser(prog='skill_viz.py')
    sub = p.add_subparsers(dest='cmd')

    sub.add_parser('aggregate')
    ps_focus = sub.add_parser('focus')
    ps_focus.add_argument('--top', type=int, default=500)
    ps_comm = sub.add_parser('communities')
    ps_comm.add_argument('--top', type=int, default=60)
    sub.add_parser('all')

    args = p.parse_args(argv)

    ensure_local_graphify_on_path()

    py = sys.executable
    base = Path.cwd()

    if args.cmd == 'aggregate':
        return run_cmd([py, str(base / 'scripts' / 'visuals' / 'viz_aggregate.py')])
    if args.cmd == 'focus':
        return run_cmd([py, str(base / 'scripts' / 'visuals' / 'viz_focus.py'), '--top', str(args.top), '--out', 'graphify-b-out/graph_top{0}.html'.format(args.top)])
    if args.cmd == 'communities':
        return run_cmd([py, str(base / 'scripts' / 'visuals' / 'viz_community_pages.py'), '--top', str(args.top)])
    if args.cmd == 'all':
        sh = base / 'scripts' / 'visuals' / 'viz_run_all.sh'
        if sh.exists():
            return run_cmd(['bash', str(sh)])
        return run_cmd([py, str(base / 'scripts' / 'visuals' / 'viz_run_all.sh')])

    p.print_help()
    return 2


if __name__ == '__main__':
    raise SystemExit(main())
