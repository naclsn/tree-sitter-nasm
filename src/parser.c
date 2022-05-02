#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 108
#define ALIAS_COUNT 0
#define TOKEN_COUNT 92
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  anon_sym_COLON = 2,
  anon_sym_COMMA = 3,
  aux_sym_register_token1 = 4,
  aux_sym_register_token2 = 5,
  aux_sym_register_token3 = 6,
  aux_sym_register_token4 = 7,
  aux_sym_register_token5 = 8,
  aux_sym_register_token6 = 9,
  aux_sym_register_token7 = 10,
  aux_sym_register_token8 = 11,
  aux_sym_register_token9 = 12,
  aux_sym_register_token10 = 13,
  aux_sym_register_token11 = 14,
  aux_sym_register_token12 = 15,
  aux_sym_register_token13 = 16,
  aux_sym_register_token14 = 17,
  aux_sym_register_token15 = 18,
  aux_sym_register_token16 = 19,
  aux_sym_register_token17 = 20,
  aux_sym_register_token18 = 21,
  aux_sym_register_token19 = 22,
  aux_sym_register_token20 = 23,
  aux_sym_register_token21 = 24,
  aux_sym_register_token22 = 25,
  aux_sym_register_token23 = 26,
  aux_sym_register_token24 = 27,
  aux_sym_register_token25 = 28,
  aux_sym_register_token26 = 29,
  aux_sym_register_token27 = 30,
  aux_sym_register_token28 = 31,
  aux_sym_register_token29 = 32,
  aux_sym_register_token30 = 33,
  aux_sym_register_token31 = 34,
  aux_sym_register_token32 = 35,
  aux_sym_register_token33 = 36,
  aux_sym_register_token34 = 37,
  aux_sym_register_token35 = 38,
  aux_sym_register_token36 = 39,
  aux_sym_register_token37 = 40,
  aux_sym_register_token38 = 41,
  aux_sym_register_token39 = 42,
  aux_sym_register_token40 = 43,
  aux_sym_register_token41 = 44,
  aux_sym_register_token42 = 45,
  aux_sym_register_token43 = 46,
  aux_sym_register_token44 = 47,
  aux_sym_register_token45 = 48,
  aux_sym_register_token46 = 49,
  aux_sym_register_token47 = 50,
  aux_sym_register_token48 = 51,
  aux_sym_register_token49 = 52,
  aux_sym_register_token50 = 53,
  aux_sym_register_token51 = 54,
  aux_sym_register_token52 = 55,
  aux_sym_register_token53 = 56,
  aux_sym_register_token54 = 57,
  aux_sym_register_token55 = 58,
  aux_sym_register_token56 = 59,
  aux_sym_register_token57 = 60,
  aux_sym_register_token58 = 61,
  aux_sym_register_token59 = 62,
  aux_sym_register_token60 = 63,
  aux_sym_register_token61 = 64,
  aux_sym_register_token62 = 65,
  aux_sym_register_token63 = 66,
  aux_sym_register_token64 = 67,
  aux_sym_register_token65 = 68,
  aux_sym_register_token66 = 69,
  aux_sym_register_token67 = 70,
  aux_sym_register_token68 = 71,
  anon_sym_LBRACK = 72,
  aux_sym_effective_address_token1 = 73,
  aux_sym_effective_address_token2 = 74,
  aux_sym_effective_address_token3 = 75,
  aux_sym_effective_address_token4 = 76,
  aux_sym_effective_address_token5 = 77,
  aux_sym_effective_address_token6 = 78,
  anon_sym_RBRACK = 79,
  sym_constant_numeric = 80,
  aux_sym_constant_charstr_token1 = 81,
  aux_sym_constant_charstr_token2 = 82,
  aux_sym_constant_charstr_token3 = 83,
  sym_constant_floatpt = 84,
  aux_sym_known_instruction_token1 = 85,
  aux_sym_known_instruction_token2 = 86,
  aux_sym_known_instruction_token3 = 87,
  aux_sym_known_instruction_token4 = 88,
  anon_sym_SEMI = 89,
  aux_sym_comment_token1 = 90,
  aux_sym_word_token1 = 91,
  sym_source = 92,
  sym_line = 93,
  sym_label = 94,
  sym_instruction = 95,
  sym_operands = 96,
  sym_operand = 97,
  sym_register = 98,
  sym_effective_address = 99,
  sym_constant = 100,
  sym_constant_charstr = 101,
  sym_known_instruction = 102,
  sym_unknown_instruction = 103,
  sym_comment = 104,
  sym_word = 105,
  aux_sym_source_repeat1 = 106,
  aux_sym_operands_repeat1 = 107,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
  [aux_sym_register_token1] = "register_token1",
  [aux_sym_register_token2] = "register_token2",
  [aux_sym_register_token3] = "register_token3",
  [aux_sym_register_token4] = "register_token4",
  [aux_sym_register_token5] = "register_token5",
  [aux_sym_register_token6] = "register_token6",
  [aux_sym_register_token7] = "register_token7",
  [aux_sym_register_token8] = "register_token8",
  [aux_sym_register_token9] = "register_token9",
  [aux_sym_register_token10] = "register_token10",
  [aux_sym_register_token11] = "register_token11",
  [aux_sym_register_token12] = "register_token12",
  [aux_sym_register_token13] = "register_token13",
  [aux_sym_register_token14] = "register_token14",
  [aux_sym_register_token15] = "register_token15",
  [aux_sym_register_token16] = "register_token16",
  [aux_sym_register_token17] = "register_token17",
  [aux_sym_register_token18] = "register_token18",
  [aux_sym_register_token19] = "register_token19",
  [aux_sym_register_token20] = "register_token20",
  [aux_sym_register_token21] = "register_token21",
  [aux_sym_register_token22] = "register_token22",
  [aux_sym_register_token23] = "register_token23",
  [aux_sym_register_token24] = "register_token24",
  [aux_sym_register_token25] = "register_token25",
  [aux_sym_register_token26] = "register_token26",
  [aux_sym_register_token27] = "register_token27",
  [aux_sym_register_token28] = "register_token28",
  [aux_sym_register_token29] = "register_token29",
  [aux_sym_register_token30] = "register_token30",
  [aux_sym_register_token31] = "register_token31",
  [aux_sym_register_token32] = "register_token32",
  [aux_sym_register_token33] = "register_token33",
  [aux_sym_register_token34] = "register_token34",
  [aux_sym_register_token35] = "register_token35",
  [aux_sym_register_token36] = "register_token36",
  [aux_sym_register_token37] = "register_token37",
  [aux_sym_register_token38] = "register_token38",
  [aux_sym_register_token39] = "register_token39",
  [aux_sym_register_token40] = "register_token40",
  [aux_sym_register_token41] = "register_token41",
  [aux_sym_register_token42] = "register_token42",
  [aux_sym_register_token43] = "register_token43",
  [aux_sym_register_token44] = "register_token44",
  [aux_sym_register_token45] = "register_token45",
  [aux_sym_register_token46] = "register_token46",
  [aux_sym_register_token47] = "register_token47",
  [aux_sym_register_token48] = "register_token48",
  [aux_sym_register_token49] = "register_token49",
  [aux_sym_register_token50] = "register_token50",
  [aux_sym_register_token51] = "register_token51",
  [aux_sym_register_token52] = "register_token52",
  [aux_sym_register_token53] = "register_token53",
  [aux_sym_register_token54] = "register_token54",
  [aux_sym_register_token55] = "register_token55",
  [aux_sym_register_token56] = "register_token56",
  [aux_sym_register_token57] = "register_token57",
  [aux_sym_register_token58] = "register_token58",
  [aux_sym_register_token59] = "register_token59",
  [aux_sym_register_token60] = "register_token60",
  [aux_sym_register_token61] = "register_token61",
  [aux_sym_register_token62] = "register_token62",
  [aux_sym_register_token63] = "register_token63",
  [aux_sym_register_token64] = "register_token64",
  [aux_sym_register_token65] = "register_token65",
  [aux_sym_register_token66] = "register_token66",
  [aux_sym_register_token67] = "register_token67",
  [aux_sym_register_token68] = "register_token68",
  [anon_sym_LBRACK] = "[",
  [aux_sym_effective_address_token1] = "effective_address_token1",
  [aux_sym_effective_address_token2] = "effective_address_token2",
  [aux_sym_effective_address_token3] = "effective_address_token3",
  [aux_sym_effective_address_token4] = "effective_address_token4",
  [aux_sym_effective_address_token5] = "effective_address_token5",
  [aux_sym_effective_address_token6] = "effective_address_token6",
  [anon_sym_RBRACK] = "]",
  [sym_constant_numeric] = "constant_numeric",
  [aux_sym_constant_charstr_token1] = "constant_charstr_token1",
  [aux_sym_constant_charstr_token2] = "constant_charstr_token2",
  [aux_sym_constant_charstr_token3] = "constant_charstr_token3",
  [sym_constant_floatpt] = "constant_floatpt",
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
  [sym_register] = "register",
  [sym_effective_address] = "effective_address",
  [sym_constant] = "constant",
  [sym_constant_charstr] = "constant_charstr",
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
  [aux_sym_register_token1] = aux_sym_register_token1,
  [aux_sym_register_token2] = aux_sym_register_token2,
  [aux_sym_register_token3] = aux_sym_register_token3,
  [aux_sym_register_token4] = aux_sym_register_token4,
  [aux_sym_register_token5] = aux_sym_register_token5,
  [aux_sym_register_token6] = aux_sym_register_token6,
  [aux_sym_register_token7] = aux_sym_register_token7,
  [aux_sym_register_token8] = aux_sym_register_token8,
  [aux_sym_register_token9] = aux_sym_register_token9,
  [aux_sym_register_token10] = aux_sym_register_token10,
  [aux_sym_register_token11] = aux_sym_register_token11,
  [aux_sym_register_token12] = aux_sym_register_token12,
  [aux_sym_register_token13] = aux_sym_register_token13,
  [aux_sym_register_token14] = aux_sym_register_token14,
  [aux_sym_register_token15] = aux_sym_register_token15,
  [aux_sym_register_token16] = aux_sym_register_token16,
  [aux_sym_register_token17] = aux_sym_register_token17,
  [aux_sym_register_token18] = aux_sym_register_token18,
  [aux_sym_register_token19] = aux_sym_register_token19,
  [aux_sym_register_token20] = aux_sym_register_token20,
  [aux_sym_register_token21] = aux_sym_register_token21,
  [aux_sym_register_token22] = aux_sym_register_token22,
  [aux_sym_register_token23] = aux_sym_register_token23,
  [aux_sym_register_token24] = aux_sym_register_token24,
  [aux_sym_register_token25] = aux_sym_register_token25,
  [aux_sym_register_token26] = aux_sym_register_token26,
  [aux_sym_register_token27] = aux_sym_register_token27,
  [aux_sym_register_token28] = aux_sym_register_token28,
  [aux_sym_register_token29] = aux_sym_register_token29,
  [aux_sym_register_token30] = aux_sym_register_token30,
  [aux_sym_register_token31] = aux_sym_register_token31,
  [aux_sym_register_token32] = aux_sym_register_token32,
  [aux_sym_register_token33] = aux_sym_register_token33,
  [aux_sym_register_token34] = aux_sym_register_token34,
  [aux_sym_register_token35] = aux_sym_register_token35,
  [aux_sym_register_token36] = aux_sym_register_token36,
  [aux_sym_register_token37] = aux_sym_register_token37,
  [aux_sym_register_token38] = aux_sym_register_token38,
  [aux_sym_register_token39] = aux_sym_register_token39,
  [aux_sym_register_token40] = aux_sym_register_token40,
  [aux_sym_register_token41] = aux_sym_register_token41,
  [aux_sym_register_token42] = aux_sym_register_token42,
  [aux_sym_register_token43] = aux_sym_register_token43,
  [aux_sym_register_token44] = aux_sym_register_token44,
  [aux_sym_register_token45] = aux_sym_register_token45,
  [aux_sym_register_token46] = aux_sym_register_token46,
  [aux_sym_register_token47] = aux_sym_register_token47,
  [aux_sym_register_token48] = aux_sym_register_token48,
  [aux_sym_register_token49] = aux_sym_register_token49,
  [aux_sym_register_token50] = aux_sym_register_token50,
  [aux_sym_register_token51] = aux_sym_register_token51,
  [aux_sym_register_token52] = aux_sym_register_token52,
  [aux_sym_register_token53] = aux_sym_register_token53,
  [aux_sym_register_token54] = aux_sym_register_token54,
  [aux_sym_register_token55] = aux_sym_register_token55,
  [aux_sym_register_token56] = aux_sym_register_token56,
  [aux_sym_register_token57] = aux_sym_register_token57,
  [aux_sym_register_token58] = aux_sym_register_token58,
  [aux_sym_register_token59] = aux_sym_register_token59,
  [aux_sym_register_token60] = aux_sym_register_token60,
  [aux_sym_register_token61] = aux_sym_register_token61,
  [aux_sym_register_token62] = aux_sym_register_token62,
  [aux_sym_register_token63] = aux_sym_register_token63,
  [aux_sym_register_token64] = aux_sym_register_token64,
  [aux_sym_register_token65] = aux_sym_register_token65,
  [aux_sym_register_token66] = aux_sym_register_token66,
  [aux_sym_register_token67] = aux_sym_register_token67,
  [aux_sym_register_token68] = aux_sym_register_token68,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym_effective_address_token1] = aux_sym_effective_address_token1,
  [aux_sym_effective_address_token2] = aux_sym_effective_address_token2,
  [aux_sym_effective_address_token3] = aux_sym_effective_address_token3,
  [aux_sym_effective_address_token4] = aux_sym_effective_address_token4,
  [aux_sym_effective_address_token5] = aux_sym_effective_address_token5,
  [aux_sym_effective_address_token6] = aux_sym_effective_address_token6,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_constant_numeric] = sym_constant_numeric,
  [aux_sym_constant_charstr_token1] = aux_sym_constant_charstr_token1,
  [aux_sym_constant_charstr_token2] = aux_sym_constant_charstr_token2,
  [aux_sym_constant_charstr_token3] = aux_sym_constant_charstr_token3,
  [sym_constant_floatpt] = sym_constant_floatpt,
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
  [sym_register] = sym_register,
  [sym_effective_address] = sym_effective_address,
  [sym_constant] = sym_constant,
  [sym_constant_charstr] = sym_constant_charstr,
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
  [aux_sym_register_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token15] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token16] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token17] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token18] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token19] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token20] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token21] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token22] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token23] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token24] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token25] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token26] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token27] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token28] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token29] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token30] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token31] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token32] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token33] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token34] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token35] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token36] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token37] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token38] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token39] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token40] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token41] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token42] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token43] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token44] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token45] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token46] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token47] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token48] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token49] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token50] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token51] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token52] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token53] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token54] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token55] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token56] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token57] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token58] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token59] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token60] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token61] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token62] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token63] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token64] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token65] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token66] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token67] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token68] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_effective_address_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_effective_address_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_effective_address_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_effective_address_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_effective_address_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_effective_address_token6] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_constant_numeric] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_constant_charstr_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constant_charstr_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constant_charstr_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_constant_floatpt] = {
    .visible = true,
    .named = true,
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
  [sym_register] = {
    .visible = true,
    .named = true,
  },
  [sym_effective_address] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_charstr] = {
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
      if (eof) ADVANCE(14);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == ';') ADVANCE(103);
      if (lookahead == '[') ADVANCE(86);
      if (lookahead == ']') ADVANCE(93);
      if (lookahead == '`') ADVANCE(12);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(111);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(123);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(125);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(109);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(139);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(140);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(142);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(107);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(128);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('F' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == ';') ADVANCE(103);
      if (lookahead == '[') ADVANCE(86);
      if (lookahead == '`') ADVANCE(12);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(115);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(124);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(125);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(127);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(109);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(139);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(140);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(108);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('F' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == ';') ADVANCE(103);
      if (lookahead == '[') ADVANCE(86);
      if (lookahead == '`') ADVANCE(12);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(122);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(124);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(125);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(127);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(109);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(108);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('F' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == ';') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == ';') ADVANCE(103);
      if (lookahead == '[') ADVANCE(86);
      if (lookahead == '`') ADVANCE(12);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(122);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(124);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(125);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(127);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(109);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(108);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('F' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '0') ADVANCE(80);
      if (lookahead == '1') ADVANCE(81);
      if (lookahead == '2') ADVANCE(82);
      if (lookahead == '3') ADVANCE(83);
      if (lookahead == '4') ADVANCE(84);
      if (lookahead == '5') ADVANCE(85);
      END_STATE();
    case 9:
      if (lookahead == ';') ADVANCE(103);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(112);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(160);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(155);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(142);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(120);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('C' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 10:
      if (lookahead == ';') ADVANCE(103);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(116);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(139);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(140);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 11:
      if (lookahead == ';') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 12:
      if (lookahead == '`') ADVANCE(97);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (eof) ADVANCE(14);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == ';') ADVANCE(103);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(116);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(139);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(140);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_register_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_register_token2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_register_token3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_register_token4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_register_token5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_register_token6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_register_token7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_register_token8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_register_token9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_register_token10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_register_token11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_register_token12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_register_token13);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_register_token14);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_register_token15);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_register_token16);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_register_token17);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_register_token18);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_register_token19);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_register_token20);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_register_token21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_register_token22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_register_token23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_register_token24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_register_token25);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_register_token26);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_register_token27);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_register_token28);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_register_token29);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_register_token30);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_register_token31);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_register_token32);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_register_token33);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_register_token34);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_register_token35);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_register_token36);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_register_token37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_register_token38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_register_token39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_register_token40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_register_token41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_register_token42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_register_token43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_register_token44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_register_token45);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_register_token46);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_register_token47);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_register_token48);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_register_token49);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_register_token50);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_register_token51);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_register_token52);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_register_token53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_register_token54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_register_token55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_register_token56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_register_token57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_register_token58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_register_token59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_register_token60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_register_token61);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(30);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(62);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(46);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_register_token62);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(31);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(63);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(47);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_register_token63);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(32);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(64);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(48);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_register_token64);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(33);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(65);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(49);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_register_token65);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(34);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(66);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(50);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_register_token66);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(35);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(67);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(51);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_register_token67);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(36);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(68);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(52);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_register_token68);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(69);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(53);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_effective_address_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_effective_address_token2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_effective_address_token3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_effective_address_token4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_effective_address_token5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_effective_address_token6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_constant_numeric);
      if (lookahead == '.') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_constant_charstr_token1);
      if (lookahead == '"') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(6);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_constant_charstr_token2);
      if (lookahead == '\'') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(7);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_constant_charstr_token3);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_constant_floatpt);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_known_instruction_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_known_instruction_token2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_known_instruction_token3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_known_instruction_token4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == ';') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '1') ADVANCE(8);
      if (lookahead == '8') ADVANCE(78);
      if (lookahead == '9') ADVANCE(79);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(158);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(145);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(159);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(132);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(133);
      if (('F' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '1') ADVANCE(8);
      if (lookahead == '8') ADVANCE(78);
      if (lookahead == '9') ADVANCE(79);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(158);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(145);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(159);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(132);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(133);
      if (('E' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(156);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(144);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(157);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(130);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(131);
      if (('E' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(138);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(149);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(117);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(19);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(18);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(117);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(19);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(18);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(19);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(18);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(25);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(24);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(43);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(41);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(25);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(24);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(43);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(21);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(20);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(23);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(45);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(22);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(143);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(23);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(45);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(22);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(44);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(42);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(44);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(61);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(60);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(77);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(76);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(59);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(75);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 13},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 13},
  [10] = {.lex_state = 13},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 13},
  [14] = {.lex_state = 13},
  [15] = {.lex_state = 13},
  [16] = {.lex_state = 13},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 13},
  [19] = {.lex_state = 13},
  [20] = {.lex_state = 13},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 13},
  [23] = {.lex_state = 13},
  [24] = {.lex_state = 13},
  [25] = {.lex_state = 13},
  [26] = {.lex_state = 13},
  [27] = {.lex_state = 13},
  [28] = {.lex_state = 13},
  [29] = {.lex_state = 13},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 13},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 13},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_register_token1] = ACTIONS(1),
    [aux_sym_register_token2] = ACTIONS(1),
    [aux_sym_register_token3] = ACTIONS(1),
    [aux_sym_register_token4] = ACTIONS(1),
    [aux_sym_register_token5] = ACTIONS(1),
    [aux_sym_register_token6] = ACTIONS(1),
    [aux_sym_register_token7] = ACTIONS(1),
    [aux_sym_register_token8] = ACTIONS(1),
    [aux_sym_register_token9] = ACTIONS(1),
    [aux_sym_register_token10] = ACTIONS(1),
    [aux_sym_register_token11] = ACTIONS(1),
    [aux_sym_register_token12] = ACTIONS(1),
    [aux_sym_register_token13] = ACTIONS(1),
    [aux_sym_register_token14] = ACTIONS(1),
    [aux_sym_register_token15] = ACTIONS(1),
    [aux_sym_register_token16] = ACTIONS(1),
    [aux_sym_register_token17] = ACTIONS(1),
    [aux_sym_register_token18] = ACTIONS(1),
    [aux_sym_register_token19] = ACTIONS(1),
    [aux_sym_register_token20] = ACTIONS(1),
    [aux_sym_register_token21] = ACTIONS(1),
    [aux_sym_register_token22] = ACTIONS(1),
    [aux_sym_register_token23] = ACTIONS(1),
    [aux_sym_register_token24] = ACTIONS(1),
    [aux_sym_register_token25] = ACTIONS(1),
    [aux_sym_register_token26] = ACTIONS(1),
    [aux_sym_register_token27] = ACTIONS(1),
    [aux_sym_register_token28] = ACTIONS(1),
    [aux_sym_register_token29] = ACTIONS(1),
    [aux_sym_register_token30] = ACTIONS(1),
    [aux_sym_register_token31] = ACTIONS(1),
    [aux_sym_register_token32] = ACTIONS(1),
    [aux_sym_register_token33] = ACTIONS(1),
    [aux_sym_register_token34] = ACTIONS(1),
    [aux_sym_register_token35] = ACTIONS(1),
    [aux_sym_register_token36] = ACTIONS(1),
    [aux_sym_register_token37] = ACTIONS(1),
    [aux_sym_register_token38] = ACTIONS(1),
    [aux_sym_register_token39] = ACTIONS(1),
    [aux_sym_register_token40] = ACTIONS(1),
    [aux_sym_register_token41] = ACTIONS(1),
    [aux_sym_register_token42] = ACTIONS(1),
    [aux_sym_register_token43] = ACTIONS(1),
    [aux_sym_register_token44] = ACTIONS(1),
    [aux_sym_register_token45] = ACTIONS(1),
    [aux_sym_register_token46] = ACTIONS(1),
    [aux_sym_register_token47] = ACTIONS(1),
    [aux_sym_register_token48] = ACTIONS(1),
    [aux_sym_register_token49] = ACTIONS(1),
    [aux_sym_register_token50] = ACTIONS(1),
    [aux_sym_register_token51] = ACTIONS(1),
    [aux_sym_register_token52] = ACTIONS(1),
    [aux_sym_register_token53] = ACTIONS(1),
    [aux_sym_register_token54] = ACTIONS(1),
    [aux_sym_register_token55] = ACTIONS(1),
    [aux_sym_register_token56] = ACTIONS(1),
    [aux_sym_register_token57] = ACTIONS(1),
    [aux_sym_register_token58] = ACTIONS(1),
    [aux_sym_register_token59] = ACTIONS(1),
    [aux_sym_register_token60] = ACTIONS(1),
    [aux_sym_register_token61] = ACTIONS(1),
    [aux_sym_register_token62] = ACTIONS(1),
    [aux_sym_register_token63] = ACTIONS(1),
    [aux_sym_register_token64] = ACTIONS(1),
    [aux_sym_register_token65] = ACTIONS(1),
    [aux_sym_register_token66] = ACTIONS(1),
    [aux_sym_register_token67] = ACTIONS(1),
    [aux_sym_register_token68] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [aux_sym_effective_address_token1] = ACTIONS(1),
    [aux_sym_effective_address_token2] = ACTIONS(1),
    [aux_sym_effective_address_token3] = ACTIONS(1),
    [aux_sym_effective_address_token4] = ACTIONS(1),
    [aux_sym_effective_address_token5] = ACTIONS(1),
    [aux_sym_effective_address_token6] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_constant_numeric] = ACTIONS(1),
    [aux_sym_constant_charstr_token1] = ACTIONS(1),
    [aux_sym_constant_charstr_token2] = ACTIONS(1),
    [aux_sym_constant_charstr_token3] = ACTIONS(1),
    [sym_constant_floatpt] = ACTIONS(1),
    [aux_sym_known_instruction_token1] = ACTIONS(1),
    [aux_sym_known_instruction_token2] = ACTIONS(1),
    [aux_sym_known_instruction_token3] = ACTIONS(1),
    [aux_sym_known_instruction_token4] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(3),
    [aux_sym_word_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(35),
    [sym_line] = STATE(13),
    [sym_label] = STATE(11),
    [sym_instruction] = STATE(34),
    [sym_known_instruction] = STATE(2),
    [sym_unknown_instruction] = STATE(2),
    [sym_comment] = STATE(1),
    [sym_word] = STATE(4),
    [aux_sym_source_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(7),
    [aux_sym_known_instruction_token1] = ACTIONS(9),
    [aux_sym_known_instruction_token2] = ACTIONS(9),
    [aux_sym_known_instruction_token3] = ACTIONS(9),
    [aux_sym_known_instruction_token4] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(11),
    [aux_sym_word_token1] = ACTIONS(13),
  },
  [2] = {
    [sym_operands] = STATE(29),
    [sym_operand] = STATE(20),
    [sym_register] = STATE(23),
    [sym_effective_address] = STATE(23),
    [sym_constant] = STATE(23),
    [sym_constant_charstr] = STATE(22),
    [sym_comment] = STATE(2),
    [sym_word] = STATE(23),
    [anon_sym_LF] = ACTIONS(15),
    [aux_sym_register_token1] = ACTIONS(17),
    [aux_sym_register_token2] = ACTIONS(17),
    [aux_sym_register_token3] = ACTIONS(17),
    [aux_sym_register_token4] = ACTIONS(17),
    [aux_sym_register_token5] = ACTIONS(17),
    [aux_sym_register_token6] = ACTIONS(17),
    [aux_sym_register_token7] = ACTIONS(17),
    [aux_sym_register_token8] = ACTIONS(17),
    [aux_sym_register_token9] = ACTIONS(17),
    [aux_sym_register_token10] = ACTIONS(17),
    [aux_sym_register_token11] = ACTIONS(17),
    [aux_sym_register_token12] = ACTIONS(17),
    [aux_sym_register_token13] = ACTIONS(17),
    [aux_sym_register_token14] = ACTIONS(17),
    [aux_sym_register_token15] = ACTIONS(17),
    [aux_sym_register_token16] = ACTIONS(17),
    [aux_sym_register_token17] = ACTIONS(17),
    [aux_sym_register_token18] = ACTIONS(17),
    [aux_sym_register_token19] = ACTIONS(17),
    [aux_sym_register_token20] = ACTIONS(17),
    [aux_sym_register_token21] = ACTIONS(17),
    [aux_sym_register_token22] = ACTIONS(17),
    [aux_sym_register_token23] = ACTIONS(17),
    [aux_sym_register_token24] = ACTIONS(17),
    [aux_sym_register_token25] = ACTIONS(17),
    [aux_sym_register_token26] = ACTIONS(17),
    [aux_sym_register_token27] = ACTIONS(17),
    [aux_sym_register_token28] = ACTIONS(17),
    [aux_sym_register_token29] = ACTIONS(17),
    [aux_sym_register_token30] = ACTIONS(17),
    [aux_sym_register_token31] = ACTIONS(17),
    [aux_sym_register_token32] = ACTIONS(17),
    [aux_sym_register_token33] = ACTIONS(17),
    [aux_sym_register_token34] = ACTIONS(17),
    [aux_sym_register_token35] = ACTIONS(17),
    [aux_sym_register_token36] = ACTIONS(17),
    [aux_sym_register_token37] = ACTIONS(17),
    [aux_sym_register_token38] = ACTIONS(17),
    [aux_sym_register_token39] = ACTIONS(17),
    [aux_sym_register_token40] = ACTIONS(17),
    [aux_sym_register_token41] = ACTIONS(17),
    [aux_sym_register_token42] = ACTIONS(17),
    [aux_sym_register_token43] = ACTIONS(17),
    [aux_sym_register_token44] = ACTIONS(17),
    [aux_sym_register_token45] = ACTIONS(17),
    [aux_sym_register_token46] = ACTIONS(17),
    [aux_sym_register_token47] = ACTIONS(17),
    [aux_sym_register_token48] = ACTIONS(17),
    [aux_sym_register_token49] = ACTIONS(17),
    [aux_sym_register_token50] = ACTIONS(17),
    [aux_sym_register_token51] = ACTIONS(17),
    [aux_sym_register_token52] = ACTIONS(17),
    [aux_sym_register_token53] = ACTIONS(17),
    [aux_sym_register_token54] = ACTIONS(17),
    [aux_sym_register_token55] = ACTIONS(17),
    [aux_sym_register_token56] = ACTIONS(17),
    [aux_sym_register_token57] = ACTIONS(17),
    [aux_sym_register_token58] = ACTIONS(17),
    [aux_sym_register_token59] = ACTIONS(17),
    [aux_sym_register_token60] = ACTIONS(17),
    [aux_sym_register_token61] = ACTIONS(17),
    [aux_sym_register_token62] = ACTIONS(17),
    [aux_sym_register_token63] = ACTIONS(17),
    [aux_sym_register_token64] = ACTIONS(17),
    [aux_sym_register_token65] = ACTIONS(17),
    [aux_sym_register_token66] = ACTIONS(17),
    [aux_sym_register_token67] = ACTIONS(17),
    [aux_sym_register_token68] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [sym_constant_numeric] = ACTIONS(21),
    [aux_sym_constant_charstr_token1] = ACTIONS(23),
    [aux_sym_constant_charstr_token2] = ACTIONS(23),
    [aux_sym_constant_charstr_token3] = ACTIONS(23),
    [sym_constant_floatpt] = ACTIONS(21),
    [anon_sym_SEMI] = ACTIONS(11),
    [aux_sym_word_token1] = ACTIONS(13),
  },
  [3] = {
    [sym_comment] = STATE(3),
    [anon_sym_LF] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [aux_sym_register_token1] = ACTIONS(27),
    [aux_sym_register_token2] = ACTIONS(27),
    [aux_sym_register_token3] = ACTIONS(27),
    [aux_sym_register_token4] = ACTIONS(27),
    [aux_sym_register_token5] = ACTIONS(27),
    [aux_sym_register_token6] = ACTIONS(27),
    [aux_sym_register_token7] = ACTIONS(27),
    [aux_sym_register_token8] = ACTIONS(27),
    [aux_sym_register_token9] = ACTIONS(27),
    [aux_sym_register_token10] = ACTIONS(27),
    [aux_sym_register_token11] = ACTIONS(27),
    [aux_sym_register_token12] = ACTIONS(27),
    [aux_sym_register_token13] = ACTIONS(27),
    [aux_sym_register_token14] = ACTIONS(27),
    [aux_sym_register_token15] = ACTIONS(27),
    [aux_sym_register_token16] = ACTIONS(27),
    [aux_sym_register_token17] = ACTIONS(27),
    [aux_sym_register_token18] = ACTIONS(27),
    [aux_sym_register_token19] = ACTIONS(27),
    [aux_sym_register_token20] = ACTIONS(27),
    [aux_sym_register_token21] = ACTIONS(27),
    [aux_sym_register_token22] = ACTIONS(27),
    [aux_sym_register_token23] = ACTIONS(27),
    [aux_sym_register_token24] = ACTIONS(27),
    [aux_sym_register_token25] = ACTIONS(27),
    [aux_sym_register_token26] = ACTIONS(27),
    [aux_sym_register_token27] = ACTIONS(27),
    [aux_sym_register_token28] = ACTIONS(27),
    [aux_sym_register_token29] = ACTIONS(27),
    [aux_sym_register_token30] = ACTIONS(27),
    [aux_sym_register_token31] = ACTIONS(27),
    [aux_sym_register_token32] = ACTIONS(27),
    [aux_sym_register_token33] = ACTIONS(27),
    [aux_sym_register_token34] = ACTIONS(27),
    [aux_sym_register_token35] = ACTIONS(27),
    [aux_sym_register_token36] = ACTIONS(27),
    [aux_sym_register_token37] = ACTIONS(27),
    [aux_sym_register_token38] = ACTIONS(27),
    [aux_sym_register_token39] = ACTIONS(27),
    [aux_sym_register_token40] = ACTIONS(27),
    [aux_sym_register_token41] = ACTIONS(27),
    [aux_sym_register_token42] = ACTIONS(27),
    [aux_sym_register_token43] = ACTIONS(27),
    [aux_sym_register_token44] = ACTIONS(27),
    [aux_sym_register_token45] = ACTIONS(27),
    [aux_sym_register_token46] = ACTIONS(27),
    [aux_sym_register_token47] = ACTIONS(27),
    [aux_sym_register_token48] = ACTIONS(27),
    [aux_sym_register_token49] = ACTIONS(27),
    [aux_sym_register_token50] = ACTIONS(27),
    [aux_sym_register_token51] = ACTIONS(27),
    [aux_sym_register_token52] = ACTIONS(27),
    [aux_sym_register_token53] = ACTIONS(27),
    [aux_sym_register_token54] = ACTIONS(27),
    [aux_sym_register_token55] = ACTIONS(27),
    [aux_sym_register_token56] = ACTIONS(27),
    [aux_sym_register_token57] = ACTIONS(27),
    [aux_sym_register_token58] = ACTIONS(27),
    [aux_sym_register_token59] = ACTIONS(27),
    [aux_sym_register_token60] = ACTIONS(27),
    [aux_sym_register_token61] = ACTIONS(27),
    [aux_sym_register_token62] = ACTIONS(27),
    [aux_sym_register_token63] = ACTIONS(27),
    [aux_sym_register_token64] = ACTIONS(27),
    [aux_sym_register_token65] = ACTIONS(27),
    [aux_sym_register_token66] = ACTIONS(27),
    [aux_sym_register_token67] = ACTIONS(27),
    [aux_sym_register_token68] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_constant_numeric] = ACTIONS(27),
    [aux_sym_constant_charstr_token1] = ACTIONS(27),
    [aux_sym_constant_charstr_token2] = ACTIONS(27),
    [aux_sym_constant_charstr_token3] = ACTIONS(27),
    [sym_constant_floatpt] = ACTIONS(27),
    [aux_sym_known_instruction_token1] = ACTIONS(27),
    [aux_sym_known_instruction_token2] = ACTIONS(27),
    [aux_sym_known_instruction_token3] = ACTIONS(27),
    [aux_sym_known_instruction_token4] = ACTIONS(27),
    [anon_sym_SEMI] = ACTIONS(11),
    [aux_sym_word_token1] = ACTIONS(27),
  },
  [4] = {
    [sym_comment] = STATE(4),
    [anon_sym_LF] = ACTIONS(29),
    [anon_sym_COLON] = ACTIONS(31),
    [aux_sym_register_token1] = ACTIONS(33),
    [aux_sym_register_token2] = ACTIONS(33),
    [aux_sym_register_token3] = ACTIONS(33),
    [aux_sym_register_token4] = ACTIONS(33),
    [aux_sym_register_token5] = ACTIONS(33),
    [aux_sym_register_token6] = ACTIONS(33),
    [aux_sym_register_token7] = ACTIONS(33),
    [aux_sym_register_token8] = ACTIONS(33),
    [aux_sym_register_token9] = ACTIONS(33),
    [aux_sym_register_token10] = ACTIONS(33),
    [aux_sym_register_token11] = ACTIONS(33),
    [aux_sym_register_token12] = ACTIONS(33),
    [aux_sym_register_token13] = ACTIONS(33),
    [aux_sym_register_token14] = ACTIONS(33),
    [aux_sym_register_token15] = ACTIONS(33),
    [aux_sym_register_token16] = ACTIONS(33),
    [aux_sym_register_token17] = ACTIONS(33),
    [aux_sym_register_token18] = ACTIONS(33),
    [aux_sym_register_token19] = ACTIONS(33),
    [aux_sym_register_token20] = ACTIONS(33),
    [aux_sym_register_token21] = ACTIONS(33),
    [aux_sym_register_token22] = ACTIONS(33),
    [aux_sym_register_token23] = ACTIONS(33),
    [aux_sym_register_token24] = ACTIONS(33),
    [aux_sym_register_token25] = ACTIONS(33),
    [aux_sym_register_token26] = ACTIONS(33),
    [aux_sym_register_token27] = ACTIONS(33),
    [aux_sym_register_token28] = ACTIONS(33),
    [aux_sym_register_token29] = ACTIONS(33),
    [aux_sym_register_token30] = ACTIONS(33),
    [aux_sym_register_token31] = ACTIONS(33),
    [aux_sym_register_token32] = ACTIONS(33),
    [aux_sym_register_token33] = ACTIONS(33),
    [aux_sym_register_token34] = ACTIONS(33),
    [aux_sym_register_token35] = ACTIONS(33),
    [aux_sym_register_token36] = ACTIONS(33),
    [aux_sym_register_token37] = ACTIONS(33),
    [aux_sym_register_token38] = ACTIONS(33),
    [aux_sym_register_token39] = ACTIONS(33),
    [aux_sym_register_token40] = ACTIONS(33),
    [aux_sym_register_token41] = ACTIONS(33),
    [aux_sym_register_token42] = ACTIONS(33),
    [aux_sym_register_token43] = ACTIONS(33),
    [aux_sym_register_token44] = ACTIONS(33),
    [aux_sym_register_token45] = ACTIONS(33),
    [aux_sym_register_token46] = ACTIONS(33),
    [aux_sym_register_token47] = ACTIONS(33),
    [aux_sym_register_token48] = ACTIONS(33),
    [aux_sym_register_token49] = ACTIONS(33),
    [aux_sym_register_token50] = ACTIONS(33),
    [aux_sym_register_token51] = ACTIONS(33),
    [aux_sym_register_token52] = ACTIONS(33),
    [aux_sym_register_token53] = ACTIONS(33),
    [aux_sym_register_token54] = ACTIONS(33),
    [aux_sym_register_token55] = ACTIONS(33),
    [aux_sym_register_token56] = ACTIONS(33),
    [aux_sym_register_token57] = ACTIONS(33),
    [aux_sym_register_token58] = ACTIONS(33),
    [aux_sym_register_token59] = ACTIONS(33),
    [aux_sym_register_token60] = ACTIONS(33),
    [aux_sym_register_token61] = ACTIONS(33),
    [aux_sym_register_token62] = ACTIONS(33),
    [aux_sym_register_token63] = ACTIONS(33),
    [aux_sym_register_token64] = ACTIONS(33),
    [aux_sym_register_token65] = ACTIONS(33),
    [aux_sym_register_token66] = ACTIONS(33),
    [aux_sym_register_token67] = ACTIONS(33),
    [aux_sym_register_token68] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_constant_numeric] = ACTIONS(33),
    [aux_sym_constant_charstr_token1] = ACTIONS(33),
    [aux_sym_constant_charstr_token2] = ACTIONS(33),
    [aux_sym_constant_charstr_token3] = ACTIONS(33),
    [sym_constant_floatpt] = ACTIONS(33),
    [aux_sym_known_instruction_token1] = ACTIONS(35),
    [aux_sym_known_instruction_token2] = ACTIONS(35),
    [aux_sym_known_instruction_token3] = ACTIONS(35),
    [aux_sym_known_instruction_token4] = ACTIONS(35),
    [anon_sym_SEMI] = ACTIONS(11),
    [aux_sym_word_token1] = ACTIONS(37),
  },
  [5] = {
    [sym_operand] = STATE(27),
    [sym_register] = STATE(23),
    [sym_effective_address] = STATE(23),
    [sym_constant] = STATE(23),
    [sym_constant_charstr] = STATE(22),
    [sym_comment] = STATE(5),
    [sym_word] = STATE(23),
    [aux_sym_register_token1] = ACTIONS(17),
    [aux_sym_register_token2] = ACTIONS(17),
    [aux_sym_register_token3] = ACTIONS(17),
    [aux_sym_register_token4] = ACTIONS(17),
    [aux_sym_register_token5] = ACTIONS(17),
    [aux_sym_register_token6] = ACTIONS(17),
    [aux_sym_register_token7] = ACTIONS(17),
    [aux_sym_register_token8] = ACTIONS(17),
    [aux_sym_register_token9] = ACTIONS(17),
    [aux_sym_register_token10] = ACTIONS(17),
    [aux_sym_register_token11] = ACTIONS(17),
    [aux_sym_register_token12] = ACTIONS(17),
    [aux_sym_register_token13] = ACTIONS(40),
    [aux_sym_register_token14] = ACTIONS(40),
    [aux_sym_register_token15] = ACTIONS(40),
    [aux_sym_register_token16] = ACTIONS(40),
    [aux_sym_register_token17] = ACTIONS(40),
    [aux_sym_register_token18] = ACTIONS(40),
    [aux_sym_register_token19] = ACTIONS(40),
    [aux_sym_register_token20] = ACTIONS(40),
    [aux_sym_register_token21] = ACTIONS(17),
    [aux_sym_register_token22] = ACTIONS(17),
    [aux_sym_register_token23] = ACTIONS(17),
    [aux_sym_register_token24] = ACTIONS(17),
    [aux_sym_register_token25] = ACTIONS(17),
    [aux_sym_register_token26] = ACTIONS(17),
    [aux_sym_register_token27] = ACTIONS(17),
    [aux_sym_register_token28] = ACTIONS(17),
    [aux_sym_register_token29] = ACTIONS(40),
    [aux_sym_register_token30] = ACTIONS(40),
    [aux_sym_register_token31] = ACTIONS(40),
    [aux_sym_register_token32] = ACTIONS(40),
    [aux_sym_register_token33] = ACTIONS(40),
    [aux_sym_register_token34] = ACTIONS(40),
    [aux_sym_register_token35] = ACTIONS(40),
    [aux_sym_register_token36] = ACTIONS(40),
    [aux_sym_register_token37] = ACTIONS(17),
    [aux_sym_register_token38] = ACTIONS(17),
    [aux_sym_register_token39] = ACTIONS(17),
    [aux_sym_register_token40] = ACTIONS(17),
    [aux_sym_register_token41] = ACTIONS(17),
    [aux_sym_register_token42] = ACTIONS(17),
    [aux_sym_register_token43] = ACTIONS(17),
    [aux_sym_register_token44] = ACTIONS(17),
    [aux_sym_register_token45] = ACTIONS(40),
    [aux_sym_register_token46] = ACTIONS(40),
    [aux_sym_register_token47] = ACTIONS(40),
    [aux_sym_register_token48] = ACTIONS(40),
    [aux_sym_register_token49] = ACTIONS(40),
    [aux_sym_register_token50] = ACTIONS(40),
    [aux_sym_register_token51] = ACTIONS(40),
    [aux_sym_register_token52] = ACTIONS(40),
    [aux_sym_register_token53] = ACTIONS(17),
    [aux_sym_register_token54] = ACTIONS(17),
    [aux_sym_register_token55] = ACTIONS(17),
    [aux_sym_register_token56] = ACTIONS(17),
    [aux_sym_register_token57] = ACTIONS(17),
    [aux_sym_register_token58] = ACTIONS(17),
    [aux_sym_register_token59] = ACTIONS(17),
    [aux_sym_register_token60] = ACTIONS(17),
    [aux_sym_register_token61] = ACTIONS(17),
    [aux_sym_register_token62] = ACTIONS(17),
    [aux_sym_register_token63] = ACTIONS(17),
    [aux_sym_register_token64] = ACTIONS(17),
    [aux_sym_register_token65] = ACTIONS(17),
    [aux_sym_register_token66] = ACTIONS(17),
    [aux_sym_register_token67] = ACTIONS(17),
    [aux_sym_register_token68] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(42),
    [sym_constant_numeric] = ACTIONS(21),
    [aux_sym_constant_charstr_token1] = ACTIONS(44),
    [aux_sym_constant_charstr_token2] = ACTIONS(44),
    [aux_sym_constant_charstr_token3] = ACTIONS(44),
    [sym_constant_floatpt] = ACTIONS(46),
    [anon_sym_SEMI] = ACTIONS(3),
    [aux_sym_word_token1] = ACTIONS(13),
  },
  [6] = {
    [sym_comment] = STATE(6),
    [anon_sym_LF] = ACTIONS(48),
    [aux_sym_register_token1] = ACTIONS(50),
    [aux_sym_register_token2] = ACTIONS(50),
    [aux_sym_register_token3] = ACTIONS(50),
    [aux_sym_register_token4] = ACTIONS(50),
    [aux_sym_register_token5] = ACTIONS(50),
    [aux_sym_register_token6] = ACTIONS(50),
    [aux_sym_register_token7] = ACTIONS(50),
    [aux_sym_register_token8] = ACTIONS(50),
    [aux_sym_register_token9] = ACTIONS(50),
    [aux_sym_register_token10] = ACTIONS(50),
    [aux_sym_register_token11] = ACTIONS(50),
    [aux_sym_register_token12] = ACTIONS(50),
    [aux_sym_register_token13] = ACTIONS(50),
    [aux_sym_register_token14] = ACTIONS(50),
    [aux_sym_register_token15] = ACTIONS(50),
    [aux_sym_register_token16] = ACTIONS(50),
    [aux_sym_register_token17] = ACTIONS(50),
    [aux_sym_register_token18] = ACTIONS(50),
    [aux_sym_register_token19] = ACTIONS(50),
    [aux_sym_register_token20] = ACTIONS(50),
    [aux_sym_register_token21] = ACTIONS(50),
    [aux_sym_register_token22] = ACTIONS(50),
    [aux_sym_register_token23] = ACTIONS(50),
    [aux_sym_register_token24] = ACTIONS(50),
    [aux_sym_register_token25] = ACTIONS(50),
    [aux_sym_register_token26] = ACTIONS(50),
    [aux_sym_register_token27] = ACTIONS(50),
    [aux_sym_register_token28] = ACTIONS(50),
    [aux_sym_register_token29] = ACTIONS(50),
    [aux_sym_register_token30] = ACTIONS(50),
    [aux_sym_register_token31] = ACTIONS(50),
    [aux_sym_register_token32] = ACTIONS(50),
    [aux_sym_register_token33] = ACTIONS(50),
    [aux_sym_register_token34] = ACTIONS(50),
    [aux_sym_register_token35] = ACTIONS(50),
    [aux_sym_register_token36] = ACTIONS(50),
    [aux_sym_register_token37] = ACTIONS(50),
    [aux_sym_register_token38] = ACTIONS(50),
    [aux_sym_register_token39] = ACTIONS(50),
    [aux_sym_register_token40] = ACTIONS(50),
    [aux_sym_register_token41] = ACTIONS(50),
    [aux_sym_register_token42] = ACTIONS(50),
    [aux_sym_register_token43] = ACTIONS(50),
    [aux_sym_register_token44] = ACTIONS(50),
    [aux_sym_register_token45] = ACTIONS(50),
    [aux_sym_register_token46] = ACTIONS(50),
    [aux_sym_register_token47] = ACTIONS(50),
    [aux_sym_register_token48] = ACTIONS(50),
    [aux_sym_register_token49] = ACTIONS(50),
    [aux_sym_register_token50] = ACTIONS(50),
    [aux_sym_register_token51] = ACTIONS(50),
    [aux_sym_register_token52] = ACTIONS(50),
    [aux_sym_register_token53] = ACTIONS(50),
    [aux_sym_register_token54] = ACTIONS(50),
    [aux_sym_register_token55] = ACTIONS(50),
    [aux_sym_register_token56] = ACTIONS(50),
    [aux_sym_register_token57] = ACTIONS(50),
    [aux_sym_register_token58] = ACTIONS(50),
    [aux_sym_register_token59] = ACTIONS(50),
    [aux_sym_register_token60] = ACTIONS(50),
    [aux_sym_register_token61] = ACTIONS(50),
    [aux_sym_register_token62] = ACTIONS(50),
    [aux_sym_register_token63] = ACTIONS(50),
    [aux_sym_register_token64] = ACTIONS(50),
    [aux_sym_register_token65] = ACTIONS(50),
    [aux_sym_register_token66] = ACTIONS(50),
    [aux_sym_register_token67] = ACTIONS(50),
    [aux_sym_register_token68] = ACTIONS(50),
    [anon_sym_LBRACK] = ACTIONS(50),
    [sym_constant_numeric] = ACTIONS(50),
    [aux_sym_constant_charstr_token1] = ACTIONS(50),
    [aux_sym_constant_charstr_token2] = ACTIONS(50),
    [aux_sym_constant_charstr_token3] = ACTIONS(50),
    [sym_constant_floatpt] = ACTIONS(50),
    [anon_sym_SEMI] = ACTIONS(11),
    [aux_sym_word_token1] = ACTIONS(50),
  },
  [7] = {
    [sym_comment] = STATE(7),
    [anon_sym_LF] = ACTIONS(25),
    [aux_sym_register_token1] = ACTIONS(27),
    [aux_sym_register_token2] = ACTIONS(27),
    [aux_sym_register_token3] = ACTIONS(27),
    [aux_sym_register_token4] = ACTIONS(27),
    [aux_sym_register_token5] = ACTIONS(27),
    [aux_sym_register_token6] = ACTIONS(27),
    [aux_sym_register_token7] = ACTIONS(27),
    [aux_sym_register_token8] = ACTIONS(27),
    [aux_sym_register_token9] = ACTIONS(27),
    [aux_sym_register_token10] = ACTIONS(27),
    [aux_sym_register_token11] = ACTIONS(27),
    [aux_sym_register_token12] = ACTIONS(27),
    [aux_sym_register_token13] = ACTIONS(27),
    [aux_sym_register_token14] = ACTIONS(27),
    [aux_sym_register_token15] = ACTIONS(27),
    [aux_sym_register_token16] = ACTIONS(27),
    [aux_sym_register_token17] = ACTIONS(27),
    [aux_sym_register_token18] = ACTIONS(27),
    [aux_sym_register_token19] = ACTIONS(27),
    [aux_sym_register_token20] = ACTIONS(27),
    [aux_sym_register_token21] = ACTIONS(27),
    [aux_sym_register_token22] = ACTIONS(27),
    [aux_sym_register_token23] = ACTIONS(27),
    [aux_sym_register_token24] = ACTIONS(27),
    [aux_sym_register_token25] = ACTIONS(27),
    [aux_sym_register_token26] = ACTIONS(27),
    [aux_sym_register_token27] = ACTIONS(27),
    [aux_sym_register_token28] = ACTIONS(27),
    [aux_sym_register_token29] = ACTIONS(27),
    [aux_sym_register_token30] = ACTIONS(27),
    [aux_sym_register_token31] = ACTIONS(27),
    [aux_sym_register_token32] = ACTIONS(27),
    [aux_sym_register_token33] = ACTIONS(27),
    [aux_sym_register_token34] = ACTIONS(27),
    [aux_sym_register_token35] = ACTIONS(27),
    [aux_sym_register_token36] = ACTIONS(27),
    [aux_sym_register_token37] = ACTIONS(27),
    [aux_sym_register_token38] = ACTIONS(27),
    [aux_sym_register_token39] = ACTIONS(27),
    [aux_sym_register_token40] = ACTIONS(27),
    [aux_sym_register_token41] = ACTIONS(27),
    [aux_sym_register_token42] = ACTIONS(27),
    [aux_sym_register_token43] = ACTIONS(27),
    [aux_sym_register_token44] = ACTIONS(27),
    [aux_sym_register_token45] = ACTIONS(27),
    [aux_sym_register_token46] = ACTIONS(27),
    [aux_sym_register_token47] = ACTIONS(27),
    [aux_sym_register_token48] = ACTIONS(27),
    [aux_sym_register_token49] = ACTIONS(27),
    [aux_sym_register_token50] = ACTIONS(27),
    [aux_sym_register_token51] = ACTIONS(27),
    [aux_sym_register_token52] = ACTIONS(27),
    [aux_sym_register_token53] = ACTIONS(27),
    [aux_sym_register_token54] = ACTIONS(27),
    [aux_sym_register_token55] = ACTIONS(27),
    [aux_sym_register_token56] = ACTIONS(27),
    [aux_sym_register_token57] = ACTIONS(27),
    [aux_sym_register_token58] = ACTIONS(27),
    [aux_sym_register_token59] = ACTIONS(27),
    [aux_sym_register_token60] = ACTIONS(27),
    [aux_sym_register_token61] = ACTIONS(27),
    [aux_sym_register_token62] = ACTIONS(27),
    [aux_sym_register_token63] = ACTIONS(27),
    [aux_sym_register_token64] = ACTIONS(27),
    [aux_sym_register_token65] = ACTIONS(27),
    [aux_sym_register_token66] = ACTIONS(27),
    [aux_sym_register_token67] = ACTIONS(27),
    [aux_sym_register_token68] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_constant_numeric] = ACTIONS(27),
    [aux_sym_constant_charstr_token1] = ACTIONS(27),
    [aux_sym_constant_charstr_token2] = ACTIONS(27),
    [aux_sym_constant_charstr_token3] = ACTIONS(27),
    [sym_constant_floatpt] = ACTIONS(27),
    [anon_sym_SEMI] = ACTIONS(11),
    [aux_sym_word_token1] = ACTIONS(27),
  },
  [8] = {
    [sym_comment] = STATE(8),
    [anon_sym_LF] = ACTIONS(29),
    [aux_sym_register_token1] = ACTIONS(33),
    [aux_sym_register_token2] = ACTIONS(33),
    [aux_sym_register_token3] = ACTIONS(33),
    [aux_sym_register_token4] = ACTIONS(33),
    [aux_sym_register_token5] = ACTIONS(33),
    [aux_sym_register_token6] = ACTIONS(33),
    [aux_sym_register_token7] = ACTIONS(33),
    [aux_sym_register_token8] = ACTIONS(33),
    [aux_sym_register_token9] = ACTIONS(33),
    [aux_sym_register_token10] = ACTIONS(33),
    [aux_sym_register_token11] = ACTIONS(33),
    [aux_sym_register_token12] = ACTIONS(33),
    [aux_sym_register_token13] = ACTIONS(33),
    [aux_sym_register_token14] = ACTIONS(33),
    [aux_sym_register_token15] = ACTIONS(33),
    [aux_sym_register_token16] = ACTIONS(33),
    [aux_sym_register_token17] = ACTIONS(33),
    [aux_sym_register_token18] = ACTIONS(33),
    [aux_sym_register_token19] = ACTIONS(33),
    [aux_sym_register_token20] = ACTIONS(33),
    [aux_sym_register_token21] = ACTIONS(33),
    [aux_sym_register_token22] = ACTIONS(33),
    [aux_sym_register_token23] = ACTIONS(33),
    [aux_sym_register_token24] = ACTIONS(33),
    [aux_sym_register_token25] = ACTIONS(33),
    [aux_sym_register_token26] = ACTIONS(33),
    [aux_sym_register_token27] = ACTIONS(33),
    [aux_sym_register_token28] = ACTIONS(33),
    [aux_sym_register_token29] = ACTIONS(33),
    [aux_sym_register_token30] = ACTIONS(33),
    [aux_sym_register_token31] = ACTIONS(33),
    [aux_sym_register_token32] = ACTIONS(33),
    [aux_sym_register_token33] = ACTIONS(33),
    [aux_sym_register_token34] = ACTIONS(33),
    [aux_sym_register_token35] = ACTIONS(33),
    [aux_sym_register_token36] = ACTIONS(33),
    [aux_sym_register_token37] = ACTIONS(33),
    [aux_sym_register_token38] = ACTIONS(33),
    [aux_sym_register_token39] = ACTIONS(33),
    [aux_sym_register_token40] = ACTIONS(33),
    [aux_sym_register_token41] = ACTIONS(33),
    [aux_sym_register_token42] = ACTIONS(33),
    [aux_sym_register_token43] = ACTIONS(33),
    [aux_sym_register_token44] = ACTIONS(33),
    [aux_sym_register_token45] = ACTIONS(33),
    [aux_sym_register_token46] = ACTIONS(33),
    [aux_sym_register_token47] = ACTIONS(33),
    [aux_sym_register_token48] = ACTIONS(33),
    [aux_sym_register_token49] = ACTIONS(33),
    [aux_sym_register_token50] = ACTIONS(33),
    [aux_sym_register_token51] = ACTIONS(33),
    [aux_sym_register_token52] = ACTIONS(33),
    [aux_sym_register_token53] = ACTIONS(33),
    [aux_sym_register_token54] = ACTIONS(33),
    [aux_sym_register_token55] = ACTIONS(33),
    [aux_sym_register_token56] = ACTIONS(33),
    [aux_sym_register_token57] = ACTIONS(33),
    [aux_sym_register_token58] = ACTIONS(33),
    [aux_sym_register_token59] = ACTIONS(33),
    [aux_sym_register_token60] = ACTIONS(33),
    [aux_sym_register_token61] = ACTIONS(33),
    [aux_sym_register_token62] = ACTIONS(33),
    [aux_sym_register_token63] = ACTIONS(33),
    [aux_sym_register_token64] = ACTIONS(33),
    [aux_sym_register_token65] = ACTIONS(33),
    [aux_sym_register_token66] = ACTIONS(33),
    [aux_sym_register_token67] = ACTIONS(33),
    [aux_sym_register_token68] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_constant_numeric] = ACTIONS(33),
    [aux_sym_constant_charstr_token1] = ACTIONS(33),
    [aux_sym_constant_charstr_token2] = ACTIONS(33),
    [aux_sym_constant_charstr_token3] = ACTIONS(33),
    [sym_constant_floatpt] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(11),
    [aux_sym_word_token1] = ACTIONS(33),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 1,
      anon_sym_LF,
    ACTIONS(60), 1,
      aux_sym_word_token1,
    STATE(4), 1,
      sym_word,
    STATE(11), 1,
      sym_label,
    STATE(13), 1,
      sym_line,
    STATE(34), 1,
      sym_instruction,
    STATE(2), 2,
      sym_known_instruction,
      sym_unknown_instruction,
    STATE(9), 2,
      sym_comment,
      aux_sym_source_repeat1,
    ACTIONS(57), 4,
      aux_sym_known_instruction_token1,
      aux_sym_known_instruction_token2,
      aux_sym_known_instruction_token3,
      aux_sym_known_instruction_token4,
  [39] = 12,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    ACTIONS(13), 1,
      aux_sym_word_token1,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_word,
    STATE(9), 1,
      aux_sym_source_repeat1,
    STATE(10), 1,
      sym_comment,
    STATE(11), 1,
      sym_label,
    STATE(13), 1,
      sym_line,
    STATE(34), 1,
      sym_instruction,
    STATE(2), 2,
      sym_known_instruction,
      sym_unknown_instruction,
    ACTIONS(9), 4,
      aux_sym_known_instruction_token1,
      aux_sym_known_instruction_token2,
      aux_sym_known_instruction_token3,
      aux_sym_known_instruction_token4,
  [80] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(65), 1,
      aux_sym_word_token1,
    STATE(8), 1,
      sym_word,
    STATE(11), 1,
      sym_comment,
    STATE(32), 1,
      sym_instruction,
    STATE(2), 2,
      sym_known_instruction,
      sym_unknown_instruction,
    ACTIONS(9), 4,
      aux_sym_known_instruction_token1,
      aux_sym_known_instruction_token2,
      aux_sym_known_instruction_token3,
      aux_sym_known_instruction_token4,
  [106] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(69), 1,
      aux_sym_word_token1,
    STATE(12), 1,
      sym_comment,
    STATE(31), 1,
      sym_word,
    ACTIONS(67), 6,
      aux_sym_effective_address_token1,
      aux_sym_effective_address_token2,
      aux_sym_effective_address_token3,
      aux_sym_effective_address_token4,
      aux_sym_effective_address_token5,
      aux_sym_effective_address_token6,
  [127] = 4,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    STATE(13), 1,
      sym_comment,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(73), 5,
      aux_sym_known_instruction_token1,
      aux_sym_known_instruction_token2,
      aux_sym_known_instruction_token3,
      aux_sym_known_instruction_token4,
      aux_sym_word_token1,
  [145] = 4,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    STATE(14), 1,
      sym_comment,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(77), 5,
      aux_sym_known_instruction_token1,
      aux_sym_known_instruction_token2,
      aux_sym_known_instruction_token3,
      aux_sym_known_instruction_token4,
      aux_sym_word_token1,
  [163] = 4,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    STATE(15), 1,
      sym_comment,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(81), 5,
      aux_sym_known_instruction_token1,
      aux_sym_known_instruction_token2,
      aux_sym_known_instruction_token3,
      aux_sym_known_instruction_token4,
      aux_sym_word_token1,
  [181] = 4,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    STATE(16), 1,
      sym_comment,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(85), 5,
      aux_sym_known_instruction_token1,
      aux_sym_known_instruction_token2,
      aux_sym_known_instruction_token3,
      aux_sym_known_instruction_token4,
      aux_sym_word_token1,
  [199] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(17), 1,
      sym_comment,
    ACTIONS(87), 5,
      aux_sym_known_instruction_token1,
      aux_sym_known_instruction_token2,
      aux_sym_known_instruction_token3,
      aux_sym_known_instruction_token4,
      aux_sym_word_token1,
  [213] = 4,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    ACTIONS(89), 1,
      anon_sym_LF,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    STATE(18), 2,
      sym_comment,
      aux_sym_operands_repeat1,
  [227] = 5,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    ACTIONS(94), 1,
      anon_sym_LF,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym_operands_repeat1,
    STATE(19), 1,
      sym_comment,
  [243] = 5,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    ACTIONS(98), 1,
      anon_sym_LF,
    STATE(19), 1,
      aux_sym_operands_repeat1,
    STATE(20), 1,
      sym_comment,
  [259] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(100), 1,
      aux_sym_word_token1,
    STATE(21), 1,
      sym_comment,
    STATE(33), 1,
      sym_word,
  [272] = 4,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    ACTIONS(102), 1,
      anon_sym_LF,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    STATE(22), 1,
      sym_comment,
  [285] = 4,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    ACTIONS(106), 1,
      anon_sym_LF,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    STATE(23), 1,
      sym_comment,
  [298] = 4,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    ACTIONS(110), 1,
      anon_sym_LF,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      sym_comment,
  [311] = 4,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    ACTIONS(114), 1,
      anon_sym_LF,
    ACTIONS(116), 1,
      anon_sym_COMMA,
    STATE(25), 1,
      sym_comment,
  [324] = 4,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    ACTIONS(118), 1,
      anon_sym_LF,
    ACTIONS(120), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      sym_comment,
  [337] = 4,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    ACTIONS(89), 1,
      anon_sym_LF,
    ACTIONS(122), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      sym_comment,
  [350] = 4,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    ACTIONS(124), 1,
      anon_sym_LF,
    ACTIONS(126), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      sym_comment,
  [363] = 3,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    ACTIONS(128), 1,
      anon_sym_LF,
    STATE(29), 1,
      sym_comment,
  [373] = 3,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    ACTIONS(130), 1,
      aux_sym_comment_token1,
    STATE(30), 1,
      sym_comment,
  [383] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(132), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      sym_comment,
  [393] = 3,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    ACTIONS(134), 1,
      anon_sym_LF,
    STATE(32), 1,
      sym_comment,
  [403] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(136), 1,
      anon_sym_RBRACK,
    STATE(33), 1,
      sym_comment,
  [413] = 3,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    ACTIONS(138), 1,
      anon_sym_LF,
    STATE(34), 1,
      sym_comment,
  [423] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    STATE(35), 1,
      sym_comment,
  [433] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(25), 1,
      anon_sym_RBRACK,
    STATE(36), 1,
      sym_comment,
  [443] = 1,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 39,
  [SMALL_STATE(11)] = 80,
  [SMALL_STATE(12)] = 106,
  [SMALL_STATE(13)] = 127,
  [SMALL_STATE(14)] = 145,
  [SMALL_STATE(15)] = 163,
  [SMALL_STATE(16)] = 181,
  [SMALL_STATE(17)] = 199,
  [SMALL_STATE(18)] = 213,
  [SMALL_STATE(19)] = 227,
  [SMALL_STATE(20)] = 243,
  [SMALL_STATE(21)] = 259,
  [SMALL_STATE(22)] = 272,
  [SMALL_STATE(23)] = 285,
  [SMALL_STATE(24)] = 298,
  [SMALL_STATE(25)] = 311,
  [SMALL_STATE(26)] = 324,
  [SMALL_STATE(27)] = 337,
  [SMALL_STATE(28)] = 350,
  [SMALL_STATE(29)] = 363,
  [SMALL_STATE(30)] = 373,
  [SMALL_STATE(31)] = 383,
  [SMALL_STATE(32)] = 393,
  [SMALL_STATE(33)] = 403,
  [SMALL_STATE(34)] = 413,
  [SMALL_STATE(35)] = 423,
  [SMALL_STATE(36)] = 433,
  [SMALL_STATE(37)] = 443,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unknown_instruction, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unknown_instruction, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_label, 1), REDUCE(sym_unknown_instruction, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_known_instruction, 1),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_known_instruction, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(14),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(6),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2), SHIFT_REPEAT(5),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_charstr, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant_charstr, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effective_address, 3),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_effective_address, 3),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effective_address, 4),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_effective_address, 4),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [140] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_nasm(void) {
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
