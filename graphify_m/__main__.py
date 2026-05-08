"""Delegating CLI shim for backwards compatibility.

Runs `graphify_b.__main__:main` so `python -m graphify_m` still works.
"""
from __future__ import annotations

from importlib import import_module


def main(argv=None) -> int:
    mod = import_module("graphify_b.__main__")
    return mod.main(argv)


if __name__ == "__main__":
    raise SystemExit(main())
