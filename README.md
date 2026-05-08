<p align="center">
  <a href="https://graphifylabs.ai"><img src="https://raw.githubusercontent.com/safishamsi/graphify/v4/docs/logo-text.svg" width="260" height="64" alt="Graphify"/></a>
</p>

<p align="center">
  🇺🇸 <a href="README.md">English</a> | 🇨🇳 <a href="docs/translations/README.zh-CN.md">简体中文</a> | 🇯🇵 <a href="docs/translations/README.ja-JP.md">日本語</a> | 🇰🇷 <a href="docs/translations/README.ko-KR.md">한국어</a> | 🇩🇪 <a href="docs/translations/README.de-DE.md">Deutsch</a> | 🇫🇷 <a href="docs/translations/README.fr-FR.md">Français</a> | 🇪🇸 <a href="docs/translations/README.es-ES.md">Español</a> | 🇮🇳 <a href="docs/translations/README.hi-IN.md">हिन्दी</a> | 🇧🇷 <a href="docs/translations/README.pt-BR.md">Português</a> | 🇷🇺 <a href="docs/translations/README.ru-RU.md">Русский</a> | 🇸🇦 <a href="docs/translations/README.ar-SA.md">العربية</a> | 🇮🇹 <a href="docs/translations/README.it-IT.md">Italiano</a> | 🇵🇱 <a href="docs/translations/README.pl-PL.md">Polski</a> | 🇳🇱 <a href="docs/translations/README.nl-NL.md">Nederlands</a> | 🇹🇷 <a href="docs/translations/README.tr-TR.md">Türkçe</a> | 🇺🇦 <a href="docs/translations/README.uk-UA.md">Українська</a> | 🇻🇳 <a href="docs/translations/README.vi-VN.md">Tiếng Việt</a> | 🇮🇩 <a href="docs/translations/README.id-ID.md">Bahasa Indonesia</a> | 🇸🇪 <a href="docs/translations/README.sv-SE.md">Svenska</a> | 🇬🇷 <a href="docs/translations/README.el-GR.md">Ελληνικά</a> | 🇷🇴 <a href="docs/translations/README.ro-RO.md">Română</a> | 🇨🇿 <a href="docs/translations/README.cs-CZ.md">Čeština</a> | 🇫🇮 <a href="docs/translations/README.fi-FI.md">Suomi</a> | 🇩🇰 <a href="docs/translations/README.da-DK.md">Dansk</a> | 🇳🇴 <a href="docs/translations/README.no-NO.md">Norsk</a> | 🇭🇺 <a href="docs/translations/README.hu-HU.md">Magyar</a> | 🇹🇭 <a href="docs/translations/README.th-TH.md">ภาษาไทย</a> | 🇹🇼 <a href="docs/translations/README.zh-TW.md">繁體中文</a>
</p>

<p align="center">
  <a href="https://safishamsi.gumroad.com/l/qetvlo"><img src="https://img.shields.io/badge/Book-The%20Memory%20Layer-2ea44f?style=flat&logo=gitbook&logoColor=white" alt="The Memory Layer"/></a>
  <a href="https://github.com/safishamsi/graphify/actions/workflows/ci.yml"><img src="https://github.com/safishamsi/graphify/actions/workflows/ci.yml/badge.svg?branch=v4" alt="CI"/></a>
  <a href="https://pypi.org/project/graphifyy-m/"><img src="https://img.shields.io/pypi/v/graphifyy-m" alt="PyPI"/></a>
  <a href="https://pepy.tech/project/graphifyy-m"><img src="https://static.pepy.tech/badge/graphifyy-m" alt="Downloads"/></a>
  <a href="https://github.com/sponsors/safishamsi"><img src="https://img.shields.io/badge/sponsor-safishamsi-ea4aaa?logo=github-sponsors" alt="Sponsor"/></a>
  <a href="https://www.linkedin.com/in/safi-shamsi"><img src="https://img.shields.io/badge/LinkedIn-Safi%20Shamsi-0077B5?logo=linkedin" alt="LinkedIn"/></a>
</p>

<p align="center">
  <a href="https://star-history.com/#safishamsi/graphify&Date">
    <img src="https://api.star-history.com/svg?repos=safishamsi/graphify&type=Date" alt="Star History Chart" width="600"/>
  </a>
