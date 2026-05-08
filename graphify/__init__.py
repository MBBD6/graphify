"""Compatibility shim: expose `graphify_m`/`graphify_b` package as `graphify`.

This allows tests and external callers that import `graphify` to continue
working after the rename.
"""
from __future__ import annotations

import importlib

# Prefer the new package, fall back to the old shim.
try:
    _real = importlib.import_module("graphify_b")
except Exception:
    _real = importlib.import_module("graphify_m")

__path__ = _real.__path__

try:
    from . import *  # type: ignore
except Exception:
    # Best-effort; do not fail import if re-exporting errors.
    pass
