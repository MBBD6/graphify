"""Compatibility shim: expose `graphify_b` package under the old
`graphify_m` package name so imports and tests continue to work after
the rename.

This file intentionally maps `graphify_m.__path__` to the real package
location so submodule imports (e.g. `graphify_m.build`) resolve to the
files in `graphify_b/`.
"""
from __future__ import annotations

import importlib

# Import the real package and point our package path at its location.
_real = importlib.import_module("graphify_b")
__path__ = _real.__path__

# Re-export any public names from the real package.
try:
    from graphify_b import *  # type: ignore
except Exception:
    # Best-effort: if re-exporting fails, still allow submodule imports.
    pass
