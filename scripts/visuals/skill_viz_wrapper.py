#!/usr/bin/env python3
"""Wrapper for agent-friendly /graphify-b viz execution.

Runs `scripts/visuals/skill_viz.py` with the provided subcommand and prints a small
JSON summary to stdout describing which files were created/updated under
`graphify-b-out/` so the agent can report back concisely.
"""
from __future__ import annotations
import sys
from pathlib import Path
import subprocess
import json
import time


def run(cmd: list[str]) -> int:
    try:
        subprocess.run(cmd, check=True)
        return 0
    except subprocess.CalledProcessError as e:
        return e.returncode


def snapshot_graphify_out() -> dict:
    out = Path('graphify-b-out')
    if not out.exists():
        return {'files': []}
    files = []
    cwd_resolved = Path.cwd().resolve()
    for p in sorted(out.rglob('*')):
        if p.is_file():
            try:
                rel = str(p.resolve().relative_to(cwd_resolved))
            except Exception:
                rel = str(p)
            files.append({'path': rel, 'size': p.stat().st_size, 'mtime': p.stat().st_mtime})
    return {'files': files}


def main(argv: list[str] | None = None) -> int:
    argv = argv if argv is not None else sys.argv[1:]
    if not argv:
        print(json.dumps({'error': 'missing subcommand'}, indent=2))
        return 2

    before = snapshot_graphify_out()
    # Locate `skill_viz.py` in common locations (cwd or alongside this wrapper)
    candidates = [
        Path.cwd() / 'scripts' / 'visuals' / 'skill_viz.py',
        Path.cwd() / 'scripts' / 'skill_viz.py',
        Path(__file__).parent / 'skill_viz.py',
        Path(__file__).parent.parent / 'scripts' / 'visuals' / 'skill_viz.py',
        Path(__file__).parent.parent / 'scripts' / 'skill_viz.py',
    ]
    script = next((p for p in candidates if p.exists()), None)
    if script is None:
        print(json.dumps({'error': f'skill_viz.py not found; checked: {[str(p) for p in candidates]}'}, indent=2))
        return 2
    cmd = [sys.executable, str(script)] + argv
    rc = run(cmd)
    # small delay to allow FS timestamps to settle
    time.sleep(0.1)
    after = snapshot_graphify_out()

    # compute diffs (new or changed files)
    before_map = {f['path']: f for f in before['files']}
    changed = []
    for f in after['files']:
        b = before_map.get(f['path'])
        if not b or b['size'] != f['size'] or int(b['mtime']) != int(f['mtime']):
            changed.append(f['path'])

    out = {'returncode': rc, 'changed': changed, 'all_files_count': len(after['files'])}
    print(json.dumps(out, indent=2))
    return rc


if __name__ == '__main__':
    raise SystemExit(main())
