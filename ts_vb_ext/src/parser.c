#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 124
#define LARGE_STATE_COUNT 37
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 3

enum {
  sym_newline = 1,
  sym__other_content = 2,
  aux_sym_proc_declaration_token1 = 3,
  aux_sym_proc_declaration_token2 = 4,
  aux_sym_proc_declaration_token3 = 5,
  aux_sym_proc_declaration_token4 = 6,
  aux_sym_proc_declaration_token5 = 7,
  aux_sym_proc_declaration_token6 = 8,
  aux_sym_proc_declaration_token7 = 9,
  aux_sym_proc_declaration_token8 = 10,
  aux_sym_proc_declaration_token9 = 11,
  aux_sym_proc_declaration_token10 = 12,
  aux_sym__end_proc_token1 = 13,
  aux_sym__end_proc_token2 = 14,
  aux_sym__end_proc_token3 = 15,
  aux_sym_begin_end_block_token1 = 16,
  aux_sym_begin_end_block_token2 = 17,
  anon_sym_LPAREN = 18,
  aux_sym_parameter_list_token1 = 19,
  anon_sym_RPAREN = 20,
  sym_identifier = 21,
  sym_source_file = 22,
  sym_proc_declaration = 23,
  sym__end_proc = 24,
  sym_begin_end_block = 25,
  sym_parameter_list = 26,
  sym_other_line = 27,
  aux_sym_source_file_repeat1 = 28,
  aux_sym_begin_end_block_repeat1 = 29,
  aux_sym_begin_end_block_repeat2 = 30,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_newline] = "newline",
  [sym__other_content] = "_other_content",
  [aux_sym_proc_declaration_token1] = "proc_declaration_token1",
  [aux_sym_proc_declaration_token2] = "proc_declaration_token2",
  [aux_sym_proc_declaration_token3] = "proc_declaration_token3",
  [aux_sym_proc_declaration_token4] = "proc_declaration_token4",
  [aux_sym_proc_declaration_token5] = "proc_declaration_token5",
  [aux_sym_proc_declaration_token6] = "proc_declaration_token6",
  [aux_sym_proc_declaration_token7] = "proc_declaration_token7",
  [aux_sym_proc_declaration_token8] = "proc_declaration_token8",
  [aux_sym_proc_declaration_token9] = "proc_declaration_token9",
  [aux_sym_proc_declaration_token10] = "proc_declaration_token10",
  [aux_sym__end_proc_token1] = "_end_proc_token1",
  [aux_sym__end_proc_token2] = "_end_proc_token2",
  [aux_sym__end_proc_token3] = "_end_proc_token3",
  [aux_sym_begin_end_block_token1] = "begin_end_block_token1",
  [aux_sym_begin_end_block_token2] = "begin_end_block_token2",
  [anon_sym_LPAREN] = "(",
  [aux_sym_parameter_list_token1] = "parameter_list_token1",
  [anon_sym_RPAREN] = ")",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym_proc_declaration] = "proc_declaration",
  [sym__end_proc] = "_end_proc",
  [sym_begin_end_block] = "begin_end_block",
  [sym_parameter_list] = "parameter_list",
  [sym_other_line] = "other_line",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_begin_end_block_repeat1] = "begin_end_block_repeat1",
  [aux_sym_begin_end_block_repeat2] = "begin_end_block_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_newline] = sym_newline,
  [sym__other_content] = sym__other_content,
  [aux_sym_proc_declaration_token1] = aux_sym_proc_declaration_token1,
  [aux_sym_proc_declaration_token2] = aux_sym_proc_declaration_token2,
  [aux_sym_proc_declaration_token3] = aux_sym_proc_declaration_token3,
  [aux_sym_proc_declaration_token4] = aux_sym_proc_declaration_token4,
  [aux_sym_proc_declaration_token5] = aux_sym_proc_declaration_token5,
  [aux_sym_proc_declaration_token6] = aux_sym_proc_declaration_token6,
  [aux_sym_proc_declaration_token7] = aux_sym_proc_declaration_token7,
  [aux_sym_proc_declaration_token8] = aux_sym_proc_declaration_token8,
  [aux_sym_proc_declaration_token9] = aux_sym_proc_declaration_token9,
  [aux_sym_proc_declaration_token10] = aux_sym_proc_declaration_token10,
  [aux_sym__end_proc_token1] = aux_sym__end_proc_token1,
  [aux_sym__end_proc_token2] = aux_sym__end_proc_token2,
  [aux_sym__end_proc_token3] = aux_sym__end_proc_token3,
  [aux_sym_begin_end_block_token1] = aux_sym_begin_end_block_token1,
  [aux_sym_begin_end_block_token2] = aux_sym_begin_end_block_token2,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym_parameter_list_token1] = aux_sym_parameter_list_token1,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym_proc_declaration] = sym_proc_declaration,
  [sym__end_proc] = sym__end_proc,
  [sym_begin_end_block] = sym_begin_end_block,
  [sym_parameter_list] = sym_parameter_list,
  [sym_other_line] = sym_other_line,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_begin_end_block_repeat1] = aux_sym_begin_end_block_repeat1,
  [aux_sym_begin_end_block_repeat2] = aux_sym_begin_end_block_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_newline] = {
    .visible = true,
    .named = true,
  },
  [sym__other_content] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_proc_declaration_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_proc_declaration_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_proc_declaration_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_proc_declaration_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_proc_declaration_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_proc_declaration_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_proc_declaration_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_proc_declaration_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_proc_declaration_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_proc_declaration_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__end_proc_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__end_proc_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__end_proc_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_begin_end_block_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_begin_end_block_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_parameter_list_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_proc_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__end_proc] = {
    .visible = false,
    .named = true,
  },
  [sym_begin_end_block] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_other_line] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_begin_end_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_begin_end_block_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_kind = 1,
  field_name = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_kind] = "kind",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_kind, 0},
    {field_name, 1},
  [2] =
    {field_kind, 1},
    {field_name, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(49);
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '(') ADVANCE(136);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == 'A') ADVANCE(168);
      if (lookahead == 'B') ADVANCE(149);
      if (lookahead == 'E') ADVANCE(160);
      if (lookahead == 'F') ADVANCE(166);
      if (lookahead == 'P') ADVANCE(167);
      if (lookahead == 'S') ADVANCE(169);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(0)
      if (('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(50);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '(') ADVANCE(136);
      if (lookahead == 'A') ADVANCE(33);
      if (lookahead == 'F') ADVANCE(44);
      if (lookahead == 'P') ADVANCE(32);
      if (lookahead == 'S') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B') ADVANCE(69);
      if (lookahead == 'E') ADVANCE(90);
      if (lookahead == 'F') ADVANCE(98);
      if (lookahead == 'P') ADVANCE(99);
      if (lookahead == 'S') ADVANCE(103);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0) ADVANCE(120);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B') ADVANCE(69);
      if (lookahead == 'E') ADVANCE(91);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0) ADVANCE(120);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 6:
      if (lookahead == 'F') ADVANCE(41);
      if (lookahead == 'P') ADVANCE(29);
      if (lookahead == 'S') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == 'G') ADVANCE(12);
      if (lookahead == 'L') ADVANCE(13);
      if (lookahead == 'S') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == 'b') ADVANCE(125);
      END_STATE();
    case 9:
      if (lookahead == 'b') ADVANCE(131);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == 'p') ADVANCE(14);
      END_STATE();
    case 28:
      if (lookahead == 'p') ADVANCE(16);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(130);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 41:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 42:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 43:
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 44:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 45:
      if (lookahead == 'y') ADVANCE(133);
      END_STATE();
    case 46:
      if (lookahead == 'y') ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 48:
      if (eof) ADVANCE(49);
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B') ADVANCE(69);
      if (lookahead == 'F') ADVANCE(98);
      if (lookahead == 'P') ADVANCE(99);
      if (lookahead == 'S') ADVANCE(103);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0) ADVANCE(120);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_newline);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B') ADVANCE(69);
      if (lookahead == 'E') ADVANCE(90);
      if (lookahead == 'F') ADVANCE(98);
      if (lookahead == 'P') ADVANCE(99);
      if (lookahead == 'S') ADVANCE(103);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0) ADVANCE(120);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B') ADVANCE(69);
      if (lookahead == 'E') ADVANCE(91);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0) ADVANCE(120);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B') ADVANCE(69);
      if (lookahead == 'F') ADVANCE(98);
      if (lookahead == 'P') ADVANCE(99);
      if (lookahead == 'S') ADVANCE(103);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0) ADVANCE(120);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'F') ADVANCE(114);
      if (lookahead == 'P') ADVANCE(100);
      if (lookahead == 'S') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(6);
      if (lookahead != 0) ADVANCE(120);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'G') ADVANCE(72);
      if (lookahead == 'L') ADVANCE(73);
      if (lookahead == 'S') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(7);
      if (lookahead != 0) ADVANCE(120);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'a') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'b') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'b') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'b') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'c') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'c') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'c') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'c') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'd') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'd') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'g') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'i') ADVANCE(115);
      if (lookahead == 'o') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'i') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'i') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'i') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'l') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'n') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'n') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'n') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'n') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'n') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'o') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'o') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'o') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'p') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'p') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == 'u') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == 'u') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'r') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'r') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == 'u') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 't') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 't') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 't') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 't') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 't') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'u') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'u') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'v') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'y') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == 'y') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(7);
      if (lookahead != 0) ADVANCE(120);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(6);
      if (lookahead != 0) ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__other_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_proc_declaration_token1);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_proc_declaration_token2);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_proc_declaration_token3);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_proc_declaration_token4);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_proc_declaration_token5);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_proc_declaration_token6);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_proc_declaration_token7);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_proc_declaration_token8);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_proc_declaration_token9);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_proc_declaration_token10);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__end_proc_token1);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym__end_proc_token2);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym__end_proc_token3);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_begin_end_block_token1);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_begin_end_block_token2);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_parameter_list_token1);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(137);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_parameter_list_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(171);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(170);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(159);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(125);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(121);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(124);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(172);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(123);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(157);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(173);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(151);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(145);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(156);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(147);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(146);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(134);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(126);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(148);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(163);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(155);
      if (lookahead == 'u') ADVANCE(161);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(153);
      if (lookahead == 'u') ADVANCE(142);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(130);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(140);
      if (lookahead == 'u') ADVANCE(143);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(150);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(158);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(154);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(141);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 48},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 48},
  [36] = {.lex_state = 48},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 48},
  [51] = {.lex_state = 48},
  [52] = {.lex_state = 48},
  [53] = {.lex_state = 48},
  [54] = {.lex_state = 48},
  [55] = {.lex_state = 48},
  [56] = {.lex_state = 48},
  [57] = {.lex_state = 48},
  [58] = {.lex_state = 48},
  [59] = {.lex_state = 48},
  [60] = {.lex_state = 48},
  [61] = {.lex_state = 48},
  [62] = {.lex_state = 48},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 137},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_newline] = ACTIONS(1),
    [aux_sym_proc_declaration_token1] = ACTIONS(1),
    [aux_sym_proc_declaration_token2] = ACTIONS(1),
    [aux_sym_proc_declaration_token3] = ACTIONS(1),
    [aux_sym_proc_declaration_token4] = ACTIONS(1),
    [aux_sym_proc_declaration_token5] = ACTIONS(1),
    [aux_sym_proc_declaration_token6] = ACTIONS(1),
    [aux_sym_proc_declaration_token10] = ACTIONS(1),
    [aux_sym_begin_end_block_token1] = ACTIONS(1),
    [aux_sym_begin_end_block_token2] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(108),
    [sym_proc_declaration] = STATE(36),
    [sym_begin_end_block] = STATE(36),
    [sym_other_line] = STATE(36),
    [aux_sym_source_file_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_newline] = ACTIONS(5),
    [sym__other_content] = ACTIONS(7),
    [aux_sym_proc_declaration_token1] = ACTIONS(9),
    [aux_sym_proc_declaration_token2] = ACTIONS(9),
    [aux_sym_proc_declaration_token3] = ACTIONS(9),
    [aux_sym_proc_declaration_token4] = ACTIONS(9),
    [aux_sym_proc_declaration_token5] = ACTIONS(11),
    [aux_sym_proc_declaration_token6] = ACTIONS(11),
    [aux_sym_proc_declaration_token7] = ACTIONS(11),
    [aux_sym_proc_declaration_token8] = ACTIONS(11),
    [aux_sym_proc_declaration_token9] = ACTIONS(11),
    [aux_sym_begin_end_block_token1] = ACTIONS(13),
  },
  [2] = {
    [sym_proc_declaration] = STATE(34),
    [sym__end_proc] = STATE(40),
    [sym_begin_end_block] = STATE(34),
    [sym_other_line] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(34),
    [sym_newline] = ACTIONS(15),
    [sym__other_content] = ACTIONS(17),
    [aux_sym_proc_declaration_token1] = ACTIONS(19),
    [aux_sym_proc_declaration_token2] = ACTIONS(19),
    [aux_sym_proc_declaration_token3] = ACTIONS(19),
    [aux_sym_proc_declaration_token4] = ACTIONS(19),
    [aux_sym_proc_declaration_token5] = ACTIONS(21),
    [aux_sym_proc_declaration_token6] = ACTIONS(21),
    [aux_sym_proc_declaration_token7] = ACTIONS(21),
    [aux_sym_proc_declaration_token8] = ACTIONS(21),
    [aux_sym_proc_declaration_token9] = ACTIONS(21),
    [aux_sym__end_proc_token1] = ACTIONS(23),
    [aux_sym__end_proc_token2] = ACTIONS(23),
    [aux_sym__end_proc_token3] = ACTIONS(23),
    [aux_sym_begin_end_block_token1] = ACTIONS(25),
  },
  [3] = {
    [sym_proc_declaration] = STATE(34),
    [sym__end_proc] = STATE(55),
    [sym_begin_end_block] = STATE(34),
    [sym_other_line] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(34),
    [sym_newline] = ACTIONS(15),
    [sym__other_content] = ACTIONS(17),
    [aux_sym_proc_declaration_token1] = ACTIONS(19),
    [aux_sym_proc_declaration_token2] = ACTIONS(19),
    [aux_sym_proc_declaration_token3] = ACTIONS(19),
    [aux_sym_proc_declaration_token4] = ACTIONS(19),
    [aux_sym_proc_declaration_token5] = ACTIONS(21),
    [aux_sym_proc_declaration_token6] = ACTIONS(21),
    [aux_sym_proc_declaration_token7] = ACTIONS(21),
    [aux_sym_proc_declaration_token8] = ACTIONS(21),
    [aux_sym_proc_declaration_token9] = ACTIONS(21),
    [aux_sym__end_proc_token1] = ACTIONS(27),
    [aux_sym__end_proc_token2] = ACTIONS(27),
    [aux_sym__end_proc_token3] = ACTIONS(27),
    [aux_sym_begin_end_block_token1] = ACTIONS(25),
  },
  [4] = {
    [sym_proc_declaration] = STATE(34),
    [sym__end_proc] = STATE(61),
    [sym_begin_end_block] = STATE(34),
    [sym_other_line] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(34),
    [sym_newline] = ACTIONS(15),
    [sym__other_content] = ACTIONS(17),
    [aux_sym_proc_declaration_token1] = ACTIONS(19),
    [aux_sym_proc_declaration_token2] = ACTIONS(19),
    [aux_sym_proc_declaration_token3] = ACTIONS(19),
    [aux_sym_proc_declaration_token4] = ACTIONS(19),
    [aux_sym_proc_declaration_token5] = ACTIONS(21),
    [aux_sym_proc_declaration_token6] = ACTIONS(21),
    [aux_sym_proc_declaration_token7] = ACTIONS(21),
    [aux_sym_proc_declaration_token8] = ACTIONS(21),
    [aux_sym_proc_declaration_token9] = ACTIONS(21),
    [aux_sym__end_proc_token1] = ACTIONS(29),
    [aux_sym__end_proc_token2] = ACTIONS(29),
    [aux_sym__end_proc_token3] = ACTIONS(29),
    [aux_sym_begin_end_block_token1] = ACTIONS(25),
  },
  [5] = {
    [sym_proc_declaration] = STATE(4),
    [sym__end_proc] = STATE(58),
    [sym_begin_end_block] = STATE(4),
    [sym_other_line] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [sym_newline] = ACTIONS(31),
    [sym__other_content] = ACTIONS(17),
    [aux_sym_proc_declaration_token1] = ACTIONS(19),
    [aux_sym_proc_declaration_token2] = ACTIONS(19),
    [aux_sym_proc_declaration_token3] = ACTIONS(19),
    [aux_sym_proc_declaration_token4] = ACTIONS(19),
    [aux_sym_proc_declaration_token5] = ACTIONS(21),
    [aux_sym_proc_declaration_token6] = ACTIONS(21),
    [aux_sym_proc_declaration_token7] = ACTIONS(21),
    [aux_sym_proc_declaration_token8] = ACTIONS(21),
    [aux_sym_proc_declaration_token9] = ACTIONS(21),
    [aux_sym__end_proc_token1] = ACTIONS(33),
    [aux_sym__end_proc_token2] = ACTIONS(33),
    [aux_sym__end_proc_token3] = ACTIONS(33),
    [aux_sym_begin_end_block_token1] = ACTIONS(25),
  },
  [6] = {
    [sym_proc_declaration] = STATE(34),
    [sym__end_proc] = STATE(42),
    [sym_begin_end_block] = STATE(34),
    [sym_other_line] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(34),
    [sym_newline] = ACTIONS(15),
    [sym__other_content] = ACTIONS(17),
    [aux_sym_proc_declaration_token1] = ACTIONS(19),
    [aux_sym_proc_declaration_token2] = ACTIONS(19),
    [aux_sym_proc_declaration_token3] = ACTIONS(19),
    [aux_sym_proc_declaration_token4] = ACTIONS(19),
    [aux_sym_proc_declaration_token5] = ACTIONS(21),
    [aux_sym_proc_declaration_token6] = ACTIONS(21),
    [aux_sym_proc_declaration_token7] = ACTIONS(21),
    [aux_sym_proc_declaration_token8] = ACTIONS(21),
    [aux_sym_proc_declaration_token9] = ACTIONS(21),
    [aux_sym__end_proc_token1] = ACTIONS(35),
    [aux_sym__end_proc_token2] = ACTIONS(35),
    [aux_sym__end_proc_token3] = ACTIONS(35),
    [aux_sym_begin_end_block_token1] = ACTIONS(25),
  },
  [7] = {
    [sym_proc_declaration] = STATE(34),
    [sym__end_proc] = STATE(58),
    [sym_begin_end_block] = STATE(34),
    [sym_other_line] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(34),
    [sym_newline] = ACTIONS(15),
    [sym__other_content] = ACTIONS(17),
    [aux_sym_proc_declaration_token1] = ACTIONS(19),
    [aux_sym_proc_declaration_token2] = ACTIONS(19),
    [aux_sym_proc_declaration_token3] = ACTIONS(19),
    [aux_sym_proc_declaration_token4] = ACTIONS(19),
    [aux_sym_proc_declaration_token5] = ACTIONS(21),
    [aux_sym_proc_declaration_token6] = ACTIONS(21),
    [aux_sym_proc_declaration_token7] = ACTIONS(21),
    [aux_sym_proc_declaration_token8] = ACTIONS(21),
    [aux_sym_proc_declaration_token9] = ACTIONS(21),
    [aux_sym__end_proc_token1] = ACTIONS(33),
    [aux_sym__end_proc_token2] = ACTIONS(33),
    [aux_sym__end_proc_token3] = ACTIONS(33),
    [aux_sym_begin_end_block_token1] = ACTIONS(25),
  },
  [8] = {
    [sym_proc_declaration] = STATE(3),
    [sym__end_proc] = STATE(56),
    [sym_begin_end_block] = STATE(3),
    [sym_other_line] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [sym_newline] = ACTIONS(37),
    [sym__other_content] = ACTIONS(17),
    [aux_sym_proc_declaration_token1] = ACTIONS(19),
    [aux_sym_proc_declaration_token2] = ACTIONS(19),
    [aux_sym_proc_declaration_token3] = ACTIONS(19),
    [aux_sym_proc_declaration_token4] = ACTIONS(19),
    [aux_sym_proc_declaration_token5] = ACTIONS(21),
    [aux_sym_proc_declaration_token6] = ACTIONS(21),
    [aux_sym_proc_declaration_token7] = ACTIONS(21),
    [aux_sym_proc_declaration_token8] = ACTIONS(21),
    [aux_sym_proc_declaration_token9] = ACTIONS(21),
    [aux_sym__end_proc_token1] = ACTIONS(39),
    [aux_sym__end_proc_token2] = ACTIONS(39),
    [aux_sym__end_proc_token3] = ACTIONS(39),
    [aux_sym_begin_end_block_token1] = ACTIONS(25),
  },
  [9] = {
    [sym_proc_declaration] = STATE(34),
    [sym__end_proc] = STATE(56),
    [sym_begin_end_block] = STATE(34),
    [sym_other_line] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(34),
    [sym_newline] = ACTIONS(15),
    [sym__other_content] = ACTIONS(17),
    [aux_sym_proc_declaration_token1] = ACTIONS(19),
    [aux_sym_proc_declaration_token2] = ACTIONS(19),
    [aux_sym_proc_declaration_token3] = ACTIONS(19),
    [aux_sym_proc_declaration_token4] = ACTIONS(19),
    [aux_sym_proc_declaration_token5] = ACTIONS(21),
    [aux_sym_proc_declaration_token6] = ACTIONS(21),
    [aux_sym_proc_declaration_token7] = ACTIONS(21),
    [aux_sym_proc_declaration_token8] = ACTIONS(21),
    [aux_sym_proc_declaration_token9] = ACTIONS(21),
    [aux_sym__end_proc_token1] = ACTIONS(39),
    [aux_sym__end_proc_token2] = ACTIONS(39),
    [aux_sym__end_proc_token3] = ACTIONS(39),
    [aux_sym_begin_end_block_token1] = ACTIONS(25),
  },
  [10] = {
    [sym_proc_declaration] = STATE(34),
    [sym__end_proc] = STATE(37),
    [sym_begin_end_block] = STATE(34),
    [sym_other_line] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(34),
    [sym_newline] = ACTIONS(15),
    [sym__other_content] = ACTIONS(17),
    [aux_sym_proc_declaration_token1] = ACTIONS(19),
    [aux_sym_proc_declaration_token2] = ACTIONS(19),
    [aux_sym_proc_declaration_token3] = ACTIONS(19),
    [aux_sym_proc_declaration_token4] = ACTIONS(19),
    [aux_sym_proc_declaration_token5] = ACTIONS(21),
    [aux_sym_proc_declaration_token6] = ACTIONS(21),
    [aux_sym_proc_declaration_token7] = ACTIONS(21),
    [aux_sym_proc_declaration_token8] = ACTIONS(21),
    [aux_sym_proc_declaration_token9] = ACTIONS(21),
    [aux_sym__end_proc_token1] = ACTIONS(41),
    [aux_sym__end_proc_token2] = ACTIONS(41),
    [aux_sym__end_proc_token3] = ACTIONS(41),
    [aux_sym_begin_end_block_token1] = ACTIONS(25),
  },
  [11] = {
    [sym_proc_declaration] = STATE(34),
    [sym__end_proc] = STATE(53),
    [sym_begin_end_block] = STATE(34),
    [sym_other_line] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(34),
    [sym_newline] = ACTIONS(15),
    [sym__other_content] = ACTIONS(17),
    [aux_sym_proc_declaration_token1] = ACTIONS(19),
    [aux_sym_proc_declaration_token2] = ACTIONS(19),
    [aux_sym_proc_declaration_token3] = ACTIONS(19),
    [aux_sym_proc_declaration_token4] = ACTIONS(19),
    [aux_sym_proc_declaration_token5] = ACTIONS(21),
    [aux_sym_proc_declaration_token6] = ACTIONS(21),
    [aux_sym_proc_declaration_token7] = ACTIONS(21),
    [aux_sym_proc_declaration_token8] = ACTIONS(21),
    [aux_sym_proc_declaration_token9] = ACTIONS(21),
    [aux_sym__end_proc_token1] = ACTIONS(43),
    [aux_sym__end_proc_token2] = ACTIONS(43),
    [aux_sym__end_proc_token3] = ACTIONS(43),
    [aux_sym_begin_end_block_token1] = ACTIONS(25),
  },
  [12] = {
    [sym_proc_declaration] = STATE(7),
    [sym__end_proc] = STATE(53),
    [sym_begin_end_block] = STATE(7),
    [sym_other_line] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [sym_newline] = ACTIONS(45),
    [sym__other_content] = ACTIONS(17),
    [aux_sym_proc_declaration_token1] = ACTIONS(19),
    [aux_sym_proc_declaration_token2] = ACTIONS(19),
    [aux_sym_proc_declaration_token3] = ACTIONS(19),
    [aux_sym_proc_declaration_token4] = ACTIONS(19),
    [aux_sym_proc_declaration_token5] = ACTIONS(21),
    [aux_sym_proc_declaration_token6] = ACTIONS(21),
    [aux_sym_proc_declaration_token7] = ACTIONS(21),
    [aux_sym_proc_declaration_token8] = ACTIONS(21),
    [aux_sym_proc_declaration_token9] = ACTIONS(21),
    [aux_sym__end_proc_token1] = ACTIONS(43),
    [aux_sym__end_proc_token2] = ACTIONS(43),
    [aux_sym__end_proc_token3] = ACTIONS(43),
    [aux_sym_begin_end_block_token1] = ACTIONS(25),
  },
  [13] = {
    [sym_proc_declaration] = STATE(6),
    [sym__end_proc] = STATE(38),
    [sym_begin_end_block] = STATE(6),
    [sym_other_line] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [sym_newline] = ACTIONS(47),
    [sym__other_content] = ACTIONS(17),
    [aux_sym_proc_declaration_token1] = ACTIONS(19),
    [aux_sym_proc_declaration_token2] = ACTIONS(19),
    [aux_sym_proc_declaration_token3] = ACTIONS(19),
    [aux_sym_proc_declaration_token4] = ACTIONS(19),
    [aux_sym_proc_declaration_token5] = ACTIONS(21),
    [aux_sym_proc_declaration_token6] = ACTIONS(21),
    [aux_sym_proc_declaration_token7] = ACTIONS(21),
    [aux_sym_proc_declaration_token8] = ACTIONS(21),
    [aux_sym_proc_declaration_token9] = ACTIONS(21),
    [aux_sym__end_proc_token1] = ACTIONS(49),
    [aux_sym__end_proc_token2] = ACTIONS(49),
    [aux_sym__end_proc_token3] = ACTIONS(49),
    [aux_sym_begin_end_block_token1] = ACTIONS(25),
  },
  [14] = {
    [sym_proc_declaration] = STATE(24),
    [sym__end_proc] = STATE(62),
    [sym_begin_end_block] = STATE(24),
    [sym_other_line] = STATE(24),
    [aux_sym_source_file_repeat1] = STATE(24),
    [sym_newline] = ACTIONS(51),
    [sym__other_content] = ACTIONS(17),
    [aux_sym_proc_declaration_token1] = ACTIONS(19),
    [aux_sym_proc_declaration_token2] = ACTIONS(19),
    [aux_sym_proc_declaration_token3] = ACTIONS(19),
    [aux_sym_proc_declaration_token4] = ACTIONS(19),
    [aux_sym_proc_declaration_token5] = ACTIONS(21),
    [aux_sym_proc_declaration_token6] = ACTIONS(21),
    [aux_sym_proc_declaration_token7] = ACTIONS(21),
    [aux_sym_proc_declaration_token8] = ACTIONS(21),
    [aux_sym_proc_declaration_token9] = ACTIONS(21),
    [aux_sym__end_proc_token1] = ACTIONS(53),
    [aux_sym__end_proc_token2] = ACTIONS(53),
    [aux_sym__end_proc_token3] = ACTIONS(53),
    [aux_sym_begin_end_block_token1] = ACTIONS(25),
  },
  [15] = {
    [sym_proc_declaration] = STATE(34),
    [sym__end_proc] = STATE(38),
    [sym_begin_end_block] = STATE(34),
    [sym_other_line] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(34),
    [sym_newline] = ACTIONS(15),
    [sym__other_content] = ACTIONS(17),
    [aux_sym_proc_declaration_token1] = ACTIONS(19),
    [aux_sym_proc_declaration_token2] = ACTIONS(19),
    [aux_sym_proc_declaration_token3] = ACTIONS(19),
    [aux_sym_proc_declaration_token4] = ACTIONS(19),
    [aux_sym_proc_declaration_token5] = ACTIONS(21),
    [aux_sym_proc_declaration_token6] = ACTIONS(21),
    [aux_sym_proc_declaration_token7] = ACTIONS(21),
    [aux_sym_proc_declaration_token8] = ACTIONS(21),
    [aux_sym_proc_declaration_token9] = ACTIONS(21),
    [aux_sym__end_proc_token1] = ACTIONS(49),
    [aux_sym__end_proc_token2] = ACTIONS(49),
    [aux_sym__end_proc_token3] = ACTIONS(49),
    [aux_sym_begin_end_block_token1] = ACTIONS(25),
  },
  [16] = {
    [sym_proc_declaration] = STATE(34),
    [sym__end_proc] = STATE(45),
    [sym_begin_end_block] = STATE(34),
    [sym_other_line] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(34),
    [sym_newline] = ACTIONS(15),
    [sym__other_content] = ACTIONS(17),
    [aux_sym_proc_declaration_token1] = ACTIONS(19),
    [aux_sym_proc_declaration_token2] = ACTIONS(19),
    [aux_sym_proc_declaration_token3] = ACTIONS(19),
    [aux_sym_proc_declaration_token4] = ACTIONS(19),
    [aux_sym_proc_declaration_token5] = ACTIONS(21),
    [aux_sym_proc_declaration_token6] = ACTIONS(21),
    [aux_sym_proc_declaration_token7] = ACTIONS(21),
    [aux_sym_proc_declaration_token8] = ACTIONS(21),
    [aux_sym_proc_declaration_token9] = ACTIONS(21),
    [aux_sym__end_proc_token1] = ACTIONS(55),
    [aux_sym__end_proc_token2] = ACTIONS(55),
    [aux_sym__end_proc_token3] = ACTIONS(55),
    [aux_sym_begin_end_block_token1] = ACTIONS(25),
  },
  [17] = {
    [sym_proc_declaration] = STATE(2),
    [sym__end_proc] = STATE(45),
    [sym_begin_end_block] = STATE(2),
    [sym_other_line] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [sym_newline] = ACTIONS(57),
    [sym__other_content] = ACTIONS(17),
    [aux_sym_proc_declaration_token1] = ACTIONS(19),
    [aux_sym_proc_declaration_token2] = ACTIONS(19),
    [aux_sym_proc_declaration_token3] = ACTIONS(19),
    [aux_sym_proc_declaration_token4] = ACTIONS(19),
    [aux_sym_proc_declaration_token5] = ACTIONS(21),
    [aux_sym_proc_declaration_token6] = ACTIONS(21),
    [aux_sym_proc_declaration_token7] = ACTIONS(21),
    [aux_sym_proc_declaration_token8] = ACTIONS(21),
    [aux_sym_proc_declaration_token9] = ACTIONS(21),
    [aux_sym__end_proc_token1] = ACTIONS(55),
    [aux_sym__end_proc_token2] = ACTIONS(55),
    [aux_sym__end_proc_token3] = ACTIONS(55),
    [aux_sym_begin_end_block_token1] = ACTIONS(25),
  },
  [18] = {
    [sym_proc_declaration] = STATE(10),
    [sym__end_proc] = STATE(46),
    [sym_begin_end_block] = STATE(10),
    [sym_other_line] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [sym_newline] = ACTIONS(59),
    [sym__other_content] = ACTIONS(17),
    [aux_sym_proc_declaration_token1] = ACTIONS(19),
    [aux_sym_proc_declaration_token2] = ACTIONS(19),
    [aux_sym_proc_declaration_token3] = ACTIONS(19),
    [aux_sym_proc_declaration_token4] = ACTIONS(19),
    [aux_sym_proc_declaration_token5] = ACTIONS(21),
    [aux_sym_proc_declaration_token6] = ACTIONS(21),
    [aux_sym_proc_declaration_token7] = ACTIONS(21),
    [aux_sym_proc_declaration_token8] = ACTIONS(21),
    [aux_sym_proc_declaration_token9] = ACTIONS(21),
    [aux_sym__end_proc_token1] = ACTIONS(61),
    [aux_sym__end_proc_token2] = ACTIONS(61),
    [aux_sym__end_proc_token3] = ACTIONS(61),
    [aux_sym_begin_end_block_token1] = ACTIONS(25),
  },
  [19] = {
    [sym_proc_declaration] = STATE(34),
    [sym__end_proc] = STATE(57),
    [sym_begin_end_block] = STATE(34),
    [sym_other_line] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(34),
    [sym_newline] = ACTIONS(15),
    [sym__other_content] = ACTIONS(17),
    [aux_sym_proc_declaration_token1] = ACTIONS(19),
    [aux_sym_proc_declaration_token2] = ACTIONS(19),
    [aux_sym_proc_declaration_token3] = ACTIONS(19),
    [aux_sym_proc_declaration_token4] = ACTIONS(19),
    [aux_sym_proc_declaration_token5] = ACTIONS(21),
    [aux_sym_proc_declaration_token6] = ACTIONS(21),
    [aux_sym_proc_declaration_token7] = ACTIONS(21),
    [aux_sym_proc_declaration_token8] = ACTIONS(21),
    [aux_sym_proc_declaration_token9] = ACTIONS(21),
    [aux_sym__end_proc_token1] = ACTIONS(63),
    [aux_sym__end_proc_token2] = ACTIONS(63),
    [aux_sym__end_proc_token3] = ACTIONS(63),
    [aux_sym_begin_end_block_token1] = ACTIONS(25),
  },
  [20] = {
    [sym_proc_declaration] = STATE(19),
    [sym__end_proc] = STATE(60),
    [sym_begin_end_block] = STATE(19),
    [sym_other_line] = STATE(19),
    [aux_sym_source_file_repeat1] = STATE(19),
    [sym_newline] = ACTIONS(65),
    [sym__other_content] = ACTIONS(17),
    [aux_sym_proc_declaration_token1] = ACTIONS(19),
    [aux_sym_proc_declaration_token2] = ACTIONS(19),
    [aux_sym_proc_declaration_token3] = ACTIONS(19),
    [aux_sym_proc_declaration_token4] = ACTIONS(19),
    [aux_sym_proc_declaration_token5] = ACTIONS(21),
    [aux_sym_proc_declaration_token6] = ACTIONS(21),
    [aux_sym_proc_declaration_token7] = ACTIONS(21),
    [aux_sym_proc_declaration_token8] = ACTIONS(21),
    [aux_sym_proc_declaration_token9] = ACTIONS(21),
    [aux_sym__end_proc_token1] = ACTIONS(67),
    [aux_sym__end_proc_token2] = ACTIONS(67),
    [aux_sym__end_proc_token3] = ACTIONS(67),
    [aux_sym_begin_end_block_token1] = ACTIONS(25),
  },
  [21] = {
    [sym_proc_declaration] = STATE(34),
    [sym__end_proc] = STATE(54),
    [sym_begin_end_block] = STATE(34),
    [sym_other_line] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(34),
    [sym_newline] = ACTIONS(15),
    [sym__other_content] = ACTIONS(17),
    [aux_sym_proc_declaration_token1] = ACTIONS(19),
    [aux_sym_proc_declaration_token2] = ACTIONS(19),
    [aux_sym_proc_declaration_token3] = ACTIONS(19),
    [aux_sym_proc_declaration_token4] = ACTIONS(19),
    [aux_sym_proc_declaration_token5] = ACTIONS(21),
    [aux_sym_proc_declaration_token6] = ACTIONS(21),
    [aux_sym_proc_declaration_token7] = ACTIONS(21),
    [aux_sym_proc_declaration_token8] = ACTIONS(21),
    [aux_sym_proc_declaration_token9] = ACTIONS(21),
    [aux_sym__end_proc_token1] = ACTIONS(69),
    [aux_sym__end_proc_token2] = ACTIONS(69),
    [aux_sym__end_proc_token3] = ACTIONS(69),
    [aux_sym_begin_end_block_token1] = ACTIONS(25),
  },
  [22] = {
    [sym_proc_declaration] = STATE(34),
    [sym__end_proc] = STATE(44),
    [sym_begin_end_block] = STATE(34),
    [sym_other_line] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(34),
    [sym_newline] = ACTIONS(15),
    [sym__other_content] = ACTIONS(17),
    [aux_sym_proc_declaration_token1] = ACTIONS(19),
    [aux_sym_proc_declaration_token2] = ACTIONS(19),
    [aux_sym_proc_declaration_token3] = ACTIONS(19),
    [aux_sym_proc_declaration_token4] = ACTIONS(19),
    [aux_sym_proc_declaration_token5] = ACTIONS(21),
    [aux_sym_proc_declaration_token6] = ACTIONS(21),
    [aux_sym_proc_declaration_token7] = ACTIONS(21),
    [aux_sym_proc_declaration_token8] = ACTIONS(21),
    [aux_sym_proc_declaration_token9] = ACTIONS(21),
    [aux_sym__end_proc_token1] = ACTIONS(71),
    [aux_sym__end_proc_token2] = ACTIONS(71),
    [aux_sym__end_proc_token3] = ACTIONS(71),
    [aux_sym_begin_end_block_token1] = ACTIONS(25),
  },
  [23] = {
    [sym_proc_declaration] = STATE(34),
    [sym__end_proc] = STATE(48),
    [sym_begin_end_block] = STATE(34),
    [sym_other_line] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(34),
    [sym_newline] = ACTIONS(15),
    [sym__other_content] = ACTIONS(17),
    [aux_sym_proc_declaration_token1] = ACTIONS(19),
    [aux_sym_proc_declaration_token2] = ACTIONS(19),
    [aux_sym_proc_declaration_token3] = ACTIONS(19),
    [aux_sym_proc_declaration_token4] = ACTIONS(19),
    [aux_sym_proc_declaration_token5] = ACTIONS(21),
    [aux_sym_proc_declaration_token6] = ACTIONS(21),
    [aux_sym_proc_declaration_token7] = ACTIONS(21),
    [aux_sym_proc_declaration_token8] = ACTIONS(21),
    [aux_sym_proc_declaration_token9] = ACTIONS(21),
    [aux_sym__end_proc_token1] = ACTIONS(73),
    [aux_sym__end_proc_token2] = ACTIONS(73),
    [aux_sym__end_proc_token3] = ACTIONS(73),
    [aux_sym_begin_end_block_token1] = ACTIONS(25),
  },
  [24] = {
    [sym_proc_declaration] = STATE(34),
    [sym__end_proc] = STATE(50),
    [sym_begin_end_block] = STATE(34),
    [sym_other_line] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(34),
    [sym_newline] = ACTIONS(15),
    [sym__other_content] = ACTIONS(17),
    [aux_sym_proc_declaration_token1] = ACTIONS(19),
    [aux_sym_proc_declaration_token2] = ACTIONS(19),
    [aux_sym_proc_declaration_token3] = ACTIONS(19),
    [aux_sym_proc_declaration_token4] = ACTIONS(19),
    [aux_sym_proc_declaration_token5] = ACTIONS(21),
    [aux_sym_proc_declaration_token6] = ACTIONS(21),
    [aux_sym_proc_declaration_token7] = ACTIONS(21),
    [aux_sym_proc_declaration_token8] = ACTIONS(21),
    [aux_sym_proc_declaration_token9] = ACTIONS(21),
    [aux_sym__end_proc_token1] = ACTIONS(75),
    [aux_sym__end_proc_token2] = ACTIONS(75),
    [aux_sym__end_proc_token3] = ACTIONS(75),
    [aux_sym_begin_end_block_token1] = ACTIONS(25),
  },
  [25] = {
    [sym_proc_declaration] = STATE(15),
    [sym__end_proc] = STATE(44),
    [sym_begin_end_block] = STATE(15),
    [sym_other_line] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(15),
    [sym_newline] = ACTIONS(77),
    [sym__other_content] = ACTIONS(17),
    [aux_sym_proc_declaration_token1] = ACTIONS(19),
    [aux_sym_proc_declaration_token2] = ACTIONS(19),
    [aux_sym_proc_declaration_token3] = ACTIONS(19),
    [aux_sym_proc_declaration_token4] = ACTIONS(19),
    [aux_sym_proc_declaration_token5] = ACTIONS(21),
    [aux_sym_proc_declaration_token6] = ACTIONS(21),
    [aux_sym_proc_declaration_token7] = ACTIONS(21),
    [aux_sym_proc_declaration_token8] = ACTIONS(21),
    [aux_sym_proc_declaration_token9] = ACTIONS(21),
    [aux_sym__end_proc_token1] = ACTIONS(71),
    [aux_sym__end_proc_token2] = ACTIONS(71),
    [aux_sym__end_proc_token3] = ACTIONS(71),
    [aux_sym_begin_end_block_token1] = ACTIONS(25),
  },
  [26] = {
    [sym_proc_declaration] = STATE(9),
    [sym__end_proc] = STATE(54),
    [sym_begin_end_block] = STATE(9),
    [sym_other_line] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [sym_newline] = ACTIONS(79),
    [sym__other_content] = ACTIONS(17),
    [aux_sym_proc_declaration_token1] = ACTIONS(19),
    [aux_sym_proc_declaration_token2] = ACTIONS(19),
    [aux_sym_proc_declaration_token3] = ACTIONS(19),
    [aux_sym_proc_declaration_token4] = ACTIONS(19),
    [aux_sym_proc_declaration_token5] = ACTIONS(21),
    [aux_sym_proc_declaration_token6] = ACTIONS(21),
    [aux_sym_proc_declaration_token7] = ACTIONS(21),
    [aux_sym_proc_declaration_token8] = ACTIONS(21),
    [aux_sym_proc_declaration_token9] = ACTIONS(21),
    [aux_sym__end_proc_token1] = ACTIONS(69),
    [aux_sym__end_proc_token2] = ACTIONS(69),
    [aux_sym__end_proc_token3] = ACTIONS(69),
    [aux_sym_begin_end_block_token1] = ACTIONS(25),
  },
  [27] = {
    [sym_proc_declaration] = STATE(22),
    [sym__end_proc] = STATE(48),
    [sym_begin_end_block] = STATE(22),
    [sym_other_line] = STATE(22),
    [aux_sym_source_file_repeat1] = STATE(22),
    [sym_newline] = ACTIONS(81),
    [sym__other_content] = ACTIONS(17),
    [aux_sym_proc_declaration_token1] = ACTIONS(19),
    [aux_sym_proc_declaration_token2] = ACTIONS(19),
    [aux_sym_proc_declaration_token3] = ACTIONS(19),
    [aux_sym_proc_declaration_token4] = ACTIONS(19),
    [aux_sym_proc_declaration_token5] = ACTIONS(21),
    [aux_sym_proc_declaration_token6] = ACTIONS(21),
    [aux_sym_proc_declaration_token7] = ACTIONS(21),
    [aux_sym_proc_declaration_token8] = ACTIONS(21),
    [aux_sym_proc_declaration_token9] = ACTIONS(21),
    [aux_sym__end_proc_token1] = ACTIONS(73),
    [aux_sym__end_proc_token2] = ACTIONS(73),
    [aux_sym__end_proc_token3] = ACTIONS(73),
    [aux_sym_begin_end_block_token1] = ACTIONS(25),
  },
  [28] = {
    [sym_proc_declaration] = STATE(21),
    [sym__end_proc] = STATE(50),
    [sym_begin_end_block] = STATE(21),
    [sym_other_line] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(21),
    [sym_newline] = ACTIONS(83),
    [sym__other_content] = ACTIONS(17),
    [aux_sym_proc_declaration_token1] = ACTIONS(19),
    [aux_sym_proc_declaration_token2] = ACTIONS(19),
    [aux_sym_proc_declaration_token3] = ACTIONS(19),
    [aux_sym_proc_declaration_token4] = ACTIONS(19),
    [aux_sym_proc_declaration_token5] = ACTIONS(21),
    [aux_sym_proc_declaration_token6] = ACTIONS(21),
    [aux_sym_proc_declaration_token7] = ACTIONS(21),
    [aux_sym_proc_declaration_token8] = ACTIONS(21),
    [aux_sym_proc_declaration_token9] = ACTIONS(21),
    [aux_sym__end_proc_token1] = ACTIONS(75),
    [aux_sym__end_proc_token2] = ACTIONS(75),
    [aux_sym__end_proc_token3] = ACTIONS(75),
    [aux_sym_begin_end_block_token1] = ACTIONS(25),
  },
  [29] = {
    [sym_proc_declaration] = STATE(11),
    [sym__end_proc] = STATE(57),
    [sym_begin_end_block] = STATE(11),
    [sym_other_line] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(11),
    [sym_newline] = ACTIONS(85),
    [sym__other_content] = ACTIONS(17),
    [aux_sym_proc_declaration_token1] = ACTIONS(19),
    [aux_sym_proc_declaration_token2] = ACTIONS(19),
    [aux_sym_proc_declaration_token3] = ACTIONS(19),
    [aux_sym_proc_declaration_token4] = ACTIONS(19),
    [aux_sym_proc_declaration_token5] = ACTIONS(21),
    [aux_sym_proc_declaration_token6] = ACTIONS(21),
    [aux_sym_proc_declaration_token7] = ACTIONS(21),
    [aux_sym_proc_declaration_token8] = ACTIONS(21),
    [aux_sym_proc_declaration_token9] = ACTIONS(21),
    [aux_sym__end_proc_token1] = ACTIONS(63),
    [aux_sym__end_proc_token2] = ACTIONS(63),
    [aux_sym__end_proc_token3] = ACTIONS(63),
    [aux_sym_begin_end_block_token1] = ACTIONS(25),
  },
  [30] = {
    [sym_proc_declaration] = STATE(33),
    [sym__end_proc] = STATE(40),
    [sym_begin_end_block] = STATE(33),
    [sym_other_line] = STATE(33),
    [aux_sym_source_file_repeat1] = STATE(33),
    [sym_newline] = ACTIONS(87),
    [sym__other_content] = ACTIONS(17),
    [aux_sym_proc_declaration_token1] = ACTIONS(19),
    [aux_sym_proc_declaration_token2] = ACTIONS(19),
    [aux_sym_proc_declaration_token3] = ACTIONS(19),
    [aux_sym_proc_declaration_token4] = ACTIONS(19),
    [aux_sym_proc_declaration_token5] = ACTIONS(21),
    [aux_sym_proc_declaration_token6] = ACTIONS(21),
    [aux_sym_proc_declaration_token7] = ACTIONS(21),
    [aux_sym_proc_declaration_token8] = ACTIONS(21),
    [aux_sym_proc_declaration_token9] = ACTIONS(21),
    [aux_sym__end_proc_token1] = ACTIONS(23),
    [aux_sym__end_proc_token2] = ACTIONS(23),
    [aux_sym__end_proc_token3] = ACTIONS(23),
    [aux_sym_begin_end_block_token1] = ACTIONS(25),
  },
  [31] = {
    [sym_proc_declaration] = STATE(23),
    [sym__end_proc] = STATE(41),
    [sym_begin_end_block] = STATE(23),
    [sym_other_line] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(23),
    [sym_newline] = ACTIONS(89),
    [sym__other_content] = ACTIONS(17),
    [aux_sym_proc_declaration_token1] = ACTIONS(19),
    [aux_sym_proc_declaration_token2] = ACTIONS(19),
    [aux_sym_proc_declaration_token3] = ACTIONS(19),
    [aux_sym_proc_declaration_token4] = ACTIONS(19),
    [aux_sym_proc_declaration_token5] = ACTIONS(21),
    [aux_sym_proc_declaration_token6] = ACTIONS(21),
    [aux_sym_proc_declaration_token7] = ACTIONS(21),
    [aux_sym_proc_declaration_token8] = ACTIONS(21),
    [aux_sym_proc_declaration_token9] = ACTIONS(21),
    [aux_sym__end_proc_token1] = ACTIONS(91),
    [aux_sym__end_proc_token2] = ACTIONS(91),
    [aux_sym__end_proc_token3] = ACTIONS(91),
    [aux_sym_begin_end_block_token1] = ACTIONS(25),
  },
  [32] = {
    [sym_proc_declaration] = STATE(16),
    [sym__end_proc] = STATE(47),
    [sym_begin_end_block] = STATE(16),
    [sym_other_line] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(16),
    [sym_newline] = ACTIONS(93),
    [sym__other_content] = ACTIONS(17),
    [aux_sym_proc_declaration_token1] = ACTIONS(19),
    [aux_sym_proc_declaration_token2] = ACTIONS(19),
    [aux_sym_proc_declaration_token3] = ACTIONS(19),
    [aux_sym_proc_declaration_token4] = ACTIONS(19),
    [aux_sym_proc_declaration_token5] = ACTIONS(21),
    [aux_sym_proc_declaration_token6] = ACTIONS(21),
    [aux_sym_proc_declaration_token7] = ACTIONS(21),
    [aux_sym_proc_declaration_token8] = ACTIONS(21),
    [aux_sym_proc_declaration_token9] = ACTIONS(21),
    [aux_sym__end_proc_token1] = ACTIONS(95),
    [aux_sym__end_proc_token2] = ACTIONS(95),
    [aux_sym__end_proc_token3] = ACTIONS(95),
    [aux_sym_begin_end_block_token1] = ACTIONS(25),
  },
  [33] = {
    [sym_proc_declaration] = STATE(34),
    [sym__end_proc] = STATE(46),
    [sym_begin_end_block] = STATE(34),
    [sym_other_line] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(34),
    [sym_newline] = ACTIONS(15),
    [sym__other_content] = ACTIONS(17),
    [aux_sym_proc_declaration_token1] = ACTIONS(19),
    [aux_sym_proc_declaration_token2] = ACTIONS(19),
    [aux_sym_proc_declaration_token3] = ACTIONS(19),
    [aux_sym_proc_declaration_token4] = ACTIONS(19),
    [aux_sym_proc_declaration_token5] = ACTIONS(21),
    [aux_sym_proc_declaration_token6] = ACTIONS(21),
    [aux_sym_proc_declaration_token7] = ACTIONS(21),
    [aux_sym_proc_declaration_token8] = ACTIONS(21),
    [aux_sym_proc_declaration_token9] = ACTIONS(21),
    [aux_sym__end_proc_token1] = ACTIONS(61),
    [aux_sym__end_proc_token2] = ACTIONS(61),
    [aux_sym__end_proc_token3] = ACTIONS(61),
    [aux_sym_begin_end_block_token1] = ACTIONS(25),
  },
  [34] = {
    [sym_proc_declaration] = STATE(34),
    [sym_begin_end_block] = STATE(34),
    [sym_other_line] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(34),
    [sym_newline] = ACTIONS(97),
    [sym__other_content] = ACTIONS(100),
    [aux_sym_proc_declaration_token1] = ACTIONS(103),
    [aux_sym_proc_declaration_token2] = ACTIONS(103),
    [aux_sym_proc_declaration_token3] = ACTIONS(103),
    [aux_sym_proc_declaration_token4] = ACTIONS(103),
    [aux_sym_proc_declaration_token5] = ACTIONS(106),
    [aux_sym_proc_declaration_token6] = ACTIONS(106),
    [aux_sym_proc_declaration_token7] = ACTIONS(106),
    [aux_sym_proc_declaration_token8] = ACTIONS(106),
    [aux_sym_proc_declaration_token9] = ACTIONS(106),
    [aux_sym__end_proc_token1] = ACTIONS(109),
    [aux_sym__end_proc_token2] = ACTIONS(109),
    [aux_sym__end_proc_token3] = ACTIONS(109),
    [aux_sym_begin_end_block_token1] = ACTIONS(111),
  },
  [35] = {
    [sym_proc_declaration] = STATE(35),
    [sym_begin_end_block] = STATE(35),
    [sym_other_line] = STATE(35),
    [aux_sym_source_file_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(114),
    [sym_newline] = ACTIONS(116),
    [sym__other_content] = ACTIONS(119),
    [aux_sym_proc_declaration_token1] = ACTIONS(122),
    [aux_sym_proc_declaration_token2] = ACTIONS(122),
    [aux_sym_proc_declaration_token3] = ACTIONS(122),
    [aux_sym_proc_declaration_token4] = ACTIONS(122),
    [aux_sym_proc_declaration_token5] = ACTIONS(125),
    [aux_sym_proc_declaration_token6] = ACTIONS(125),
    [aux_sym_proc_declaration_token7] = ACTIONS(125),
    [aux_sym_proc_declaration_token8] = ACTIONS(125),
    [aux_sym_proc_declaration_token9] = ACTIONS(125),
    [aux_sym_begin_end_block_token1] = ACTIONS(128),
  },
  [36] = {
    [sym_proc_declaration] = STATE(35),
    [sym_begin_end_block] = STATE(35),
    [sym_other_line] = STATE(35),
    [aux_sym_source_file_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(131),
    [sym_newline] = ACTIONS(133),
    [sym__other_content] = ACTIONS(7),
    [aux_sym_proc_declaration_token1] = ACTIONS(9),
    [aux_sym_proc_declaration_token2] = ACTIONS(9),
    [aux_sym_proc_declaration_token3] = ACTIONS(9),
    [aux_sym_proc_declaration_token4] = ACTIONS(9),
    [aux_sym_proc_declaration_token5] = ACTIONS(11),
    [aux_sym_proc_declaration_token6] = ACTIONS(11),
    [aux_sym_proc_declaration_token7] = ACTIONS(11),
    [aux_sym_proc_declaration_token8] = ACTIONS(11),
    [aux_sym_proc_declaration_token9] = ACTIONS(11),
    [aux_sym_begin_end_block_token1] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(135), 15,
      sym_newline,
      sym__other_content,
      aux_sym_proc_declaration_token1,
      aux_sym_proc_declaration_token2,
      aux_sym_proc_declaration_token3,
      aux_sym_proc_declaration_token4,
      aux_sym_proc_declaration_token5,
      aux_sym_proc_declaration_token6,
      aux_sym_proc_declaration_token7,
      aux_sym_proc_declaration_token8,
      aux_sym_proc_declaration_token9,
      aux_sym__end_proc_token1,
      aux_sym__end_proc_token2,
      aux_sym__end_proc_token3,
      aux_sym_begin_end_block_token1,
  [18] = 1,
    ACTIONS(137), 15,
      sym_newline,
      sym__other_content,
      aux_sym_proc_declaration_token1,
      aux_sym_proc_declaration_token2,
      aux_sym_proc_declaration_token3,
      aux_sym_proc_declaration_token4,
      aux_sym_proc_declaration_token5,
      aux_sym_proc_declaration_token6,
      aux_sym_proc_declaration_token7,
      aux_sym_proc_declaration_token8,
      aux_sym_proc_declaration_token9,
      aux_sym__end_proc_token1,
      aux_sym__end_proc_token2,
      aux_sym__end_proc_token3,
      aux_sym_begin_end_block_token1,
  [36] = 1,
    ACTIONS(139), 15,
      sym_newline,
      sym__other_content,
      aux_sym_proc_declaration_token1,
      aux_sym_proc_declaration_token2,
      aux_sym_proc_declaration_token3,
      aux_sym_proc_declaration_token4,
      aux_sym_proc_declaration_token5,
      aux_sym_proc_declaration_token6,
      aux_sym_proc_declaration_token7,
      aux_sym_proc_declaration_token8,
      aux_sym_proc_declaration_token9,
      aux_sym__end_proc_token1,
      aux_sym__end_proc_token2,
      aux_sym__end_proc_token3,
      aux_sym_begin_end_block_token1,
  [54] = 1,
    ACTIONS(141), 15,
      sym_newline,
      sym__other_content,
      aux_sym_proc_declaration_token1,
      aux_sym_proc_declaration_token2,
      aux_sym_proc_declaration_token3,
      aux_sym_proc_declaration_token4,
      aux_sym_proc_declaration_token5,
      aux_sym_proc_declaration_token6,
      aux_sym_proc_declaration_token7,
      aux_sym_proc_declaration_token8,
      aux_sym_proc_declaration_token9,
      aux_sym__end_proc_token1,
      aux_sym__end_proc_token2,
      aux_sym__end_proc_token3,
      aux_sym_begin_end_block_token1,
  [72] = 1,
    ACTIONS(143), 15,
      sym_newline,
      sym__other_content,
      aux_sym_proc_declaration_token1,
      aux_sym_proc_declaration_token2,
      aux_sym_proc_declaration_token3,
      aux_sym_proc_declaration_token4,
      aux_sym_proc_declaration_token5,
      aux_sym_proc_declaration_token6,
      aux_sym_proc_declaration_token7,
      aux_sym_proc_declaration_token8,
      aux_sym_proc_declaration_token9,
      aux_sym__end_proc_token1,
      aux_sym__end_proc_token2,
      aux_sym__end_proc_token3,
      aux_sym_begin_end_block_token1,
  [90] = 1,
    ACTIONS(145), 15,
      sym_newline,
      sym__other_content,
      aux_sym_proc_declaration_token1,
      aux_sym_proc_declaration_token2,
      aux_sym_proc_declaration_token3,
      aux_sym_proc_declaration_token4,
      aux_sym_proc_declaration_token5,
      aux_sym_proc_declaration_token6,
      aux_sym_proc_declaration_token7,
      aux_sym_proc_declaration_token8,
      aux_sym_proc_declaration_token9,
      aux_sym__end_proc_token1,
      aux_sym__end_proc_token2,
      aux_sym__end_proc_token3,
      aux_sym_begin_end_block_token1,
  [108] = 1,
    ACTIONS(147), 15,
      sym_newline,
      sym__other_content,
      aux_sym_proc_declaration_token1,
      aux_sym_proc_declaration_token2,
      aux_sym_proc_declaration_token3,
      aux_sym_proc_declaration_token4,
      aux_sym_proc_declaration_token5,
      aux_sym_proc_declaration_token6,
      aux_sym_proc_declaration_token7,
      aux_sym_proc_declaration_token8,
      aux_sym_proc_declaration_token9,
      aux_sym__end_proc_token1,
      aux_sym__end_proc_token2,
      aux_sym__end_proc_token3,
      aux_sym_begin_end_block_token1,
  [126] = 1,
    ACTIONS(149), 15,
      sym_newline,
      sym__other_content,
      aux_sym_proc_declaration_token1,
      aux_sym_proc_declaration_token2,
      aux_sym_proc_declaration_token3,
      aux_sym_proc_declaration_token4,
      aux_sym_proc_declaration_token5,
      aux_sym_proc_declaration_token6,
      aux_sym_proc_declaration_token7,
      aux_sym_proc_declaration_token8,
      aux_sym_proc_declaration_token9,
      aux_sym__end_proc_token1,
      aux_sym__end_proc_token2,
      aux_sym__end_proc_token3,
      aux_sym_begin_end_block_token1,
  [144] = 1,
    ACTIONS(151), 15,
      sym_newline,
      sym__other_content,
      aux_sym_proc_declaration_token1,
      aux_sym_proc_declaration_token2,
      aux_sym_proc_declaration_token3,
      aux_sym_proc_declaration_token4,
      aux_sym_proc_declaration_token5,
      aux_sym_proc_declaration_token6,
      aux_sym_proc_declaration_token7,
      aux_sym_proc_declaration_token8,
      aux_sym_proc_declaration_token9,
      aux_sym__end_proc_token1,
      aux_sym__end_proc_token2,
      aux_sym__end_proc_token3,
      aux_sym_begin_end_block_token1,
  [162] = 1,
    ACTIONS(153), 15,
      sym_newline,
      sym__other_content,
      aux_sym_proc_declaration_token1,
      aux_sym_proc_declaration_token2,
      aux_sym_proc_declaration_token3,
      aux_sym_proc_declaration_token4,
      aux_sym_proc_declaration_token5,
      aux_sym_proc_declaration_token6,
      aux_sym_proc_declaration_token7,
      aux_sym_proc_declaration_token8,
      aux_sym_proc_declaration_token9,
      aux_sym__end_proc_token1,
      aux_sym__end_proc_token2,
      aux_sym__end_proc_token3,
      aux_sym_begin_end_block_token1,
  [180] = 1,
    ACTIONS(155), 15,
      sym_newline,
      sym__other_content,
      aux_sym_proc_declaration_token1,
      aux_sym_proc_declaration_token2,
      aux_sym_proc_declaration_token3,
      aux_sym_proc_declaration_token4,
      aux_sym_proc_declaration_token5,
      aux_sym_proc_declaration_token6,
      aux_sym_proc_declaration_token7,
      aux_sym_proc_declaration_token8,
      aux_sym_proc_declaration_token9,
      aux_sym__end_proc_token1,
      aux_sym__end_proc_token2,
      aux_sym__end_proc_token3,
      aux_sym_begin_end_block_token1,
  [198] = 1,
    ACTIONS(157), 15,
      sym_newline,
      sym__other_content,
      aux_sym_proc_declaration_token1,
      aux_sym_proc_declaration_token2,
      aux_sym_proc_declaration_token3,
      aux_sym_proc_declaration_token4,
      aux_sym_proc_declaration_token5,
      aux_sym_proc_declaration_token6,
      aux_sym_proc_declaration_token7,
      aux_sym_proc_declaration_token8,
      aux_sym_proc_declaration_token9,
      aux_sym__end_proc_token1,
      aux_sym__end_proc_token2,
      aux_sym__end_proc_token3,
      aux_sym_begin_end_block_token1,
  [216] = 1,
    ACTIONS(159), 15,
      sym_newline,
      sym__other_content,
      aux_sym_proc_declaration_token1,
      aux_sym_proc_declaration_token2,
      aux_sym_proc_declaration_token3,
      aux_sym_proc_declaration_token4,
      aux_sym_proc_declaration_token5,
      aux_sym_proc_declaration_token6,
      aux_sym_proc_declaration_token7,
      aux_sym_proc_declaration_token8,
      aux_sym_proc_declaration_token9,
      aux_sym__end_proc_token1,
      aux_sym__end_proc_token2,
      aux_sym__end_proc_token3,
      aux_sym_begin_end_block_token1,
  [234] = 2,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
    ACTIONS(151), 12,
      sym_newline,
      sym__other_content,
      aux_sym_proc_declaration_token1,
      aux_sym_proc_declaration_token2,
      aux_sym_proc_declaration_token3,
      aux_sym_proc_declaration_token4,
      aux_sym_proc_declaration_token5,
      aux_sym_proc_declaration_token6,
      aux_sym_proc_declaration_token7,
      aux_sym_proc_declaration_token8,
      aux_sym_proc_declaration_token9,
      aux_sym_begin_end_block_token1,
  [252] = 2,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    ACTIONS(139), 12,
      sym_newline,
      sym__other_content,
      aux_sym_proc_declaration_token1,
      aux_sym_proc_declaration_token2,
      aux_sym_proc_declaration_token3,
      aux_sym_proc_declaration_token4,
      aux_sym_proc_declaration_token5,
      aux_sym_proc_declaration_token6,
      aux_sym_proc_declaration_token7,
      aux_sym_proc_declaration_token8,
      aux_sym_proc_declaration_token9,
      aux_sym_begin_end_block_token1,
  [270] = 2,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    ACTIONS(147), 12,
      sym_newline,
      sym__other_content,
      aux_sym_proc_declaration_token1,
      aux_sym_proc_declaration_token2,
      aux_sym_proc_declaration_token3,
      aux_sym_proc_declaration_token4,
      aux_sym_proc_declaration_token5,
      aux_sym_proc_declaration_token6,
      aux_sym_proc_declaration_token7,
      aux_sym_proc_declaration_token8,
      aux_sym_proc_declaration_token9,
      aux_sym_begin_end_block_token1,
  [288] = 2,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
    ACTIONS(149), 12,
      sym_newline,
      sym__other_content,
      aux_sym_proc_declaration_token1,
      aux_sym_proc_declaration_token2,
      aux_sym_proc_declaration_token3,
      aux_sym_proc_declaration_token4,
      aux_sym_proc_declaration_token5,
      aux_sym_proc_declaration_token6,
      aux_sym_proc_declaration_token7,
      aux_sym_proc_declaration_token8,
      aux_sym_proc_declaration_token9,
      aux_sym_begin_end_block_token1,
  [306] = 2,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    ACTIONS(141), 12,
      sym_newline,
      sym__other_content,
      aux_sym_proc_declaration_token1,
      aux_sym_proc_declaration_token2,
      aux_sym_proc_declaration_token3,
      aux_sym_proc_declaration_token4,
      aux_sym_proc_declaration_token5,
      aux_sym_proc_declaration_token6,
      aux_sym_proc_declaration_token7,
      aux_sym_proc_declaration_token8,
      aux_sym_proc_declaration_token9,
      aux_sym_begin_end_block_token1,
  [324] = 2,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    ACTIONS(135), 12,
      sym_newline,
      sym__other_content,
      aux_sym_proc_declaration_token1,
      aux_sym_proc_declaration_token2,
      aux_sym_proc_declaration_token3,
      aux_sym_proc_declaration_token4,
      aux_sym_proc_declaration_token5,
      aux_sym_proc_declaration_token6,
      aux_sym_proc_declaration_token7,
      aux_sym_proc_declaration_token8,
      aux_sym_proc_declaration_token9,
      aux_sym_begin_end_block_token1,
  [342] = 2,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    ACTIONS(153), 12,
      sym_newline,
      sym__other_content,
      aux_sym_proc_declaration_token1,
      aux_sym_proc_declaration_token2,
      aux_sym_proc_declaration_token3,
      aux_sym_proc_declaration_token4,
      aux_sym_proc_declaration_token5,
      aux_sym_proc_declaration_token6,
      aux_sym_proc_declaration_token7,
      aux_sym_proc_declaration_token8,
      aux_sym_proc_declaration_token9,
      aux_sym_begin_end_block_token1,
  [360] = 2,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
    ACTIONS(157), 12,
      sym_newline,
      sym__other_content,
      aux_sym_proc_declaration_token1,
      aux_sym_proc_declaration_token2,
      aux_sym_proc_declaration_token3,
      aux_sym_proc_declaration_token4,
      aux_sym_proc_declaration_token5,
      aux_sym_proc_declaration_token6,
      aux_sym_proc_declaration_token7,
      aux_sym_proc_declaration_token8,
      aux_sym_proc_declaration_token9,
      aux_sym_begin_end_block_token1,
  [378] = 2,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
    ACTIONS(137), 12,
      sym_newline,
      sym__other_content,
      aux_sym_proc_declaration_token1,
      aux_sym_proc_declaration_token2,
      aux_sym_proc_declaration_token3,
      aux_sym_proc_declaration_token4,
      aux_sym_proc_declaration_token5,
      aux_sym_proc_declaration_token6,
      aux_sym_proc_declaration_token7,
      aux_sym_proc_declaration_token8,
      aux_sym_proc_declaration_token9,
      aux_sym_begin_end_block_token1,
  [396] = 2,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    ACTIONS(159), 12,
      sym_newline,
      sym__other_content,
      aux_sym_proc_declaration_token1,
      aux_sym_proc_declaration_token2,
      aux_sym_proc_declaration_token3,
      aux_sym_proc_declaration_token4,
      aux_sym_proc_declaration_token5,
      aux_sym_proc_declaration_token6,
      aux_sym_proc_declaration_token7,
      aux_sym_proc_declaration_token8,
      aux_sym_proc_declaration_token9,
      aux_sym_begin_end_block_token1,
  [414] = 2,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    ACTIONS(143), 12,
      sym_newline,
      sym__other_content,
      aux_sym_proc_declaration_token1,
      aux_sym_proc_declaration_token2,
      aux_sym_proc_declaration_token3,
      aux_sym_proc_declaration_token4,
      aux_sym_proc_declaration_token5,
      aux_sym_proc_declaration_token6,
      aux_sym_proc_declaration_token7,
      aux_sym_proc_declaration_token8,
      aux_sym_proc_declaration_token9,
      aux_sym_begin_end_block_token1,
  [432] = 2,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
    ACTIONS(145), 12,
      sym_newline,
      sym__other_content,
      aux_sym_proc_declaration_token1,
      aux_sym_proc_declaration_token2,
      aux_sym_proc_declaration_token3,
      aux_sym_proc_declaration_token4,
      aux_sym_proc_declaration_token5,
      aux_sym_proc_declaration_token6,
      aux_sym_proc_declaration_token7,
      aux_sym_proc_declaration_token8,
      aux_sym_proc_declaration_token9,
      aux_sym_begin_end_block_token1,
  [450] = 2,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 12,
      sym_newline,
      sym__other_content,
      aux_sym_proc_declaration_token1,
      aux_sym_proc_declaration_token2,
      aux_sym_proc_declaration_token3,
      aux_sym_proc_declaration_token4,
      aux_sym_proc_declaration_token5,
      aux_sym_proc_declaration_token6,
      aux_sym_proc_declaration_token7,
      aux_sym_proc_declaration_token8,
      aux_sym_proc_declaration_token9,
      aux_sym_begin_end_block_token1,
  [468] = 5,
    ACTIONS(187), 1,
      sym_newline,
    ACTIONS(189), 1,
      sym__other_content,
    ACTIONS(191), 1,
      aux_sym_begin_end_block_token1,
    ACTIONS(193), 1,
      aux_sym_begin_end_block_token2,
    STATE(64), 3,
      sym_begin_end_block,
      sym_other_line,
      aux_sym_begin_end_block_repeat2,
  [486] = 5,
    ACTIONS(195), 1,
      sym_newline,
    ACTIONS(198), 1,
      sym__other_content,
    ACTIONS(201), 1,
      aux_sym_begin_end_block_token1,
    ACTIONS(204), 1,
      aux_sym_begin_end_block_token2,
    STATE(64), 3,
      sym_begin_end_block,
      sym_other_line,
      aux_sym_begin_end_block_repeat2,
  [504] = 5,
    ACTIONS(187), 1,
      sym_newline,
    ACTIONS(189), 1,
      sym__other_content,
    ACTIONS(191), 1,
      aux_sym_begin_end_block_token1,
    ACTIONS(206), 1,
      aux_sym_begin_end_block_token2,
    STATE(64), 3,
      sym_begin_end_block,
      sym_other_line,
      aux_sym_begin_end_block_repeat2,
  [522] = 5,
    ACTIONS(189), 1,
      sym__other_content,
    ACTIONS(191), 1,
      aux_sym_begin_end_block_token1,
    ACTIONS(208), 1,
      sym_newline,
    ACTIONS(210), 1,
      aux_sym_begin_end_block_token2,
    STATE(65), 3,
      sym_begin_end_block,
      sym_other_line,
      aux_sym_begin_end_block_repeat2,
  [540] = 5,
    ACTIONS(187), 1,
      sym_newline,
    ACTIONS(189), 1,
      sym__other_content,
    ACTIONS(191), 1,
      aux_sym_begin_end_block_token1,
    ACTIONS(212), 1,
      aux_sym_begin_end_block_token2,
    STATE(64), 3,
      sym_begin_end_block,
      sym_other_line,
      aux_sym_begin_end_block_repeat2,
  [558] = 5,
    ACTIONS(189), 1,
      sym__other_content,
    ACTIONS(191), 1,
      aux_sym_begin_end_block_token1,
    ACTIONS(214), 1,
      sym_newline,
    ACTIONS(216), 1,
      aux_sym_begin_end_block_token2,
    STATE(67), 3,
      sym_begin_end_block,
      sym_other_line,
      aux_sym_begin_end_block_repeat2,
  [576] = 5,
    ACTIONS(189), 1,
      sym__other_content,
    ACTIONS(191), 1,
      aux_sym_begin_end_block_token1,
    ACTIONS(218), 1,
      sym_newline,
    ACTIONS(220), 1,
      aux_sym_begin_end_block_token2,
    STATE(63), 3,
      sym_begin_end_block,
      sym_other_line,
      aux_sym_begin_end_block_repeat2,
  [594] = 1,
    ACTIONS(222), 5,
      aux_sym_proc_declaration_token5,
      aux_sym_proc_declaration_token6,
      aux_sym_proc_declaration_token7,
      aux_sym_proc_declaration_token8,
      aux_sym_proc_declaration_token9,
  [602] = 1,
    ACTIONS(224), 5,
      aux_sym_proc_declaration_token5,
      aux_sym_proc_declaration_token6,
      aux_sym_proc_declaration_token7,
      aux_sym_proc_declaration_token8,
      aux_sym_proc_declaration_token9,
  [610] = 1,
    ACTIONS(147), 4,
      sym_newline,
      sym__other_content,
      aux_sym_begin_end_block_token1,
      aux_sym_begin_end_block_token2,
  [617] = 4,
    ACTIONS(226), 1,
      sym_newline,
    ACTIONS(228), 1,
      aux_sym_proc_declaration_token10,
    ACTIONS(230), 1,
      anon_sym_LPAREN,
    STATE(91), 1,
      sym_parameter_list,
  [630] = 4,
    ACTIONS(230), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      sym_newline,
    ACTIONS(234), 1,
      aux_sym_proc_declaration_token10,
    STATE(83), 1,
      sym_parameter_list,
  [643] = 4,
    ACTIONS(230), 1,
      anon_sym_LPAREN,
    ACTIONS(236), 1,
      sym_newline,
    ACTIONS(238), 1,
      aux_sym_proc_declaration_token10,
    STATE(87), 1,
      sym_parameter_list,
  [656] = 1,
    ACTIONS(139), 4,
      sym_newline,
      sym__other_content,
      aux_sym_begin_end_block_token1,
      aux_sym_begin_end_block_token2,
  [663] = 1,
    ACTIONS(159), 4,
      sym_newline,
      sym__other_content,
      aux_sym_begin_end_block_token1,
      aux_sym_begin_end_block_token2,
  [670] = 4,
    ACTIONS(230), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      sym_newline,
    ACTIONS(242), 1,
      aux_sym_proc_declaration_token10,
    STATE(86), 1,
      sym_parameter_list,
  [683] = 3,
    ACTIONS(244), 1,
      sym_newline,
    ACTIONS(246), 1,
      sym_identifier,
    STATE(79), 1,
      aux_sym_begin_end_block_repeat1,
  [693] = 3,
    ACTIONS(249), 1,
      sym_newline,
    ACTIONS(251), 1,
      sym_identifier,
    STATE(79), 1,
      aux_sym_begin_end_block_repeat1,
  [703] = 3,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      sym_newline,
    STATE(79), 1,
      aux_sym_begin_end_block_repeat1,
  [713] = 3,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(255), 1,
      sym_newline,
    STATE(79), 1,
      aux_sym_begin_end_block_repeat1,
  [723] = 2,
    ACTIONS(257), 1,
      sym_newline,
    ACTIONS(259), 1,
      aux_sym_proc_declaration_token10,
  [730] = 2,
    ACTIONS(261), 1,
      sym_identifier,
    STATE(80), 1,
      aux_sym_begin_end_block_repeat1,
  [737] = 2,
    ACTIONS(263), 1,
      sym_identifier,
    STATE(81), 1,
      aux_sym_begin_end_block_repeat1,
  [744] = 2,
    ACTIONS(265), 1,
      sym_newline,
    ACTIONS(267), 1,
      aux_sym_proc_declaration_token10,
  [751] = 2,
    ACTIONS(269), 1,
      sym_newline,
    ACTIONS(271), 1,
      aux_sym_proc_declaration_token10,
  [758] = 2,
    ACTIONS(273), 1,
      aux_sym_parameter_list_token1,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
  [765] = 1,
    ACTIONS(277), 2,
      sym_newline,
      aux_sym_proc_declaration_token10,
  [770] = 1,
    ACTIONS(279), 2,
      sym_newline,
      aux_sym_proc_declaration_token10,
  [775] = 2,
    ACTIONS(281), 1,
      sym_newline,
    ACTIONS(283), 1,
      aux_sym_proc_declaration_token10,
  [782] = 2,
    ACTIONS(285), 1,
      sym_identifier,
    STATE(82), 1,
      aux_sym_begin_end_block_repeat1,
  [789] = 1,
    ACTIONS(287), 1,
      sym_newline,
  [793] = 1,
    ACTIONS(289), 1,
      sym_newline,
  [797] = 1,
    ACTIONS(291), 1,
      sym_newline,
  [801] = 1,
    ACTIONS(293), 1,
      sym_identifier,
  [805] = 1,
    ACTIONS(295), 1,
      sym_newline,
  [809] = 1,
    ACTIONS(297), 1,
      sym_newline,
  [813] = 1,
    ACTIONS(299), 1,
      sym_newline,
  [817] = 1,
    ACTIONS(301), 1,
      sym_newline,
  [821] = 1,
    ACTIONS(303), 1,
      sym_newline,
  [825] = 1,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
  [829] = 1,
    ACTIONS(307), 1,
      sym_newline,
  [833] = 1,
    ACTIONS(309), 1,
      sym_newline,
  [837] = 1,
    ACTIONS(311), 1,
      sym_newline,
  [841] = 1,
    ACTIONS(313), 1,
      sym_newline,
  [845] = 1,
    ACTIONS(315), 1,
      sym_identifier,
  [849] = 1,
    ACTIONS(317), 1,
      ts_builtin_sym_end,
  [853] = 1,
    ACTIONS(319), 1,
      sym_identifier,
  [857] = 1,
    ACTIONS(321), 1,
      sym_newline,
  [861] = 1,
    ACTIONS(323), 1,
      sym_identifier,
  [865] = 1,
    ACTIONS(325), 1,
      sym_identifier,
  [869] = 1,
    ACTIONS(327), 1,
      sym_identifier,
  [873] = 1,
    ACTIONS(329), 1,
      sym_identifier,
  [877] = 1,
    ACTIONS(331), 1,
      sym_identifier,
  [881] = 1,
    ACTIONS(333), 1,
      sym_newline,
  [885] = 1,
    ACTIONS(335), 1,
      sym_identifier,
  [889] = 1,
    ACTIONS(337), 1,
      sym_identifier,
  [893] = 1,
    ACTIONS(339), 1,
      sym_identifier,
  [897] = 1,
    ACTIONS(341), 1,
      sym_newline,
  [901] = 1,
    ACTIONS(343), 1,
      sym_newline,
  [905] = 1,
    ACTIONS(345), 1,
      sym_identifier,
  [909] = 1,
    ACTIONS(347), 1,
      sym_newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(37)] = 0,
  [SMALL_STATE(38)] = 18,
  [SMALL_STATE(39)] = 36,
  [SMALL_STATE(40)] = 54,
  [SMALL_STATE(41)] = 72,
  [SMALL_STATE(42)] = 90,
  [SMALL_STATE(43)] = 108,
  [SMALL_STATE(44)] = 126,
  [SMALL_STATE(45)] = 144,
  [SMALL_STATE(46)] = 162,
  [SMALL_STATE(47)] = 180,
  [SMALL_STATE(48)] = 198,
  [SMALL_STATE(49)] = 216,
  [SMALL_STATE(50)] = 234,
  [SMALL_STATE(51)] = 252,
  [SMALL_STATE(52)] = 270,
  [SMALL_STATE(53)] = 288,
  [SMALL_STATE(54)] = 306,
  [SMALL_STATE(55)] = 324,
  [SMALL_STATE(56)] = 342,
  [SMALL_STATE(57)] = 360,
  [SMALL_STATE(58)] = 378,
  [SMALL_STATE(59)] = 396,
  [SMALL_STATE(60)] = 414,
  [SMALL_STATE(61)] = 432,
  [SMALL_STATE(62)] = 450,
  [SMALL_STATE(63)] = 468,
  [SMALL_STATE(64)] = 486,
  [SMALL_STATE(65)] = 504,
  [SMALL_STATE(66)] = 522,
  [SMALL_STATE(67)] = 540,
  [SMALL_STATE(68)] = 558,
  [SMALL_STATE(69)] = 576,
  [SMALL_STATE(70)] = 594,
  [SMALL_STATE(71)] = 602,
  [SMALL_STATE(72)] = 610,
  [SMALL_STATE(73)] = 617,
  [SMALL_STATE(74)] = 630,
  [SMALL_STATE(75)] = 643,
  [SMALL_STATE(76)] = 656,
  [SMALL_STATE(77)] = 663,
  [SMALL_STATE(78)] = 670,
  [SMALL_STATE(79)] = 683,
  [SMALL_STATE(80)] = 693,
  [SMALL_STATE(81)] = 703,
  [SMALL_STATE(82)] = 713,
  [SMALL_STATE(83)] = 723,
  [SMALL_STATE(84)] = 730,
  [SMALL_STATE(85)] = 737,
  [SMALL_STATE(86)] = 744,
  [SMALL_STATE(87)] = 751,
  [SMALL_STATE(88)] = 758,
  [SMALL_STATE(89)] = 765,
  [SMALL_STATE(90)] = 770,
  [SMALL_STATE(91)] = 775,
  [SMALL_STATE(92)] = 782,
  [SMALL_STATE(93)] = 789,
  [SMALL_STATE(94)] = 793,
  [SMALL_STATE(95)] = 797,
  [SMALL_STATE(96)] = 801,
  [SMALL_STATE(97)] = 805,
  [SMALL_STATE(98)] = 809,
  [SMALL_STATE(99)] = 813,
  [SMALL_STATE(100)] = 817,
  [SMALL_STATE(101)] = 821,
  [SMALL_STATE(102)] = 825,
  [SMALL_STATE(103)] = 829,
  [SMALL_STATE(104)] = 833,
  [SMALL_STATE(105)] = 837,
  [SMALL_STATE(106)] = 841,
  [SMALL_STATE(107)] = 845,
  [SMALL_STATE(108)] = 849,
  [SMALL_STATE(109)] = 853,
  [SMALL_STATE(110)] = 857,
  [SMALL_STATE(111)] = 861,
  [SMALL_STATE(112)] = 865,
  [SMALL_STATE(113)] = 869,
  [SMALL_STATE(114)] = 873,
  [SMALL_STATE(115)] = 877,
  [SMALL_STATE(116)] = 881,
  [SMALL_STATE(117)] = 885,
  [SMALL_STATE(118)] = 889,
  [SMALL_STATE(119)] = 893,
  [SMALL_STATE(120)] = 897,
  [SMALL_STATE(121)] = 901,
  [SMALL_STATE(122)] = 905,
  [SMALL_STATE(123)] = 909,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(95),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(70),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(117),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(85),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(120),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(96),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(92),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proc_declaration, 8, .production_id = 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proc_declaration, 8, .production_id = 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_other_line, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proc_declaration, 6, .production_id = 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proc_declaration, 5, .production_id = 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proc_declaration, 9, .production_id = 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begin_end_block, 6),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proc_declaration, 7, .production_id = 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proc_declaration, 5, .production_id = 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proc_declaration, 7, .production_id = 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proc_declaration, 4, .production_id = 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proc_declaration, 6, .production_id = 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begin_end_block, 5),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_declaration, 5, .production_id = 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_other_line, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_end_block, 6),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_declaration, 7, .production_id = 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_declaration, 6, .production_id = 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_declaration, 8, .production_id = 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_declaration, 7, .production_id = 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_declaration, 6, .production_id = 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_declaration, 8, .production_id = 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_end_block, 5),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_declaration, 5, .production_id = 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_declaration, 9, .production_id = 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_declaration, 4, .production_id = 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_begin_end_block_repeat2, 2), SHIFT_REPEAT(64),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_begin_end_block_repeat2, 2), SHIFT_REPEAT(104),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_begin_end_block_repeat2, 2), SHIFT_REPEAT(84),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_begin_end_block_repeat2, 2),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_begin_end_block_repeat1, 2),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_begin_end_block_repeat1, 2), SHIFT_REPEAT(79),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [317] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_vb6(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
