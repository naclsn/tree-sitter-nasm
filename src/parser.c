#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 24
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 16
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  anon_sym_SEMI = 2,
  aux_sym_comment_token1 = 3,
  sym_word = 4,
  anon_sym_COLON = 5,
  anon_sym_COMMA = 6,
  sym_source = 7,
  sym_comment = 8,
  sym_line = 9,
  sym_label = 10,
  sym_instruction = 11,
  sym_operands = 12,
  sym_operand = 13,
  aux_sym_source_repeat1 = 14,
  aux_sym_operands_repeat1 = 15,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_word] = "word",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
  [sym_source] = "source",
  [sym_comment] = "comment",
  [sym_line] = "line",
  [sym_label] = "label",
  [sym_instruction] = "instruction",
  [sym_operands] = "operands",
  [sym_operand] = "operand",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_operands_repeat1] = "operands_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_word] = sym_word,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_source] = sym_source,
  [sym_comment] = sym_comment,
  [sym_line] = sym_line,
  [sym_label] = sym_label,
  [sym_instruction] = sym_instruction,
  [sym_operands] = sym_operands,
  [sym_operand] = sym_operand,
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
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
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
      if (eof) ADVANCE(4);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == ';') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == ';') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      if (lookahead == ';') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == ';') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_word);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COMMA);
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
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 0},
  [23] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(3),
    [sym_word] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(17),
    [sym_comment] = STATE(1),
    [sym_line] = STATE(6),
    [sym_label] = STATE(13),
    [sym_instruction] = STATE(18),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(3),
    [sym_word] = ACTIONS(9),
  },
  [2] = {
    [sym_comment] = STATE(2),
    [sym_line] = STATE(6),
    [sym_label] = STATE(13),
    [sym_instruction] = STATE(18),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(13),
    [anon_sym_SEMI] = ACTIONS(3),
    [sym_word] = ACTIONS(16),
  },
  [3] = {
    [sym_comment] = STATE(3),
    [sym_line] = STATE(6),
    [sym_label] = STATE(13),
    [sym_instruction] = STATE(18),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_LF] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(3),
    [sym_word] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(21), 1,
      anon_sym_LF,
    ACTIONS(23), 1,
      sym_word,
    ACTIONS(25), 1,
      anon_sym_COLON,
    STATE(4), 1,
      sym_comment,
    STATE(7), 1,
      sym_operand,
    STATE(20), 1,
      sym_operands,
  [22] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(21), 1,
      anon_sym_LF,
    ACTIONS(23), 1,
      sym_word,
    STATE(5), 1,
      sym_comment,
    STATE(7), 1,
      sym_operand,
    STATE(20), 1,
      sym_operands,
  [41] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(29), 1,
      sym_word,
    STATE(6), 1,
      sym_comment,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [55] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(31), 1,
      anon_sym_LF,
    ACTIONS(33), 1,
      anon_sym_COMMA,
    STATE(7), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_operands_repeat1,
  [71] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(37), 1,
      sym_word,
    STATE(8), 1,
      sym_comment,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [85] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(41), 1,
      sym_word,
    STATE(9), 1,
      sym_comment,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [99] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(33), 1,
      anon_sym_COMMA,
    ACTIONS(43), 1,
      anon_sym_LF,
    STATE(10), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym_operands_repeat1,
  [115] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(47), 1,
      sym_word,
    STATE(11), 1,
      sym_comment,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [129] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(49), 1,
      anon_sym_LF,
    ACTIONS(51), 1,
      anon_sym_COMMA,
    STATE(12), 2,
      sym_comment,
      aux_sym_operands_repeat1,
  [143] = 4,
    ACTIONS(54), 1,
      anon_sym_SEMI,
    ACTIONS(56), 1,
      sym_word,
    STATE(13), 1,
      sym_comment,
    STATE(22), 1,
      sym_instruction,
  [156] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(58), 1,
      anon_sym_LF,
    ACTIONS(60), 1,
      anon_sym_COMMA,
    STATE(14), 1,
      sym_comment,
  [169] = 4,
    ACTIONS(54), 1,
      anon_sym_SEMI,
    ACTIONS(62), 1,
      sym_word,
    STATE(15), 1,
      sym_comment,
    STATE(16), 1,
      sym_operand,
  [182] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(49), 1,
      anon_sym_LF,
    ACTIONS(64), 1,
      anon_sym_COMMA,
    STATE(16), 1,
      sym_comment,
  [195] = 3,
    ACTIONS(54), 1,
      anon_sym_SEMI,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      sym_comment,
  [205] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(68), 1,
      anon_sym_LF,
    STATE(18), 1,
      sym_comment,
  [215] = 3,
    ACTIONS(54), 1,
      anon_sym_SEMI,
    ACTIONS(70), 1,
      sym_word,
    STATE(19), 1,
      sym_comment,
  [225] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(72), 1,
      anon_sym_LF,
    STATE(20), 1,
      sym_comment,
  [235] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(74), 1,
      aux_sym_comment_token1,
    STATE(21), 1,
      sym_comment,
  [245] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(76), 1,
      anon_sym_LF,
    STATE(22), 1,
      sym_comment,
  [255] = 1,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 22,
  [SMALL_STATE(6)] = 41,
  [SMALL_STATE(7)] = 55,
  [SMALL_STATE(8)] = 71,
  [SMALL_STATE(9)] = 85,
  [SMALL_STATE(10)] = 99,
  [SMALL_STATE(11)] = 115,
  [SMALL_STATE(12)] = 129,
  [SMALL_STATE(13)] = 143,
  [SMALL_STATE(14)] = 156,
  [SMALL_STATE(15)] = 169,
  [SMALL_STATE(16)] = 182,
  [SMALL_STATE(17)] = 195,
  [SMALL_STATE(18)] = 205,
  [SMALL_STATE(19)] = 215,
  [SMALL_STATE(20)] = 225,
  [SMALL_STATE(21)] = 235,
  [SMALL_STATE(22)] = 245,
  [SMALL_STATE(23)] = 255,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(9),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2), SHIFT_REPEAT(15),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2),
  [66] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
