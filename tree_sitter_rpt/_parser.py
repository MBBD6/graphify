"""OLE2-based parser for Crystal Reports (.rpt) files.

This is a copy of the parser bundled in `ts_rpt_ext` so that the
packaged `graphify-m` distribution contains the extension by default.
"""
from __future__ import annotations

import re
from dataclasses import dataclass, field
from pathlib import Path
from typing import Any

try:
    import olefile
except ImportError:
    olefile = None  # type: ignore[assignment]


@dataclass
class RptMetadata:
    title: str = ""
    creating_application: str = ""
    create_time: str = ""
    last_saved_time: str = ""
    revision: str = ""
    dsn: str = ""
    server: str = ""
    database: str = ""
    stored_procedures: list[str] = field(default_factory=list)
    tables: list[str] = field(default_factory=list)
    fields: list[str] = field(default_factory=list)
    parameters: list[str] = field(default_factory=list)
    subreports: list[str] = field(default_factory=list)
    connection_string: str = ""


class RptParser:
    def parse(self, path: Path) -> RptMetadata:
        return parse_rpt(path)


def _extract_strings(data: bytes) -> list[str]:
    return [s.decode("ascii", errors="replace")
            for s in re.findall(rb"[\x20-\x7e]{4,}", data)]


def _parse_db_tlv(data: bytes) -> dict[str, Any]:
    strings = _extract_strings(data)
    result: dict[str, Any] = {
        "stored_procedures": [],
        "fields": [],
        "parameters": [],
        "tables": [],
    }
    for s in strings:
        if s.startswith("Proc("):
            proc_name = s[5:].rstrip(")")
            result["stored_procedures"].append(proc_name)
        elif s.startswith("@"):
            result["parameters"].append(s)
        elif s.startswith("DSN=") or s.startswith("pDSN="):
            result["connection_string"] = s.lstrip("p")
        elif "." in s and not s.startswith("p") and len(s) < 128:
            if re.match(r"^[a-zA-Z_]\w*\.[a-zA-Z_]\w*$", s):
                result["tables"].append(s)
        elif re.match(r"^[a-z_]\w*$", s) and len(s) < 64:
            result["fields"].append(s)
    return result


def _parse_report_info(data: bytes) -> dict[str, str]:
    strings = _extract_strings(data)
    result: dict[str, str] = {"dsn": "", "server": "", "database": "", "connection_string": ""}
    for s in strings:
        if s.startswith("DSN=") or s.startswith("pDSN="):
            clean = s.lstrip("p")
            result["connection_string"] = clean
            for part in clean.split(";"):
                kv = part.split("=", 1)
                if len(kv) == 2:
                    k, v = kv[0].strip(), kv[1].strip()
                    if k.upper() == "DSN":
                        result["dsn"] = v
                    elif k.upper() in ("SERVER", "WSID"):
                        result["server"] = v
                    elif k.upper() == "DATABASE":
                        result["database"] = v
    return result


def parse_rpt(path: Path) -> RptMetadata:
    if olefile is None:
        raise ImportError("olefile is required: pip install olefile")

    path = Path(path)
    if not path.exists():
        raise FileNotFoundError(path)

    ole = olefile.OleFileIO(str(path))
    try:
        meta = ole.get_metadata()
        result = RptMetadata(
            title=_decode(meta.title),
            creating_application=_decode(meta.creating_application),
            create_time=str(meta.create_time or ""),
            last_saved_time=str(meta.last_saved_time or ""),
            revision=_decode(meta.revision_number),
        )

        if ole.exists("Database (TLV)"):
            db_data = ole.openstream("Database (TLV)").read()
            db_info = _parse_db_tlv(db_data)
            result.stored_procedures = db_info["stored_procedures"]
            result.fields = db_info["fields"]
            result.parameters = db_info["parameters"]
            result.tables = db_info["tables"]

        if ole.exists("ReportInfo"):
            ri_data = ole.openstream("ReportInfo").read()
            ri = _parse_report_info(ri_data)
            result.dsn = ri["dsn"]
            result.server = ri["server"]
            result.database = ri["database"]
            if not result.connection_string:
                result.connection_string = ri["connection_string"]

        idx = 1
        while ole.exists(f"Subdocument {idx}/Contents"):
            result.subreports.append(f"Subdocument {idx}")
            idx += 1

        return result
    finally:
        ole.close()


def _decode(value: Any) -> str:
    if isinstance(value, bytes):
        return value.decode("utf-8", errors="replace").strip("\x00")
    return str(value) if value else ""
