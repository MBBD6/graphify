import io
from pathlib import Path

import pytest


def _make_meta(title="T", app="CR", create_time=None, last_saved_time=None, revision=b"1"):
    class Meta:
        def __init__(self):
            self.title = title
            self.creating_application = app
            self.create_time = create_time
            self.last_saved_time = last_saved_time
            self.revision_number = revision

    return Meta()


def test_parse_rpt_with_db_and_reportinfo(monkeypatch, tmp_path):
    # Arrange: fake olefile.OleFileIO with streams
    from tree_sitter_rpt import _parser

    class DummyOle:
        def __init__(self, path):
            # Use NUL separators so _extract_strings yields individual tokens
            self._streams = {
                "Database (TLV)": b"Proc(usp_test)\x00@Param1\x00DSN=mydsn;SERVER=myserver;DATABASE=mydb;\x00Field1\x00Field2",
                "ReportInfo": b"DSN=mydsn;SERVER=myserver;DATABASE=mydb;",
                "Subdocument 1/Contents": b"subcontent",
            }

        def get_metadata(self):
            return _make_meta(title="ReportTitle", app="CRFoo")

        def exists(self, name: str) -> bool:
            return name in self._streams

        def openstream(self, name: str):
            return io.BytesIO(self._streams[name])

        def close(self):
            return None

    monkeypatch.setattr(_parser, "olefile", type("m", (), {"OleFileIO": DummyOle}))

    # Create an empty placeholder file for parse_rpt to accept
    p = tmp_path / "fake.rpt"
    p.write_bytes(b"")

    # Act
    meta = _parser.parse_rpt(p)

    # Assert
    assert meta.title == "ReportTitle"
    # stored_procedures may contain surrounding context; assert substring
    assert any("usp_test" in s for s in meta.stored_procedures)
    assert any("@Param1" in p for p in meta.parameters)
    assert meta.dsn == "mydsn"
    assert "Subdocument 1" in meta.subreports


def test_extract_rpt_uses_parser(monkeypatch, tmp_path):
    # Ensure extract_rpt integrates with tree_sitter_rpt.language()
    import importlib
    extract = importlib.import_module("graphify_m.extract")

    class FakeMeta:
        title = "X"
        dsn = "dsn"
        database = "db"
        stored_procedures = ["proc1"]
        tables = ["schema.table"]
        fields = ["fld1"]
        parameters = ["@p"]
        subreports = ["Subdocument 1"]

    class FakeParser:
        def parse(self, path: Path):
            return FakeMeta()

    monkeypatch.setitem(__import__("sys").modules, "tree_sitter_rpt", type("m", (), {"language": lambda: FakeParser()}))

    p = tmp_path / "r.rpt"
    p.write_bytes(b"")

    res = extract.extract_rpt(p)
    # basic expectations
    assert any(n for n in res["nodes"] if n["label"] == "X")
    assert any(e for e in res["edges"] if e["relation"] in ("connects_to", "calls", "reads", "has_parameter", "uses_field", "contains"))