</p>

Type `/graphify` in your AI coding assistant and it maps your entire project — code, docs, PDFs, images, videos — into a knowledge graph you can query instead of grepping through files.

Works in Claude Code, Codex, OpenCode, Cursor, Gemini CLI, GitHub Copilot CLI, VS Code Copilot Chat, Aider, OpenClaw, Factory Droid, Trae, Hermes, Kiro, Pi, and Google Antigravity.

```
/graphify-b .
```

That's it. You get three files:

```
graphify-b-out/
├── graph.html       open in any browser — click nodes, filter, search
├── GRAPH_REPORT.md  the highlights: key concepts, surprising connections, suggested questions
└── graph.json       the full graph — query it anytime without re-reading your files
```

---

## Install

**Requires Python 3.10+**

```bash
uv tool install graphifyy-m && graphify-b install
# or: pipx install graphifyy-m && graphify-b install
# or: pip install graphifyy-m && graphify-b install
```

> **Official package:** The PyPI package is `graphifyy-m` (double-y). Other `graphify*` packages on PyPI are not affiliated. The CLI command is still `graphify`.

> **`graphify: command not found`?** Use `uv tool install graphifyy-m` or `pipx install graphifyy-m` — both put the CLI on PATH automatically. With plain `pip`, add `~/.local/bin` (Linux) or `~/Library/Python/3.x/bin` (Mac) to your PATH, or run `python -m graphify`.

### Pick your platform

| Platform | Install command |
|----------|----------------|
| Claude Code (Linux/Mac) | `graphify-b install` |
| Claude Code (Windows) | `graphify-b install --platform windows` |
| Codex | `graphify-b install --platform codex` |
| OpenCode | `graphify-b install --platform opencode` |
| GitHub Copilot CLI | `graphify-b install --platform copilot` |
| VS Code Copilot Chat | `graphify-b vscode install` |
| Aider | `graphify-b install --platform aider` |
| OpenClaw | `graphify-b install --platform claw` |
| Factory Droid | `graphify-b install --platform droid` |
| Trae | `graphify-b install --platform trae` |
| Trae CN | `graphify-b install --platform trae-cn` |
| Gemini CLI | `graphify-b install --platform gemini` |
| Hermes | `graphify-b install --platform hermes` |
| Kiro IDE/CLI | `graphify-b kiro install` |
| Pi coding agent | `graphify-b install --platform pi` |
| Cursor | `graphify-b cursor install` |
| Google Antigravity | `graphify-b antigravity install` |

> Codex users: also add `multi_agent = true` under `[features]` in `~/.codex/config.toml`.
> Codex uses `$graphify` instead of `/graphify`.

---

## Make your assistant always use the graph

Run this once in your project after building a graph:

| Platform | Command |
|----------|---------|
| Claude Code | `graphify-b claude install` |
| Codex | `graphify-b codex install` |
| OpenCode | `graphify-b opencode install` |
| GitHub Copilot CLI | `graphify-b copilot install` |
| VS Code Copilot Chat | `graphify-b vscode install` |
| Aider | `graphify-b aider install` |
| OpenClaw | `graphify-b claw install` |
| Factory Droid | `graphify-b droid install` |
| Trae | `graphify-b trae install` |
| Trae CN | `graphify-b trae-cn install` |
| Cursor | `graphify-b cursor install` |
| Gemini CLI | `graphify-b gemini install` |
| Hermes | `graphify-b hermes install` |
| Kiro IDE/CLI | `graphify-b kiro install` |
| Pi coding agent | `graphify-b pi install` |
| Google Antigravity | `graphify-b antigravity install` |

This writes a small config file that tells your assistant to read `GRAPH_REPORT.md` before answering questions about your codebase. On platforms that support hooks (Claude Code, Codex, Gemini CLI), a hook fires automatically before every file-read call — your assistant navigates by the graph instead of grepping through everything.

Uninstall with the matching command (e.g. `graphify-b claude uninstall`).

---

## What's in the report

