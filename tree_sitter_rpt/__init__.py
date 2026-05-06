"""Crystal Reports (.rpt) OLE2 parser bundled with graphify-m.

This mirrors the lightweight package provided in `ts_rpt_ext` so that
`graphify-m` installations (including global installs) include the
`tree_sitter_rpt` entrypoint expected by the extractor.
"""

from tree_sitter_rpt._parser import RptParser, parse_rpt

__all__ = ["language", "parse_rpt", "RptParser"]


def language():
    """Return an ``RptParser`` instance for compatibility with other
    `tree_sitter_*` extension patterns.
    """
    return RptParser()
