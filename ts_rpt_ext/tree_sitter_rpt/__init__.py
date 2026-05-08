"""Crystal Reports (.rpt) OLE2 parser for graphify-b.

Provides a ``language()`` entry point consistent with the tree-sitter
extension pattern used by ``ts_tsql_ext`` and ``ts_vb_ext``.  Since
Crystal Reports files are OLE2 Compound Documents (not text grammars),
``language()`` returns a parser helper object rather than a tree-sitter
Language.
"""

from tree_sitter_rpt._parser import RptParser, parse_rpt

__all__ = ["language", "parse_rpt", "RptParser"]


def language():
    """Return an ``RptParser`` instance.

    This mirrors the ``language()`` convention of the tree-sitter
    extensions so that ``extract.py`` can call::

        import tree_sitter_rpt as tsrpt
        parser = tsrpt.language()
    """
    return RptParser()