- **God nodes** — the most-connected concepts in your project. Everything flows through these.
- **Surprising connections** — links between things that live in different files or modules. Ranked by how unexpected they are.
- **The "why"** — inline comments (`# NOTE:`, `# WHY:`, `# HACK:`), docstrings, and design rationale from docs are extracted as separate nodes linked to the code they explain.
- **Suggested questions** — 4–5 questions the graph is uniquely positioned to answer.
- **Confidence tags** — every inferred relationship is marked `EXTRACTED`, `INFERRED`, or `AMBIGUOUS`. You always know what was found vs guessed.

---

## What files it handles

| Type | Extensions |
|------|-----------|
| Code (26 languages) | `.py .ts .js .jsx .tsx .go .rs .java .c .cpp .rb .cs .kt .scala .php .swift .lua .zig .ps1 .ex .exs .m .jl .vue .svelte .sql .frm` |
| Docs | `.md .mdx .html .txt .rst .yaml .yml` |
| Office | `.docx .xlsx` (requires `pip install graphifyy-m[office]`) |
| PDFs | `.pdf` |
| Images | `.png .jpg .webp .gif` |
| Video / Audio | `.mp4 .mov .mp3 .wav` and more (requires `pip install graphifyy-m[video]`) |
| YouTube / URLs | any video URL (requires `pip install graphifyy-m[video]`) |

Code is extracted locally with no API calls (AST via tree-sitter). Everything else goes through your AI assistant's model API.

### VB6 support

`.frm` files (Visual Basic 6 forms) are supported out of the box with a regex fallback extractor. For richer AST-based extraction (Sub/Function/Property declarations and Begin/End control blocks via tree-sitter), install the bundled extension:

```bash
pip install -e ts_vb_ext/
```

### T-SQL support

`.sql` files are extracted with a built-in regex-based T-SQL extractor that handles SQL Server / T-SQL constructs:

- Bracketed identifiers (`[schema].[object]`)
- `CREATE TABLE/VIEW/FUNCTION/PROCEDURE` definitions
- `FOREIGN KEY REFERENCES` → `references` edges
- `FROM/JOIN` → `reads_from` edges
- `INSERT INTO/UPDATE/DELETE` → `writes_to` edges
- `EXEC/EXECUTE` → `calls` edges

No additional install required — works out of the box. A tree-sitter grammar binding is also bundled for future use:

```bash
pip install -e ts_tsql_ext/
```

---

## Common commands

```bash
/graphify-b .                        # build graph for current folder
/graphify-b ./docs --update          # re-extract only changed files
/graphify-b . --cluster-only         # rerun clustering without re-extracting
/graphify-b . --no-viz               # skip the HTML, just the report + JSON
/graphify-b . --wiki                 # build a markdown wiki from the graph

/graphify-b query "what connects auth to the database?"
/graphify-b path "UserService" "DatabasePool"
/graphify-b explain "RateLimiter"

/graphify-b add https://arxiv.org/abs/1706.03762   # fetch a paper and add it
/graphify-b add <youtube-url>                       # transcribe and add a video

graphify-b hook install              # auto-rebuild on git commit
graphify-b merge-graphs a.json b.json              # combine two graphs
```

