"""Delegate `python -m graphify` to the real package entrypoint.
"""
from __future__ import annotations

from importlib import import_module


def main(argv=None) -> int:
    mod = import_module("graphify_b.__main__")
    return mod.main(argv)


if __name__ == "__main__":
    raise SystemExit(main())
