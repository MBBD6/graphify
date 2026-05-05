# ts_rpt_ext

Tiny helper extension providing Crystal Reports (.rpt) OLE2 parsing for graphify-m.

Usage
-----

Install the extension in editable mode from the repository root:

```bash
pip install -e ts_rpt_ext/
```

Then `graphify_m.extract` will automatically dispatch `.rpt` files to the
`extract_rpt()` extractor. The package exposes `tree_sitter_rpt.language()` which
returns a parser-like object with a `parse(path: Path)` method returning a
`RptMetadata` object.

Development
-----------

- Unit tests live in `tests/test_rpt_parser.py` and mock `olefile` so tests
  do not require actual `.rpt` files.
- Build a wheel (optional):

```bash
python -m pip install build
python -m build ts_rpt_ext
```