See the [full command reference](#full-command-reference) below.

---

## Ignoring files

Create a `.graphifyignore` in your project root — same syntax as `.gitignore`, including `!` negation:

```
# .graphifyignore
node_modules/
dist/
*.generated.py

# only index src/, ignore everything else
*
!src/
!src/**
```

---

## Team setup

`graphify-b-out/` is meant to be committed to git so everyone on the team starts with a map.

**Recommended `.gitignore` additions:**
```
graphify-b-out/manifest.json    # mtime-based, breaks after git clone
graphify-b-out/cost.json        # local only
# graphify-b-out/cache/         # optional: commit for speed, skip to keep repo small
```

**Workflow:**
1. One person runs `/graphify-b .` and commits `graphify-b-out/`.
2. Everyone pulls — their assistant reads the graph immediately.
3. Run `graphify-b hook install` to auto-rebuild after each commit (AST only, no API cost).
4. When docs or papers change, run `/graphify-b --update` to refresh those nodes.

---

## Using the graph directly

```bash
# query the graph from the terminal
graphify-b query "show the auth flow"
graphify-b query "what connects DigestAuth to Response?" --graph graphify-b-out/graph.json

# expose the graph as an MCP server (for repeated tool-call access)
python -m graphify.serve graphify-b-out/graph.json
```

The MCP server gives your assistant structured access: `query_graph`, `get_node`, `get_neighbors`, `shortest_path`.

> **WSL / Linux note:** Ubuntu ships `python3`, not `python`. Use a venv to avoid conflicts:
> ```bash
> python3 -m venv .venv && .venv/bin/pip install "graphifyy-m[mcp]"
> ```

---

## Privacy

- **Code files** — processed locally via tree-sitter. Nothing leaves your machine.
- **Video / audio** — transcribed locally with faster-whisper. Nothing leaves your machine.
- **Docs, PDFs, images** — sent to your AI assistant's model API (Anthropic, OpenAI, etc.) using your own API key.
- No telemetry, no usage tracking, no analytics.

---

## Full command reference

```
/graphify-b                          # run on current directory
/graphify-b ./raw                    # run on a specific folder
/graphify-b ./raw --mode deep        # more aggressive relationship extraction
/graphify-b ./raw --update           # re-extract only changed files
/graphify-b ./raw --directed         # preserve edge direction
/graphify-b ./raw --cluster-only     # rerun clustering on existing graph
/graphify-b ./raw --no-viz           # skip HTML visualization
/graphify-b ./raw --obsidian         # generate Obsidian vault
/graphify-b ./raw --wiki             # build agent-crawlable markdown wiki
/graphify-b ./raw --svg              # export graph.svg
/graphify-b ./raw --graphml          # export for Gephi / yEd
/graphify-b ./raw --neo4j            # generate cypher.txt for Neo4j
/graphify-b ./raw --neo4j-push bolt://localhost:7687
/graphify-b ./raw --watch            # auto-sync as files change
/graphify-b ./raw --mcp              # start MCP stdio server

/graphify-b add https://arxiv.org/abs/1706.03762
/graphify-b add <video-url>
/graphify-b add https://... --author "Name" --contributor "Name"

/graphify-b query "what connects attention to the optimizer?"
/graphify-b query "..." --dfs --budget 1500
/graphify-b path "DigestAuth" "Response"
/graphify-b explain "SwinTransformer"

graphify-b hook install              # post-commit + post-checkout hooks
graphify-b hook uninstall
graphify-b hook status

graphify-b claude install / uninstall
graphify-b codex install / uninstall
graphify-b opencode install
graphify-b cursor install / uninstall
graphify-b gemini install / uninstall
graphify-b copilot install / uninstall
graphify-b aider install / uninstall
graphify-b claw install / uninstall
graphify-b droid install / uninstall
graphify-b trae install / uninstall
graphify-b trae-cn install / uninstall
graphify-b hermes install / uninstall
graphify-b kiro install / uninstall
graphify-b antigravity install / uninstall

graphify-b clone https://github.com/karpathy/nanoGPT
graphify-b merge-graphs a.json b.json --out merged.json
graphify-b watch ./src
graphify-b check-update ./src
graphify-b update ./src
graphify-b cluster-only ./my-project
```

---

## Learn more

- [How it works](docs/how-it-works.md) — the extraction pipeline, community detection, confidence scoring, benchmarks
- [ARCHITECTURE.md](ARCHITECTURE.md) — module breakdown, how to add a language
- [Optional integrations](docs/docker-mcp-sqlite.md) — Docker MCP Toolkit + SQLite

---

## Built on graphify-b — Penpax

[**Penpax**](https://graphifylabs.ai) is the always-on layer built on top of graphify-b — it applies the same graph approach to your entire working life: meetings, browser history, emails, files, and code, updating continuously in the background.

Built for people whose work lives across hundreds of conversations and documents they can never fully reconstruct. No cloud, fully on-device.

**Free trial launching soon.** [Join the waitlist →](https://graphifylabs.ai)

---

<details>
<summary>Contributing</summary>

**Worked examples** are the most useful contribution. Run `/graphify` on a real corpus, save the output to `worked/{slug}/`, write an honest `review.md` covering what the graph got right and wrong, and open a PR.

**Extraction bugs** — open an issue with the input file, the cache entry (`graphify-b-out/cache/`), and what was missed or wrong.

See [ARCHITECTURE.md](ARCHITECTURE.md) for module responsibilities and how to add a language.

</details>
