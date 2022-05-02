#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 40
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 109
#define ALIAS_COUNT 0
#define TOKEN_COUNT 92
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_source_file_token1 = 1,
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
  sym_source_file = 92,
  sym_source_line = 93,
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
  sym_expression = 106,
  aux_sym_source_file_repeat1 = 107,
  aux_sym_operands_repeat1 = 108,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_file_token1] = "source_file_token1",
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
  [sym_source_file] = "source_file",
  [sym_source_line] = "source_line",
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
  [sym_expression] = "expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_operands_repeat1] = "operands_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_file_token1] = aux_sym_source_file_token1,
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
  [sym_source_file] = sym_source_file,
  [sym_source_line] = sym_source_line,
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
  [sym_expression] = sym_expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_operands_repeat1] = aux_sym_operands_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_token1] = {
    .visible = false,
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_source_line] = {
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
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
      if (eof) ADVANCE(31);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == ',') ADVANCE(36);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == ';') ADVANCE(122);
      if (lookahead == '[') ADVANCE(105);
      if (lookahead == '\\') SKIP(27)
      if (lookahead == ']') ADVANCE(112);
      if (lookahead == '`') ADVANCE(25);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(131);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(143);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(145);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(146);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(129);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(159);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(160);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(162);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(127);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(148);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '?' ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ',') ADVANCE(36);
      if (lookahead == ';') ADVANCE(122);
      if (lookahead == '\\') SKIP(3)
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(159);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(160);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(181);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(2)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(18)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '\r') SKIP(4)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(20)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '\r') SKIP(6)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(19)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '\r') SKIP(8)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(23)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '\r') SKIP(10)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(24)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '\r') SKIP(12)
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(125);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ';') ADVANCE(123);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(125);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(125);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(124);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == ';') ADVANCE(122);
      if (lookahead == '[') ADVANCE(105);
      if (lookahead == '\\') SKIP(5)
      if (lookahead == '`') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(18)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(142);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(144);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(145);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(147);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(129);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(128);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '?' ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '\r') ADVANCE(19);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == ',') ADVANCE(36);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == ';') ADVANCE(122);
      if (lookahead == '[') ADVANCE(105);
      if (lookahead == '\\') SKIP(9)
      if (lookahead == '`') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(19)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(135);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(144);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(145);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(147);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(129);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(159);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(160);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(128);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '?' ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == ';') ADVANCE(122);
      if (lookahead == '[') ADVANCE(105);
      if (lookahead == '\\') SKIP(7)
      if (lookahead == '`') ADVANCE(25);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(142);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(144);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(145);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(147);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(129);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(128);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '?' ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == ';') ADVANCE(122);
      if (lookahead == '\\') SKIP(11)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(132);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(180);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(175);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(162);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(140);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '?' ||
          ('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 24:
      if (lookahead == ';') ADVANCE(122);
      if (lookahead == '\\') SKIP(13)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 25:
      if (lookahead == '`') ADVANCE(116);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (eof) ADVANCE(31);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 27:
      if (eof) ADVANCE(31);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(26)
      END_STATE();
    case 28:
      if (eof) ADVANCE(31);
      if (lookahead == '\n') SKIP(30)
      END_STATE();
    case 29:
      if (eof) ADVANCE(31);
      if (lookahead == '\n') SKIP(30)
      if (lookahead == '\r') SKIP(28)
      END_STATE();
    case 30:
      if (eof) ADVANCE(31);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ',') ADVANCE(36);
      if (lookahead == ';') ADVANCE(122);
      if (lookahead == '\\') SKIP(29)
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(30)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(159);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(160);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(181);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\r') ADVANCE(18);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '\r') ADVANCE(19);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_register_token1);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_register_token2);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_register_token3);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_register_token4);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_register_token5);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_register_token6);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_register_token7);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_register_token8);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_register_token9);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_register_token10);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_register_token11);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_register_token12);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_register_token13);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_register_token14);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_register_token15);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_register_token16);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_register_token17);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_register_token18);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_register_token19);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_register_token20);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_register_token21);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_register_token22);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_register_token23);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_register_token24);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_register_token25);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(45);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_register_token26);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(46);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_register_token27);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(47);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_register_token28);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(48);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_register_token29);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_register_token30);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_register_token31);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_register_token32);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_register_token33);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_register_token34);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_register_token35);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_register_token36);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_register_token37);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_register_token38);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_register_token39);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_register_token40);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_register_token41);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_register_token42);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_register_token43);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_register_token44);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_register_token45);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_register_token46);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_register_token47);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_register_token48);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_register_token49);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_register_token50);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_register_token51);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_register_token52);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_register_token53);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_register_token54);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_register_token55);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_register_token56);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_register_token57);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_register_token58);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_register_token59);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_register_token60);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_register_token61);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(49);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(81);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(65);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_register_token62);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(50);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(82);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(66);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_register_token63);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(51);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(83);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(67);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_register_token64);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(52);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(84);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(68);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_register_token65);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(53);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(85);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(69);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_register_token66);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(54);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(86);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(70);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_register_token67);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(55);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(87);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(71);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_register_token68);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(56);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(88);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(72);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_effective_address_token1);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_effective_address_token2);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_effective_address_token3);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_effective_address_token4);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_effective_address_token5);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_effective_address_token6);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_constant_numeric);
      if (lookahead == '.') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_constant_charstr_token1);
      if (lookahead == '"') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(21);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_constant_charstr_token2);
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(22);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_constant_charstr_token3);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_constant_floatpt);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_known_instruction_token1);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_known_instruction_token2);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_known_instruction_token3);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_known_instruction_token4);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(124);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(125);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ';') ADVANCE(123);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '0') ADVANCE(99);
      if (lookahead == '1') ADVANCE(100);
      if (lookahead == '2') ADVANCE(101);
      if (lookahead == '3') ADVANCE(102);
      if (lookahead == '4') ADVANCE(103);
      if (lookahead == '5') ADVANCE(104);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('6' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '1') ADVANCE(126);
      if (lookahead == '8') ADVANCE(97);
      if (lookahead == '9') ADVANCE(98);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(178);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(165);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(179);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(152);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(155);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(153);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '7') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '1') ADVANCE(126);
      if (lookahead == '8') ADVANCE(97);
      if (lookahead == '9') ADVANCE(98);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(178);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(165);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(179);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(152);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(153);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '7') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(176);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(164);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(177);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(150);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(151);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(158);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(169);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(137);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(38);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(37);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(57);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(169);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(120);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(130);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(137);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(38);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(37);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(57);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(137);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(119);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(107);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(108);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(155);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(38);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(37);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(57);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(44);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(43);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(62);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(60);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(172);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(44);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(43);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(62);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(60);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(40);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(39);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(58);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(42);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(64);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(41);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(163);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(59);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(42);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(64);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(41);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(59);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(63);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(61);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(171);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(63);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(61);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(80);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(75);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(79);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(77);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(96);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(91);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(95);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(93);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(173);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(110);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(154);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(121);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(157);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(133);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(174);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(167);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(170);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(168);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(78);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(76);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(94);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(92);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(156);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(138);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(139);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(111);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(166);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(134);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(141);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(109);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(118);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(163);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(73);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(74);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(89);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(90);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(172);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(171);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(182);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 30},
  [2] = {.lex_state = 18},
  [3] = {.lex_state = 20},
  [4] = {.lex_state = 19},
  [5] = {.lex_state = 19},
  [6] = {.lex_state = 18},
  [7] = {.lex_state = 18},
  [8] = {.lex_state = 18},
  [9] = {.lex_state = 30},
  [10] = {.lex_state = 30},
  [11] = {.lex_state = 30},
  [12] = {.lex_state = 23},
  [13] = {.lex_state = 30},
  [14] = {.lex_state = 30},
  [15] = {.lex_state = 30},
  [16] = {.lex_state = 30},
  [17] = {.lex_state = 30},
  [18] = {.lex_state = 30},
  [19] = {.lex_state = 30},
  [20] = {.lex_state = 30},
  [21] = {.lex_state = 24},
  [22] = {.lex_state = 30},
  [23] = {.lex_state = 30},
  [24] = {.lex_state = 30},
  [25] = {.lex_state = 30},
  [26] = {.lex_state = 30},
  [27] = {.lex_state = 30},
  [28] = {.lex_state = 30},
  [29] = {.lex_state = 30},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 30},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 30},
  [37] = {.lex_state = 30},
  [38] = {.lex_state = 0},
  [39] = {(TSStateId)(-1)},
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
    [sym_source_file] = STATE(30),
    [sym_source_line] = STATE(13),
    [sym_label] = STATE(11),
    [sym_instruction] = STATE(36),
    [sym_known_instruction] = STATE(2),
    [sym_unknown_instruction] = STATE(2),
    [sym_comment] = STATE(1),
    [sym_word] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_source_file_token1] = ACTIONS(7),
    [aux_sym_known_instruction_token1] = ACTIONS(9),
    [aux_sym_known_instruction_token2] = ACTIONS(9),
    [aux_sym_known_instruction_token3] = ACTIONS(9),
    [aux_sym_known_instruction_token4] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(11),
    [aux_sym_word_token1] = ACTIONS(13),
  },
  [2] = {
    [sym_operands] = STATE(37),
    [sym_operand] = STATE(19),
    [sym_register] = STATE(26),
    [sym_effective_address] = STATE(26),
    [sym_constant] = STATE(26),
    [sym_constant_charstr] = STATE(28),
    [sym_comment] = STATE(2),
    [sym_word] = STATE(23),
    [sym_expression] = STATE(26),
    [aux_sym_source_file_token1] = ACTIONS(15),
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
    [sym_operand] = STATE(22),
    [sym_register] = STATE(26),
    [sym_effective_address] = STATE(26),
    [sym_constant] = STATE(26),
    [sym_constant_charstr] = STATE(28),
    [sym_comment] = STATE(3),
    [sym_word] = STATE(23),
    [sym_expression] = STATE(26),
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
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_constant_numeric] = ACTIONS(21),
    [aux_sym_constant_charstr_token1] = ACTIONS(27),
    [aux_sym_constant_charstr_token2] = ACTIONS(27),
    [aux_sym_constant_charstr_token3] = ACTIONS(27),
    [sym_constant_floatpt] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(3),
    [aux_sym_word_token1] = ACTIONS(13),
  },
  [4] = {
    [sym_comment] = STATE(4),
    [aux_sym_source_file_token1] = ACTIONS(31),
    [anon_sym_COLON] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(33),
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
    [aux_sym_known_instruction_token1] = ACTIONS(33),
    [aux_sym_known_instruction_token2] = ACTIONS(33),
    [aux_sym_known_instruction_token3] = ACTIONS(33),
    [aux_sym_known_instruction_token4] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(11),
    [aux_sym_word_token1] = ACTIONS(33),
  },
  [5] = {
    [sym_comment] = STATE(5),
    [aux_sym_source_file_token1] = ACTIONS(35),
    [anon_sym_COLON] = ACTIONS(38),
    [aux_sym_register_token1] = ACTIONS(40),
    [aux_sym_register_token2] = ACTIONS(40),
    [aux_sym_register_token3] = ACTIONS(40),
    [aux_sym_register_token4] = ACTIONS(40),
    [aux_sym_register_token5] = ACTIONS(40),
    [aux_sym_register_token6] = ACTIONS(40),
    [aux_sym_register_token7] = ACTIONS(40),
    [aux_sym_register_token8] = ACTIONS(40),
    [aux_sym_register_token9] = ACTIONS(40),
    [aux_sym_register_token10] = ACTIONS(40),
    [aux_sym_register_token11] = ACTIONS(40),
    [aux_sym_register_token12] = ACTIONS(40),
    [aux_sym_register_token13] = ACTIONS(40),
    [aux_sym_register_token14] = ACTIONS(40),
    [aux_sym_register_token15] = ACTIONS(40),
    [aux_sym_register_token16] = ACTIONS(40),
    [aux_sym_register_token17] = ACTIONS(40),
    [aux_sym_register_token18] = ACTIONS(40),
    [aux_sym_register_token19] = ACTIONS(40),
    [aux_sym_register_token20] = ACTIONS(40),
    [aux_sym_register_token21] = ACTIONS(40),
    [aux_sym_register_token22] = ACTIONS(40),
    [aux_sym_register_token23] = ACTIONS(40),
    [aux_sym_register_token24] = ACTIONS(40),
    [aux_sym_register_token25] = ACTIONS(40),
    [aux_sym_register_token26] = ACTIONS(40),
    [aux_sym_register_token27] = ACTIONS(40),
    [aux_sym_register_token28] = ACTIONS(40),
    [aux_sym_register_token29] = ACTIONS(40),
    [aux_sym_register_token30] = ACTIONS(40),
    [aux_sym_register_token31] = ACTIONS(40),
    [aux_sym_register_token32] = ACTIONS(40),
    [aux_sym_register_token33] = ACTIONS(40),
    [aux_sym_register_token34] = ACTIONS(40),
    [aux_sym_register_token35] = ACTIONS(40),
    [aux_sym_register_token36] = ACTIONS(40),
    [aux_sym_register_token37] = ACTIONS(40),
    [aux_sym_register_token38] = ACTIONS(40),
    [aux_sym_register_token39] = ACTIONS(40),
    [aux_sym_register_token40] = ACTIONS(40),
    [aux_sym_register_token41] = ACTIONS(40),
    [aux_sym_register_token42] = ACTIONS(40),
    [aux_sym_register_token43] = ACTIONS(40),
    [aux_sym_register_token44] = ACTIONS(40),
    [aux_sym_register_token45] = ACTIONS(40),
    [aux_sym_register_token46] = ACTIONS(40),
    [aux_sym_register_token47] = ACTIONS(40),
    [aux_sym_register_token48] = ACTIONS(40),
    [aux_sym_register_token49] = ACTIONS(40),
    [aux_sym_register_token50] = ACTIONS(40),
    [aux_sym_register_token51] = ACTIONS(40),
    [aux_sym_register_token52] = ACTIONS(40),
    [aux_sym_register_token53] = ACTIONS(40),
    [aux_sym_register_token54] = ACTIONS(40),
    [aux_sym_register_token55] = ACTIONS(40),
    [aux_sym_register_token56] = ACTIONS(40),
    [aux_sym_register_token57] = ACTIONS(40),
    [aux_sym_register_token58] = ACTIONS(40),
    [aux_sym_register_token59] = ACTIONS(40),
    [aux_sym_register_token60] = ACTIONS(40),
    [aux_sym_register_token61] = ACTIONS(40),
    [aux_sym_register_token62] = ACTIONS(40),
    [aux_sym_register_token63] = ACTIONS(40),
    [aux_sym_register_token64] = ACTIONS(40),
    [aux_sym_register_token65] = ACTIONS(40),
    [aux_sym_register_token66] = ACTIONS(40),
    [aux_sym_register_token67] = ACTIONS(40),
    [aux_sym_register_token68] = ACTIONS(40),
    [anon_sym_LBRACK] = ACTIONS(40),
    [sym_constant_numeric] = ACTIONS(40),
    [aux_sym_constant_charstr_token1] = ACTIONS(40),
    [aux_sym_constant_charstr_token2] = ACTIONS(40),
    [aux_sym_constant_charstr_token3] = ACTIONS(40),
    [sym_constant_floatpt] = ACTIONS(40),
    [aux_sym_known_instruction_token1] = ACTIONS(42),
    [aux_sym_known_instruction_token2] = ACTIONS(42),
    [aux_sym_known_instruction_token3] = ACTIONS(42),
    [aux_sym_known_instruction_token4] = ACTIONS(42),
    [anon_sym_SEMI] = ACTIONS(11),
    [aux_sym_word_token1] = ACTIONS(44),
  },
  [6] = {
    [sym_comment] = STATE(6),
    [aux_sym_source_file_token1] = ACTIONS(47),
    [aux_sym_register_token1] = ACTIONS(49),
    [aux_sym_register_token2] = ACTIONS(49),
    [aux_sym_register_token3] = ACTIONS(49),
    [aux_sym_register_token4] = ACTIONS(49),
    [aux_sym_register_token5] = ACTIONS(49),
    [aux_sym_register_token6] = ACTIONS(49),
    [aux_sym_register_token7] = ACTIONS(49),
    [aux_sym_register_token8] = ACTIONS(49),
    [aux_sym_register_token9] = ACTIONS(49),
    [aux_sym_register_token10] = ACTIONS(49),
    [aux_sym_register_token11] = ACTIONS(49),
    [aux_sym_register_token12] = ACTIONS(49),
    [aux_sym_register_token13] = ACTIONS(49),
    [aux_sym_register_token14] = ACTIONS(49),
    [aux_sym_register_token15] = ACTIONS(49),
    [aux_sym_register_token16] = ACTIONS(49),
    [aux_sym_register_token17] = ACTIONS(49),
    [aux_sym_register_token18] = ACTIONS(49),
    [aux_sym_register_token19] = ACTIONS(49),
    [aux_sym_register_token20] = ACTIONS(49),
    [aux_sym_register_token21] = ACTIONS(49),
    [aux_sym_register_token22] = ACTIONS(49),
    [aux_sym_register_token23] = ACTIONS(49),
    [aux_sym_register_token24] = ACTIONS(49),
    [aux_sym_register_token25] = ACTIONS(49),
    [aux_sym_register_token26] = ACTIONS(49),
    [aux_sym_register_token27] = ACTIONS(49),
    [aux_sym_register_token28] = ACTIONS(49),
    [aux_sym_register_token29] = ACTIONS(49),
    [aux_sym_register_token30] = ACTIONS(49),
    [aux_sym_register_token31] = ACTIONS(49),
    [aux_sym_register_token32] = ACTIONS(49),
    [aux_sym_register_token33] = ACTIONS(49),
    [aux_sym_register_token34] = ACTIONS(49),
    [aux_sym_register_token35] = ACTIONS(49),
    [aux_sym_register_token36] = ACTIONS(49),
    [aux_sym_register_token37] = ACTIONS(49),
    [aux_sym_register_token38] = ACTIONS(49),
    [aux_sym_register_token39] = ACTIONS(49),
    [aux_sym_register_token40] = ACTIONS(49),
    [aux_sym_register_token41] = ACTIONS(49),
    [aux_sym_register_token42] = ACTIONS(49),
    [aux_sym_register_token43] = ACTIONS(49),
    [aux_sym_register_token44] = ACTIONS(49),
    [aux_sym_register_token45] = ACTIONS(49),
    [aux_sym_register_token46] = ACTIONS(49),
    [aux_sym_register_token47] = ACTIONS(49),
    [aux_sym_register_token48] = ACTIONS(49),
    [aux_sym_register_token49] = ACTIONS(49),
    [aux_sym_register_token50] = ACTIONS(49),
    [aux_sym_register_token51] = ACTIONS(49),
    [aux_sym_register_token52] = ACTIONS(49),
    [aux_sym_register_token53] = ACTIONS(49),
    [aux_sym_register_token54] = ACTIONS(49),
    [aux_sym_register_token55] = ACTIONS(49),
    [aux_sym_register_token56] = ACTIONS(49),
    [aux_sym_register_token57] = ACTIONS(49),
    [aux_sym_register_token58] = ACTIONS(49),
    [aux_sym_register_token59] = ACTIONS(49),
    [aux_sym_register_token60] = ACTIONS(49),
    [aux_sym_register_token61] = ACTIONS(49),
    [aux_sym_register_token62] = ACTIONS(49),
    [aux_sym_register_token63] = ACTIONS(49),
    [aux_sym_register_token64] = ACTIONS(49),
    [aux_sym_register_token65] = ACTIONS(49),
    [aux_sym_register_token66] = ACTIONS(49),
    [aux_sym_register_token67] = ACTIONS(49),
    [aux_sym_register_token68] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(49),
    [sym_constant_numeric] = ACTIONS(49),
    [aux_sym_constant_charstr_token1] = ACTIONS(49),
    [aux_sym_constant_charstr_token2] = ACTIONS(49),
    [aux_sym_constant_charstr_token3] = ACTIONS(49),
    [sym_constant_floatpt] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(11),
    [aux_sym_word_token1] = ACTIONS(49),
  },
  [7] = {
    [sym_comment] = STATE(7),
    [aux_sym_source_file_token1] = ACTIONS(31),
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
  [8] = {
    [sym_comment] = STATE(8),
    [aux_sym_source_file_token1] = ACTIONS(51),
    [aux_sym_register_token1] = ACTIONS(40),
    [aux_sym_register_token2] = ACTIONS(40),
    [aux_sym_register_token3] = ACTIONS(40),
    [aux_sym_register_token4] = ACTIONS(40),
    [aux_sym_register_token5] = ACTIONS(40),
    [aux_sym_register_token6] = ACTIONS(40),
    [aux_sym_register_token7] = ACTIONS(40),
    [aux_sym_register_token8] = ACTIONS(40),
    [aux_sym_register_token9] = ACTIONS(40),
    [aux_sym_register_token10] = ACTIONS(40),
    [aux_sym_register_token11] = ACTIONS(40),
    [aux_sym_register_token12] = ACTIONS(40),
    [aux_sym_register_token13] = ACTIONS(40),
    [aux_sym_register_token14] = ACTIONS(40),
    [aux_sym_register_token15] = ACTIONS(40),
    [aux_sym_register_token16] = ACTIONS(40),
    [aux_sym_register_token17] = ACTIONS(40),
    [aux_sym_register_token18] = ACTIONS(40),
    [aux_sym_register_token19] = ACTIONS(40),
    [aux_sym_register_token20] = ACTIONS(40),
    [aux_sym_register_token21] = ACTIONS(40),
    [aux_sym_register_token22] = ACTIONS(40),
    [aux_sym_register_token23] = ACTIONS(40),
    [aux_sym_register_token24] = ACTIONS(40),
    [aux_sym_register_token25] = ACTIONS(40),
    [aux_sym_register_token26] = ACTIONS(40),
    [aux_sym_register_token27] = ACTIONS(40),
    [aux_sym_register_token28] = ACTIONS(40),
    [aux_sym_register_token29] = ACTIONS(40),
    [aux_sym_register_token30] = ACTIONS(40),
    [aux_sym_register_token31] = ACTIONS(40),
    [aux_sym_register_token32] = ACTIONS(40),
    [aux_sym_register_token33] = ACTIONS(40),
    [aux_sym_register_token34] = ACTIONS(40),
    [aux_sym_register_token35] = ACTIONS(40),
    [aux_sym_register_token36] = ACTIONS(40),
    [aux_sym_register_token37] = ACTIONS(40),
    [aux_sym_register_token38] = ACTIONS(40),
    [aux_sym_register_token39] = ACTIONS(40),
    [aux_sym_register_token40] = ACTIONS(40),
    [aux_sym_register_token41] = ACTIONS(40),
    [aux_sym_register_token42] = ACTIONS(40),
    [aux_sym_register_token43] = ACTIONS(40),
    [aux_sym_register_token44] = ACTIONS(40),
    [aux_sym_register_token45] = ACTIONS(40),
    [aux_sym_register_token46] = ACTIONS(40),
    [aux_sym_register_token47] = ACTIONS(40),
    [aux_sym_register_token48] = ACTIONS(40),
    [aux_sym_register_token49] = ACTIONS(40),
    [aux_sym_register_token50] = ACTIONS(40),
    [aux_sym_register_token51] = ACTIONS(40),
    [aux_sym_register_token52] = ACTIONS(40),
    [aux_sym_register_token53] = ACTIONS(40),
    [aux_sym_register_token54] = ACTIONS(40),
    [aux_sym_register_token55] = ACTIONS(40),
    [aux_sym_register_token56] = ACTIONS(40),
    [aux_sym_register_token57] = ACTIONS(40),
    [aux_sym_register_token58] = ACTIONS(40),
    [aux_sym_register_token59] = ACTIONS(40),
    [aux_sym_register_token60] = ACTIONS(40),
    [aux_sym_register_token61] = ACTIONS(40),
    [aux_sym_register_token62] = ACTIONS(40),
    [aux_sym_register_token63] = ACTIONS(40),
    [aux_sym_register_token64] = ACTIONS(40),
    [aux_sym_register_token65] = ACTIONS(40),
    [aux_sym_register_token66] = ACTIONS(40),
    [aux_sym_register_token67] = ACTIONS(40),
    [aux_sym_register_token68] = ACTIONS(40),
    [anon_sym_LBRACK] = ACTIONS(40),
    [sym_constant_numeric] = ACTIONS(40),
    [aux_sym_constant_charstr_token1] = ACTIONS(40),
    [aux_sym_constant_charstr_token2] = ACTIONS(40),
    [aux_sym_constant_charstr_token3] = ACTIONS(40),
    [sym_constant_floatpt] = ACTIONS(40),
    [anon_sym_SEMI] = ACTIONS(11),
    [aux_sym_word_token1] = ACTIONS(40),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(7), 1,
      aux_sym_source_file_token1,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    ACTIONS(13), 1,
      aux_sym_word_token1,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_word,
    STATE(9), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_source_file_repeat1,
    STATE(11), 1,
      sym_label,
    STATE(13), 1,
      sym_source_line,
    STATE(36), 1,
      sym_instruction,
    STATE(2), 2,
      sym_known_instruction,
      sym_unknown_instruction,
    ACTIONS(9), 4,
      aux_sym_known_instruction_token1,
      aux_sym_known_instruction_token2,
      aux_sym_known_instruction_token3,
      aux_sym_known_instruction_token4,
  [41] = 11,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 1,
      aux_sym_source_file_token1,
    ACTIONS(63), 1,
      aux_sym_word_token1,
    STATE(5), 1,
      sym_word,
    STATE(11), 1,
      sym_label,
    STATE(13), 1,
      sym_source_line,
    STATE(36), 1,
      sym_instruction,
    STATE(2), 2,
      sym_known_instruction,
      sym_unknown_instruction,
    STATE(10), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    ACTIONS(60), 4,
      aux_sym_known_instruction_token1,
      aux_sym_known_instruction_token2,
      aux_sym_known_instruction_token3,
      aux_sym_known_instruction_token4,
  [80] = 8,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    ACTIONS(66), 1,
      aux_sym_source_file_token1,
    ACTIONS(68), 1,
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
  [109] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(72), 1,
      aux_sym_word_token1,
    STATE(12), 1,
      sym_comment,
    STATE(33), 1,
      sym_expression,
    STATE(35), 1,
      sym_word,
    ACTIONS(70), 6,
      aux_sym_effective_address_token1,
      aux_sym_effective_address_token2,
      aux_sym_effective_address_token3,
      aux_sym_effective_address_token4,
      aux_sym_effective_address_token5,
      aux_sym_effective_address_token6,
  [133] = 4,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    STATE(13), 1,
      sym_comment,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(76), 5,
      aux_sym_known_instruction_token1,
      aux_sym_known_instruction_token2,
      aux_sym_known_instruction_token3,
      aux_sym_known_instruction_token4,
      aux_sym_word_token1,
  [151] = 4,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    STATE(14), 1,
      sym_comment,
    ACTIONS(78), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(80), 5,
      aux_sym_known_instruction_token1,
      aux_sym_known_instruction_token2,
      aux_sym_known_instruction_token3,
      aux_sym_known_instruction_token4,
      aux_sym_word_token1,
  [169] = 4,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    STATE(15), 1,
      sym_comment,
    ACTIONS(82), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(84), 5,
      aux_sym_known_instruction_token1,
      aux_sym_known_instruction_token2,
      aux_sym_known_instruction_token3,
      aux_sym_known_instruction_token4,
      aux_sym_word_token1,
  [187] = 4,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    STATE(16), 1,
      sym_comment,
    ACTIONS(86), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(88), 5,
      aux_sym_known_instruction_token1,
      aux_sym_known_instruction_token2,
      aux_sym_known_instruction_token3,
      aux_sym_known_instruction_token4,
      aux_sym_word_token1,
  [205] = 4,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    ACTIONS(90), 1,
      aux_sym_source_file_token1,
    STATE(17), 1,
      sym_comment,
    ACTIONS(92), 5,
      aux_sym_known_instruction_token1,
      aux_sym_known_instruction_token2,
      aux_sym_known_instruction_token3,
      aux_sym_known_instruction_token4,
      aux_sym_word_token1,
  [222] = 5,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    ACTIONS(94), 1,
      aux_sym_source_file_token1,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym_operands_repeat1,
  [238] = 5,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    ACTIONS(98), 1,
      aux_sym_source_file_token1,
    STATE(18), 1,
      aux_sym_operands_repeat1,
    STATE(19), 1,
      sym_comment,
  [254] = 4,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    ACTIONS(100), 1,
      aux_sym_source_file_token1,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    STATE(20), 2,
      sym_comment,
      aux_sym_operands_repeat1,
  [268] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(105), 1,
      aux_sym_word_token1,
    STATE(21), 1,
      sym_comment,
    STATE(34), 1,
      sym_expression,
    STATE(35), 1,
      sym_word,
  [284] = 4,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    ACTIONS(100), 1,
      aux_sym_source_file_token1,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    STATE(22), 1,
      sym_comment,
  [297] = 4,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    ACTIONS(109), 1,
      aux_sym_source_file_token1,
    ACTIONS(111), 1,
      anon_sym_COMMA,
    STATE(23), 1,
      sym_comment,
  [310] = 4,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    ACTIONS(113), 1,
      aux_sym_source_file_token1,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      sym_comment,
  [323] = 4,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    ACTIONS(117), 1,
      aux_sym_source_file_token1,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    STATE(25), 1,
      sym_comment,
  [336] = 4,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    ACTIONS(121), 1,
      aux_sym_source_file_token1,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      sym_comment,
  [349] = 4,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    ACTIONS(125), 1,
      aux_sym_source_file_token1,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      sym_comment,
  [362] = 4,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    ACTIONS(129), 1,
      aux_sym_source_file_token1,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      sym_comment,
  [375] = 4,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    ACTIONS(133), 1,
      aux_sym_source_file_token1,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      sym_comment,
  [388] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    STATE(30), 1,
      sym_comment,
  [398] = 3,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    ACTIONS(139), 1,
      aux_sym_comment_token1,
    STATE(31), 1,
      sym_comment,
  [408] = 3,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    ACTIONS(141), 1,
      aux_sym_source_file_token1,
    STATE(32), 1,
      sym_comment,
  [418] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(143), 1,
      anon_sym_RBRACK,
    STATE(33), 1,
      sym_comment,
  [428] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(145), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      sym_comment,
  [438] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(109), 1,
      anon_sym_RBRACK,
    STATE(35), 1,
      sym_comment,
  [448] = 3,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    ACTIONS(66), 1,
      aux_sym_source_file_token1,
    STATE(36), 1,
      sym_comment,
  [458] = 3,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    ACTIONS(147), 1,
      aux_sym_source_file_token1,
    STATE(37), 1,
      sym_comment,
  [468] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(31), 1,
      anon_sym_RBRACK,
    STATE(38), 1,
      sym_comment,
  [478] = 1,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 41,
  [SMALL_STATE(11)] = 80,
  [SMALL_STATE(12)] = 109,
  [SMALL_STATE(13)] = 133,
  [SMALL_STATE(14)] = 151,
  [SMALL_STATE(15)] = 169,
  [SMALL_STATE(16)] = 187,
  [SMALL_STATE(17)] = 205,
  [SMALL_STATE(18)] = 222,
  [SMALL_STATE(19)] = 238,
  [SMALL_STATE(20)] = 254,
  [SMALL_STATE(21)] = 268,
  [SMALL_STATE(22)] = 284,
  [SMALL_STATE(23)] = 297,
  [SMALL_STATE(24)] = 310,
  [SMALL_STATE(25)] = 323,
  [SMALL_STATE(26)] = 336,
  [SMALL_STATE(27)] = 349,
  [SMALL_STATE(28)] = 362,
  [SMALL_STATE(29)] = 375,
  [SMALL_STATE(30)] = 388,
  [SMALL_STATE(31)] = 398,
  [SMALL_STATE(32)] = 408,
  [SMALL_STATE(33)] = 418,
  [SMALL_STATE(34)] = 428,
  [SMALL_STATE(35)] = 438,
  [SMALL_STATE(36)] = 448,
  [SMALL_STATE(37)] = 458,
  [SMALL_STATE(38)] = 468,
  [SMALL_STATE(39)] = 478,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_label, 1), REDUCE(sym_unknown_instruction, 1),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unknown_instruction, 1),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_label, 1), REDUCE(sym_unknown_instruction, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_known_instruction, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_known_instruction, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unknown_instruction, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_line, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_source_line, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_line, 3),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_source_line, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_line, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_source_line, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2), SHIFT_REPEAT(3),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_charstr, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant_charstr, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effective_address, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_effective_address, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effective_address, 4),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_effective_address, 4),
  [137] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
