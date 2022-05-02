#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 28
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  anon_sym_COLON = 2,
  anon_sym_COMMA = 3,
  aux_sym_known_instruction_token1 = 4,
  aux_sym_known_instruction_token2 = 5,
  aux_sym_known_instruction_token3 = 6,
  aux_sym_known_instruction_token4 = 7,
  anon_sym_SEMI = 8,
  aux_sym_comment_token1 = 9,
  aux_sym_word_token1 = 10,
  sym_source = 11,
  sym_line = 12,
  sym_label = 13,
  sym_instruction = 14,
  sym_operands = 15,
  sym_operand = 16,
  sym_known_instruction = 17,
  sym_unknown_instruction = 18,
  sym_comment = 19,
  sym_word = 20,
  aux_sym_source_repeat1 = 21,
  aux_sym_operands_repeat1 = 22,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
  [aux_sym_known_instruction_token1] = "known_instruction_token1",
  [aux_sym_known_instruction_token2] = "known_instruction_token2",
  [aux_sym_known_instruction_token3] = "known_instruction_token3",
  [aux_sym_known_instruction_token4] = "known_instruction_token4",
  [anon_sym_SEMI] = ";",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_word_token1] = "word_token1",
  [sym_source] = "source",
  [sym_line] = "line",
  [sym_label] = "label",
  [sym_instruction] = "instruction",
  [sym_operands] = "operands",
  [sym_operand] = "operand",
  [sym_known_instruction] = "known_instruction",
  [sym_unknown_instruction] = "unknown_instruction",
  [sym_comment] = "comment",
  [sym_word] = "word",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_operands_repeat1] = "operands_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_known_instruction_token1] = aux_sym_known_instruction_token1,
  [aux_sym_known_instruction_token2] = aux_sym_known_instruction_token2,
  [aux_sym_known_instruction_token3] = aux_sym_known_instruction_token3,
  [aux_sym_known_instruction_token4] = aux_sym_known_instruction_token4,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_word_token1] = aux_sym_word_token1,
  [sym_source] = sym_source,
  [sym_line] = sym_line,
  [sym_label] = sym_label,
  [sym_instruction] = sym_instruction,
  [sym_operands] = sym_operands,
  [sym_operand] = sym_operand,
  [sym_known_instruction] = sym_known_instruction,
  [sym_unknown_instruction] = sym_unknown_instruction,
  [sym_comment] = sym_comment,
  [sym_word] = sym_word,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_operands_repeat1] = aux_sym_operands_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_known_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_known_instruction_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_known_instruction_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_known_instruction_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_word_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_operands] = {
    .visible = true,
    .named = true,
  },
  [sym_operand] = {
    .visible = true,
    .named = true,
  },
  [sym_known_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_unknown_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_operands_repeat1] = {
    .visible = false,
    .named = false,
  },
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
      if (eof) ADVANCE(6);
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == ',') ADVANCE(9);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead == 'm') ADVANCE(26);
      if (lookahead == 's') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == ';') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ';') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead == 'm') ADVANCE(26);
      if (lookahead == 's') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_known_instruction_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_known_instruction_token2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_known_instruction_token3);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_known_instruction_token4);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == ';') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'a') ADVANCE(24);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'c') ADVANCE(12);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'c') ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'd') ADVANCE(11);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'd') ADVANCE(21);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'l') ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'l') ADVANCE(23);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'n') ADVANCE(19);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'o') ADVANCE(28);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 's') ADVANCE(20);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'v') ADVANCE(10);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'y') ADVANCE(27);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_known_instruction_token1] = ACTIONS(1),
    [aux_sym_known_instruction_token2] = ACTIONS(1),
    [aux_sym_known_instruction_token3] = ACTIONS(1),
    [aux_sym_known_instruction_token4] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(3),
    [aux_sym_word_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(23),
    [sym_line] = STATE(6),
    [sym_label] = STATE(4),
    [sym_instruction] = STATE(26),
    [sym_known_instruction] = STATE(11),
    [sym_unknown_instruction] = STATE(11),
    [sym_comment] = STATE(1),
    [sym_word] = STATE(8),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(7),
    [aux_sym_known_instruction_token1] = ACTIONS(9),
    [aux_sym_known_instruction_token2] = ACTIONS(9),
    [aux_sym_known_instruction_token3] = ACTIONS(9),
    [aux_sym_known_instruction_token4] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(3),
    [aux_sym_word_token1] = ACTIONS(11),
  },
  [2] = {
    [sym_line] = STATE(6),
    [sym_label] = STATE(4),
    [sym_instruction] = STATE(26),
    [sym_known_instruction] = STATE(11),
    [sym_unknown_instruction] = STATE(11),
    [sym_comment] = STATE(2),
    [sym_word] = STATE(8),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_LF] = ACTIONS(15),
    [aux_sym_known_instruction_token1] = ACTIONS(18),
    [aux_sym_known_instruction_token2] = ACTIONS(18),
    [aux_sym_known_instruction_token3] = ACTIONS(18),
    [aux_sym_known_instruction_token4] = ACTIONS(18),
    [anon_sym_SEMI] = ACTIONS(3),
    [aux_sym_word_token1] = ACTIONS(21),
  },
  [3] = {
    [sym_line] = STATE(6),
    [sym_label] = STATE(4),
    [sym_instruction] = STATE(26),
    [sym_known_instruction] = STATE(11),
    [sym_unknown_instruction] = STATE(11),
    [sym_comment] = STATE(3),
    [sym_word] = STATE(8),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(24),
    [anon_sym_LF] = ACTIONS(7),
    [aux_sym_known_instruction_token1] = ACTIONS(9),
    [aux_sym_known_instruction_token2] = ACTIONS(9),
    [aux_sym_known_instruction_token3] = ACTIONS(9),
    [aux_sym_known_instruction_token4] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(3),
    [aux_sym_word_token1] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(26), 1,
      anon_sym_SEMI,
    ACTIONS(28), 1,
      aux_sym_word_token1,
    STATE(4), 1,
      sym_comment,
    STATE(20), 1,
      sym_word,
    STATE(25), 1,
      sym_instruction,
    STATE(11), 2,
      sym_known_instruction,
      sym_unknown_instruction,
    ACTIONS(9), 4,
      aux_sym_known_instruction_token1,
      aux_sym_known_instruction_token2,
      aux_sym_known_instruction_token3,
      aux_sym_known_instruction_token4,
  [26] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(30), 1,
      anon_sym_LF,
    STATE(5), 1,
      sym_comment,
    ACTIONS(32), 7,
      anon_sym_COLON,
      anon_sym_COMMA,
      aux_sym_known_instruction_token1,
      aux_sym_known_instruction_token2,
      aux_sym_known_instruction_token3,
      aux_sym_known_instruction_token4,
      aux_sym_word_token1,
  [45] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(6), 1,
      sym_comment,
    ACTIONS(34), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(36), 5,
      aux_sym_known_instruction_token1,
      aux_sym_known_instruction_token2,
      aux_sym_known_instruction_token3,
      aux_sym_known_instruction_token4,
      aux_sym_word_token1,
  [63] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(7), 1,
      sym_comment,
    ACTIONS(38), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(40), 5,
      aux_sym_known_instruction_token1,
      aux_sym_known_instruction_token2,
      aux_sym_known_instruction_token3,
      aux_sym_known_instruction_token4,
      aux_sym_word_token1,
  [81] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(42), 1,
      anon_sym_LF,
    ACTIONS(44), 1,
      anon_sym_COLON,
    ACTIONS(48), 1,
      aux_sym_word_token1,
    STATE(8), 1,
      sym_comment,
    ACTIONS(46), 4,
      aux_sym_known_instruction_token1,
      aux_sym_known_instruction_token2,
      aux_sym_known_instruction_token3,
      aux_sym_known_instruction_token4,
  [103] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(9), 1,
      sym_comment,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(53), 5,
      aux_sym_known_instruction_token1,
      aux_sym_known_instruction_token2,
      aux_sym_known_instruction_token3,
      aux_sym_known_instruction_token4,
      aux_sym_word_token1,
  [121] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(10), 1,
      sym_comment,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(57), 5,
      aux_sym_known_instruction_token1,
      aux_sym_known_instruction_token2,
      aux_sym_known_instruction_token3,
      aux_sym_known_instruction_token4,
      aux_sym_word_token1,
  [139] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      aux_sym_word_token1,
    ACTIONS(59), 1,
      anon_sym_LF,
    STATE(11), 1,
      sym_comment,
    STATE(16), 1,
      sym_operand,
    STATE(21), 1,
      sym_word,
    STATE(24), 1,
      sym_operands,
  [161] = 3,
    ACTIONS(26), 1,
      anon_sym_SEMI,
    STATE(12), 1,
      sym_comment,
    ACTIONS(61), 5,
      aux_sym_known_instruction_token1,
      aux_sym_known_instruction_token2,
      aux_sym_known_instruction_token3,
      aux_sym_known_instruction_token4,
      aux_sym_word_token1,
  [175] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(63), 1,
      anon_sym_LF,
    ACTIONS(65), 1,
      anon_sym_COMMA,
    STATE(13), 2,
      sym_comment,
      aux_sym_operands_repeat1,
  [189] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(68), 1,
      anon_sym_LF,
    ACTIONS(70), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      aux_sym_operands_repeat1,
    STATE(14), 1,
      sym_comment,
  [205] = 5,
    ACTIONS(26), 1,
      anon_sym_SEMI,
    ACTIONS(72), 1,
      aux_sym_word_token1,
    STATE(15), 1,
      sym_comment,
    STATE(19), 1,
      sym_operand,
    STATE(21), 1,
      sym_word,
  [221] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(70), 1,
      anon_sym_COMMA,
    ACTIONS(74), 1,
      anon_sym_LF,
    STATE(14), 1,
      aux_sym_operands_repeat1,
    STATE(16), 1,
      sym_comment,
  [237] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(30), 1,
      anon_sym_LF,
    ACTIONS(32), 1,
      aux_sym_word_token1,
    STATE(17), 1,
      sym_comment,
  [250] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(76), 1,
      anon_sym_LF,
    ACTIONS(78), 1,
      aux_sym_word_token1,
    STATE(18), 1,
      sym_comment,
  [263] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(63), 1,
      anon_sym_LF,
    ACTIONS(80), 1,
      anon_sym_COMMA,
    STATE(19), 1,
      sym_comment,
  [276] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(42), 1,
      anon_sym_LF,
    ACTIONS(82), 1,
      aux_sym_word_token1,
    STATE(20), 1,
      sym_comment,
  [289] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(84), 1,
      anon_sym_LF,
    ACTIONS(86), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      sym_comment,
  [302] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(88), 1,
      aux_sym_comment_token1,
    STATE(22), 1,
      sym_comment,
  [312] = 3,
    ACTIONS(26), 1,
      anon_sym_SEMI,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      sym_comment,
  [322] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(92), 1,
      anon_sym_LF,
    STATE(24), 1,
      sym_comment,
  [332] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(94), 1,
      anon_sym_LF,
    STATE(25), 1,
      sym_comment,
  [342] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(96), 1,
      anon_sym_LF,
    STATE(26), 1,
      sym_comment,
  [352] = 1,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 26,
  [SMALL_STATE(6)] = 45,
  [SMALL_STATE(7)] = 63,
  [SMALL_STATE(8)] = 81,
  [SMALL_STATE(9)] = 103,
  [SMALL_STATE(10)] = 121,
  [SMALL_STATE(11)] = 139,
  [SMALL_STATE(12)] = 161,
  [SMALL_STATE(13)] = 175,
  [SMALL_STATE(14)] = 189,
  [SMALL_STATE(15)] = 205,
  [SMALL_STATE(16)] = 221,
  [SMALL_STATE(17)] = 237,
  [SMALL_STATE(18)] = 250,
  [SMALL_STATE(19)] = 263,
  [SMALL_STATE(20)] = 276,
  [SMALL_STATE(21)] = 289,
  [SMALL_STATE(22)] = 302,
  [SMALL_STATE(23)] = 312,
  [SMALL_STATE(24)] = 322,
  [SMALL_STATE(25)] = 332,
  [SMALL_STATE(26)] = 342,
  [SMALL_STATE(27)] = 352,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(10),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(18),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(5),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 1),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 3),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 3),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unknown_instruction, 1),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_label, 1), REDUCE(sym_unknown_instruction, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2), SHIFT_REPEAT(15),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_known_instruction, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_known_instruction, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unknown_instruction, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [90] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_test(void) {
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
