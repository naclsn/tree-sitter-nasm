#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 83
#define LARGE_STATE_COUNT 24
#define SYMBOL_COUNT 168
#define ALIAS_COUNT 0
#define TOKEN_COUNT 148
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_source_file_token1 = 1,
  anon_sym_COLON = 2,
  aux_sym_instruction_prefix_token1 = 3,
  aux_sym_instruction_prefix_token2 = 4,
  aux_sym_instruction_prefix_token3 = 5,
  aux_sym_instruction_prefix_token4 = 6,
  aux_sym_instruction_prefix_token5 = 7,
  aux_sym_instruction_prefix_token6 = 8,
  aux_sym_instruction_prefix_token7 = 9,
  aux_sym_instruction_prefix_token8 = 10,
  aux_sym_instruction_prefix_token9 = 11,
  aux_sym_instruction_prefix_token10 = 12,
  aux_sym_instruction_prefix_token11 = 13,
  aux_sym_instruction_prefix_token12 = 14,
  aux_sym_instruction_prefix_token13 = 15,
  aux_sym_instruction_prefix_token14 = 16,
  aux_sym_instruction_prefix_token15 = 17,
  aux_sym_instruction_prefix_token16 = 18,
  aux_sym_instruction_prefix_token17 = 19,
  aux_sym_instruction_prefix_token18 = 20,
  aux_sym_instruction_prefix_token19 = 21,
  aux_sym_instruction_prefix_token20 = 22,
  aux_sym_instruction_prefix_token21 = 23,
  aux_sym_instruction_prefix_token22 = 24,
  anon_sym_COMMA = 25,
  anon_sym_strict = 26,
  aux_sym_operand_prefix_token1 = 27,
  aux_sym_operand_prefix_token2 = 28,
  aux_sym_operand_prefix_token3 = 29,
  aux_sym_operand_prefix_token4 = 30,
  aux_sym_operand_prefix_token5 = 31,
  aux_sym_operand_prefix_token6 = 32,
  aux_sym_operand_prefix_token7 = 33,
  aux_sym_operand_prefix_token8 = 34,
  aux_sym_register_token1 = 35,
  aux_sym_register_token2 = 36,
  aux_sym_register_token3 = 37,
  aux_sym_register_token4 = 38,
  aux_sym_register_token5 = 39,
  aux_sym_register_token6 = 40,
  aux_sym_register_token7 = 41,
  aux_sym_register_token8 = 42,
  aux_sym_register_token9 = 43,
  aux_sym_register_token10 = 44,
  aux_sym_register_token11 = 45,
  aux_sym_register_token12 = 46,
  aux_sym_register_token13 = 47,
  aux_sym_register_token14 = 48,
  aux_sym_register_token15 = 49,
  aux_sym_register_token16 = 50,
  aux_sym_register_token17 = 51,
  aux_sym_register_token18 = 52,
  aux_sym_register_token19 = 53,
  aux_sym_register_token20 = 54,
  aux_sym_register_token21 = 55,
  aux_sym_register_token22 = 56,
  aux_sym_register_token23 = 57,
  aux_sym_register_token24 = 58,
  aux_sym_register_token25 = 59,
  aux_sym_register_token26 = 60,
  aux_sym_register_token27 = 61,
  aux_sym_register_token28 = 62,
  aux_sym_register_token29 = 63,
  aux_sym_register_token30 = 64,
  aux_sym_register_token31 = 65,
  aux_sym_register_token32 = 66,
  aux_sym_register_token33 = 67,
  aux_sym_register_token34 = 68,
  aux_sym_register_token35 = 69,
  aux_sym_register_token36 = 70,
  aux_sym_register_token37 = 71,
  aux_sym_register_token38 = 72,
  aux_sym_register_token39 = 73,
  aux_sym_register_token40 = 74,
  aux_sym_register_token41 = 75,
  aux_sym_register_token42 = 76,
  aux_sym_register_token43 = 77,
  aux_sym_register_token44 = 78,
  aux_sym_register_token45 = 79,
  aux_sym_register_token46 = 80,
  aux_sym_register_token47 = 81,
  aux_sym_register_token48 = 82,
  aux_sym_register_token49 = 83,
  aux_sym_register_token50 = 84,
  aux_sym_register_token51 = 85,
  aux_sym_register_token52 = 86,
  aux_sym_register_token53 = 87,
  aux_sym_register_token54 = 88,
  aux_sym_register_token55 = 89,
  aux_sym_register_token56 = 90,
  aux_sym_register_token57 = 91,
  aux_sym_register_token58 = 92,
  aux_sym_register_token59 = 93,
  aux_sym_register_token60 = 94,
  aux_sym_register_token61 = 95,
  aux_sym_register_token62 = 96,
  aux_sym_register_token63 = 97,
  aux_sym_register_token64 = 98,
  aux_sym_register_token65 = 99,
  aux_sym_register_token66 = 100,
  aux_sym_register_token67 = 101,
  aux_sym_register_token68 = 102,
  anon_sym_LBRACK = 103,
  aux_sym_effective_address_token1 = 104,
  aux_sym_effective_address_token2 = 105,
  aux_sym_effective_address_token3 = 106,
  anon_sym_RBRACK = 107,
  aux_sym_constant_numeric_token1 = 108,
  aux_sym_constant_numeric_token2 = 109,
  aux_sym_constant_numeric_token3 = 110,
  aux_sym_constant_numeric_token4 = 111,
  aux_sym_constant_numeric_token5 = 112,
  aux_sym_constant_numeric_token6 = 113,
  aux_sym_constant_numeric_token7 = 114,
  aux_sym_constant_numeric_token8 = 115,
  aux_sym_constant_numeric_token9 = 116,
  aux_sym_constant_numeric_token10 = 117,
  aux_sym_constant_charstr_token1 = 118,
  aux_sym_constant_charstr_token2 = 119,
  aux_sym_constant_charstr_token3 = 120,
  sym_constant_floatpt = 121,
  aux_sym_known_instruction_token1 = 122,
  aux_sym_known_instruction_token2 = 123,
  aux_sym_known_instruction_token3 = 124,
  aux_sym_known_instruction_token4 = 125,
  aux_sym_known_instruction_token5 = 126,
  aux_sym_pseudo_instruction_token1 = 127,
  aux_sym_pseudo_instruction_token2 = 128,
  aux_sym_pseudo_instruction_token3 = 129,
  aux_sym_pseudo_instruction_token4 = 130,
  aux_sym_pseudo_instruction_token5 = 131,
  aux_sym_pseudo_instruction_token6 = 132,
  aux_sym_pseudo_instruction_token7 = 133,
  aux_sym_pseudo_instruction_token8 = 134,
  aux_sym_pseudo_instruction_token9 = 135,
  aux_sym_pseudo_instruction_token10 = 136,
  aux_sym_pseudo_instruction_token11 = 137,
  aux_sym_pseudo_instruction_token12 = 138,
  aux_sym_pseudo_instruction_token13 = 139,
  aux_sym_pseudo_instruction_token14 = 140,
  aux_sym_pseudo_instruction_token15 = 141,
  aux_sym_pseudo_instruction_token16 = 142,
  aux_sym_pseudo_instruction_token17 = 143,
  aux_sym_pseudo_instruction_token18 = 144,
  aux_sym_pseudo_instruction_token19 = 145,
  sym_comment = 146,
  aux_sym_word_token1 = 147,
  sym_source_file = 148,
  sym_source_line = 149,
  sym_label = 150,
  sym_instruction = 151,
  sym_instruction_prefix = 152,
  sym_operands = 153,
  sym_operand = 154,
  sym_operand_prefix = 155,
  sym_register = 156,
  sym_effective_address = 157,
  sym_constant = 158,
  sym_constant_numeric = 159,
  sym_constant_charstr = 160,
  sym_known_instruction = 161,
  sym_pseudo_instruction = 162,
  sym_unknown_instruction = 163,
  sym_word = 164,
  sym_expression = 165,
  aux_sym_source_file_repeat1 = 166,
  aux_sym_operands_repeat1 = 167,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_file_token1] = "source_file_token1",
  [anon_sym_COLON] = ":",
  [aux_sym_instruction_prefix_token1] = "instruction_prefix_token1",
  [aux_sym_instruction_prefix_token2] = "instruction_prefix_token2",
  [aux_sym_instruction_prefix_token3] = "instruction_prefix_token3",
  [aux_sym_instruction_prefix_token4] = "instruction_prefix_token4",
  [aux_sym_instruction_prefix_token5] = "instruction_prefix_token5",
  [aux_sym_instruction_prefix_token6] = "instruction_prefix_token6",
  [aux_sym_instruction_prefix_token7] = "instruction_prefix_token7",
  [aux_sym_instruction_prefix_token8] = "instruction_prefix_token8",
  [aux_sym_instruction_prefix_token9] = "instruction_prefix_token9",
  [aux_sym_instruction_prefix_token10] = "instruction_prefix_token10",
  [aux_sym_instruction_prefix_token11] = "instruction_prefix_token11",
  [aux_sym_instruction_prefix_token12] = "instruction_prefix_token12",
  [aux_sym_instruction_prefix_token13] = "instruction_prefix_token13",
  [aux_sym_instruction_prefix_token14] = "instruction_prefix_token14",
  [aux_sym_instruction_prefix_token15] = "instruction_prefix_token15",
  [aux_sym_instruction_prefix_token16] = "instruction_prefix_token16",
  [aux_sym_instruction_prefix_token17] = "instruction_prefix_token17",
  [aux_sym_instruction_prefix_token18] = "instruction_prefix_token18",
  [aux_sym_instruction_prefix_token19] = "instruction_prefix_token19",
  [aux_sym_instruction_prefix_token20] = "instruction_prefix_token20",
  [aux_sym_instruction_prefix_token21] = "instruction_prefix_token21",
  [aux_sym_instruction_prefix_token22] = "instruction_prefix_token22",
  [anon_sym_COMMA] = ",",
  [anon_sym_strict] = "strict",
  [aux_sym_operand_prefix_token1] = "operand_prefix_token1",
  [aux_sym_operand_prefix_token2] = "operand_prefix_token2",
  [aux_sym_operand_prefix_token3] = "operand_prefix_token3",
  [aux_sym_operand_prefix_token4] = "operand_prefix_token4",
  [aux_sym_operand_prefix_token5] = "operand_prefix_token5",
  [aux_sym_operand_prefix_token6] = "operand_prefix_token6",
  [aux_sym_operand_prefix_token7] = "operand_prefix_token7",
  [aux_sym_operand_prefix_token8] = "operand_prefix_token8",
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
  [anon_sym_RBRACK] = "]",
  [aux_sym_constant_numeric_token1] = "constant_numeric_token1",
  [aux_sym_constant_numeric_token2] = "constant_numeric_token2",
  [aux_sym_constant_numeric_token3] = "constant_numeric_token3",
  [aux_sym_constant_numeric_token4] = "constant_numeric_token4",
  [aux_sym_constant_numeric_token5] = "constant_numeric_token5",
  [aux_sym_constant_numeric_token6] = "constant_numeric_token6",
  [aux_sym_constant_numeric_token7] = "constant_numeric_token7",
  [aux_sym_constant_numeric_token8] = "constant_numeric_token8",
  [aux_sym_constant_numeric_token9] = "constant_numeric_token9",
  [aux_sym_constant_numeric_token10] = "constant_numeric_token10",
  [aux_sym_constant_charstr_token1] = "constant_charstr_token1",
  [aux_sym_constant_charstr_token2] = "constant_charstr_token2",
  [aux_sym_constant_charstr_token3] = "constant_charstr_token3",
  [sym_constant_floatpt] = "constant_floatpt",
  [aux_sym_known_instruction_token1] = "known_instruction_token1",
  [aux_sym_known_instruction_token2] = "known_instruction_token2",
  [aux_sym_known_instruction_token3] = "known_instruction_token3",
  [aux_sym_known_instruction_token4] = "known_instruction_token4",
  [aux_sym_known_instruction_token5] = "known_instruction_token5",
  [aux_sym_pseudo_instruction_token1] = "pseudo_instruction_token1",
  [aux_sym_pseudo_instruction_token2] = "pseudo_instruction_token2",
  [aux_sym_pseudo_instruction_token3] = "pseudo_instruction_token3",
  [aux_sym_pseudo_instruction_token4] = "pseudo_instruction_token4",
  [aux_sym_pseudo_instruction_token5] = "pseudo_instruction_token5",
  [aux_sym_pseudo_instruction_token6] = "pseudo_instruction_token6",
  [aux_sym_pseudo_instruction_token7] = "pseudo_instruction_token7",
  [aux_sym_pseudo_instruction_token8] = "pseudo_instruction_token8",
  [aux_sym_pseudo_instruction_token9] = "pseudo_instruction_token9",
  [aux_sym_pseudo_instruction_token10] = "pseudo_instruction_token10",
  [aux_sym_pseudo_instruction_token11] = "pseudo_instruction_token11",
  [aux_sym_pseudo_instruction_token12] = "pseudo_instruction_token12",
  [aux_sym_pseudo_instruction_token13] = "pseudo_instruction_token13",
  [aux_sym_pseudo_instruction_token14] = "pseudo_instruction_token14",
  [aux_sym_pseudo_instruction_token15] = "pseudo_instruction_token15",
  [aux_sym_pseudo_instruction_token16] = "pseudo_instruction_token16",
  [aux_sym_pseudo_instruction_token17] = "pseudo_instruction_token17",
  [aux_sym_pseudo_instruction_token18] = "pseudo_instruction_token18",
  [aux_sym_pseudo_instruction_token19] = "pseudo_instruction_token19",
  [sym_comment] = "comment",
  [aux_sym_word_token1] = "word_token1",
  [sym_source_file] = "source_file",
  [sym_source_line] = "source_line",
  [sym_label] = "label",
  [sym_instruction] = "instruction",
  [sym_instruction_prefix] = "instruction_prefix",
  [sym_operands] = "operands",
  [sym_operand] = "operand",
  [sym_operand_prefix] = "operand_prefix",
  [sym_register] = "register",
  [sym_effective_address] = "effective_address",
  [sym_constant] = "constant",
  [sym_constant_numeric] = "constant_numeric",
  [sym_constant_charstr] = "constant_charstr",
  [sym_known_instruction] = "known_instruction",
  [sym_pseudo_instruction] = "pseudo_instruction",
  [sym_unknown_instruction] = "unknown_instruction",
  [sym_word] = "word",
  [sym_expression] = "expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_operands_repeat1] = "operands_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_file_token1] = aux_sym_source_file_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_instruction_prefix_token1] = aux_sym_instruction_prefix_token1,
  [aux_sym_instruction_prefix_token2] = aux_sym_instruction_prefix_token2,
  [aux_sym_instruction_prefix_token3] = aux_sym_instruction_prefix_token3,
  [aux_sym_instruction_prefix_token4] = aux_sym_instruction_prefix_token4,
  [aux_sym_instruction_prefix_token5] = aux_sym_instruction_prefix_token5,
  [aux_sym_instruction_prefix_token6] = aux_sym_instruction_prefix_token6,
  [aux_sym_instruction_prefix_token7] = aux_sym_instruction_prefix_token7,
  [aux_sym_instruction_prefix_token8] = aux_sym_instruction_prefix_token8,
  [aux_sym_instruction_prefix_token9] = aux_sym_instruction_prefix_token9,
  [aux_sym_instruction_prefix_token10] = aux_sym_instruction_prefix_token10,
  [aux_sym_instruction_prefix_token11] = aux_sym_instruction_prefix_token11,
  [aux_sym_instruction_prefix_token12] = aux_sym_instruction_prefix_token12,
  [aux_sym_instruction_prefix_token13] = aux_sym_instruction_prefix_token13,
  [aux_sym_instruction_prefix_token14] = aux_sym_instruction_prefix_token14,
  [aux_sym_instruction_prefix_token15] = aux_sym_instruction_prefix_token15,
  [aux_sym_instruction_prefix_token16] = aux_sym_instruction_prefix_token16,
  [aux_sym_instruction_prefix_token17] = aux_sym_instruction_prefix_token17,
  [aux_sym_instruction_prefix_token18] = aux_sym_instruction_prefix_token18,
  [aux_sym_instruction_prefix_token19] = aux_sym_instruction_prefix_token19,
  [aux_sym_instruction_prefix_token20] = aux_sym_instruction_prefix_token20,
  [aux_sym_instruction_prefix_token21] = aux_sym_instruction_prefix_token21,
  [aux_sym_instruction_prefix_token22] = aux_sym_instruction_prefix_token22,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_strict] = anon_sym_strict,
  [aux_sym_operand_prefix_token1] = aux_sym_operand_prefix_token1,
  [aux_sym_operand_prefix_token2] = aux_sym_operand_prefix_token2,
  [aux_sym_operand_prefix_token3] = aux_sym_operand_prefix_token3,
  [aux_sym_operand_prefix_token4] = aux_sym_operand_prefix_token4,
  [aux_sym_operand_prefix_token5] = aux_sym_operand_prefix_token5,
  [aux_sym_operand_prefix_token6] = aux_sym_operand_prefix_token6,
  [aux_sym_operand_prefix_token7] = aux_sym_operand_prefix_token7,
  [aux_sym_operand_prefix_token8] = aux_sym_operand_prefix_token8,
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
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_constant_numeric_token1] = aux_sym_constant_numeric_token1,
  [aux_sym_constant_numeric_token2] = aux_sym_constant_numeric_token2,
  [aux_sym_constant_numeric_token3] = aux_sym_constant_numeric_token3,
  [aux_sym_constant_numeric_token4] = aux_sym_constant_numeric_token4,
  [aux_sym_constant_numeric_token5] = aux_sym_constant_numeric_token5,
  [aux_sym_constant_numeric_token6] = aux_sym_constant_numeric_token6,
  [aux_sym_constant_numeric_token7] = aux_sym_constant_numeric_token7,
  [aux_sym_constant_numeric_token8] = aux_sym_constant_numeric_token8,
  [aux_sym_constant_numeric_token9] = aux_sym_constant_numeric_token9,
  [aux_sym_constant_numeric_token10] = aux_sym_constant_numeric_token10,
  [aux_sym_constant_charstr_token1] = aux_sym_constant_charstr_token1,
  [aux_sym_constant_charstr_token2] = aux_sym_constant_charstr_token2,
  [aux_sym_constant_charstr_token3] = aux_sym_constant_charstr_token3,
  [sym_constant_floatpt] = sym_constant_floatpt,
  [aux_sym_known_instruction_token1] = aux_sym_known_instruction_token1,
  [aux_sym_known_instruction_token2] = aux_sym_known_instruction_token2,
  [aux_sym_known_instruction_token3] = aux_sym_known_instruction_token3,
  [aux_sym_known_instruction_token4] = aux_sym_known_instruction_token4,
  [aux_sym_known_instruction_token5] = aux_sym_known_instruction_token5,
  [aux_sym_pseudo_instruction_token1] = aux_sym_pseudo_instruction_token1,
  [aux_sym_pseudo_instruction_token2] = aux_sym_pseudo_instruction_token2,
  [aux_sym_pseudo_instruction_token3] = aux_sym_pseudo_instruction_token3,
  [aux_sym_pseudo_instruction_token4] = aux_sym_pseudo_instruction_token4,
  [aux_sym_pseudo_instruction_token5] = aux_sym_pseudo_instruction_token5,
  [aux_sym_pseudo_instruction_token6] = aux_sym_pseudo_instruction_token6,
  [aux_sym_pseudo_instruction_token7] = aux_sym_pseudo_instruction_token7,
  [aux_sym_pseudo_instruction_token8] = aux_sym_pseudo_instruction_token8,
  [aux_sym_pseudo_instruction_token9] = aux_sym_pseudo_instruction_token9,
  [aux_sym_pseudo_instruction_token10] = aux_sym_pseudo_instruction_token10,
  [aux_sym_pseudo_instruction_token11] = aux_sym_pseudo_instruction_token11,
  [aux_sym_pseudo_instruction_token12] = aux_sym_pseudo_instruction_token12,
  [aux_sym_pseudo_instruction_token13] = aux_sym_pseudo_instruction_token13,
  [aux_sym_pseudo_instruction_token14] = aux_sym_pseudo_instruction_token14,
  [aux_sym_pseudo_instruction_token15] = aux_sym_pseudo_instruction_token15,
  [aux_sym_pseudo_instruction_token16] = aux_sym_pseudo_instruction_token16,
  [aux_sym_pseudo_instruction_token17] = aux_sym_pseudo_instruction_token17,
  [aux_sym_pseudo_instruction_token18] = aux_sym_pseudo_instruction_token18,
  [aux_sym_pseudo_instruction_token19] = aux_sym_pseudo_instruction_token19,
  [sym_comment] = sym_comment,
  [aux_sym_word_token1] = aux_sym_word_token1,
  [sym_source_file] = sym_source_file,
  [sym_source_line] = sym_source_line,
  [sym_label] = sym_label,
  [sym_instruction] = sym_instruction,
  [sym_instruction_prefix] = sym_instruction_prefix,
  [sym_operands] = sym_operands,
  [sym_operand] = sym_operand,
  [sym_operand_prefix] = sym_operand_prefix,
  [sym_register] = sym_register,
  [sym_effective_address] = sym_effective_address,
  [sym_constant] = sym_constant,
  [sym_constant_numeric] = sym_constant_numeric,
  [sym_constant_charstr] = sym_constant_charstr,
  [sym_known_instruction] = sym_known_instruction,
  [sym_pseudo_instruction] = sym_pseudo_instruction,
  [sym_unknown_instruction] = sym_unknown_instruction,
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
  [aux_sym_instruction_prefix_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_prefix_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_prefix_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_prefix_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_prefix_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_prefix_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_prefix_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_prefix_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_prefix_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_prefix_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_prefix_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_prefix_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_prefix_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_prefix_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_prefix_token15] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_prefix_token16] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_prefix_token17] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_prefix_token18] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_prefix_token19] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_prefix_token20] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_prefix_token21] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_prefix_token22] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_strict] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_operand_prefix_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_operand_prefix_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_operand_prefix_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_operand_prefix_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_operand_prefix_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_operand_prefix_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_operand_prefix_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_operand_prefix_token8] = {
    .visible = false,
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
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_constant_numeric_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constant_numeric_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constant_numeric_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constant_numeric_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constant_numeric_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constant_numeric_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constant_numeric_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constant_numeric_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constant_numeric_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constant_numeric_token10] = {
    .visible = false,
    .named = false,
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
  [aux_sym_known_instruction_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_instruction_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_instruction_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_instruction_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_instruction_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_instruction_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_instruction_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_instruction_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_instruction_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_instruction_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_instruction_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_instruction_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_instruction_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_instruction_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_instruction_token15] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_instruction_token16] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_instruction_token17] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_instruction_token18] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_instruction_token19] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
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
  [sym_instruction_prefix] = {
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
  [sym_operand_prefix] = {
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
  [sym_constant_numeric] = {
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
  [sym_pseudo_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_unknown_instruction] = {
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
      if (eof) ADVANCE(74);
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '$') ADVANCE(406);
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == ',') ADVANCE(105);
      if (lookahead == '0') ADVANCE(196);
      if (lookahead == '1') ADVANCE(197);
      if (lookahead == ':') ADVANCE(78);
      if (lookahead == ';') ADVANCE(250);
      if (lookahead == 'S') ADVANCE(291);
      if (lookahead == '[') ADVANCE(191);
      if (lookahead == '\\') SKIP(64)
      if (lookahead == ']') ADVANCE(195);
      if (lookahead == '`') ADVANCE(30);
      if (lookahead == 's') ADVANCE(274);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(254);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(321);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(324);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(283);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(277);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(380);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(382);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(350);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(356);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(353);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(354);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(256);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(398);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(258);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(333);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(355);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(280);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(400);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(401);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(198);
      if (lookahead == '.' ||
          lookahead == '?' ||
          ('H' <= lookahead && lookahead <= 'V') ||
          ('_' <= lookahead && lookahead <= 'v')) ADVANCE(407);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ',') ADVANCE(105);
      if (lookahead == ';') ADVANCE(250);
      if (lookahead == '\\') SKIP(3)
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(261);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(349);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(379);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(286);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(368);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(381);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(382);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(350);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(356);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(353);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(357);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(257);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(315);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(292);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(334);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(280);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '?' ||
          ('H' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(2)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(20)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '\r') SKIP(4)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(21)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '\r') SKIP(6)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(22)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(22)
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
      if (lookahead == '\n') SKIP(26)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\r') SKIP(12)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(27)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '\r') SKIP(14)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(28)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '\r') SKIP(16)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(29)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(29)
      if (lookahead == '\r') SKIP(18)
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '$') ADVANCE(406);
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == ',') ADVANCE(105);
      if (lookahead == '0') ADVANCE(200);
      if (lookahead == '1') ADVANCE(201);
      if (lookahead == ':') ADVANCE(78);
      if (lookahead == ';') ADVANCE(250);
      if (lookahead == 'S') ADVANCE(291);
      if (lookahead == '[') ADVANCE(191);
      if (lookahead == '\\') SKIP(5)
      if (lookahead == '`') ADVANCE(30);
      if (lookahead == 's') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(20)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(255);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(321);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(324);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(283);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(277);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(380);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(382);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(350);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(356);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(353);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(357);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(256);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(398);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(259);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(333);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(355);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(280);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(400);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(401);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(203);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(202);
      if (lookahead == '.' ||
          lookahead == '?' ||
          ('H' <= lookahead && lookahead <= 'V') ||
          ('_' <= lookahead && lookahead <= 'v')) ADVANCE(407);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '$') ADVANCE(406);
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == '0') ADVANCE(200);
      if (lookahead == '1') ADVANCE(201);
      if (lookahead == ';') ADVANCE(250);
      if (lookahead == 'S') ADVANCE(332);
      if (lookahead == '[') ADVANCE(191);
      if (lookahead == '\\') SKIP(7)
      if (lookahead == '`') ADVANCE(30);
      if (lookahead == 's') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(21)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(320);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(322);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(325);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(326);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(278);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(405);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(396);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(398);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(260);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(399);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(355);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(400);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(401);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(203);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(202);
      if (lookahead == '.' ||
          lookahead == '?' ||
          ('G' <= lookahead && lookahead <= 'X') ||
          ('_' <= lookahead && lookahead <= 'x')) ADVANCE(407);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '$') ADVANCE(406);
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == '0') ADVANCE(200);
      if (lookahead == '1') ADVANCE(201);
      if (lookahead == ';') ADVANCE(250);
      if (lookahead == 'S') ADVANCE(332);
      if (lookahead == '[') ADVANCE(191);
      if (lookahead == '\\') SKIP(9)
      if (lookahead == '`') ADVANCE(30);
      if (lookahead == 's') ADVANCE(275);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(320);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(322);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(325);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(326);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(278);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(405);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(396);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(398);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(260);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(399);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(355);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(400);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(401);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(202);
      if (lookahead == '.' ||
          lookahead == '?' ||
          ('G' <= lookahead && lookahead <= 'X') ||
          ('_' <= lookahead && lookahead <= 'x')) ADVANCE(407);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '$') ADVANCE(406);
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == '0') ADVANCE(200);
      if (lookahead == '1') ADVANCE(201);
      if (lookahead == ';') ADVANCE(250);
      if (lookahead == '[') ADVANCE(191);
      if (lookahead == '\\') SKIP(11)
      if (lookahead == '`') ADVANCE(30);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(320);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(323);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(325);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(327);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(278);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(405);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(260);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(332);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(202);
      if (lookahead == '.' ||
          lookahead == '?' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(219);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '\'') ADVANCE(218);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == ';') ADVANCE(250);
      if (lookahead == '\\') SKIP(13)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(309);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(287);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(369);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(350);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(353);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(318);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(293);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 27:
      if (lookahead == ';') ADVANCE(250);
      if (lookahead == '\\') SKIP(15)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(290);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(404);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(397);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(358);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(317);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(355);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '?' ||
          ('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 28:
      if (lookahead == ';') ADVANCE(250);
      if (lookahead == '\\') SKIP(17)
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(60);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(54);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(55);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(56);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(57);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(39);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(58);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      END_STATE();
    case 29:
      if (lookahead == ';') ADVANCE(250);
      if (lookahead == '\\') SKIP(19)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 30:
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == '`') ADVANCE(220);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(109);
      END_STATE();
    case 32:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(111);
      END_STATE();
    case 33:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 34:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(113);
      END_STATE();
    case 35:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(115);
      END_STATE();
    case 36:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(119);
      END_STATE();
    case 37:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(121);
      END_STATE();
    case 38:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 39:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 40:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 41:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 42:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 43:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 44:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 45:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 46:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 47:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 48:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 49:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 50:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 51:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 52:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 53:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(38);
      END_STATE();
    case 54:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(40);
      END_STATE();
    case 55:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(41);
      END_STATE();
    case 56:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(42);
      END_STATE();
    case 57:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(43);
      END_STATE();
    case 58:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(44);
      END_STATE();
    case 59:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(45);
      END_STATE();
    case 60:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(53);
      END_STATE();
    case 61:
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 62:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 63:
      if (eof) ADVANCE(74);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 64:
      if (eof) ADVANCE(74);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(63)
      END_STATE();
    case 65:
      if (eof) ADVANCE(74);
      if (lookahead == '\n') SKIP(67)
      END_STATE();
    case 66:
      if (eof) ADVANCE(74);
      if (lookahead == '\n') SKIP(67)
      if (lookahead == '\r') SKIP(65)
      END_STATE();
    case 67:
      if (eof) ADVANCE(74);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ',') ADVANCE(105);
      if (lookahead == ';') ADVANCE(250);
      if (lookahead == '\\') SKIP(66)
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(67)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(261);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(349);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(379);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(286);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(368);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(381);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(382);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(350);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(356);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(353);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(357);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(257);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(315);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(292);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(334);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(280);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '?' ||
          ('H' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 68:
      if (eof) ADVANCE(74);
      if (lookahead == '\n') SKIP(72)
      END_STATE();
    case 69:
      if (eof) ADVANCE(74);
      if (lookahead == '\n') SKIP(72)
      if (lookahead == '\r') SKIP(68)
      END_STATE();
    case 70:
      if (eof) ADVANCE(74);
      if (lookahead == '\n') SKIP(73)
      END_STATE();
    case 71:
      if (eof) ADVANCE(74);
      if (lookahead == '\n') SKIP(73)
      if (lookahead == '\r') SKIP(70)
      END_STATE();
    case 72:
      if (eof) ADVANCE(74);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '$') ADVANCE(406);
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == ',') ADVANCE(105);
      if (lookahead == '0') ADVANCE(200);
      if (lookahead == '1') ADVANCE(201);
      if (lookahead == ':') ADVANCE(78);
      if (lookahead == ';') ADVANCE(250);
      if (lookahead == 'S') ADVANCE(291);
      if (lookahead == '[') ADVANCE(191);
      if (lookahead == '\\') SKIP(69)
      if (lookahead == '`') ADVANCE(30);
      if (lookahead == 's') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(72)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(255);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(321);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(324);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(283);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(277);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(380);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(382);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(350);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(356);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(353);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(357);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(256);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(398);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(259);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(333);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(355);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(280);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(400);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(401);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(203);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(202);
      if (lookahead == '.' ||
          lookahead == '?' ||
          ('H' <= lookahead && lookahead <= 'V') ||
          ('_' <= lookahead && lookahead <= 'v')) ADVANCE(407);
      END_STATE();
    case 73:
      if (eof) ADVANCE(74);
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '$') ADVANCE(406);
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == '0') ADVANCE(200);
      if (lookahead == '1') ADVANCE(201);
      if (lookahead == ';') ADVANCE(250);
      if (lookahead == 'S') ADVANCE(332);
      if (lookahead == '[') ADVANCE(191);
      if (lookahead == '\\') SKIP(71)
      if (lookahead == '`') ADVANCE(30);
      if (lookahead == 's') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(73)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(320);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(322);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(325);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(326);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(278);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(405);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(396);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(398);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(260);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(399);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(355);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(400);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(401);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(203);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(202);
      if (lookahead == '.' ||
          lookahead == '?' ||
          ('G' <= lookahead && lookahead <= 'X') ||
          ('_' <= lookahead && lookahead <= 'x')) ADVANCE(407);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '\r') ADVANCE(20);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '\r') ADVANCE(21);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token1);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(81);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(312);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(82);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token3);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token4);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token5);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token6);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token7);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token8);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token9);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token10);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token11);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token11);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token12);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token12);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token13);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token13);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token14);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token15);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token16);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token17);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token18);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token19);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token20);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(165);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(163);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token20);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token21);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token22);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_strict);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token1);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token1);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token2);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token2);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token3);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token3);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token4);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token4);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token5);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token5);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token6);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token6);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token7);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token7);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token8);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token8);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_register_token1);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_register_token2);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_register_token3);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_register_token4);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_register_token5);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_register_token6);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_register_token7);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_register_token8);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_register_token9);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_register_token10);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_register_token11);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_register_token12);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_register_token13);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_register_token14);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_register_token15);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_register_token16);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_register_token17);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_register_token18);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_register_token19);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_register_token20);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_register_token21);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_register_token22);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_register_token23);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_register_token24);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_register_token25);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(131);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_register_token26);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(132);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_register_token27);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(133);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_register_token28);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(134);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_register_token29);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_register_token30);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_register_token31);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_register_token32);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_register_token33);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_register_token34);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_register_token35);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_register_token36);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_register_token37);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_register_token38);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_register_token39);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_register_token40);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_register_token41);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_register_token42);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_register_token43);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_register_token44);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_register_token45);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_register_token46);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_register_token47);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_register_token48);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_register_token49);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_register_token50);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_register_token51);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_register_token52);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_register_token53);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_register_token54);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_register_token55);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_register_token56);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_register_token57);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_register_token58);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_register_token59);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_register_token60);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_register_token61);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(135);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(167);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(151);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_register_token62);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(136);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(168);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(152);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_register_token63);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(137);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(169);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(153);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_register_token64);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(138);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(170);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(154);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_register_token65);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(139);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(171);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(155);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_register_token66);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(140);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(172);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(156);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_register_token67);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(141);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(173);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(157);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_register_token68);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(142);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(174);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(158);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_effective_address_token1);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_effective_address_token2);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_effective_address_token3);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token1);
      if (lookahead == '.') ADVANCE(221);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(214);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(208);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(209);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(215);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(197);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(199);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(205);
      if (lookahead == 'O' ||
          lookahead == 'Q' ||
          lookahead == 'o' ||
          lookahead == 'q') ADVANCE(212);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token1);
      if (lookahead == '.') ADVANCE(221);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(217);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(211);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(210);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(216);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(197);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(199);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(206);
      if (lookahead == 'O' ||
          lookahead == 'Q' ||
          lookahead == 'o' ||
          lookahead == 'q') ADVANCE(213);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token1);
      if (lookahead == '.') ADVANCE(221);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(211);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(210);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(199);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(206);
      if (lookahead == 'O' ||
          lookahead == 'Q' ||
          lookahead == 'o' ||
          lookahead == 'q') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token1);
      if (lookahead == '.') ADVANCE(221);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(211);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(210);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(214);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(208);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(209);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(215);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(201);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(203);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(205);
      if (lookahead == 'O' ||
          lookahead == 'Q' ||
          lookahead == 'o' ||
          lookahead == 'q') ADVANCE(212);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(217);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(211);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(210);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(216);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(201);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(203);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(206);
      if (lookahead == 'O' ||
          lookahead == 'Q' ||
          lookahead == 'o' ||
          lookahead == 'q') ADVANCE(213);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(211);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(210);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(203);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(206);
      if (lookahead == 'O' ||
          lookahead == 'Q' ||
          lookahead == 'o' ||
          lookahead == 'q') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(211);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(210);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(204);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token4);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token4);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token5);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token6);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token6);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token7);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token8);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token9);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(214);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(206);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token9);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token10);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token10);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_constant_charstr_token1);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_constant_charstr_token2);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_constant_charstr_token3);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_constant_floatpt);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_known_instruction_token1);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_known_instruction_token2);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_known_instruction_token2);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_known_instruction_token3);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(340);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_known_instruction_token4);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_known_instruction_token5);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token1);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token1);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(372);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token2);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token3);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token3);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token4);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token5);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token6);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token7);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token8);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token9);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token10);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token11);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token12);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token13);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token14);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token15);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token16);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token17);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token18);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token19);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(250);
      if (lookahead == '\r') ADVANCE(252);
      if (lookahead == '\\') ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(251);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '0') ADVANCE(185);
      if (lookahead == '1') ADVANCE(186);
      if (lookahead == '2') ADVANCE(187);
      if (lookahead == '3') ADVANCE(188);
      if (lookahead == '4') ADVANCE(189);
      if (lookahead == '5') ADVANCE(190);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('6' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '1') ADVANCE(268);
      if (lookahead == '3') ADVANCE(262);
      if (lookahead == '6') ADVANCE(265);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(383);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(298);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(124);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(123);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '1') ADVANCE(268);
      if (lookahead == '3') ADVANCE(262);
      if (lookahead == '6') ADVANCE(265);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(298);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(124);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(123);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '1') ADVANCE(269);
      if (lookahead == '3') ADVANCE(263);
      if (lookahead == '6') ADVANCE(266);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(360);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '1') ADVANCE(269);
      if (lookahead == '3') ADVANCE(263);
      if (lookahead == '6') ADVANCE(266);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '1') ADVANCE(253);
      if (lookahead == '8') ADVANCE(183);
      if (lookahead == '9') ADVANCE(184);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(402);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(365);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(403);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(336);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(342);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(337);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '7') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '1') ADVANCE(253);
      if (lookahead == '8') ADVANCE(183);
      if (lookahead == '9') ADVANCE(184);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(402);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(365);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(403);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(336);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(366);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(337);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '7') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '1') ADVANCE(253);
      if (lookahead == '8') ADVANCE(183);
      if (lookahead == '9') ADVANCE(184);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(402);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(365);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(403);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(336);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(337);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '7') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '1') ADVANCE(270);
      if (lookahead == '3') ADVANCE(264);
      if (lookahead == '6') ADVANCE(267);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(308);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '2') ADVANCE(91);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '2') ADVANCE(96);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '2') ADVANCE(92);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '4') ADVANCE(93);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '4') ADVANCE(97);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '4') ADVANCE(94);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '6') ADVANCE(89);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '6') ADVANCE(95);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '6') ADVANCE(90);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'c') ADVANCE(276);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'i') ADVANCE(271);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'r') ADVANCE(272);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(273);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(279);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(149);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(147);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(100);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(389);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(273);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(149);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(147);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(330);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(329);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(331);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(328);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(393);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(101);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'F' ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(405);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(330);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(329);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(331);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(328);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(335);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'F' ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(405);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(387);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(296);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(310);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(347);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(390);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(228);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(232);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(128);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(150);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(127);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(236);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(234);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(99);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(235);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(230);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(145);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(237);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'v') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(239);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(241);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(244);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(242);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(243);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(240);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(245);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(246);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'X') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(227);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(229);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(233);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(236);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(234);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(99);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(235);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(231);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(237);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(238);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'X') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(229);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(233);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(236);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(234);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(235);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(231);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(237);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(238);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'X') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(352);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(367);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(352);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(384);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(279);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(149);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(147);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(100);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(389);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(279);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(100);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(389);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(279);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(389);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(225);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(341);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(370);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(281);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(223);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(87);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(110);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(88);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(118);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(114);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(120);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(122);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(224);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(308);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(346);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(108);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(84);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(86);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(366);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(388);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(343);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(386);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(124);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(123);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(130);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(129);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(299);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(148);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(146);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(130);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(129);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(148);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(146);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(130);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(129);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(148);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(126);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(125);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(98);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(126);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(125);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(128);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(150);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(127);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(359);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(128);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(150);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(127);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(207);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(166);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(207);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(164);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(207);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(207);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(149);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(147);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(348);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(362);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(348);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(165);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(163);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(182);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(177);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(181);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(179);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(391);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(374);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(351);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(79);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(193);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(80);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(284);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(193);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(226);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(338);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(319);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(344);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(316);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(299);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(294);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(247);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(302);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(395);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(288);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(371);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(295);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(289);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(385);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(372);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(373);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(375);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(376);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(377);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(378);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(180);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(178);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(80);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(284);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(345);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(393);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(102);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(393);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(394);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(300);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(301);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(303);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(313);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(304);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(305);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(306);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(307);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(98);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(103);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(103);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(104);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(194);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(194);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(367);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(284);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(285);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(249);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(297);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(314);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(192);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(311);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(248);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(339);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(222);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(360);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(359);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(361);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(362);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(363);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(364);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(175);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(176);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(392);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(407);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 67},
  [2] = {.lex_state = 72},
  [3] = {.lex_state = 72},
  [4] = {.lex_state = 72},
  [5] = {.lex_state = 72},
  [6] = {.lex_state = 73},
  [7] = {.lex_state = 73},
  [8] = {.lex_state = 73},
  [9] = {.lex_state = 73},
  [10] = {.lex_state = 22},
  [11] = {.lex_state = 22},
  [12] = {.lex_state = 73},
  [13] = {.lex_state = 73},
  [14] = {.lex_state = 73},
  [15] = {.lex_state = 73},
  [16] = {.lex_state = 73},
  [17] = {.lex_state = 73},
  [18] = {.lex_state = 73},
  [19] = {.lex_state = 73},
  [20] = {.lex_state = 23},
  [21] = {.lex_state = 23},
  [22] = {.lex_state = 23},
  [23] = {.lex_state = 23},
  [24] = {.lex_state = 67},
  [25] = {.lex_state = 67},
  [26] = {.lex_state = 67},
  [27] = {.lex_state = 67},
  [28] = {.lex_state = 67},
  [29] = {.lex_state = 67},
  [30] = {.lex_state = 67},
  [31] = {.lex_state = 26},
  [32] = {.lex_state = 26},
  [33] = {.lex_state = 26},
  [34] = {.lex_state = 27},
  [35] = {.lex_state = 27},
  [36] = {.lex_state = 28},
  [37] = {.lex_state = 67},
  [38] = {.lex_state = 67},
  [39] = {.lex_state = 67},
  [40] = {.lex_state = 67},
  [41] = {.lex_state = 67},
  [42] = {.lex_state = 67},
  [43] = {.lex_state = 67},
  [44] = {.lex_state = 67},
  [45] = {.lex_state = 67},
  [46] = {.lex_state = 29},
  [47] = {.lex_state = 29},
  [48] = {.lex_state = 67},
  [49] = {.lex_state = 67},
  [50] = {.lex_state = 67},
  [51] = {.lex_state = 67},
  [52] = {.lex_state = 67},
  [53] = {.lex_state = 67},
  [54] = {.lex_state = 67},
  [55] = {.lex_state = 67},
  [56] = {.lex_state = 67},
  [57] = {.lex_state = 67},
  [58] = {.lex_state = 67},
  [59] = {.lex_state = 67},
  [60] = {.lex_state = 67},
  [61] = {.lex_state = 67},
  [62] = {.lex_state = 67},
  [63] = {.lex_state = 67},
  [64] = {.lex_state = 67},
  [65] = {.lex_state = 67},
  [66] = {.lex_state = 67},
  [67] = {.lex_state = 67},
  [68] = {.lex_state = 67},
  [69] = {.lex_state = 67},
  [70] = {.lex_state = 67},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 67},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 67},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 67},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 67},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 67},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_instruction_prefix_token1] = ACTIONS(1),
    [aux_sym_instruction_prefix_token2] = ACTIONS(1),
    [aux_sym_instruction_prefix_token3] = ACTIONS(1),
    [aux_sym_instruction_prefix_token4] = ACTIONS(1),
    [aux_sym_instruction_prefix_token5] = ACTIONS(1),
    [aux_sym_instruction_prefix_token6] = ACTIONS(1),
    [aux_sym_instruction_prefix_token7] = ACTIONS(1),
    [aux_sym_instruction_prefix_token8] = ACTIONS(1),
    [aux_sym_instruction_prefix_token9] = ACTIONS(1),
    [aux_sym_instruction_prefix_token10] = ACTIONS(1),
    [aux_sym_instruction_prefix_token11] = ACTIONS(1),
    [aux_sym_instruction_prefix_token12] = ACTIONS(1),
    [aux_sym_instruction_prefix_token13] = ACTIONS(1),
    [aux_sym_instruction_prefix_token14] = ACTIONS(1),
    [aux_sym_instruction_prefix_token15] = ACTIONS(1),
    [aux_sym_instruction_prefix_token16] = ACTIONS(1),
    [aux_sym_instruction_prefix_token17] = ACTIONS(1),
    [aux_sym_instruction_prefix_token18] = ACTIONS(1),
    [aux_sym_instruction_prefix_token19] = ACTIONS(1),
    [aux_sym_instruction_prefix_token20] = ACTIONS(1),
    [aux_sym_instruction_prefix_token21] = ACTIONS(1),
    [aux_sym_instruction_prefix_token22] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_strict] = ACTIONS(1),
    [aux_sym_operand_prefix_token1] = ACTIONS(1),
    [aux_sym_operand_prefix_token2] = ACTIONS(1),
    [aux_sym_operand_prefix_token3] = ACTIONS(1),
    [aux_sym_operand_prefix_token4] = ACTIONS(1),
    [aux_sym_operand_prefix_token5] = ACTIONS(1),
    [aux_sym_operand_prefix_token6] = ACTIONS(1),
    [aux_sym_operand_prefix_token7] = ACTIONS(1),
    [aux_sym_operand_prefix_token8] = ACTIONS(1),
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
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_constant_numeric_token1] = ACTIONS(1),
    [aux_sym_constant_numeric_token2] = ACTIONS(1),
    [aux_sym_constant_numeric_token3] = ACTIONS(1),
    [aux_sym_constant_numeric_token4] = ACTIONS(1),
    [aux_sym_constant_numeric_token5] = ACTIONS(1),
    [aux_sym_constant_numeric_token6] = ACTIONS(1),
    [aux_sym_constant_numeric_token7] = ACTIONS(1),
    [aux_sym_constant_numeric_token8] = ACTIONS(1),
    [aux_sym_constant_numeric_token9] = ACTIONS(1),
    [aux_sym_constant_numeric_token10] = ACTIONS(1),
    [aux_sym_constant_charstr_token1] = ACTIONS(1),
    [aux_sym_constant_charstr_token2] = ACTIONS(1),
    [aux_sym_constant_charstr_token3] = ACTIONS(1),
    [sym_constant_floatpt] = ACTIONS(1),
    [aux_sym_known_instruction_token1] = ACTIONS(1),
    [aux_sym_known_instruction_token2] = ACTIONS(1),
    [aux_sym_known_instruction_token3] = ACTIONS(1),
    [aux_sym_known_instruction_token4] = ACTIONS(1),
    [aux_sym_known_instruction_token5] = ACTIONS(1),
    [aux_sym_pseudo_instruction_token1] = ACTIONS(1),
    [aux_sym_pseudo_instruction_token2] = ACTIONS(1),
    [aux_sym_pseudo_instruction_token3] = ACTIONS(1),
    [aux_sym_pseudo_instruction_token4] = ACTIONS(1),
    [aux_sym_pseudo_instruction_token5] = ACTIONS(1),
    [aux_sym_pseudo_instruction_token6] = ACTIONS(1),
    [aux_sym_pseudo_instruction_token7] = ACTIONS(1),
    [aux_sym_pseudo_instruction_token8] = ACTIONS(1),
    [aux_sym_pseudo_instruction_token9] = ACTIONS(1),
    [aux_sym_pseudo_instruction_token10] = ACTIONS(1),
    [aux_sym_pseudo_instruction_token11] = ACTIONS(1),
    [aux_sym_pseudo_instruction_token12] = ACTIONS(1),
    [aux_sym_pseudo_instruction_token13] = ACTIONS(1),
    [aux_sym_pseudo_instruction_token14] = ACTIONS(1),
    [aux_sym_pseudo_instruction_token15] = ACTIONS(1),
    [aux_sym_pseudo_instruction_token16] = ACTIONS(1),
    [aux_sym_pseudo_instruction_token17] = ACTIONS(1),
    [aux_sym_pseudo_instruction_token18] = ACTIONS(1),
    [aux_sym_pseudo_instruction_token19] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [aux_sym_word_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(81),
    [sym_source_line] = STATE(59),
    [sym_label] = STATE(26),
    [sym_instruction] = STATE(60),
    [sym_instruction_prefix] = STATE(32),
    [sym_known_instruction] = STATE(7),
    [sym_pseudo_instruction] = STATE(7),
    [sym_unknown_instruction] = STATE(7),
    [sym_word] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_source_file_token1] = ACTIONS(7),
    [aux_sym_instruction_prefix_token1] = ACTIONS(9),
    [aux_sym_instruction_prefix_token2] = ACTIONS(9),
    [aux_sym_instruction_prefix_token3] = ACTIONS(9),
    [aux_sym_instruction_prefix_token4] = ACTIONS(9),
    [aux_sym_instruction_prefix_token5] = ACTIONS(9),
    [aux_sym_instruction_prefix_token6] = ACTIONS(9),
    [aux_sym_instruction_prefix_token7] = ACTIONS(9),
    [aux_sym_instruction_prefix_token8] = ACTIONS(9),
    [aux_sym_instruction_prefix_token9] = ACTIONS(9),
    [aux_sym_instruction_prefix_token10] = ACTIONS(9),
    [aux_sym_instruction_prefix_token11] = ACTIONS(9),
    [aux_sym_instruction_prefix_token12] = ACTIONS(9),
    [aux_sym_instruction_prefix_token13] = ACTIONS(9),
    [aux_sym_instruction_prefix_token14] = ACTIONS(9),
    [aux_sym_instruction_prefix_token15] = ACTIONS(9),
    [aux_sym_instruction_prefix_token16] = ACTIONS(9),
    [aux_sym_instruction_prefix_token17] = ACTIONS(9),
    [aux_sym_instruction_prefix_token18] = ACTIONS(9),
    [aux_sym_instruction_prefix_token19] = ACTIONS(9),
    [aux_sym_instruction_prefix_token20] = ACTIONS(9),
    [aux_sym_instruction_prefix_token21] = ACTIONS(9),
    [aux_sym_instruction_prefix_token22] = ACTIONS(9),
    [aux_sym_known_instruction_token1] = ACTIONS(11),
    [aux_sym_known_instruction_token2] = ACTIONS(11),
    [aux_sym_known_instruction_token3] = ACTIONS(11),
    [aux_sym_known_instruction_token4] = ACTIONS(11),
    [aux_sym_known_instruction_token5] = ACTIONS(11),
    [aux_sym_pseudo_instruction_token1] = ACTIONS(13),
    [aux_sym_pseudo_instruction_token2] = ACTIONS(13),
    [aux_sym_pseudo_instruction_token3] = ACTIONS(13),
    [aux_sym_pseudo_instruction_token4] = ACTIONS(13),
    [aux_sym_pseudo_instruction_token5] = ACTIONS(13),
    [aux_sym_pseudo_instruction_token6] = ACTIONS(13),
    [aux_sym_pseudo_instruction_token7] = ACTIONS(13),
    [aux_sym_pseudo_instruction_token8] = ACTIONS(13),
    [aux_sym_pseudo_instruction_token9] = ACTIONS(13),
    [aux_sym_pseudo_instruction_token10] = ACTIONS(13),
    [aux_sym_pseudo_instruction_token11] = ACTIONS(13),
    [aux_sym_pseudo_instruction_token12] = ACTIONS(13),
    [aux_sym_pseudo_instruction_token13] = ACTIONS(13),
    [aux_sym_pseudo_instruction_token14] = ACTIONS(13),
    [aux_sym_pseudo_instruction_token15] = ACTIONS(13),
    [aux_sym_pseudo_instruction_token16] = ACTIONS(13),
    [aux_sym_pseudo_instruction_token17] = ACTIONS(13),
    [aux_sym_pseudo_instruction_token18] = ACTIONS(13),
    [aux_sym_pseudo_instruction_token19] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [aux_sym_word_token1] = ACTIONS(17),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(19),
    [aux_sym_source_file_token1] = ACTIONS(19),
    [anon_sym_COLON] = ACTIONS(21),
    [aux_sym_instruction_prefix_token1] = ACTIONS(21),
    [aux_sym_instruction_prefix_token2] = ACTIONS(21),
    [aux_sym_instruction_prefix_token3] = ACTIONS(21),
    [aux_sym_instruction_prefix_token4] = ACTIONS(21),
    [aux_sym_instruction_prefix_token5] = ACTIONS(21),
    [aux_sym_instruction_prefix_token6] = ACTIONS(21),
    [aux_sym_instruction_prefix_token7] = ACTIONS(21),
    [aux_sym_instruction_prefix_token8] = ACTIONS(21),
    [aux_sym_instruction_prefix_token9] = ACTIONS(21),
    [aux_sym_instruction_prefix_token10] = ACTIONS(21),
    [aux_sym_instruction_prefix_token11] = ACTIONS(21),
    [aux_sym_instruction_prefix_token12] = ACTIONS(21),
    [aux_sym_instruction_prefix_token13] = ACTIONS(21),
    [aux_sym_instruction_prefix_token14] = ACTIONS(21),
    [aux_sym_instruction_prefix_token15] = ACTIONS(21),
    [aux_sym_instruction_prefix_token16] = ACTIONS(21),
    [aux_sym_instruction_prefix_token17] = ACTIONS(21),
    [aux_sym_instruction_prefix_token18] = ACTIONS(21),
    [aux_sym_instruction_prefix_token19] = ACTIONS(21),
    [aux_sym_instruction_prefix_token20] = ACTIONS(21),
    [aux_sym_instruction_prefix_token21] = ACTIONS(21),
    [aux_sym_instruction_prefix_token22] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(21),
    [anon_sym_strict] = ACTIONS(21),
    [aux_sym_operand_prefix_token1] = ACTIONS(21),
    [aux_sym_operand_prefix_token2] = ACTIONS(21),
    [aux_sym_operand_prefix_token3] = ACTIONS(21),
    [aux_sym_operand_prefix_token4] = ACTIONS(21),
    [aux_sym_operand_prefix_token5] = ACTIONS(21),
    [aux_sym_operand_prefix_token6] = ACTIONS(21),
    [aux_sym_operand_prefix_token7] = ACTIONS(21),
    [aux_sym_operand_prefix_token8] = ACTIONS(21),
    [aux_sym_register_token1] = ACTIONS(21),
    [aux_sym_register_token2] = ACTIONS(21),
    [aux_sym_register_token3] = ACTIONS(21),
    [aux_sym_register_token4] = ACTIONS(21),
    [aux_sym_register_token5] = ACTIONS(21),
    [aux_sym_register_token6] = ACTIONS(21),
    [aux_sym_register_token7] = ACTIONS(21),
    [aux_sym_register_token8] = ACTIONS(21),
    [aux_sym_register_token9] = ACTIONS(21),
    [aux_sym_register_token10] = ACTIONS(21),
    [aux_sym_register_token11] = ACTIONS(21),
    [aux_sym_register_token12] = ACTIONS(21),
    [aux_sym_register_token13] = ACTIONS(21),
    [aux_sym_register_token14] = ACTIONS(21),
    [aux_sym_register_token15] = ACTIONS(21),
    [aux_sym_register_token16] = ACTIONS(21),
    [aux_sym_register_token17] = ACTIONS(21),
    [aux_sym_register_token18] = ACTIONS(21),
    [aux_sym_register_token19] = ACTIONS(21),
    [aux_sym_register_token20] = ACTIONS(21),
    [aux_sym_register_token21] = ACTIONS(21),
    [aux_sym_register_token22] = ACTIONS(21),
    [aux_sym_register_token23] = ACTIONS(21),
    [aux_sym_register_token24] = ACTIONS(21),
    [aux_sym_register_token25] = ACTIONS(21),
    [aux_sym_register_token26] = ACTIONS(21),
    [aux_sym_register_token27] = ACTIONS(21),
    [aux_sym_register_token28] = ACTIONS(21),
    [aux_sym_register_token29] = ACTIONS(21),
    [aux_sym_register_token30] = ACTIONS(21),
    [aux_sym_register_token31] = ACTIONS(21),
    [aux_sym_register_token32] = ACTIONS(21),
    [aux_sym_register_token33] = ACTIONS(21),
    [aux_sym_register_token34] = ACTIONS(21),
    [aux_sym_register_token35] = ACTIONS(21),
    [aux_sym_register_token36] = ACTIONS(21),
    [aux_sym_register_token37] = ACTIONS(21),
    [aux_sym_register_token38] = ACTIONS(21),
    [aux_sym_register_token39] = ACTIONS(21),
    [aux_sym_register_token40] = ACTIONS(21),
    [aux_sym_register_token41] = ACTIONS(21),
    [aux_sym_register_token42] = ACTIONS(21),
    [aux_sym_register_token43] = ACTIONS(21),
    [aux_sym_register_token44] = ACTIONS(21),
    [aux_sym_register_token45] = ACTIONS(21),
    [aux_sym_register_token46] = ACTIONS(21),
    [aux_sym_register_token47] = ACTIONS(21),
    [aux_sym_register_token48] = ACTIONS(21),
    [aux_sym_register_token49] = ACTIONS(21),
    [aux_sym_register_token50] = ACTIONS(21),
    [aux_sym_register_token51] = ACTIONS(21),
    [aux_sym_register_token52] = ACTIONS(21),
    [aux_sym_register_token53] = ACTIONS(21),
    [aux_sym_register_token54] = ACTIONS(21),
    [aux_sym_register_token55] = ACTIONS(21),
    [aux_sym_register_token56] = ACTIONS(21),
    [aux_sym_register_token57] = ACTIONS(21),
    [aux_sym_register_token58] = ACTIONS(21),
    [aux_sym_register_token59] = ACTIONS(21),
    [aux_sym_register_token60] = ACTIONS(21),
    [aux_sym_register_token61] = ACTIONS(21),
    [aux_sym_register_token62] = ACTIONS(21),
    [aux_sym_register_token63] = ACTIONS(21),
    [aux_sym_register_token64] = ACTIONS(21),
    [aux_sym_register_token65] = ACTIONS(21),
    [aux_sym_register_token66] = ACTIONS(21),
    [aux_sym_register_token67] = ACTIONS(21),
    [aux_sym_register_token68] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(21),
    [aux_sym_constant_numeric_token1] = ACTIONS(21),
    [aux_sym_constant_numeric_token2] = ACTIONS(21),
    [aux_sym_constant_numeric_token3] = ACTIONS(21),
    [aux_sym_constant_numeric_token4] = ACTIONS(21),
    [aux_sym_constant_numeric_token5] = ACTIONS(21),
    [aux_sym_constant_numeric_token6] = ACTIONS(21),
    [aux_sym_constant_numeric_token7] = ACTIONS(21),
    [aux_sym_constant_numeric_token8] = ACTIONS(21),
    [aux_sym_constant_numeric_token9] = ACTIONS(21),
    [aux_sym_constant_numeric_token10] = ACTIONS(21),
    [aux_sym_constant_charstr_token1] = ACTIONS(21),
    [aux_sym_constant_charstr_token2] = ACTIONS(21),
    [aux_sym_constant_charstr_token3] = ACTIONS(21),
    [aux_sym_known_instruction_token1] = ACTIONS(21),
    [aux_sym_known_instruction_token2] = ACTIONS(21),
    [aux_sym_known_instruction_token3] = ACTIONS(21),
    [aux_sym_known_instruction_token4] = ACTIONS(21),
    [aux_sym_known_instruction_token5] = ACTIONS(21),
    [aux_sym_pseudo_instruction_token1] = ACTIONS(21),
    [aux_sym_pseudo_instruction_token2] = ACTIONS(21),
    [aux_sym_pseudo_instruction_token3] = ACTIONS(21),
    [aux_sym_pseudo_instruction_token4] = ACTIONS(21),
    [aux_sym_pseudo_instruction_token5] = ACTIONS(21),
    [aux_sym_pseudo_instruction_token6] = ACTIONS(21),
    [aux_sym_pseudo_instruction_token7] = ACTIONS(21),
    [aux_sym_pseudo_instruction_token8] = ACTIONS(21),
    [aux_sym_pseudo_instruction_token9] = ACTIONS(21),
    [aux_sym_pseudo_instruction_token10] = ACTIONS(21),
    [aux_sym_pseudo_instruction_token11] = ACTIONS(21),
    [aux_sym_pseudo_instruction_token12] = ACTIONS(21),
    [aux_sym_pseudo_instruction_token13] = ACTIONS(21),
    [aux_sym_pseudo_instruction_token14] = ACTIONS(21),
    [aux_sym_pseudo_instruction_token15] = ACTIONS(21),
    [aux_sym_pseudo_instruction_token16] = ACTIONS(21),
    [aux_sym_pseudo_instruction_token17] = ACTIONS(21),
    [aux_sym_pseudo_instruction_token18] = ACTIONS(21),
    [aux_sym_pseudo_instruction_token19] = ACTIONS(21),
    [sym_comment] = ACTIONS(15),
    [aux_sym_word_token1] = ACTIONS(21),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(23),
    [aux_sym_source_file_token1] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [aux_sym_instruction_prefix_token1] = ACTIONS(27),
    [aux_sym_instruction_prefix_token2] = ACTIONS(27),
    [aux_sym_instruction_prefix_token3] = ACTIONS(27),
    [aux_sym_instruction_prefix_token4] = ACTIONS(27),
    [aux_sym_instruction_prefix_token5] = ACTIONS(27),
    [aux_sym_instruction_prefix_token6] = ACTIONS(27),
    [aux_sym_instruction_prefix_token7] = ACTIONS(27),
    [aux_sym_instruction_prefix_token8] = ACTIONS(27),
    [aux_sym_instruction_prefix_token9] = ACTIONS(27),
    [aux_sym_instruction_prefix_token10] = ACTIONS(27),
    [aux_sym_instruction_prefix_token11] = ACTIONS(27),
    [aux_sym_instruction_prefix_token12] = ACTIONS(27),
    [aux_sym_instruction_prefix_token13] = ACTIONS(27),
    [aux_sym_instruction_prefix_token14] = ACTIONS(27),
    [aux_sym_instruction_prefix_token15] = ACTIONS(27),
    [aux_sym_instruction_prefix_token16] = ACTIONS(27),
    [aux_sym_instruction_prefix_token17] = ACTIONS(27),
    [aux_sym_instruction_prefix_token18] = ACTIONS(27),
    [aux_sym_instruction_prefix_token19] = ACTIONS(27),
    [aux_sym_instruction_prefix_token20] = ACTIONS(27),
    [aux_sym_instruction_prefix_token21] = ACTIONS(27),
    [aux_sym_instruction_prefix_token22] = ACTIONS(27),
    [anon_sym_strict] = ACTIONS(29),
    [aux_sym_operand_prefix_token1] = ACTIONS(29),
    [aux_sym_operand_prefix_token2] = ACTIONS(29),
    [aux_sym_operand_prefix_token3] = ACTIONS(29),
    [aux_sym_operand_prefix_token4] = ACTIONS(29),
    [aux_sym_operand_prefix_token5] = ACTIONS(29),
    [aux_sym_operand_prefix_token6] = ACTIONS(29),
    [aux_sym_operand_prefix_token7] = ACTIONS(29),
    [aux_sym_operand_prefix_token8] = ACTIONS(29),
    [aux_sym_register_token1] = ACTIONS(29),
    [aux_sym_register_token2] = ACTIONS(29),
    [aux_sym_register_token3] = ACTIONS(29),
    [aux_sym_register_token4] = ACTIONS(29),
    [aux_sym_register_token5] = ACTIONS(29),
    [aux_sym_register_token6] = ACTIONS(29),
    [aux_sym_register_token7] = ACTIONS(29),
    [aux_sym_register_token8] = ACTIONS(29),
    [aux_sym_register_token9] = ACTIONS(29),
    [aux_sym_register_token10] = ACTIONS(29),
    [aux_sym_register_token11] = ACTIONS(29),
    [aux_sym_register_token12] = ACTIONS(29),
    [aux_sym_register_token13] = ACTIONS(29),
    [aux_sym_register_token14] = ACTIONS(29),
    [aux_sym_register_token15] = ACTIONS(29),
    [aux_sym_register_token16] = ACTIONS(29),
    [aux_sym_register_token17] = ACTIONS(29),
    [aux_sym_register_token18] = ACTIONS(29),
    [aux_sym_register_token19] = ACTIONS(29),
    [aux_sym_register_token20] = ACTIONS(29),
    [aux_sym_register_token21] = ACTIONS(29),
    [aux_sym_register_token22] = ACTIONS(29),
    [aux_sym_register_token23] = ACTIONS(29),
    [aux_sym_register_token24] = ACTIONS(29),
    [aux_sym_register_token25] = ACTIONS(29),
    [aux_sym_register_token26] = ACTIONS(29),
    [aux_sym_register_token27] = ACTIONS(29),
    [aux_sym_register_token28] = ACTIONS(29),
    [aux_sym_register_token29] = ACTIONS(29),
    [aux_sym_register_token30] = ACTIONS(29),
    [aux_sym_register_token31] = ACTIONS(29),
    [aux_sym_register_token32] = ACTIONS(29),
    [aux_sym_register_token33] = ACTIONS(29),
    [aux_sym_register_token34] = ACTIONS(29),
    [aux_sym_register_token35] = ACTIONS(29),
    [aux_sym_register_token36] = ACTIONS(29),
    [aux_sym_register_token37] = ACTIONS(29),
    [aux_sym_register_token38] = ACTIONS(29),
    [aux_sym_register_token39] = ACTIONS(29),
    [aux_sym_register_token40] = ACTIONS(29),
    [aux_sym_register_token41] = ACTIONS(29),
    [aux_sym_register_token42] = ACTIONS(29),
    [aux_sym_register_token43] = ACTIONS(29),
    [aux_sym_register_token44] = ACTIONS(29),
    [aux_sym_register_token45] = ACTIONS(29),
    [aux_sym_register_token46] = ACTIONS(29),
    [aux_sym_register_token47] = ACTIONS(29),
    [aux_sym_register_token48] = ACTIONS(29),
    [aux_sym_register_token49] = ACTIONS(29),
    [aux_sym_register_token50] = ACTIONS(29),
    [aux_sym_register_token51] = ACTIONS(29),
    [aux_sym_register_token52] = ACTIONS(29),
    [aux_sym_register_token53] = ACTIONS(29),
    [aux_sym_register_token54] = ACTIONS(29),
    [aux_sym_register_token55] = ACTIONS(29),
    [aux_sym_register_token56] = ACTIONS(29),
    [aux_sym_register_token57] = ACTIONS(29),
    [aux_sym_register_token58] = ACTIONS(29),
    [aux_sym_register_token59] = ACTIONS(29),
    [aux_sym_register_token60] = ACTIONS(29),
    [aux_sym_register_token61] = ACTIONS(29),
    [aux_sym_register_token62] = ACTIONS(29),
    [aux_sym_register_token63] = ACTIONS(29),
    [aux_sym_register_token64] = ACTIONS(29),
    [aux_sym_register_token65] = ACTIONS(29),
    [aux_sym_register_token66] = ACTIONS(29),
    [aux_sym_register_token67] = ACTIONS(29),
    [aux_sym_register_token68] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(29),
    [aux_sym_constant_numeric_token1] = ACTIONS(29),
    [aux_sym_constant_numeric_token2] = ACTIONS(29),
    [aux_sym_constant_numeric_token3] = ACTIONS(29),
    [aux_sym_constant_numeric_token4] = ACTIONS(29),
    [aux_sym_constant_numeric_token5] = ACTIONS(29),
    [aux_sym_constant_numeric_token6] = ACTIONS(29),
    [aux_sym_constant_numeric_token7] = ACTIONS(29),
    [aux_sym_constant_numeric_token8] = ACTIONS(29),
    [aux_sym_constant_numeric_token9] = ACTIONS(29),
    [aux_sym_constant_numeric_token10] = ACTIONS(29),
    [aux_sym_constant_charstr_token1] = ACTIONS(29),
    [aux_sym_constant_charstr_token2] = ACTIONS(29),
    [aux_sym_constant_charstr_token3] = ACTIONS(29),
    [aux_sym_known_instruction_token1] = ACTIONS(27),
    [aux_sym_known_instruction_token2] = ACTIONS(27),
    [aux_sym_known_instruction_token3] = ACTIONS(27),
    [aux_sym_known_instruction_token4] = ACTIONS(27),
    [aux_sym_known_instruction_token5] = ACTIONS(27),
    [aux_sym_pseudo_instruction_token1] = ACTIONS(27),
    [aux_sym_pseudo_instruction_token2] = ACTIONS(27),
    [aux_sym_pseudo_instruction_token3] = ACTIONS(27),
    [aux_sym_pseudo_instruction_token4] = ACTIONS(27),
    [aux_sym_pseudo_instruction_token5] = ACTIONS(27),
    [aux_sym_pseudo_instruction_token6] = ACTIONS(27),
    [aux_sym_pseudo_instruction_token7] = ACTIONS(27),
    [aux_sym_pseudo_instruction_token8] = ACTIONS(27),
    [aux_sym_pseudo_instruction_token9] = ACTIONS(27),
    [aux_sym_pseudo_instruction_token10] = ACTIONS(27),
    [aux_sym_pseudo_instruction_token11] = ACTIONS(27),
    [aux_sym_pseudo_instruction_token12] = ACTIONS(27),
    [aux_sym_pseudo_instruction_token13] = ACTIONS(27),
    [aux_sym_pseudo_instruction_token14] = ACTIONS(27),
    [aux_sym_pseudo_instruction_token15] = ACTIONS(27),
    [aux_sym_pseudo_instruction_token16] = ACTIONS(27),
    [aux_sym_pseudo_instruction_token17] = ACTIONS(27),
    [aux_sym_pseudo_instruction_token18] = ACTIONS(27),
    [aux_sym_pseudo_instruction_token19] = ACTIONS(27),
    [sym_comment] = ACTIONS(15),
    [aux_sym_word_token1] = ACTIONS(27),
  },
  [4] = {
    [aux_sym_source_file_token1] = ACTIONS(19),
    [anon_sym_COLON] = ACTIONS(21),
    [aux_sym_instruction_prefix_token1] = ACTIONS(21),
    [aux_sym_instruction_prefix_token2] = ACTIONS(21),
    [aux_sym_instruction_prefix_token3] = ACTIONS(21),
    [aux_sym_instruction_prefix_token4] = ACTIONS(21),
    [aux_sym_instruction_prefix_token5] = ACTIONS(21),
    [aux_sym_instruction_prefix_token6] = ACTIONS(21),
    [aux_sym_instruction_prefix_token7] = ACTIONS(21),
    [aux_sym_instruction_prefix_token8] = ACTIONS(21),
    [aux_sym_instruction_prefix_token9] = ACTIONS(21),
    [aux_sym_instruction_prefix_token10] = ACTIONS(21),
    [aux_sym_instruction_prefix_token11] = ACTIONS(21),
    [aux_sym_instruction_prefix_token12] = ACTIONS(21),
    [aux_sym_instruction_prefix_token13] = ACTIONS(21),
    [aux_sym_instruction_prefix_token14] = ACTIONS(21),
    [aux_sym_instruction_prefix_token15] = ACTIONS(21),
    [aux_sym_instruction_prefix_token16] = ACTIONS(21),
    [aux_sym_instruction_prefix_token17] = ACTIONS(21),
    [aux_sym_instruction_prefix_token18] = ACTIONS(21),
    [aux_sym_instruction_prefix_token19] = ACTIONS(21),
    [aux_sym_instruction_prefix_token20] = ACTIONS(21),
    [aux_sym_instruction_prefix_token21] = ACTIONS(21),
    [aux_sym_instruction_prefix_token22] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(21),
    [anon_sym_strict] = ACTIONS(21),
    [aux_sym_operand_prefix_token1] = ACTIONS(21),
    [aux_sym_operand_prefix_token2] = ACTIONS(21),
    [aux_sym_operand_prefix_token3] = ACTIONS(21),
    [aux_sym_operand_prefix_token4] = ACTIONS(21),
    [aux_sym_operand_prefix_token5] = ACTIONS(21),
    [aux_sym_operand_prefix_token6] = ACTIONS(21),
    [aux_sym_operand_prefix_token7] = ACTIONS(21),
    [aux_sym_operand_prefix_token8] = ACTIONS(21),
    [aux_sym_register_token1] = ACTIONS(21),
    [aux_sym_register_token2] = ACTIONS(21),
    [aux_sym_register_token3] = ACTIONS(21),
    [aux_sym_register_token4] = ACTIONS(21),
    [aux_sym_register_token5] = ACTIONS(21),
    [aux_sym_register_token6] = ACTIONS(21),
    [aux_sym_register_token7] = ACTIONS(21),
    [aux_sym_register_token8] = ACTIONS(21),
    [aux_sym_register_token9] = ACTIONS(21),
    [aux_sym_register_token10] = ACTIONS(21),
    [aux_sym_register_token11] = ACTIONS(21),
    [aux_sym_register_token12] = ACTIONS(21),
    [aux_sym_register_token13] = ACTIONS(21),
    [aux_sym_register_token14] = ACTIONS(21),
    [aux_sym_register_token15] = ACTIONS(21),
    [aux_sym_register_token16] = ACTIONS(21),
    [aux_sym_register_token17] = ACTIONS(21),
    [aux_sym_register_token18] = ACTIONS(21),
    [aux_sym_register_token19] = ACTIONS(21),
    [aux_sym_register_token20] = ACTIONS(21),
    [aux_sym_register_token21] = ACTIONS(21),
    [aux_sym_register_token22] = ACTIONS(21),
    [aux_sym_register_token23] = ACTIONS(21),
    [aux_sym_register_token24] = ACTIONS(21),
    [aux_sym_register_token25] = ACTIONS(21),
    [aux_sym_register_token26] = ACTIONS(21),
    [aux_sym_register_token27] = ACTIONS(21),
    [aux_sym_register_token28] = ACTIONS(21),
    [aux_sym_register_token29] = ACTIONS(21),
    [aux_sym_register_token30] = ACTIONS(21),
    [aux_sym_register_token31] = ACTIONS(21),
    [aux_sym_register_token32] = ACTIONS(21),
    [aux_sym_register_token33] = ACTIONS(21),
    [aux_sym_register_token34] = ACTIONS(21),
    [aux_sym_register_token35] = ACTIONS(21),
    [aux_sym_register_token36] = ACTIONS(21),
    [aux_sym_register_token37] = ACTIONS(21),
    [aux_sym_register_token38] = ACTIONS(21),
    [aux_sym_register_token39] = ACTIONS(21),
    [aux_sym_register_token40] = ACTIONS(21),
    [aux_sym_register_token41] = ACTIONS(21),
    [aux_sym_register_token42] = ACTIONS(21),
    [aux_sym_register_token43] = ACTIONS(21),
    [aux_sym_register_token44] = ACTIONS(21),
    [aux_sym_register_token45] = ACTIONS(21),
    [aux_sym_register_token46] = ACTIONS(21),
    [aux_sym_register_token47] = ACTIONS(21),
    [aux_sym_register_token48] = ACTIONS(21),
    [aux_sym_register_token49] = ACTIONS(21),
    [aux_sym_register_token50] = ACTIONS(21),
    [aux_sym_register_token51] = ACTIONS(21),
    [aux_sym_register_token52] = ACTIONS(21),
    [aux_sym_register_token53] = ACTIONS(21),
    [aux_sym_register_token54] = ACTIONS(21),
    [aux_sym_register_token55] = ACTIONS(21),
    [aux_sym_register_token56] = ACTIONS(21),
    [aux_sym_register_token57] = ACTIONS(21),
    [aux_sym_register_token58] = ACTIONS(21),
    [aux_sym_register_token59] = ACTIONS(21),
    [aux_sym_register_token60] = ACTIONS(21),
    [aux_sym_register_token61] = ACTIONS(21),
    [aux_sym_register_token62] = ACTIONS(21),
    [aux_sym_register_token63] = ACTIONS(21),
    [aux_sym_register_token64] = ACTIONS(21),
    [aux_sym_register_token65] = ACTIONS(21),
    [aux_sym_register_token66] = ACTIONS(21),
    [aux_sym_register_token67] = ACTIONS(21),
    [aux_sym_register_token68] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(21),
    [aux_sym_constant_numeric_token1] = ACTIONS(21),
    [aux_sym_constant_numeric_token2] = ACTIONS(21),
    [aux_sym_constant_numeric_token3] = ACTIONS(21),
    [aux_sym_constant_numeric_token4] = ACTIONS(21),
    [aux_sym_constant_numeric_token5] = ACTIONS(21),
    [aux_sym_constant_numeric_token6] = ACTIONS(21),
    [aux_sym_constant_numeric_token7] = ACTIONS(21),
    [aux_sym_constant_numeric_token8] = ACTIONS(21),
    [aux_sym_constant_numeric_token9] = ACTIONS(21),
    [aux_sym_constant_numeric_token10] = ACTIONS(21),
    [aux_sym_constant_charstr_token1] = ACTIONS(21),
    [aux_sym_constant_charstr_token2] = ACTIONS(21),
    [aux_sym_constant_charstr_token3] = ACTIONS(21),
    [aux_sym_known_instruction_token1] = ACTIONS(21),
    [aux_sym_known_instruction_token2] = ACTIONS(21),
    [aux_sym_known_instruction_token3] = ACTIONS(21),
    [aux_sym_known_instruction_token4] = ACTIONS(21),
    [aux_sym_known_instruction_token5] = ACTIONS(21),
    [aux_sym_pseudo_instruction_token1] = ACTIONS(21),
    [aux_sym_pseudo_instruction_token2] = ACTIONS(21),
    [aux_sym_pseudo_instruction_token3] = ACTIONS(21),
    [aux_sym_pseudo_instruction_token4] = ACTIONS(21),
    [aux_sym_pseudo_instruction_token5] = ACTIONS(21),
    [aux_sym_pseudo_instruction_token6] = ACTIONS(21),
    [aux_sym_pseudo_instruction_token7] = ACTIONS(21),
    [aux_sym_pseudo_instruction_token8] = ACTIONS(21),
    [aux_sym_pseudo_instruction_token9] = ACTIONS(21),
    [aux_sym_pseudo_instruction_token10] = ACTIONS(21),
    [aux_sym_pseudo_instruction_token11] = ACTIONS(21),
    [aux_sym_pseudo_instruction_token12] = ACTIONS(21),
    [aux_sym_pseudo_instruction_token13] = ACTIONS(21),
    [aux_sym_pseudo_instruction_token14] = ACTIONS(21),
    [aux_sym_pseudo_instruction_token15] = ACTIONS(21),
    [aux_sym_pseudo_instruction_token16] = ACTIONS(21),
    [aux_sym_pseudo_instruction_token17] = ACTIONS(21),
    [aux_sym_pseudo_instruction_token18] = ACTIONS(21),
    [aux_sym_pseudo_instruction_token19] = ACTIONS(21),
    [sym_comment] = ACTIONS(15),
    [aux_sym_word_token1] = ACTIONS(21),
  },
  [5] = {
    [aux_sym_source_file_token1] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(31),
    [aux_sym_instruction_prefix_token1] = ACTIONS(27),
    [aux_sym_instruction_prefix_token2] = ACTIONS(27),
    [aux_sym_instruction_prefix_token3] = ACTIONS(27),
    [aux_sym_instruction_prefix_token4] = ACTIONS(27),
    [aux_sym_instruction_prefix_token5] = ACTIONS(27),
    [aux_sym_instruction_prefix_token6] = ACTIONS(27),
    [aux_sym_instruction_prefix_token7] = ACTIONS(27),
    [aux_sym_instruction_prefix_token8] = ACTIONS(27),
    [aux_sym_instruction_prefix_token9] = ACTIONS(27),
    [aux_sym_instruction_prefix_token10] = ACTIONS(27),
    [aux_sym_instruction_prefix_token11] = ACTIONS(27),
    [aux_sym_instruction_prefix_token12] = ACTIONS(27),
    [aux_sym_instruction_prefix_token13] = ACTIONS(27),
    [aux_sym_instruction_prefix_token14] = ACTIONS(27),
    [aux_sym_instruction_prefix_token15] = ACTIONS(27),
    [aux_sym_instruction_prefix_token16] = ACTIONS(27),
    [aux_sym_instruction_prefix_token17] = ACTIONS(27),
    [aux_sym_instruction_prefix_token18] = ACTIONS(27),
    [aux_sym_instruction_prefix_token19] = ACTIONS(27),
    [aux_sym_instruction_prefix_token20] = ACTIONS(27),
    [aux_sym_instruction_prefix_token21] = ACTIONS(27),
    [aux_sym_instruction_prefix_token22] = ACTIONS(27),
    [anon_sym_strict] = ACTIONS(29),
    [aux_sym_operand_prefix_token1] = ACTIONS(29),
    [aux_sym_operand_prefix_token2] = ACTIONS(29),
    [aux_sym_operand_prefix_token3] = ACTIONS(29),
    [aux_sym_operand_prefix_token4] = ACTIONS(29),
    [aux_sym_operand_prefix_token5] = ACTIONS(29),
    [aux_sym_operand_prefix_token6] = ACTIONS(29),
    [aux_sym_operand_prefix_token7] = ACTIONS(29),
    [aux_sym_operand_prefix_token8] = ACTIONS(29),
    [aux_sym_register_token1] = ACTIONS(29),
    [aux_sym_register_token2] = ACTIONS(29),
    [aux_sym_register_token3] = ACTIONS(29),
    [aux_sym_register_token4] = ACTIONS(29),
    [aux_sym_register_token5] = ACTIONS(29),
    [aux_sym_register_token6] = ACTIONS(29),
    [aux_sym_register_token7] = ACTIONS(29),
    [aux_sym_register_token8] = ACTIONS(29),
    [aux_sym_register_token9] = ACTIONS(29),
    [aux_sym_register_token10] = ACTIONS(29),
    [aux_sym_register_token11] = ACTIONS(29),
    [aux_sym_register_token12] = ACTIONS(29),
    [aux_sym_register_token13] = ACTIONS(29),
    [aux_sym_register_token14] = ACTIONS(29),
    [aux_sym_register_token15] = ACTIONS(29),
    [aux_sym_register_token16] = ACTIONS(29),
    [aux_sym_register_token17] = ACTIONS(29),
    [aux_sym_register_token18] = ACTIONS(29),
    [aux_sym_register_token19] = ACTIONS(29),
    [aux_sym_register_token20] = ACTIONS(29),
    [aux_sym_register_token21] = ACTIONS(29),
    [aux_sym_register_token22] = ACTIONS(29),
    [aux_sym_register_token23] = ACTIONS(29),
    [aux_sym_register_token24] = ACTIONS(29),
    [aux_sym_register_token25] = ACTIONS(29),
    [aux_sym_register_token26] = ACTIONS(29),
    [aux_sym_register_token27] = ACTIONS(29),
    [aux_sym_register_token28] = ACTIONS(29),
    [aux_sym_register_token29] = ACTIONS(29),
    [aux_sym_register_token30] = ACTIONS(29),
    [aux_sym_register_token31] = ACTIONS(29),
    [aux_sym_register_token32] = ACTIONS(29),
    [aux_sym_register_token33] = ACTIONS(29),
    [aux_sym_register_token34] = ACTIONS(29),
    [aux_sym_register_token35] = ACTIONS(29),
    [aux_sym_register_token36] = ACTIONS(29),
    [aux_sym_register_token37] = ACTIONS(29),
    [aux_sym_register_token38] = ACTIONS(29),
    [aux_sym_register_token39] = ACTIONS(29),
    [aux_sym_register_token40] = ACTIONS(29),
    [aux_sym_register_token41] = ACTIONS(29),
    [aux_sym_register_token42] = ACTIONS(29),
    [aux_sym_register_token43] = ACTIONS(29),
    [aux_sym_register_token44] = ACTIONS(29),
    [aux_sym_register_token45] = ACTIONS(29),
    [aux_sym_register_token46] = ACTIONS(29),
    [aux_sym_register_token47] = ACTIONS(29),
    [aux_sym_register_token48] = ACTIONS(29),
    [aux_sym_register_token49] = ACTIONS(29),
    [aux_sym_register_token50] = ACTIONS(29),
    [aux_sym_register_token51] = ACTIONS(29),
    [aux_sym_register_token52] = ACTIONS(29),
    [aux_sym_register_token53] = ACTIONS(29),
    [aux_sym_register_token54] = ACTIONS(29),
    [aux_sym_register_token55] = ACTIONS(29),
    [aux_sym_register_token56] = ACTIONS(29),
    [aux_sym_register_token57] = ACTIONS(29),
    [aux_sym_register_token58] = ACTIONS(29),
    [aux_sym_register_token59] = ACTIONS(29),
    [aux_sym_register_token60] = ACTIONS(29),
    [aux_sym_register_token61] = ACTIONS(29),
    [aux_sym_register_token62] = ACTIONS(29),
    [aux_sym_register_token63] = ACTIONS(29),
    [aux_sym_register_token64] = ACTIONS(29),
    [aux_sym_register_token65] = ACTIONS(29),
    [aux_sym_register_token66] = ACTIONS(29),
    [aux_sym_register_token67] = ACTIONS(29),
    [aux_sym_register_token68] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(29),
    [aux_sym_constant_numeric_token1] = ACTIONS(29),
    [aux_sym_constant_numeric_token2] = ACTIONS(29),
    [aux_sym_constant_numeric_token3] = ACTIONS(29),
    [aux_sym_constant_numeric_token4] = ACTIONS(29),
    [aux_sym_constant_numeric_token5] = ACTIONS(29),
    [aux_sym_constant_numeric_token6] = ACTIONS(29),
    [aux_sym_constant_numeric_token7] = ACTIONS(29),
    [aux_sym_constant_numeric_token8] = ACTIONS(29),
    [aux_sym_constant_numeric_token9] = ACTIONS(29),
    [aux_sym_constant_numeric_token10] = ACTIONS(29),
    [aux_sym_constant_charstr_token1] = ACTIONS(29),
    [aux_sym_constant_charstr_token2] = ACTIONS(29),
    [aux_sym_constant_charstr_token3] = ACTIONS(29),
    [aux_sym_known_instruction_token1] = ACTIONS(27),
    [aux_sym_known_instruction_token2] = ACTIONS(27),
    [aux_sym_known_instruction_token3] = ACTIONS(27),
    [aux_sym_known_instruction_token4] = ACTIONS(27),
    [aux_sym_known_instruction_token5] = ACTIONS(27),
    [aux_sym_pseudo_instruction_token1] = ACTIONS(27),
    [aux_sym_pseudo_instruction_token2] = ACTIONS(27),
    [aux_sym_pseudo_instruction_token3] = ACTIONS(27),
    [aux_sym_pseudo_instruction_token4] = ACTIONS(27),
    [aux_sym_pseudo_instruction_token5] = ACTIONS(27),
    [aux_sym_pseudo_instruction_token6] = ACTIONS(27),
    [aux_sym_pseudo_instruction_token7] = ACTIONS(27),
    [aux_sym_pseudo_instruction_token8] = ACTIONS(27),
    [aux_sym_pseudo_instruction_token9] = ACTIONS(27),
    [aux_sym_pseudo_instruction_token10] = ACTIONS(27),
    [aux_sym_pseudo_instruction_token11] = ACTIONS(27),
    [aux_sym_pseudo_instruction_token12] = ACTIONS(27),
    [aux_sym_pseudo_instruction_token13] = ACTIONS(27),
    [aux_sym_pseudo_instruction_token14] = ACTIONS(27),
    [aux_sym_pseudo_instruction_token15] = ACTIONS(27),
    [aux_sym_pseudo_instruction_token16] = ACTIONS(27),
    [aux_sym_pseudo_instruction_token17] = ACTIONS(27),
    [aux_sym_pseudo_instruction_token18] = ACTIONS(27),
    [aux_sym_pseudo_instruction_token19] = ACTIONS(27),
    [sym_comment] = ACTIONS(15),
    [aux_sym_word_token1] = ACTIONS(27),
  },
  [6] = {
    [sym_operands] = STATE(69),
    [sym_operand] = STATE(37),
    [sym_operand_prefix] = STATE(21),
    [sym_register] = STATE(50),
    [sym_effective_address] = STATE(50),
    [sym_constant] = STATE(50),
    [sym_constant_numeric] = STATE(49),
    [sym_constant_charstr] = STATE(49),
    [sym_word] = STATE(48),
    [sym_expression] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(33),
    [aux_sym_source_file_token1] = ACTIONS(33),
    [anon_sym_strict] = ACTIONS(35),
    [aux_sym_operand_prefix_token1] = ACTIONS(37),
    [aux_sym_operand_prefix_token2] = ACTIONS(37),
    [aux_sym_operand_prefix_token3] = ACTIONS(37),
    [aux_sym_operand_prefix_token4] = ACTIONS(37),
    [aux_sym_operand_prefix_token5] = ACTIONS(37),
    [aux_sym_operand_prefix_token6] = ACTIONS(37),
    [aux_sym_operand_prefix_token7] = ACTIONS(37),
    [aux_sym_operand_prefix_token8] = ACTIONS(37),
    [aux_sym_register_token1] = ACTIONS(39),
    [aux_sym_register_token2] = ACTIONS(39),
    [aux_sym_register_token3] = ACTIONS(39),
    [aux_sym_register_token4] = ACTIONS(39),
    [aux_sym_register_token5] = ACTIONS(39),
    [aux_sym_register_token6] = ACTIONS(39),
    [aux_sym_register_token7] = ACTIONS(39),
    [aux_sym_register_token8] = ACTIONS(39),
    [aux_sym_register_token9] = ACTIONS(39),
    [aux_sym_register_token10] = ACTIONS(39),
    [aux_sym_register_token11] = ACTIONS(39),
    [aux_sym_register_token12] = ACTIONS(39),
    [aux_sym_register_token13] = ACTIONS(39),
    [aux_sym_register_token14] = ACTIONS(39),
    [aux_sym_register_token15] = ACTIONS(39),
    [aux_sym_register_token16] = ACTIONS(39),
    [aux_sym_register_token17] = ACTIONS(39),
    [aux_sym_register_token18] = ACTIONS(39),
    [aux_sym_register_token19] = ACTIONS(39),
    [aux_sym_register_token20] = ACTIONS(39),
    [aux_sym_register_token21] = ACTIONS(39),
    [aux_sym_register_token22] = ACTIONS(39),
    [aux_sym_register_token23] = ACTIONS(39),
    [aux_sym_register_token24] = ACTIONS(39),
    [aux_sym_register_token25] = ACTIONS(39),
    [aux_sym_register_token26] = ACTIONS(39),
    [aux_sym_register_token27] = ACTIONS(39),
    [aux_sym_register_token28] = ACTIONS(39),
    [aux_sym_register_token29] = ACTIONS(39),
    [aux_sym_register_token30] = ACTIONS(39),
    [aux_sym_register_token31] = ACTIONS(39),
    [aux_sym_register_token32] = ACTIONS(39),
    [aux_sym_register_token33] = ACTIONS(39),
    [aux_sym_register_token34] = ACTIONS(39),
    [aux_sym_register_token35] = ACTIONS(39),
    [aux_sym_register_token36] = ACTIONS(39),
    [aux_sym_register_token37] = ACTIONS(39),
    [aux_sym_register_token38] = ACTIONS(39),
    [aux_sym_register_token39] = ACTIONS(39),
    [aux_sym_register_token40] = ACTIONS(39),
    [aux_sym_register_token41] = ACTIONS(39),
    [aux_sym_register_token42] = ACTIONS(39),
    [aux_sym_register_token43] = ACTIONS(39),
    [aux_sym_register_token44] = ACTIONS(39),
    [aux_sym_register_token45] = ACTIONS(39),
    [aux_sym_register_token46] = ACTIONS(39),
    [aux_sym_register_token47] = ACTIONS(39),
    [aux_sym_register_token48] = ACTIONS(39),
    [aux_sym_register_token49] = ACTIONS(39),
    [aux_sym_register_token50] = ACTIONS(39),
    [aux_sym_register_token51] = ACTIONS(39),
    [aux_sym_register_token52] = ACTIONS(39),
    [aux_sym_register_token53] = ACTIONS(39),
    [aux_sym_register_token54] = ACTIONS(39),
    [aux_sym_register_token55] = ACTIONS(39),
    [aux_sym_register_token56] = ACTIONS(39),
    [aux_sym_register_token57] = ACTIONS(39),
    [aux_sym_register_token58] = ACTIONS(39),
    [aux_sym_register_token59] = ACTIONS(39),
    [aux_sym_register_token60] = ACTIONS(39),
    [aux_sym_register_token61] = ACTIONS(39),
    [aux_sym_register_token62] = ACTIONS(39),
    [aux_sym_register_token63] = ACTIONS(39),
    [aux_sym_register_token64] = ACTIONS(39),
    [aux_sym_register_token65] = ACTIONS(39),
    [aux_sym_register_token66] = ACTIONS(39),
    [aux_sym_register_token67] = ACTIONS(39),
    [aux_sym_register_token68] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_constant_numeric_token1] = ACTIONS(43),
    [aux_sym_constant_numeric_token2] = ACTIONS(43),
    [aux_sym_constant_numeric_token3] = ACTIONS(43),
    [aux_sym_constant_numeric_token4] = ACTIONS(43),
    [aux_sym_constant_numeric_token5] = ACTIONS(43),
    [aux_sym_constant_numeric_token6] = ACTIONS(43),
    [aux_sym_constant_numeric_token7] = ACTIONS(43),
    [aux_sym_constant_numeric_token8] = ACTIONS(43),
    [aux_sym_constant_numeric_token9] = ACTIONS(43),
    [aux_sym_constant_numeric_token10] = ACTIONS(43),
    [aux_sym_constant_charstr_token1] = ACTIONS(45),
    [aux_sym_constant_charstr_token2] = ACTIONS(45),
    [aux_sym_constant_charstr_token3] = ACTIONS(45),
    [sym_comment] = ACTIONS(15),
    [aux_sym_word_token1] = ACTIONS(17),
  },
  [7] = {
    [sym_operands] = STATE(62),
    [sym_operand] = STATE(37),
    [sym_operand_prefix] = STATE(21),
    [sym_register] = STATE(50),
    [sym_effective_address] = STATE(50),
    [sym_constant] = STATE(50),
    [sym_constant_numeric] = STATE(49),
    [sym_constant_charstr] = STATE(49),
    [sym_word] = STATE(48),
    [sym_expression] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(47),
    [aux_sym_source_file_token1] = ACTIONS(47),
    [anon_sym_strict] = ACTIONS(35),
    [aux_sym_operand_prefix_token1] = ACTIONS(37),
    [aux_sym_operand_prefix_token2] = ACTIONS(37),
    [aux_sym_operand_prefix_token3] = ACTIONS(37),
    [aux_sym_operand_prefix_token4] = ACTIONS(37),
    [aux_sym_operand_prefix_token5] = ACTIONS(37),
    [aux_sym_operand_prefix_token6] = ACTIONS(37),
    [aux_sym_operand_prefix_token7] = ACTIONS(37),
    [aux_sym_operand_prefix_token8] = ACTIONS(37),
    [aux_sym_register_token1] = ACTIONS(39),
    [aux_sym_register_token2] = ACTIONS(39),
    [aux_sym_register_token3] = ACTIONS(39),
    [aux_sym_register_token4] = ACTIONS(39),
    [aux_sym_register_token5] = ACTIONS(39),
    [aux_sym_register_token6] = ACTIONS(39),
    [aux_sym_register_token7] = ACTIONS(39),
    [aux_sym_register_token8] = ACTIONS(39),
    [aux_sym_register_token9] = ACTIONS(39),
    [aux_sym_register_token10] = ACTIONS(39),
    [aux_sym_register_token11] = ACTIONS(39),
    [aux_sym_register_token12] = ACTIONS(39),
    [aux_sym_register_token13] = ACTIONS(39),
    [aux_sym_register_token14] = ACTIONS(39),
    [aux_sym_register_token15] = ACTIONS(39),
    [aux_sym_register_token16] = ACTIONS(39),
    [aux_sym_register_token17] = ACTIONS(39),
    [aux_sym_register_token18] = ACTIONS(39),
    [aux_sym_register_token19] = ACTIONS(39),
    [aux_sym_register_token20] = ACTIONS(39),
    [aux_sym_register_token21] = ACTIONS(39),
    [aux_sym_register_token22] = ACTIONS(39),
    [aux_sym_register_token23] = ACTIONS(39),
    [aux_sym_register_token24] = ACTIONS(39),
    [aux_sym_register_token25] = ACTIONS(39),
    [aux_sym_register_token26] = ACTIONS(39),
    [aux_sym_register_token27] = ACTIONS(39),
    [aux_sym_register_token28] = ACTIONS(39),
    [aux_sym_register_token29] = ACTIONS(39),
    [aux_sym_register_token30] = ACTIONS(39),
    [aux_sym_register_token31] = ACTIONS(39),
    [aux_sym_register_token32] = ACTIONS(39),
    [aux_sym_register_token33] = ACTIONS(39),
    [aux_sym_register_token34] = ACTIONS(39),
    [aux_sym_register_token35] = ACTIONS(39),
    [aux_sym_register_token36] = ACTIONS(39),
    [aux_sym_register_token37] = ACTIONS(39),
    [aux_sym_register_token38] = ACTIONS(39),
    [aux_sym_register_token39] = ACTIONS(39),
    [aux_sym_register_token40] = ACTIONS(39),
    [aux_sym_register_token41] = ACTIONS(39),
    [aux_sym_register_token42] = ACTIONS(39),
    [aux_sym_register_token43] = ACTIONS(39),
    [aux_sym_register_token44] = ACTIONS(39),
    [aux_sym_register_token45] = ACTIONS(39),
    [aux_sym_register_token46] = ACTIONS(39),
    [aux_sym_register_token47] = ACTIONS(39),
    [aux_sym_register_token48] = ACTIONS(39),
    [aux_sym_register_token49] = ACTIONS(39),
    [aux_sym_register_token50] = ACTIONS(39),
    [aux_sym_register_token51] = ACTIONS(39),
    [aux_sym_register_token52] = ACTIONS(39),
    [aux_sym_register_token53] = ACTIONS(39),
    [aux_sym_register_token54] = ACTIONS(39),
    [aux_sym_register_token55] = ACTIONS(39),
    [aux_sym_register_token56] = ACTIONS(39),
    [aux_sym_register_token57] = ACTIONS(39),
    [aux_sym_register_token58] = ACTIONS(39),
    [aux_sym_register_token59] = ACTIONS(39),
    [aux_sym_register_token60] = ACTIONS(39),
    [aux_sym_register_token61] = ACTIONS(39),
    [aux_sym_register_token62] = ACTIONS(39),
    [aux_sym_register_token63] = ACTIONS(39),
    [aux_sym_register_token64] = ACTIONS(39),
    [aux_sym_register_token65] = ACTIONS(39),
    [aux_sym_register_token66] = ACTIONS(39),
    [aux_sym_register_token67] = ACTIONS(39),
    [aux_sym_register_token68] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_constant_numeric_token1] = ACTIONS(43),
    [aux_sym_constant_numeric_token2] = ACTIONS(43),
    [aux_sym_constant_numeric_token3] = ACTIONS(43),
    [aux_sym_constant_numeric_token4] = ACTIONS(43),
    [aux_sym_constant_numeric_token5] = ACTIONS(43),
    [aux_sym_constant_numeric_token6] = ACTIONS(43),
    [aux_sym_constant_numeric_token7] = ACTIONS(43),
    [aux_sym_constant_numeric_token8] = ACTIONS(43),
    [aux_sym_constant_numeric_token9] = ACTIONS(43),
    [aux_sym_constant_numeric_token10] = ACTIONS(43),
    [aux_sym_constant_charstr_token1] = ACTIONS(45),
    [aux_sym_constant_charstr_token2] = ACTIONS(45),
    [aux_sym_constant_charstr_token3] = ACTIONS(45),
    [sym_comment] = ACTIONS(15),
    [aux_sym_word_token1] = ACTIONS(17),
  },
  [8] = {
    [sym_operands] = STATE(74),
    [sym_operand] = STATE(42),
    [sym_operand_prefix] = STATE(20),
    [sym_register] = STATE(63),
    [sym_effective_address] = STATE(63),
    [sym_constant] = STATE(63),
    [sym_constant_numeric] = STATE(64),
    [sym_constant_charstr] = STATE(64),
    [sym_word] = STATE(65),
    [sym_expression] = STATE(63),
    [aux_sym_source_file_token1] = ACTIONS(33),
    [anon_sym_strict] = ACTIONS(35),
    [aux_sym_operand_prefix_token1] = ACTIONS(37),
    [aux_sym_operand_prefix_token2] = ACTIONS(37),
    [aux_sym_operand_prefix_token3] = ACTIONS(37),
    [aux_sym_operand_prefix_token4] = ACTIONS(37),
    [aux_sym_operand_prefix_token5] = ACTIONS(37),
    [aux_sym_operand_prefix_token6] = ACTIONS(37),
    [aux_sym_operand_prefix_token7] = ACTIONS(37),
    [aux_sym_operand_prefix_token8] = ACTIONS(37),
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
    [anon_sym_LBRACK] = ACTIONS(51),
    [aux_sym_constant_numeric_token1] = ACTIONS(53),
    [aux_sym_constant_numeric_token2] = ACTIONS(53),
    [aux_sym_constant_numeric_token3] = ACTIONS(53),
    [aux_sym_constant_numeric_token4] = ACTIONS(53),
    [aux_sym_constant_numeric_token5] = ACTIONS(53),
    [aux_sym_constant_numeric_token6] = ACTIONS(53),
    [aux_sym_constant_numeric_token7] = ACTIONS(53),
    [aux_sym_constant_numeric_token8] = ACTIONS(53),
    [aux_sym_constant_numeric_token9] = ACTIONS(53),
    [aux_sym_constant_numeric_token10] = ACTIONS(53),
    [aux_sym_constant_charstr_token1] = ACTIONS(55),
    [aux_sym_constant_charstr_token2] = ACTIONS(55),
    [aux_sym_constant_charstr_token3] = ACTIONS(55),
    [sym_comment] = ACTIONS(15),
    [aux_sym_word_token1] = ACTIONS(57),
  },
  [9] = {
    [sym_operands] = STATE(82),
    [sym_operand] = STATE(42),
    [sym_operand_prefix] = STATE(20),
    [sym_register] = STATE(63),
    [sym_effective_address] = STATE(63),
    [sym_constant] = STATE(63),
    [sym_constant_numeric] = STATE(64),
    [sym_constant_charstr] = STATE(64),
    [sym_word] = STATE(65),
    [sym_expression] = STATE(63),
    [aux_sym_source_file_token1] = ACTIONS(47),
    [anon_sym_strict] = ACTIONS(35),
    [aux_sym_operand_prefix_token1] = ACTIONS(37),
    [aux_sym_operand_prefix_token2] = ACTIONS(37),
    [aux_sym_operand_prefix_token3] = ACTIONS(37),
    [aux_sym_operand_prefix_token4] = ACTIONS(37),
    [aux_sym_operand_prefix_token5] = ACTIONS(37),
    [aux_sym_operand_prefix_token6] = ACTIONS(37),
    [aux_sym_operand_prefix_token7] = ACTIONS(37),
    [aux_sym_operand_prefix_token8] = ACTIONS(37),
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
    [anon_sym_LBRACK] = ACTIONS(51),
    [aux_sym_constant_numeric_token1] = ACTIONS(53),
    [aux_sym_constant_numeric_token2] = ACTIONS(53),
    [aux_sym_constant_numeric_token3] = ACTIONS(53),
    [aux_sym_constant_numeric_token4] = ACTIONS(53),
    [aux_sym_constant_numeric_token5] = ACTIONS(53),
    [aux_sym_constant_numeric_token6] = ACTIONS(53),
    [aux_sym_constant_numeric_token7] = ACTIONS(53),
    [aux_sym_constant_numeric_token8] = ACTIONS(53),
    [aux_sym_constant_numeric_token9] = ACTIONS(53),
    [aux_sym_constant_numeric_token10] = ACTIONS(53),
    [aux_sym_constant_charstr_token1] = ACTIONS(55),
    [aux_sym_constant_charstr_token2] = ACTIONS(55),
    [aux_sym_constant_charstr_token3] = ACTIONS(55),
    [sym_comment] = ACTIONS(15),
    [aux_sym_word_token1] = ACTIONS(57),
  },
  [10] = {
    [sym_operand] = STATE(44),
    [sym_operand_prefix] = STATE(21),
    [sym_register] = STATE(50),
    [sym_effective_address] = STATE(50),
    [sym_constant] = STATE(50),
    [sym_constant_numeric] = STATE(49),
    [sym_constant_charstr] = STATE(49),
    [sym_word] = STATE(48),
    [sym_expression] = STATE(50),
    [anon_sym_strict] = ACTIONS(35),
    [aux_sym_operand_prefix_token1] = ACTIONS(37),
    [aux_sym_operand_prefix_token2] = ACTIONS(37),
    [aux_sym_operand_prefix_token3] = ACTIONS(37),
    [aux_sym_operand_prefix_token4] = ACTIONS(37),
    [aux_sym_operand_prefix_token5] = ACTIONS(37),
    [aux_sym_operand_prefix_token6] = ACTIONS(37),
    [aux_sym_operand_prefix_token7] = ACTIONS(37),
    [aux_sym_operand_prefix_token8] = ACTIONS(37),
    [aux_sym_register_token1] = ACTIONS(39),
    [aux_sym_register_token2] = ACTIONS(39),
    [aux_sym_register_token3] = ACTIONS(39),
    [aux_sym_register_token4] = ACTIONS(39),
    [aux_sym_register_token5] = ACTIONS(39),
    [aux_sym_register_token6] = ACTIONS(39),
    [aux_sym_register_token7] = ACTIONS(39),
    [aux_sym_register_token8] = ACTIONS(39),
    [aux_sym_register_token9] = ACTIONS(39),
    [aux_sym_register_token10] = ACTIONS(39),
    [aux_sym_register_token11] = ACTIONS(39),
    [aux_sym_register_token12] = ACTIONS(39),
    [aux_sym_register_token13] = ACTIONS(39),
    [aux_sym_register_token14] = ACTIONS(39),
    [aux_sym_register_token15] = ACTIONS(39),
    [aux_sym_register_token16] = ACTIONS(39),
    [aux_sym_register_token17] = ACTIONS(39),
    [aux_sym_register_token18] = ACTIONS(39),
    [aux_sym_register_token19] = ACTIONS(39),
    [aux_sym_register_token20] = ACTIONS(39),
    [aux_sym_register_token21] = ACTIONS(39),
    [aux_sym_register_token22] = ACTIONS(39),
    [aux_sym_register_token23] = ACTIONS(39),
    [aux_sym_register_token24] = ACTIONS(39),
    [aux_sym_register_token25] = ACTIONS(39),
    [aux_sym_register_token26] = ACTIONS(39),
    [aux_sym_register_token27] = ACTIONS(39),
    [aux_sym_register_token28] = ACTIONS(39),
    [aux_sym_register_token29] = ACTIONS(39),
    [aux_sym_register_token30] = ACTIONS(39),
    [aux_sym_register_token31] = ACTIONS(39),
    [aux_sym_register_token32] = ACTIONS(39),
    [aux_sym_register_token33] = ACTIONS(39),
    [aux_sym_register_token34] = ACTIONS(39),
    [aux_sym_register_token35] = ACTIONS(39),
    [aux_sym_register_token36] = ACTIONS(39),
    [aux_sym_register_token37] = ACTIONS(39),
    [aux_sym_register_token38] = ACTIONS(39),
    [aux_sym_register_token39] = ACTIONS(39),
    [aux_sym_register_token40] = ACTIONS(39),
    [aux_sym_register_token41] = ACTIONS(39),
    [aux_sym_register_token42] = ACTIONS(39),
    [aux_sym_register_token43] = ACTIONS(39),
    [aux_sym_register_token44] = ACTIONS(39),
    [aux_sym_register_token45] = ACTIONS(39),
    [aux_sym_register_token46] = ACTIONS(39),
    [aux_sym_register_token47] = ACTIONS(39),
    [aux_sym_register_token48] = ACTIONS(39),
    [aux_sym_register_token49] = ACTIONS(39),
    [aux_sym_register_token50] = ACTIONS(39),
    [aux_sym_register_token51] = ACTIONS(39),
    [aux_sym_register_token52] = ACTIONS(39),
    [aux_sym_register_token53] = ACTIONS(39),
    [aux_sym_register_token54] = ACTIONS(39),
    [aux_sym_register_token55] = ACTIONS(39),
    [aux_sym_register_token56] = ACTIONS(39),
    [aux_sym_register_token57] = ACTIONS(39),
    [aux_sym_register_token58] = ACTIONS(39),
    [aux_sym_register_token59] = ACTIONS(39),
    [aux_sym_register_token60] = ACTIONS(39),
    [aux_sym_register_token61] = ACTIONS(39),
    [aux_sym_register_token62] = ACTIONS(39),
    [aux_sym_register_token63] = ACTIONS(39),
    [aux_sym_register_token64] = ACTIONS(39),
    [aux_sym_register_token65] = ACTIONS(39),
    [aux_sym_register_token66] = ACTIONS(39),
    [aux_sym_register_token67] = ACTIONS(39),
    [aux_sym_register_token68] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(59),
    [aux_sym_constant_numeric_token1] = ACTIONS(43),
    [aux_sym_constant_numeric_token2] = ACTIONS(43),
    [aux_sym_constant_numeric_token3] = ACTIONS(61),
    [aux_sym_constant_numeric_token4] = ACTIONS(43),
    [aux_sym_constant_numeric_token5] = ACTIONS(43),
    [aux_sym_constant_numeric_token6] = ACTIONS(43),
    [aux_sym_constant_numeric_token7] = ACTIONS(61),
    [aux_sym_constant_numeric_token8] = ACTIONS(43),
    [aux_sym_constant_numeric_token9] = ACTIONS(43),
    [aux_sym_constant_numeric_token10] = ACTIONS(43),
    [aux_sym_constant_charstr_token1] = ACTIONS(63),
    [aux_sym_constant_charstr_token2] = ACTIONS(63),
    [aux_sym_constant_charstr_token3] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
    [aux_sym_word_token1] = ACTIONS(17),
  },
  [11] = {
    [sym_operand] = STATE(68),
    [sym_operand_prefix] = STATE(20),
    [sym_register] = STATE(63),
    [sym_effective_address] = STATE(63),
    [sym_constant] = STATE(63),
    [sym_constant_numeric] = STATE(64),
    [sym_constant_charstr] = STATE(64),
    [sym_word] = STATE(65),
    [sym_expression] = STATE(63),
    [anon_sym_strict] = ACTIONS(35),
    [aux_sym_operand_prefix_token1] = ACTIONS(37),
    [aux_sym_operand_prefix_token2] = ACTIONS(37),
    [aux_sym_operand_prefix_token3] = ACTIONS(37),
    [aux_sym_operand_prefix_token4] = ACTIONS(37),
    [aux_sym_operand_prefix_token5] = ACTIONS(37),
    [aux_sym_operand_prefix_token6] = ACTIONS(37),
    [aux_sym_operand_prefix_token7] = ACTIONS(37),
    [aux_sym_operand_prefix_token8] = ACTIONS(37),
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
    [anon_sym_LBRACK] = ACTIONS(65),
    [aux_sym_constant_numeric_token1] = ACTIONS(53),
    [aux_sym_constant_numeric_token2] = ACTIONS(53),
    [aux_sym_constant_numeric_token3] = ACTIONS(67),
    [aux_sym_constant_numeric_token4] = ACTIONS(53),
    [aux_sym_constant_numeric_token5] = ACTIONS(53),
    [aux_sym_constant_numeric_token6] = ACTIONS(53),
    [aux_sym_constant_numeric_token7] = ACTIONS(67),
    [aux_sym_constant_numeric_token8] = ACTIONS(53),
    [aux_sym_constant_numeric_token9] = ACTIONS(53),
    [aux_sym_constant_numeric_token10] = ACTIONS(53),
    [aux_sym_constant_charstr_token1] = ACTIONS(69),
    [aux_sym_constant_charstr_token2] = ACTIONS(69),
    [aux_sym_constant_charstr_token3] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
    [aux_sym_word_token1] = ACTIONS(57),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(71),
    [aux_sym_source_file_token1] = ACTIONS(71),
    [anon_sym_strict] = ACTIONS(29),
    [aux_sym_operand_prefix_token1] = ACTIONS(29),
    [aux_sym_operand_prefix_token2] = ACTIONS(29),
    [aux_sym_operand_prefix_token3] = ACTIONS(29),
    [aux_sym_operand_prefix_token4] = ACTIONS(29),
    [aux_sym_operand_prefix_token5] = ACTIONS(29),
    [aux_sym_operand_prefix_token6] = ACTIONS(29),
    [aux_sym_operand_prefix_token7] = ACTIONS(29),
    [aux_sym_operand_prefix_token8] = ACTIONS(29),
    [aux_sym_register_token1] = ACTIONS(29),
    [aux_sym_register_token2] = ACTIONS(29),
    [aux_sym_register_token3] = ACTIONS(29),
    [aux_sym_register_token4] = ACTIONS(29),
    [aux_sym_register_token5] = ACTIONS(29),
    [aux_sym_register_token6] = ACTIONS(29),
    [aux_sym_register_token7] = ACTIONS(29),
    [aux_sym_register_token8] = ACTIONS(29),
    [aux_sym_register_token9] = ACTIONS(29),
    [aux_sym_register_token10] = ACTIONS(29),
    [aux_sym_register_token11] = ACTIONS(29),
    [aux_sym_register_token12] = ACTIONS(29),
    [aux_sym_register_token13] = ACTIONS(29),
    [aux_sym_register_token14] = ACTIONS(29),
    [aux_sym_register_token15] = ACTIONS(29),
    [aux_sym_register_token16] = ACTIONS(29),
    [aux_sym_register_token17] = ACTIONS(29),
    [aux_sym_register_token18] = ACTIONS(29),
    [aux_sym_register_token19] = ACTIONS(29),
    [aux_sym_register_token20] = ACTIONS(29),
    [aux_sym_register_token21] = ACTIONS(29),
    [aux_sym_register_token22] = ACTIONS(29),
    [aux_sym_register_token23] = ACTIONS(29),
    [aux_sym_register_token24] = ACTIONS(29),
    [aux_sym_register_token25] = ACTIONS(29),
    [aux_sym_register_token26] = ACTIONS(29),
    [aux_sym_register_token27] = ACTIONS(29),
    [aux_sym_register_token28] = ACTIONS(29),
    [aux_sym_register_token29] = ACTIONS(29),
    [aux_sym_register_token30] = ACTIONS(29),
    [aux_sym_register_token31] = ACTIONS(29),
    [aux_sym_register_token32] = ACTIONS(29),
    [aux_sym_register_token33] = ACTIONS(29),
    [aux_sym_register_token34] = ACTIONS(29),
    [aux_sym_register_token35] = ACTIONS(29),
    [aux_sym_register_token36] = ACTIONS(29),
    [aux_sym_register_token37] = ACTIONS(29),
    [aux_sym_register_token38] = ACTIONS(29),
    [aux_sym_register_token39] = ACTIONS(29),
    [aux_sym_register_token40] = ACTIONS(29),
    [aux_sym_register_token41] = ACTIONS(29),
    [aux_sym_register_token42] = ACTIONS(29),
    [aux_sym_register_token43] = ACTIONS(29),
    [aux_sym_register_token44] = ACTIONS(29),
    [aux_sym_register_token45] = ACTIONS(29),
    [aux_sym_register_token46] = ACTIONS(29),
    [aux_sym_register_token47] = ACTIONS(29),
    [aux_sym_register_token48] = ACTIONS(29),
    [aux_sym_register_token49] = ACTIONS(29),
    [aux_sym_register_token50] = ACTIONS(29),
    [aux_sym_register_token51] = ACTIONS(29),
    [aux_sym_register_token52] = ACTIONS(29),
    [aux_sym_register_token53] = ACTIONS(29),
    [aux_sym_register_token54] = ACTIONS(29),
    [aux_sym_register_token55] = ACTIONS(29),
    [aux_sym_register_token56] = ACTIONS(29),
    [aux_sym_register_token57] = ACTIONS(29),
    [aux_sym_register_token58] = ACTIONS(29),
    [aux_sym_register_token59] = ACTIONS(29),
    [aux_sym_register_token60] = ACTIONS(29),
    [aux_sym_register_token61] = ACTIONS(29),
    [aux_sym_register_token62] = ACTIONS(29),
    [aux_sym_register_token63] = ACTIONS(29),
    [aux_sym_register_token64] = ACTIONS(29),
    [aux_sym_register_token65] = ACTIONS(29),
    [aux_sym_register_token66] = ACTIONS(29),
    [aux_sym_register_token67] = ACTIONS(29),
    [aux_sym_register_token68] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(29),
    [aux_sym_constant_numeric_token1] = ACTIONS(29),
    [aux_sym_constant_numeric_token2] = ACTIONS(29),
    [aux_sym_constant_numeric_token3] = ACTIONS(29),
    [aux_sym_constant_numeric_token4] = ACTIONS(29),
    [aux_sym_constant_numeric_token5] = ACTIONS(29),
    [aux_sym_constant_numeric_token6] = ACTIONS(29),
    [aux_sym_constant_numeric_token7] = ACTIONS(29),
    [aux_sym_constant_numeric_token8] = ACTIONS(29),
    [aux_sym_constant_numeric_token9] = ACTIONS(29),
    [aux_sym_constant_numeric_token10] = ACTIONS(29),
    [aux_sym_constant_charstr_token1] = ACTIONS(29),
    [aux_sym_constant_charstr_token2] = ACTIONS(29),
    [aux_sym_constant_charstr_token3] = ACTIONS(29),
    [sym_comment] = ACTIONS(15),
    [aux_sym_word_token1] = ACTIONS(29),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [aux_sym_source_file_token1] = ACTIONS(73),
    [anon_sym_strict] = ACTIONS(75),
    [aux_sym_operand_prefix_token1] = ACTIONS(75),
    [aux_sym_operand_prefix_token2] = ACTIONS(75),
    [aux_sym_operand_prefix_token3] = ACTIONS(75),
    [aux_sym_operand_prefix_token4] = ACTIONS(75),
    [aux_sym_operand_prefix_token5] = ACTIONS(75),
    [aux_sym_operand_prefix_token6] = ACTIONS(75),
    [aux_sym_operand_prefix_token7] = ACTIONS(75),
    [aux_sym_operand_prefix_token8] = ACTIONS(75),
    [aux_sym_register_token1] = ACTIONS(75),
    [aux_sym_register_token2] = ACTIONS(75),
    [aux_sym_register_token3] = ACTIONS(75),
    [aux_sym_register_token4] = ACTIONS(75),
    [aux_sym_register_token5] = ACTIONS(75),
    [aux_sym_register_token6] = ACTIONS(75),
    [aux_sym_register_token7] = ACTIONS(75),
    [aux_sym_register_token8] = ACTIONS(75),
    [aux_sym_register_token9] = ACTIONS(75),
    [aux_sym_register_token10] = ACTIONS(75),
    [aux_sym_register_token11] = ACTIONS(75),
    [aux_sym_register_token12] = ACTIONS(75),
    [aux_sym_register_token13] = ACTIONS(75),
    [aux_sym_register_token14] = ACTIONS(75),
    [aux_sym_register_token15] = ACTIONS(75),
    [aux_sym_register_token16] = ACTIONS(75),
    [aux_sym_register_token17] = ACTIONS(75),
    [aux_sym_register_token18] = ACTIONS(75),
    [aux_sym_register_token19] = ACTIONS(75),
    [aux_sym_register_token20] = ACTIONS(75),
    [aux_sym_register_token21] = ACTIONS(75),
    [aux_sym_register_token22] = ACTIONS(75),
    [aux_sym_register_token23] = ACTIONS(75),
    [aux_sym_register_token24] = ACTIONS(75),
    [aux_sym_register_token25] = ACTIONS(75),
    [aux_sym_register_token26] = ACTIONS(75),
    [aux_sym_register_token27] = ACTIONS(75),
    [aux_sym_register_token28] = ACTIONS(75),
    [aux_sym_register_token29] = ACTIONS(75),
    [aux_sym_register_token30] = ACTIONS(75),
    [aux_sym_register_token31] = ACTIONS(75),
    [aux_sym_register_token32] = ACTIONS(75),
    [aux_sym_register_token33] = ACTIONS(75),
    [aux_sym_register_token34] = ACTIONS(75),
    [aux_sym_register_token35] = ACTIONS(75),
    [aux_sym_register_token36] = ACTIONS(75),
    [aux_sym_register_token37] = ACTIONS(75),
    [aux_sym_register_token38] = ACTIONS(75),
    [aux_sym_register_token39] = ACTIONS(75),
    [aux_sym_register_token40] = ACTIONS(75),
    [aux_sym_register_token41] = ACTIONS(75),
    [aux_sym_register_token42] = ACTIONS(75),
    [aux_sym_register_token43] = ACTIONS(75),
    [aux_sym_register_token44] = ACTIONS(75),
    [aux_sym_register_token45] = ACTIONS(75),
    [aux_sym_register_token46] = ACTIONS(75),
    [aux_sym_register_token47] = ACTIONS(75),
    [aux_sym_register_token48] = ACTIONS(75),
    [aux_sym_register_token49] = ACTIONS(75),
    [aux_sym_register_token50] = ACTIONS(75),
    [aux_sym_register_token51] = ACTIONS(75),
    [aux_sym_register_token52] = ACTIONS(75),
    [aux_sym_register_token53] = ACTIONS(75),
    [aux_sym_register_token54] = ACTIONS(75),
    [aux_sym_register_token55] = ACTIONS(75),
    [aux_sym_register_token56] = ACTIONS(75),
    [aux_sym_register_token57] = ACTIONS(75),
    [aux_sym_register_token58] = ACTIONS(75),
    [aux_sym_register_token59] = ACTIONS(75),
    [aux_sym_register_token60] = ACTIONS(75),
    [aux_sym_register_token61] = ACTIONS(75),
    [aux_sym_register_token62] = ACTIONS(75),
    [aux_sym_register_token63] = ACTIONS(75),
    [aux_sym_register_token64] = ACTIONS(75),
    [aux_sym_register_token65] = ACTIONS(75),
    [aux_sym_register_token66] = ACTIONS(75),
    [aux_sym_register_token67] = ACTIONS(75),
    [aux_sym_register_token68] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_constant_numeric_token1] = ACTIONS(75),
    [aux_sym_constant_numeric_token2] = ACTIONS(75),
    [aux_sym_constant_numeric_token3] = ACTIONS(75),
    [aux_sym_constant_numeric_token4] = ACTIONS(75),
    [aux_sym_constant_numeric_token5] = ACTIONS(75),
    [aux_sym_constant_numeric_token6] = ACTIONS(75),
    [aux_sym_constant_numeric_token7] = ACTIONS(75),
    [aux_sym_constant_numeric_token8] = ACTIONS(75),
    [aux_sym_constant_numeric_token9] = ACTIONS(75),
    [aux_sym_constant_numeric_token10] = ACTIONS(75),
    [aux_sym_constant_charstr_token1] = ACTIONS(75),
    [aux_sym_constant_charstr_token2] = ACTIONS(75),
    [aux_sym_constant_charstr_token3] = ACTIONS(75),
    [sym_comment] = ACTIONS(15),
    [aux_sym_word_token1] = ACTIONS(75),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [aux_sym_source_file_token1] = ACTIONS(77),
    [anon_sym_strict] = ACTIONS(79),
    [aux_sym_operand_prefix_token1] = ACTIONS(79),
    [aux_sym_operand_prefix_token2] = ACTIONS(79),
    [aux_sym_operand_prefix_token3] = ACTIONS(79),
    [aux_sym_operand_prefix_token4] = ACTIONS(79),
    [aux_sym_operand_prefix_token5] = ACTIONS(79),
    [aux_sym_operand_prefix_token6] = ACTIONS(79),
    [aux_sym_operand_prefix_token7] = ACTIONS(79),
    [aux_sym_operand_prefix_token8] = ACTIONS(79),
    [aux_sym_register_token1] = ACTIONS(79),
    [aux_sym_register_token2] = ACTIONS(79),
    [aux_sym_register_token3] = ACTIONS(79),
    [aux_sym_register_token4] = ACTIONS(79),
    [aux_sym_register_token5] = ACTIONS(79),
    [aux_sym_register_token6] = ACTIONS(79),
    [aux_sym_register_token7] = ACTIONS(79),
    [aux_sym_register_token8] = ACTIONS(79),
    [aux_sym_register_token9] = ACTIONS(79),
    [aux_sym_register_token10] = ACTIONS(79),
    [aux_sym_register_token11] = ACTIONS(79),
    [aux_sym_register_token12] = ACTIONS(79),
    [aux_sym_register_token13] = ACTIONS(79),
    [aux_sym_register_token14] = ACTIONS(79),
    [aux_sym_register_token15] = ACTIONS(79),
    [aux_sym_register_token16] = ACTIONS(79),
    [aux_sym_register_token17] = ACTIONS(79),
    [aux_sym_register_token18] = ACTIONS(79),
    [aux_sym_register_token19] = ACTIONS(79),
    [aux_sym_register_token20] = ACTIONS(79),
    [aux_sym_register_token21] = ACTIONS(79),
    [aux_sym_register_token22] = ACTIONS(79),
    [aux_sym_register_token23] = ACTIONS(79),
    [aux_sym_register_token24] = ACTIONS(79),
    [aux_sym_register_token25] = ACTIONS(79),
    [aux_sym_register_token26] = ACTIONS(79),
    [aux_sym_register_token27] = ACTIONS(79),
    [aux_sym_register_token28] = ACTIONS(79),
    [aux_sym_register_token29] = ACTIONS(79),
    [aux_sym_register_token30] = ACTIONS(79),
    [aux_sym_register_token31] = ACTIONS(79),
    [aux_sym_register_token32] = ACTIONS(79),
    [aux_sym_register_token33] = ACTIONS(79),
    [aux_sym_register_token34] = ACTIONS(79),
    [aux_sym_register_token35] = ACTIONS(79),
    [aux_sym_register_token36] = ACTIONS(79),
    [aux_sym_register_token37] = ACTIONS(79),
    [aux_sym_register_token38] = ACTIONS(79),
    [aux_sym_register_token39] = ACTIONS(79),
    [aux_sym_register_token40] = ACTIONS(79),
    [aux_sym_register_token41] = ACTIONS(79),
    [aux_sym_register_token42] = ACTIONS(79),
    [aux_sym_register_token43] = ACTIONS(79),
    [aux_sym_register_token44] = ACTIONS(79),
    [aux_sym_register_token45] = ACTIONS(79),
    [aux_sym_register_token46] = ACTIONS(79),
    [aux_sym_register_token47] = ACTIONS(79),
    [aux_sym_register_token48] = ACTIONS(79),
    [aux_sym_register_token49] = ACTIONS(79),
    [aux_sym_register_token50] = ACTIONS(79),
    [aux_sym_register_token51] = ACTIONS(79),
    [aux_sym_register_token52] = ACTIONS(79),
    [aux_sym_register_token53] = ACTIONS(79),
    [aux_sym_register_token54] = ACTIONS(79),
    [aux_sym_register_token55] = ACTIONS(79),
    [aux_sym_register_token56] = ACTIONS(79),
    [aux_sym_register_token57] = ACTIONS(79),
    [aux_sym_register_token58] = ACTIONS(79),
    [aux_sym_register_token59] = ACTIONS(79),
    [aux_sym_register_token60] = ACTIONS(79),
    [aux_sym_register_token61] = ACTIONS(79),
    [aux_sym_register_token62] = ACTIONS(79),
    [aux_sym_register_token63] = ACTIONS(79),
    [aux_sym_register_token64] = ACTIONS(79),
    [aux_sym_register_token65] = ACTIONS(79),
    [aux_sym_register_token66] = ACTIONS(79),
    [aux_sym_register_token67] = ACTIONS(79),
    [aux_sym_register_token68] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(79),
    [aux_sym_constant_numeric_token1] = ACTIONS(79),
    [aux_sym_constant_numeric_token2] = ACTIONS(79),
    [aux_sym_constant_numeric_token3] = ACTIONS(79),
    [aux_sym_constant_numeric_token4] = ACTIONS(79),
    [aux_sym_constant_numeric_token5] = ACTIONS(79),
    [aux_sym_constant_numeric_token6] = ACTIONS(79),
    [aux_sym_constant_numeric_token7] = ACTIONS(79),
    [aux_sym_constant_numeric_token8] = ACTIONS(79),
    [aux_sym_constant_numeric_token9] = ACTIONS(79),
    [aux_sym_constant_numeric_token10] = ACTIONS(79),
    [aux_sym_constant_charstr_token1] = ACTIONS(79),
    [aux_sym_constant_charstr_token2] = ACTIONS(79),
    [aux_sym_constant_charstr_token3] = ACTIONS(79),
    [sym_comment] = ACTIONS(15),
    [aux_sym_word_token1] = ACTIONS(79),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(19),
    [aux_sym_source_file_token1] = ACTIONS(19),
    [anon_sym_strict] = ACTIONS(21),
    [aux_sym_operand_prefix_token1] = ACTIONS(21),
    [aux_sym_operand_prefix_token2] = ACTIONS(21),
    [aux_sym_operand_prefix_token3] = ACTIONS(21),
    [aux_sym_operand_prefix_token4] = ACTIONS(21),
    [aux_sym_operand_prefix_token5] = ACTIONS(21),
    [aux_sym_operand_prefix_token6] = ACTIONS(21),
    [aux_sym_operand_prefix_token7] = ACTIONS(21),
    [aux_sym_operand_prefix_token8] = ACTIONS(21),
    [aux_sym_register_token1] = ACTIONS(21),
    [aux_sym_register_token2] = ACTIONS(21),
    [aux_sym_register_token3] = ACTIONS(21),
    [aux_sym_register_token4] = ACTIONS(21),
    [aux_sym_register_token5] = ACTIONS(21),
    [aux_sym_register_token6] = ACTIONS(21),
    [aux_sym_register_token7] = ACTIONS(21),
    [aux_sym_register_token8] = ACTIONS(21),
    [aux_sym_register_token9] = ACTIONS(21),
    [aux_sym_register_token10] = ACTIONS(21),
    [aux_sym_register_token11] = ACTIONS(21),
    [aux_sym_register_token12] = ACTIONS(21),
    [aux_sym_register_token13] = ACTIONS(21),
    [aux_sym_register_token14] = ACTIONS(21),
    [aux_sym_register_token15] = ACTIONS(21),
    [aux_sym_register_token16] = ACTIONS(21),
    [aux_sym_register_token17] = ACTIONS(21),
    [aux_sym_register_token18] = ACTIONS(21),
    [aux_sym_register_token19] = ACTIONS(21),
    [aux_sym_register_token20] = ACTIONS(21),
    [aux_sym_register_token21] = ACTIONS(21),
    [aux_sym_register_token22] = ACTIONS(21),
    [aux_sym_register_token23] = ACTIONS(21),
    [aux_sym_register_token24] = ACTIONS(21),
    [aux_sym_register_token25] = ACTIONS(21),
    [aux_sym_register_token26] = ACTIONS(21),
    [aux_sym_register_token27] = ACTIONS(21),
    [aux_sym_register_token28] = ACTIONS(21),
    [aux_sym_register_token29] = ACTIONS(21),
    [aux_sym_register_token30] = ACTIONS(21),
    [aux_sym_register_token31] = ACTIONS(21),
    [aux_sym_register_token32] = ACTIONS(21),
    [aux_sym_register_token33] = ACTIONS(21),
    [aux_sym_register_token34] = ACTIONS(21),
    [aux_sym_register_token35] = ACTIONS(21),
    [aux_sym_register_token36] = ACTIONS(21),
    [aux_sym_register_token37] = ACTIONS(21),
    [aux_sym_register_token38] = ACTIONS(21),
    [aux_sym_register_token39] = ACTIONS(21),
    [aux_sym_register_token40] = ACTIONS(21),
    [aux_sym_register_token41] = ACTIONS(21),
    [aux_sym_register_token42] = ACTIONS(21),
    [aux_sym_register_token43] = ACTIONS(21),
    [aux_sym_register_token44] = ACTIONS(21),
    [aux_sym_register_token45] = ACTIONS(21),
    [aux_sym_register_token46] = ACTIONS(21),
    [aux_sym_register_token47] = ACTIONS(21),
    [aux_sym_register_token48] = ACTIONS(21),
    [aux_sym_register_token49] = ACTIONS(21),
    [aux_sym_register_token50] = ACTIONS(21),
    [aux_sym_register_token51] = ACTIONS(21),
    [aux_sym_register_token52] = ACTIONS(21),
    [aux_sym_register_token53] = ACTIONS(21),
    [aux_sym_register_token54] = ACTIONS(21),
    [aux_sym_register_token55] = ACTIONS(21),
    [aux_sym_register_token56] = ACTIONS(21),
    [aux_sym_register_token57] = ACTIONS(21),
    [aux_sym_register_token58] = ACTIONS(21),
    [aux_sym_register_token59] = ACTIONS(21),
    [aux_sym_register_token60] = ACTIONS(21),
    [aux_sym_register_token61] = ACTIONS(21),
    [aux_sym_register_token62] = ACTIONS(21),
    [aux_sym_register_token63] = ACTIONS(21),
    [aux_sym_register_token64] = ACTIONS(21),
    [aux_sym_register_token65] = ACTIONS(21),
    [aux_sym_register_token66] = ACTIONS(21),
    [aux_sym_register_token67] = ACTIONS(21),
    [aux_sym_register_token68] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(21),
    [aux_sym_constant_numeric_token1] = ACTIONS(21),
    [aux_sym_constant_numeric_token2] = ACTIONS(21),
    [aux_sym_constant_numeric_token3] = ACTIONS(21),
    [aux_sym_constant_numeric_token4] = ACTIONS(21),
    [aux_sym_constant_numeric_token5] = ACTIONS(21),
    [aux_sym_constant_numeric_token6] = ACTIONS(21),
    [aux_sym_constant_numeric_token7] = ACTIONS(21),
    [aux_sym_constant_numeric_token8] = ACTIONS(21),
    [aux_sym_constant_numeric_token9] = ACTIONS(21),
    [aux_sym_constant_numeric_token10] = ACTIONS(21),
    [aux_sym_constant_charstr_token1] = ACTIONS(21),
    [aux_sym_constant_charstr_token2] = ACTIONS(21),
    [aux_sym_constant_charstr_token3] = ACTIONS(21),
    [sym_comment] = ACTIONS(15),
    [aux_sym_word_token1] = ACTIONS(21),
  },
  [16] = {
    [aux_sym_source_file_token1] = ACTIONS(19),
    [anon_sym_strict] = ACTIONS(21),
    [aux_sym_operand_prefix_token1] = ACTIONS(21),
    [aux_sym_operand_prefix_token2] = ACTIONS(21),
    [aux_sym_operand_prefix_token3] = ACTIONS(21),
    [aux_sym_operand_prefix_token4] = ACTIONS(21),
    [aux_sym_operand_prefix_token5] = ACTIONS(21),
    [aux_sym_operand_prefix_token6] = ACTIONS(21),
    [aux_sym_operand_prefix_token7] = ACTIONS(21),
    [aux_sym_operand_prefix_token8] = ACTIONS(21),
    [aux_sym_register_token1] = ACTIONS(21),
    [aux_sym_register_token2] = ACTIONS(21),
    [aux_sym_register_token3] = ACTIONS(21),
    [aux_sym_register_token4] = ACTIONS(21),
    [aux_sym_register_token5] = ACTIONS(21),
    [aux_sym_register_token6] = ACTIONS(21),
    [aux_sym_register_token7] = ACTIONS(21),
    [aux_sym_register_token8] = ACTIONS(21),
    [aux_sym_register_token9] = ACTIONS(21),
    [aux_sym_register_token10] = ACTIONS(21),
    [aux_sym_register_token11] = ACTIONS(21),
    [aux_sym_register_token12] = ACTIONS(21),
    [aux_sym_register_token13] = ACTIONS(21),
    [aux_sym_register_token14] = ACTIONS(21),
    [aux_sym_register_token15] = ACTIONS(21),
    [aux_sym_register_token16] = ACTIONS(21),
    [aux_sym_register_token17] = ACTIONS(21),
    [aux_sym_register_token18] = ACTIONS(21),
    [aux_sym_register_token19] = ACTIONS(21),
    [aux_sym_register_token20] = ACTIONS(21),
    [aux_sym_register_token21] = ACTIONS(21),
    [aux_sym_register_token22] = ACTIONS(21),
    [aux_sym_register_token23] = ACTIONS(21),
    [aux_sym_register_token24] = ACTIONS(21),
    [aux_sym_register_token25] = ACTIONS(21),
    [aux_sym_register_token26] = ACTIONS(21),
    [aux_sym_register_token27] = ACTIONS(21),
    [aux_sym_register_token28] = ACTIONS(21),
    [aux_sym_register_token29] = ACTIONS(21),
    [aux_sym_register_token30] = ACTIONS(21),
    [aux_sym_register_token31] = ACTIONS(21),
    [aux_sym_register_token32] = ACTIONS(21),
    [aux_sym_register_token33] = ACTIONS(21),
    [aux_sym_register_token34] = ACTIONS(21),
    [aux_sym_register_token35] = ACTIONS(21),
    [aux_sym_register_token36] = ACTIONS(21),
    [aux_sym_register_token37] = ACTIONS(21),
    [aux_sym_register_token38] = ACTIONS(21),
    [aux_sym_register_token39] = ACTIONS(21),
    [aux_sym_register_token40] = ACTIONS(21),
    [aux_sym_register_token41] = ACTIONS(21),
    [aux_sym_register_token42] = ACTIONS(21),
    [aux_sym_register_token43] = ACTIONS(21),
    [aux_sym_register_token44] = ACTIONS(21),
    [aux_sym_register_token45] = ACTIONS(21),
    [aux_sym_register_token46] = ACTIONS(21),
    [aux_sym_register_token47] = ACTIONS(21),
    [aux_sym_register_token48] = ACTIONS(21),
    [aux_sym_register_token49] = ACTIONS(21),
    [aux_sym_register_token50] = ACTIONS(21),
    [aux_sym_register_token51] = ACTIONS(21),
    [aux_sym_register_token52] = ACTIONS(21),
    [aux_sym_register_token53] = ACTIONS(21),
    [aux_sym_register_token54] = ACTIONS(21),
    [aux_sym_register_token55] = ACTIONS(21),
    [aux_sym_register_token56] = ACTIONS(21),
    [aux_sym_register_token57] = ACTIONS(21),
    [aux_sym_register_token58] = ACTIONS(21),
    [aux_sym_register_token59] = ACTIONS(21),
    [aux_sym_register_token60] = ACTIONS(21),
    [aux_sym_register_token61] = ACTIONS(21),
    [aux_sym_register_token62] = ACTIONS(21),
    [aux_sym_register_token63] = ACTIONS(21),
    [aux_sym_register_token64] = ACTIONS(21),
    [aux_sym_register_token65] = ACTIONS(21),
    [aux_sym_register_token66] = ACTIONS(21),
    [aux_sym_register_token67] = ACTIONS(21),
    [aux_sym_register_token68] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(21),
    [aux_sym_constant_numeric_token1] = ACTIONS(21),
    [aux_sym_constant_numeric_token2] = ACTIONS(21),
    [aux_sym_constant_numeric_token3] = ACTIONS(21),
    [aux_sym_constant_numeric_token4] = ACTIONS(21),
    [aux_sym_constant_numeric_token5] = ACTIONS(21),
    [aux_sym_constant_numeric_token6] = ACTIONS(21),
    [aux_sym_constant_numeric_token7] = ACTIONS(21),
    [aux_sym_constant_numeric_token8] = ACTIONS(21),
    [aux_sym_constant_numeric_token9] = ACTIONS(21),
    [aux_sym_constant_numeric_token10] = ACTIONS(21),
    [aux_sym_constant_charstr_token1] = ACTIONS(21),
    [aux_sym_constant_charstr_token2] = ACTIONS(21),
    [aux_sym_constant_charstr_token3] = ACTIONS(21),
    [sym_comment] = ACTIONS(15),
    [aux_sym_word_token1] = ACTIONS(21),
  },
  [17] = {
    [aux_sym_source_file_token1] = ACTIONS(73),
    [anon_sym_strict] = ACTIONS(75),
    [aux_sym_operand_prefix_token1] = ACTIONS(75),
    [aux_sym_operand_prefix_token2] = ACTIONS(75),
    [aux_sym_operand_prefix_token3] = ACTIONS(75),
    [aux_sym_operand_prefix_token4] = ACTIONS(75),
    [aux_sym_operand_prefix_token5] = ACTIONS(75),
    [aux_sym_operand_prefix_token6] = ACTIONS(75),
    [aux_sym_operand_prefix_token7] = ACTIONS(75),
    [aux_sym_operand_prefix_token8] = ACTIONS(75),
    [aux_sym_register_token1] = ACTIONS(75),
    [aux_sym_register_token2] = ACTIONS(75),
    [aux_sym_register_token3] = ACTIONS(75),
    [aux_sym_register_token4] = ACTIONS(75),
    [aux_sym_register_token5] = ACTIONS(75),
    [aux_sym_register_token6] = ACTIONS(75),
    [aux_sym_register_token7] = ACTIONS(75),
    [aux_sym_register_token8] = ACTIONS(75),
    [aux_sym_register_token9] = ACTIONS(75),
    [aux_sym_register_token10] = ACTIONS(75),
    [aux_sym_register_token11] = ACTIONS(75),
    [aux_sym_register_token12] = ACTIONS(75),
    [aux_sym_register_token13] = ACTIONS(75),
    [aux_sym_register_token14] = ACTIONS(75),
    [aux_sym_register_token15] = ACTIONS(75),
    [aux_sym_register_token16] = ACTIONS(75),
    [aux_sym_register_token17] = ACTIONS(75),
    [aux_sym_register_token18] = ACTIONS(75),
    [aux_sym_register_token19] = ACTIONS(75),
    [aux_sym_register_token20] = ACTIONS(75),
    [aux_sym_register_token21] = ACTIONS(75),
    [aux_sym_register_token22] = ACTIONS(75),
    [aux_sym_register_token23] = ACTIONS(75),
    [aux_sym_register_token24] = ACTIONS(75),
    [aux_sym_register_token25] = ACTIONS(75),
    [aux_sym_register_token26] = ACTIONS(75),
    [aux_sym_register_token27] = ACTIONS(75),
    [aux_sym_register_token28] = ACTIONS(75),
    [aux_sym_register_token29] = ACTIONS(75),
    [aux_sym_register_token30] = ACTIONS(75),
    [aux_sym_register_token31] = ACTIONS(75),
    [aux_sym_register_token32] = ACTIONS(75),
    [aux_sym_register_token33] = ACTIONS(75),
    [aux_sym_register_token34] = ACTIONS(75),
    [aux_sym_register_token35] = ACTIONS(75),
    [aux_sym_register_token36] = ACTIONS(75),
    [aux_sym_register_token37] = ACTIONS(75),
    [aux_sym_register_token38] = ACTIONS(75),
    [aux_sym_register_token39] = ACTIONS(75),
    [aux_sym_register_token40] = ACTIONS(75),
    [aux_sym_register_token41] = ACTIONS(75),
    [aux_sym_register_token42] = ACTIONS(75),
    [aux_sym_register_token43] = ACTIONS(75),
    [aux_sym_register_token44] = ACTIONS(75),
    [aux_sym_register_token45] = ACTIONS(75),
    [aux_sym_register_token46] = ACTIONS(75),
    [aux_sym_register_token47] = ACTIONS(75),
    [aux_sym_register_token48] = ACTIONS(75),
    [aux_sym_register_token49] = ACTIONS(75),
    [aux_sym_register_token50] = ACTIONS(75),
    [aux_sym_register_token51] = ACTIONS(75),
    [aux_sym_register_token52] = ACTIONS(75),
    [aux_sym_register_token53] = ACTIONS(75),
    [aux_sym_register_token54] = ACTIONS(75),
    [aux_sym_register_token55] = ACTIONS(75),
    [aux_sym_register_token56] = ACTIONS(75),
    [aux_sym_register_token57] = ACTIONS(75),
    [aux_sym_register_token58] = ACTIONS(75),
    [aux_sym_register_token59] = ACTIONS(75),
    [aux_sym_register_token60] = ACTIONS(75),
    [aux_sym_register_token61] = ACTIONS(75),
    [aux_sym_register_token62] = ACTIONS(75),
    [aux_sym_register_token63] = ACTIONS(75),
    [aux_sym_register_token64] = ACTIONS(75),
    [aux_sym_register_token65] = ACTIONS(75),
    [aux_sym_register_token66] = ACTIONS(75),
    [aux_sym_register_token67] = ACTIONS(75),
    [aux_sym_register_token68] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_constant_numeric_token1] = ACTIONS(75),
    [aux_sym_constant_numeric_token2] = ACTIONS(75),
    [aux_sym_constant_numeric_token3] = ACTIONS(75),
    [aux_sym_constant_numeric_token4] = ACTIONS(75),
    [aux_sym_constant_numeric_token5] = ACTIONS(75),
    [aux_sym_constant_numeric_token6] = ACTIONS(75),
    [aux_sym_constant_numeric_token7] = ACTIONS(75),
    [aux_sym_constant_numeric_token8] = ACTIONS(75),
    [aux_sym_constant_numeric_token9] = ACTIONS(75),
    [aux_sym_constant_numeric_token10] = ACTIONS(75),
    [aux_sym_constant_charstr_token1] = ACTIONS(75),
    [aux_sym_constant_charstr_token2] = ACTIONS(75),
    [aux_sym_constant_charstr_token3] = ACTIONS(75),
    [sym_comment] = ACTIONS(15),
    [aux_sym_word_token1] = ACTIONS(75),
  },
  [18] = {
    [aux_sym_source_file_token1] = ACTIONS(71),
    [anon_sym_strict] = ACTIONS(29),
    [aux_sym_operand_prefix_token1] = ACTIONS(29),
    [aux_sym_operand_prefix_token2] = ACTIONS(29),
    [aux_sym_operand_prefix_token3] = ACTIONS(29),
    [aux_sym_operand_prefix_token4] = ACTIONS(29),
    [aux_sym_operand_prefix_token5] = ACTIONS(29),
    [aux_sym_operand_prefix_token6] = ACTIONS(29),
    [aux_sym_operand_prefix_token7] = ACTIONS(29),
    [aux_sym_operand_prefix_token8] = ACTIONS(29),
    [aux_sym_register_token1] = ACTIONS(29),
    [aux_sym_register_token2] = ACTIONS(29),
    [aux_sym_register_token3] = ACTIONS(29),
    [aux_sym_register_token4] = ACTIONS(29),
    [aux_sym_register_token5] = ACTIONS(29),
    [aux_sym_register_token6] = ACTIONS(29),
    [aux_sym_register_token7] = ACTIONS(29),
    [aux_sym_register_token8] = ACTIONS(29),
    [aux_sym_register_token9] = ACTIONS(29),
    [aux_sym_register_token10] = ACTIONS(29),
    [aux_sym_register_token11] = ACTIONS(29),
    [aux_sym_register_token12] = ACTIONS(29),
    [aux_sym_register_token13] = ACTIONS(29),
    [aux_sym_register_token14] = ACTIONS(29),
    [aux_sym_register_token15] = ACTIONS(29),
    [aux_sym_register_token16] = ACTIONS(29),
    [aux_sym_register_token17] = ACTIONS(29),
    [aux_sym_register_token18] = ACTIONS(29),
    [aux_sym_register_token19] = ACTIONS(29),
    [aux_sym_register_token20] = ACTIONS(29),
    [aux_sym_register_token21] = ACTIONS(29),
    [aux_sym_register_token22] = ACTIONS(29),
    [aux_sym_register_token23] = ACTIONS(29),
    [aux_sym_register_token24] = ACTIONS(29),
    [aux_sym_register_token25] = ACTIONS(29),
    [aux_sym_register_token26] = ACTIONS(29),
    [aux_sym_register_token27] = ACTIONS(29),
    [aux_sym_register_token28] = ACTIONS(29),
    [aux_sym_register_token29] = ACTIONS(29),
    [aux_sym_register_token30] = ACTIONS(29),
    [aux_sym_register_token31] = ACTIONS(29),
    [aux_sym_register_token32] = ACTIONS(29),
    [aux_sym_register_token33] = ACTIONS(29),
    [aux_sym_register_token34] = ACTIONS(29),
    [aux_sym_register_token35] = ACTIONS(29),
    [aux_sym_register_token36] = ACTIONS(29),
    [aux_sym_register_token37] = ACTIONS(29),
    [aux_sym_register_token38] = ACTIONS(29),
    [aux_sym_register_token39] = ACTIONS(29),
    [aux_sym_register_token40] = ACTIONS(29),
    [aux_sym_register_token41] = ACTIONS(29),
    [aux_sym_register_token42] = ACTIONS(29),
    [aux_sym_register_token43] = ACTIONS(29),
    [aux_sym_register_token44] = ACTIONS(29),
    [aux_sym_register_token45] = ACTIONS(29),
    [aux_sym_register_token46] = ACTIONS(29),
    [aux_sym_register_token47] = ACTIONS(29),
    [aux_sym_register_token48] = ACTIONS(29),
    [aux_sym_register_token49] = ACTIONS(29),
    [aux_sym_register_token50] = ACTIONS(29),
    [aux_sym_register_token51] = ACTIONS(29),
    [aux_sym_register_token52] = ACTIONS(29),
    [aux_sym_register_token53] = ACTIONS(29),
    [aux_sym_register_token54] = ACTIONS(29),
    [aux_sym_register_token55] = ACTIONS(29),
    [aux_sym_register_token56] = ACTIONS(29),
    [aux_sym_register_token57] = ACTIONS(29),
    [aux_sym_register_token58] = ACTIONS(29),
    [aux_sym_register_token59] = ACTIONS(29),
    [aux_sym_register_token60] = ACTIONS(29),
    [aux_sym_register_token61] = ACTIONS(29),
    [aux_sym_register_token62] = ACTIONS(29),
    [aux_sym_register_token63] = ACTIONS(29),
    [aux_sym_register_token64] = ACTIONS(29),
    [aux_sym_register_token65] = ACTIONS(29),
    [aux_sym_register_token66] = ACTIONS(29),
    [aux_sym_register_token67] = ACTIONS(29),
    [aux_sym_register_token68] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(29),
    [aux_sym_constant_numeric_token1] = ACTIONS(29),
    [aux_sym_constant_numeric_token2] = ACTIONS(29),
    [aux_sym_constant_numeric_token3] = ACTIONS(29),
    [aux_sym_constant_numeric_token4] = ACTIONS(29),
    [aux_sym_constant_numeric_token5] = ACTIONS(29),
    [aux_sym_constant_numeric_token6] = ACTIONS(29),
    [aux_sym_constant_numeric_token7] = ACTIONS(29),
    [aux_sym_constant_numeric_token8] = ACTIONS(29),
    [aux_sym_constant_numeric_token9] = ACTIONS(29),
    [aux_sym_constant_numeric_token10] = ACTIONS(29),
    [aux_sym_constant_charstr_token1] = ACTIONS(29),
    [aux_sym_constant_charstr_token2] = ACTIONS(29),
    [aux_sym_constant_charstr_token3] = ACTIONS(29),
    [sym_comment] = ACTIONS(15),
    [aux_sym_word_token1] = ACTIONS(29),
  },
  [19] = {
    [aux_sym_source_file_token1] = ACTIONS(77),
    [anon_sym_strict] = ACTIONS(79),
    [aux_sym_operand_prefix_token1] = ACTIONS(79),
    [aux_sym_operand_prefix_token2] = ACTIONS(79),
    [aux_sym_operand_prefix_token3] = ACTIONS(79),
    [aux_sym_operand_prefix_token4] = ACTIONS(79),
    [aux_sym_operand_prefix_token5] = ACTIONS(79),
    [aux_sym_operand_prefix_token6] = ACTIONS(79),
    [aux_sym_operand_prefix_token7] = ACTIONS(79),
    [aux_sym_operand_prefix_token8] = ACTIONS(79),
    [aux_sym_register_token1] = ACTIONS(79),
    [aux_sym_register_token2] = ACTIONS(79),
    [aux_sym_register_token3] = ACTIONS(79),
    [aux_sym_register_token4] = ACTIONS(79),
    [aux_sym_register_token5] = ACTIONS(79),
    [aux_sym_register_token6] = ACTIONS(79),
    [aux_sym_register_token7] = ACTIONS(79),
    [aux_sym_register_token8] = ACTIONS(79),
    [aux_sym_register_token9] = ACTIONS(79),
    [aux_sym_register_token10] = ACTIONS(79),
    [aux_sym_register_token11] = ACTIONS(79),
    [aux_sym_register_token12] = ACTIONS(79),
    [aux_sym_register_token13] = ACTIONS(79),
    [aux_sym_register_token14] = ACTIONS(79),
    [aux_sym_register_token15] = ACTIONS(79),
    [aux_sym_register_token16] = ACTIONS(79),
    [aux_sym_register_token17] = ACTIONS(79),
    [aux_sym_register_token18] = ACTIONS(79),
    [aux_sym_register_token19] = ACTIONS(79),
    [aux_sym_register_token20] = ACTIONS(79),
    [aux_sym_register_token21] = ACTIONS(79),
    [aux_sym_register_token22] = ACTIONS(79),
    [aux_sym_register_token23] = ACTIONS(79),
    [aux_sym_register_token24] = ACTIONS(79),
    [aux_sym_register_token25] = ACTIONS(79),
    [aux_sym_register_token26] = ACTIONS(79),
    [aux_sym_register_token27] = ACTIONS(79),
    [aux_sym_register_token28] = ACTIONS(79),
    [aux_sym_register_token29] = ACTIONS(79),
    [aux_sym_register_token30] = ACTIONS(79),
    [aux_sym_register_token31] = ACTIONS(79),
    [aux_sym_register_token32] = ACTIONS(79),
    [aux_sym_register_token33] = ACTIONS(79),
    [aux_sym_register_token34] = ACTIONS(79),
    [aux_sym_register_token35] = ACTIONS(79),
    [aux_sym_register_token36] = ACTIONS(79),
    [aux_sym_register_token37] = ACTIONS(79),
    [aux_sym_register_token38] = ACTIONS(79),
    [aux_sym_register_token39] = ACTIONS(79),
    [aux_sym_register_token40] = ACTIONS(79),
    [aux_sym_register_token41] = ACTIONS(79),
    [aux_sym_register_token42] = ACTIONS(79),
    [aux_sym_register_token43] = ACTIONS(79),
    [aux_sym_register_token44] = ACTIONS(79),
    [aux_sym_register_token45] = ACTIONS(79),
    [aux_sym_register_token46] = ACTIONS(79),
    [aux_sym_register_token47] = ACTIONS(79),
    [aux_sym_register_token48] = ACTIONS(79),
    [aux_sym_register_token49] = ACTIONS(79),
    [aux_sym_register_token50] = ACTIONS(79),
    [aux_sym_register_token51] = ACTIONS(79),
    [aux_sym_register_token52] = ACTIONS(79),
    [aux_sym_register_token53] = ACTIONS(79),
    [aux_sym_register_token54] = ACTIONS(79),
    [aux_sym_register_token55] = ACTIONS(79),
    [aux_sym_register_token56] = ACTIONS(79),
    [aux_sym_register_token57] = ACTIONS(79),
    [aux_sym_register_token58] = ACTIONS(79),
    [aux_sym_register_token59] = ACTIONS(79),
    [aux_sym_register_token60] = ACTIONS(79),
    [aux_sym_register_token61] = ACTIONS(79),
    [aux_sym_register_token62] = ACTIONS(79),
    [aux_sym_register_token63] = ACTIONS(79),
    [aux_sym_register_token64] = ACTIONS(79),
    [aux_sym_register_token65] = ACTIONS(79),
    [aux_sym_register_token66] = ACTIONS(79),
    [aux_sym_register_token67] = ACTIONS(79),
    [aux_sym_register_token68] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(79),
    [aux_sym_constant_numeric_token1] = ACTIONS(79),
    [aux_sym_constant_numeric_token2] = ACTIONS(79),
    [aux_sym_constant_numeric_token3] = ACTIONS(79),
    [aux_sym_constant_numeric_token4] = ACTIONS(79),
    [aux_sym_constant_numeric_token5] = ACTIONS(79),
    [aux_sym_constant_numeric_token6] = ACTIONS(79),
    [aux_sym_constant_numeric_token7] = ACTIONS(79),
    [aux_sym_constant_numeric_token8] = ACTIONS(79),
    [aux_sym_constant_numeric_token9] = ACTIONS(79),
    [aux_sym_constant_numeric_token10] = ACTIONS(79),
    [aux_sym_constant_charstr_token1] = ACTIONS(79),
    [aux_sym_constant_charstr_token2] = ACTIONS(79),
    [aux_sym_constant_charstr_token3] = ACTIONS(79),
    [sym_comment] = ACTIONS(15),
    [aux_sym_word_token1] = ACTIONS(79),
  },
  [20] = {
    [sym_register] = STATE(70),
    [sym_effective_address] = STATE(70),
    [sym_constant] = STATE(70),
    [sym_constant_numeric] = STATE(64),
    [sym_constant_charstr] = STATE(64),
    [sym_word] = STATE(65),
    [sym_expression] = STATE(70),
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
    [anon_sym_LBRACK] = ACTIONS(65),
    [aux_sym_constant_numeric_token1] = ACTIONS(53),
    [aux_sym_constant_numeric_token2] = ACTIONS(53),
    [aux_sym_constant_numeric_token3] = ACTIONS(67),
    [aux_sym_constant_numeric_token4] = ACTIONS(53),
    [aux_sym_constant_numeric_token5] = ACTIONS(53),
    [aux_sym_constant_numeric_token6] = ACTIONS(53),
    [aux_sym_constant_numeric_token7] = ACTIONS(67),
    [aux_sym_constant_numeric_token8] = ACTIONS(53),
    [aux_sym_constant_numeric_token9] = ACTIONS(53),
    [aux_sym_constant_numeric_token10] = ACTIONS(53),
    [aux_sym_constant_charstr_token1] = ACTIONS(69),
    [aux_sym_constant_charstr_token2] = ACTIONS(69),
    [aux_sym_constant_charstr_token3] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
    [aux_sym_word_token1] = ACTIONS(57),
  },
  [21] = {
    [sym_register] = STATE(40),
    [sym_effective_address] = STATE(40),
    [sym_constant] = STATE(40),
    [sym_constant_numeric] = STATE(49),
    [sym_constant_charstr] = STATE(49),
    [sym_word] = STATE(48),
    [sym_expression] = STATE(40),
    [aux_sym_register_token1] = ACTIONS(39),
    [aux_sym_register_token2] = ACTIONS(39),
    [aux_sym_register_token3] = ACTIONS(39),
    [aux_sym_register_token4] = ACTIONS(39),
    [aux_sym_register_token5] = ACTIONS(39),
    [aux_sym_register_token6] = ACTIONS(39),
    [aux_sym_register_token7] = ACTIONS(39),
    [aux_sym_register_token8] = ACTIONS(39),
    [aux_sym_register_token9] = ACTIONS(39),
    [aux_sym_register_token10] = ACTIONS(39),
    [aux_sym_register_token11] = ACTIONS(39),
    [aux_sym_register_token12] = ACTIONS(39),
    [aux_sym_register_token13] = ACTIONS(39),
    [aux_sym_register_token14] = ACTIONS(39),
    [aux_sym_register_token15] = ACTIONS(39),
    [aux_sym_register_token16] = ACTIONS(39),
    [aux_sym_register_token17] = ACTIONS(39),
    [aux_sym_register_token18] = ACTIONS(39),
    [aux_sym_register_token19] = ACTIONS(39),
    [aux_sym_register_token20] = ACTIONS(39),
    [aux_sym_register_token21] = ACTIONS(39),
    [aux_sym_register_token22] = ACTIONS(39),
    [aux_sym_register_token23] = ACTIONS(39),
    [aux_sym_register_token24] = ACTIONS(39),
    [aux_sym_register_token25] = ACTIONS(39),
    [aux_sym_register_token26] = ACTIONS(39),
    [aux_sym_register_token27] = ACTIONS(39),
    [aux_sym_register_token28] = ACTIONS(39),
    [aux_sym_register_token29] = ACTIONS(39),
    [aux_sym_register_token30] = ACTIONS(39),
    [aux_sym_register_token31] = ACTIONS(39),
    [aux_sym_register_token32] = ACTIONS(39),
    [aux_sym_register_token33] = ACTIONS(39),
    [aux_sym_register_token34] = ACTIONS(39),
    [aux_sym_register_token35] = ACTIONS(39),
    [aux_sym_register_token36] = ACTIONS(39),
    [aux_sym_register_token37] = ACTIONS(39),
    [aux_sym_register_token38] = ACTIONS(39),
    [aux_sym_register_token39] = ACTIONS(39),
    [aux_sym_register_token40] = ACTIONS(39),
    [aux_sym_register_token41] = ACTIONS(39),
    [aux_sym_register_token42] = ACTIONS(39),
    [aux_sym_register_token43] = ACTIONS(39),
    [aux_sym_register_token44] = ACTIONS(39),
    [aux_sym_register_token45] = ACTIONS(39),
    [aux_sym_register_token46] = ACTIONS(39),
    [aux_sym_register_token47] = ACTIONS(39),
    [aux_sym_register_token48] = ACTIONS(39),
    [aux_sym_register_token49] = ACTIONS(39),
    [aux_sym_register_token50] = ACTIONS(39),
    [aux_sym_register_token51] = ACTIONS(39),
    [aux_sym_register_token52] = ACTIONS(39),
    [aux_sym_register_token53] = ACTIONS(39),
    [aux_sym_register_token54] = ACTIONS(39),
    [aux_sym_register_token55] = ACTIONS(39),
    [aux_sym_register_token56] = ACTIONS(39),
    [aux_sym_register_token57] = ACTIONS(39),
    [aux_sym_register_token58] = ACTIONS(39),
    [aux_sym_register_token59] = ACTIONS(39),
    [aux_sym_register_token60] = ACTIONS(39),
    [aux_sym_register_token61] = ACTIONS(39),
    [aux_sym_register_token62] = ACTIONS(39),
    [aux_sym_register_token63] = ACTIONS(39),
    [aux_sym_register_token64] = ACTIONS(39),
    [aux_sym_register_token65] = ACTIONS(39),
    [aux_sym_register_token66] = ACTIONS(39),
    [aux_sym_register_token67] = ACTIONS(39),
    [aux_sym_register_token68] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(59),
    [aux_sym_constant_numeric_token1] = ACTIONS(43),
    [aux_sym_constant_numeric_token2] = ACTIONS(43),
    [aux_sym_constant_numeric_token3] = ACTIONS(61),
    [aux_sym_constant_numeric_token4] = ACTIONS(43),
    [aux_sym_constant_numeric_token5] = ACTIONS(43),
    [aux_sym_constant_numeric_token6] = ACTIONS(43),
    [aux_sym_constant_numeric_token7] = ACTIONS(61),
    [aux_sym_constant_numeric_token8] = ACTIONS(43),
    [aux_sym_constant_numeric_token9] = ACTIONS(43),
    [aux_sym_constant_numeric_token10] = ACTIONS(43),
    [aux_sym_constant_charstr_token1] = ACTIONS(63),
    [aux_sym_constant_charstr_token2] = ACTIONS(63),
    [aux_sym_constant_charstr_token3] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
    [aux_sym_word_token1] = ACTIONS(17),
  },
  [22] = {
    [aux_sym_register_token1] = ACTIONS(81),
    [aux_sym_register_token2] = ACTIONS(81),
    [aux_sym_register_token3] = ACTIONS(81),
    [aux_sym_register_token4] = ACTIONS(81),
    [aux_sym_register_token5] = ACTIONS(81),
    [aux_sym_register_token6] = ACTIONS(81),
    [aux_sym_register_token7] = ACTIONS(81),
    [aux_sym_register_token8] = ACTIONS(81),
    [aux_sym_register_token9] = ACTIONS(81),
    [aux_sym_register_token10] = ACTIONS(81),
    [aux_sym_register_token11] = ACTIONS(81),
    [aux_sym_register_token12] = ACTIONS(81),
    [aux_sym_register_token13] = ACTIONS(81),
    [aux_sym_register_token14] = ACTIONS(81),
    [aux_sym_register_token15] = ACTIONS(81),
    [aux_sym_register_token16] = ACTIONS(81),
    [aux_sym_register_token17] = ACTIONS(81),
    [aux_sym_register_token18] = ACTIONS(81),
    [aux_sym_register_token19] = ACTIONS(81),
    [aux_sym_register_token20] = ACTIONS(81),
    [aux_sym_register_token21] = ACTIONS(81),
    [aux_sym_register_token22] = ACTIONS(81),
    [aux_sym_register_token23] = ACTIONS(81),
    [aux_sym_register_token24] = ACTIONS(81),
    [aux_sym_register_token25] = ACTIONS(81),
    [aux_sym_register_token26] = ACTIONS(81),
    [aux_sym_register_token27] = ACTIONS(81),
    [aux_sym_register_token28] = ACTIONS(81),
    [aux_sym_register_token29] = ACTIONS(81),
    [aux_sym_register_token30] = ACTIONS(81),
    [aux_sym_register_token31] = ACTIONS(81),
    [aux_sym_register_token32] = ACTIONS(81),
    [aux_sym_register_token33] = ACTIONS(81),
    [aux_sym_register_token34] = ACTIONS(81),
    [aux_sym_register_token35] = ACTIONS(81),
    [aux_sym_register_token36] = ACTIONS(81),
    [aux_sym_register_token37] = ACTIONS(81),
    [aux_sym_register_token38] = ACTIONS(81),
    [aux_sym_register_token39] = ACTIONS(81),
    [aux_sym_register_token40] = ACTIONS(81),
    [aux_sym_register_token41] = ACTIONS(81),
    [aux_sym_register_token42] = ACTIONS(81),
    [aux_sym_register_token43] = ACTIONS(81),
    [aux_sym_register_token44] = ACTIONS(81),
    [aux_sym_register_token45] = ACTIONS(81),
    [aux_sym_register_token46] = ACTIONS(81),
    [aux_sym_register_token47] = ACTIONS(81),
    [aux_sym_register_token48] = ACTIONS(81),
    [aux_sym_register_token49] = ACTIONS(81),
    [aux_sym_register_token50] = ACTIONS(81),
    [aux_sym_register_token51] = ACTIONS(81),
    [aux_sym_register_token52] = ACTIONS(81),
    [aux_sym_register_token53] = ACTIONS(81),
    [aux_sym_register_token54] = ACTIONS(81),
    [aux_sym_register_token55] = ACTIONS(81),
    [aux_sym_register_token56] = ACTIONS(81),
    [aux_sym_register_token57] = ACTIONS(81),
    [aux_sym_register_token58] = ACTIONS(81),
    [aux_sym_register_token59] = ACTIONS(81),
    [aux_sym_register_token60] = ACTIONS(81),
    [aux_sym_register_token61] = ACTIONS(81),
    [aux_sym_register_token62] = ACTIONS(81),
    [aux_sym_register_token63] = ACTIONS(81),
    [aux_sym_register_token64] = ACTIONS(81),
    [aux_sym_register_token65] = ACTIONS(81),
    [aux_sym_register_token66] = ACTIONS(81),
    [aux_sym_register_token67] = ACTIONS(81),
    [aux_sym_register_token68] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(83),
    [aux_sym_constant_numeric_token1] = ACTIONS(81),
    [aux_sym_constant_numeric_token2] = ACTIONS(81),
    [aux_sym_constant_numeric_token3] = ACTIONS(83),
    [aux_sym_constant_numeric_token4] = ACTIONS(81),
    [aux_sym_constant_numeric_token5] = ACTIONS(81),
    [aux_sym_constant_numeric_token6] = ACTIONS(81),
    [aux_sym_constant_numeric_token7] = ACTIONS(83),
    [aux_sym_constant_numeric_token8] = ACTIONS(81),
    [aux_sym_constant_numeric_token9] = ACTIONS(81),
    [aux_sym_constant_numeric_token10] = ACTIONS(81),
    [aux_sym_constant_charstr_token1] = ACTIONS(83),
    [aux_sym_constant_charstr_token2] = ACTIONS(83),
    [aux_sym_constant_charstr_token3] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
    [aux_sym_word_token1] = ACTIONS(81),
  },
  [23] = {
    [aux_sym_register_token1] = ACTIONS(85),
    [aux_sym_register_token2] = ACTIONS(85),
    [aux_sym_register_token3] = ACTIONS(85),
    [aux_sym_register_token4] = ACTIONS(85),
    [aux_sym_register_token5] = ACTIONS(85),
    [aux_sym_register_token6] = ACTIONS(85),
    [aux_sym_register_token7] = ACTIONS(85),
    [aux_sym_register_token8] = ACTIONS(85),
    [aux_sym_register_token9] = ACTIONS(85),
    [aux_sym_register_token10] = ACTIONS(85),
    [aux_sym_register_token11] = ACTIONS(85),
    [aux_sym_register_token12] = ACTIONS(85),
    [aux_sym_register_token13] = ACTIONS(85),
    [aux_sym_register_token14] = ACTIONS(85),
    [aux_sym_register_token15] = ACTIONS(85),
    [aux_sym_register_token16] = ACTIONS(85),
    [aux_sym_register_token17] = ACTIONS(85),
    [aux_sym_register_token18] = ACTIONS(85),
    [aux_sym_register_token19] = ACTIONS(85),
    [aux_sym_register_token20] = ACTIONS(85),
    [aux_sym_register_token21] = ACTIONS(85),
    [aux_sym_register_token22] = ACTIONS(85),
    [aux_sym_register_token23] = ACTIONS(85),
    [aux_sym_register_token24] = ACTIONS(85),
    [aux_sym_register_token25] = ACTIONS(85),
    [aux_sym_register_token26] = ACTIONS(85),
    [aux_sym_register_token27] = ACTIONS(85),
    [aux_sym_register_token28] = ACTIONS(85),
    [aux_sym_register_token29] = ACTIONS(85),
    [aux_sym_register_token30] = ACTIONS(85),
    [aux_sym_register_token31] = ACTIONS(85),
    [aux_sym_register_token32] = ACTIONS(85),
    [aux_sym_register_token33] = ACTIONS(85),
    [aux_sym_register_token34] = ACTIONS(85),
    [aux_sym_register_token35] = ACTIONS(85),
    [aux_sym_register_token36] = ACTIONS(85),
    [aux_sym_register_token37] = ACTIONS(85),
    [aux_sym_register_token38] = ACTIONS(85),
    [aux_sym_register_token39] = ACTIONS(85),
    [aux_sym_register_token40] = ACTIONS(85),
    [aux_sym_register_token41] = ACTIONS(85),
    [aux_sym_register_token42] = ACTIONS(85),
    [aux_sym_register_token43] = ACTIONS(85),
    [aux_sym_register_token44] = ACTIONS(85),
    [aux_sym_register_token45] = ACTIONS(85),
    [aux_sym_register_token46] = ACTIONS(85),
    [aux_sym_register_token47] = ACTIONS(85),
    [aux_sym_register_token48] = ACTIONS(85),
    [aux_sym_register_token49] = ACTIONS(85),
    [aux_sym_register_token50] = ACTIONS(85),
    [aux_sym_register_token51] = ACTIONS(85),
    [aux_sym_register_token52] = ACTIONS(85),
    [aux_sym_register_token53] = ACTIONS(85),
    [aux_sym_register_token54] = ACTIONS(85),
    [aux_sym_register_token55] = ACTIONS(85),
    [aux_sym_register_token56] = ACTIONS(85),
    [aux_sym_register_token57] = ACTIONS(85),
    [aux_sym_register_token58] = ACTIONS(85),
    [aux_sym_register_token59] = ACTIONS(85),
    [aux_sym_register_token60] = ACTIONS(85),
    [aux_sym_register_token61] = ACTIONS(85),
    [aux_sym_register_token62] = ACTIONS(85),
    [aux_sym_register_token63] = ACTIONS(85),
    [aux_sym_register_token64] = ACTIONS(85),
    [aux_sym_register_token65] = ACTIONS(85),
    [aux_sym_register_token66] = ACTIONS(85),
    [aux_sym_register_token67] = ACTIONS(85),
    [aux_sym_register_token68] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [aux_sym_constant_numeric_token1] = ACTIONS(85),
    [aux_sym_constant_numeric_token2] = ACTIONS(85),
    [aux_sym_constant_numeric_token3] = ACTIONS(87),
    [aux_sym_constant_numeric_token4] = ACTIONS(85),
    [aux_sym_constant_numeric_token5] = ACTIONS(85),
    [aux_sym_constant_numeric_token6] = ACTIONS(85),
    [aux_sym_constant_numeric_token7] = ACTIONS(87),
    [aux_sym_constant_numeric_token8] = ACTIONS(85),
    [aux_sym_constant_numeric_token9] = ACTIONS(85),
    [aux_sym_constant_numeric_token10] = ACTIONS(85),
    [aux_sym_constant_charstr_token1] = ACTIONS(87),
    [aux_sym_constant_charstr_token2] = ACTIONS(87),
    [aux_sym_constant_charstr_token3] = ACTIONS(87),
    [sym_comment] = ACTIONS(3),
    [aux_sym_word_token1] = ACTIONS(85),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_word_token1,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      aux_sym_source_file_token1,
    STATE(3), 1,
      sym_word,
    STATE(25), 1,
      aux_sym_source_file_repeat1,
    STATE(26), 1,
      sym_label,
    STATE(32), 1,
      sym_instruction_prefix,
    STATE(60), 1,
      sym_instruction,
    STATE(67), 1,
      sym_source_line,
    STATE(7), 3,
      sym_known_instruction,
      sym_pseudo_instruction,
      sym_unknown_instruction,
    ACTIONS(11), 5,
      aux_sym_known_instruction_token1,
      aux_sym_known_instruction_token2,
      aux_sym_known_instruction_token3,
      aux_sym_known_instruction_token4,
      aux_sym_known_instruction_token5,
    ACTIONS(13), 19,
      aux_sym_pseudo_instruction_token1,
      aux_sym_pseudo_instruction_token2,
      aux_sym_pseudo_instruction_token3,
      aux_sym_pseudo_instruction_token4,
      aux_sym_pseudo_instruction_token5,
      aux_sym_pseudo_instruction_token6,
      aux_sym_pseudo_instruction_token7,
      aux_sym_pseudo_instruction_token8,
      aux_sym_pseudo_instruction_token9,
      aux_sym_pseudo_instruction_token10,
      aux_sym_pseudo_instruction_token11,
      aux_sym_pseudo_instruction_token12,
      aux_sym_pseudo_instruction_token13,
      aux_sym_pseudo_instruction_token14,
      aux_sym_pseudo_instruction_token15,
      aux_sym_pseudo_instruction_token16,
      aux_sym_pseudo_instruction_token17,
      aux_sym_pseudo_instruction_token18,
      aux_sym_pseudo_instruction_token19,
    ACTIONS(9), 22,
      aux_sym_instruction_prefix_token1,
      aux_sym_instruction_prefix_token2,
      aux_sym_instruction_prefix_token3,
      aux_sym_instruction_prefix_token4,
      aux_sym_instruction_prefix_token5,
      aux_sym_instruction_prefix_token6,
      aux_sym_instruction_prefix_token7,
      aux_sym_instruction_prefix_token8,
      aux_sym_instruction_prefix_token9,
      aux_sym_instruction_prefix_token10,
      aux_sym_instruction_prefix_token11,
      aux_sym_instruction_prefix_token12,
      aux_sym_instruction_prefix_token13,
      aux_sym_instruction_prefix_token14,
      aux_sym_instruction_prefix_token15,
      aux_sym_instruction_prefix_token16,
      aux_sym_instruction_prefix_token17,
      aux_sym_instruction_prefix_token18,
      aux_sym_instruction_prefix_token19,
      aux_sym_instruction_prefix_token20,
      aux_sym_instruction_prefix_token21,
      aux_sym_instruction_prefix_token22,
  [88] = 14,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 1,
      aux_sym_source_file_token1,
    ACTIONS(107), 1,
      aux_sym_word_token1,
    STATE(5), 1,
      sym_word,
    STATE(25), 1,
      aux_sym_source_file_repeat1,
    STATE(27), 1,
      sym_label,
    STATE(31), 1,
      sym_instruction_prefix,
    STATE(72), 1,
      sym_instruction,
    STATE(76), 1,
      sym_source_line,
    STATE(9), 3,
      sym_known_instruction,
      sym_pseudo_instruction,
      sym_unknown_instruction,
    ACTIONS(101), 5,
      aux_sym_known_instruction_token1,
      aux_sym_known_instruction_token2,
      aux_sym_known_instruction_token3,
      aux_sym_known_instruction_token4,
      aux_sym_known_instruction_token5,
    ACTIONS(104), 19,
      aux_sym_pseudo_instruction_token1,
      aux_sym_pseudo_instruction_token2,
      aux_sym_pseudo_instruction_token3,
      aux_sym_pseudo_instruction_token4,
      aux_sym_pseudo_instruction_token5,
      aux_sym_pseudo_instruction_token6,
      aux_sym_pseudo_instruction_token7,
      aux_sym_pseudo_instruction_token8,
      aux_sym_pseudo_instruction_token9,
      aux_sym_pseudo_instruction_token10,
      aux_sym_pseudo_instruction_token11,
      aux_sym_pseudo_instruction_token12,
      aux_sym_pseudo_instruction_token13,
      aux_sym_pseudo_instruction_token14,
      aux_sym_pseudo_instruction_token15,
      aux_sym_pseudo_instruction_token16,
      aux_sym_pseudo_instruction_token17,
      aux_sym_pseudo_instruction_token18,
      aux_sym_pseudo_instruction_token19,
    ACTIONS(98), 22,
      aux_sym_instruction_prefix_token1,
      aux_sym_instruction_prefix_token2,
      aux_sym_instruction_prefix_token3,
      aux_sym_instruction_prefix_token4,
      aux_sym_instruction_prefix_token5,
      aux_sym_instruction_prefix_token6,
      aux_sym_instruction_prefix_token7,
      aux_sym_instruction_prefix_token8,
      aux_sym_instruction_prefix_token9,
      aux_sym_instruction_prefix_token10,
      aux_sym_instruction_prefix_token11,
      aux_sym_instruction_prefix_token12,
      aux_sym_instruction_prefix_token13,
      aux_sym_instruction_prefix_token14,
      aux_sym_instruction_prefix_token15,
      aux_sym_instruction_prefix_token16,
      aux_sym_instruction_prefix_token17,
      aux_sym_instruction_prefix_token18,
      aux_sym_instruction_prefix_token19,
      aux_sym_instruction_prefix_token20,
      aux_sym_instruction_prefix_token21,
      aux_sym_instruction_prefix_token22,
  [176] = 10,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(112), 1,
      aux_sym_word_token1,
    STATE(12), 1,
      sym_word,
    STATE(32), 1,
      sym_instruction_prefix,
    STATE(61), 1,
      sym_instruction,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    STATE(7), 3,
      sym_known_instruction,
      sym_pseudo_instruction,
      sym_unknown_instruction,
    ACTIONS(11), 5,
      aux_sym_known_instruction_token1,
      aux_sym_known_instruction_token2,
      aux_sym_known_instruction_token3,
      aux_sym_known_instruction_token4,
      aux_sym_known_instruction_token5,
    ACTIONS(13), 19,
      aux_sym_pseudo_instruction_token1,
      aux_sym_pseudo_instruction_token2,
      aux_sym_pseudo_instruction_token3,
      aux_sym_pseudo_instruction_token4,
      aux_sym_pseudo_instruction_token5,
      aux_sym_pseudo_instruction_token6,
      aux_sym_pseudo_instruction_token7,
      aux_sym_pseudo_instruction_token8,
      aux_sym_pseudo_instruction_token9,
      aux_sym_pseudo_instruction_token10,
      aux_sym_pseudo_instruction_token11,
      aux_sym_pseudo_instruction_token12,
      aux_sym_pseudo_instruction_token13,
      aux_sym_pseudo_instruction_token14,
      aux_sym_pseudo_instruction_token15,
      aux_sym_pseudo_instruction_token16,
      aux_sym_pseudo_instruction_token17,
      aux_sym_pseudo_instruction_token18,
      aux_sym_pseudo_instruction_token19,
    ACTIONS(9), 22,
      aux_sym_instruction_prefix_token1,
      aux_sym_instruction_prefix_token2,
      aux_sym_instruction_prefix_token3,
      aux_sym_instruction_prefix_token4,
      aux_sym_instruction_prefix_token5,
      aux_sym_instruction_prefix_token6,
      aux_sym_instruction_prefix_token7,
      aux_sym_instruction_prefix_token8,
      aux_sym_instruction_prefix_token9,
      aux_sym_instruction_prefix_token10,
      aux_sym_instruction_prefix_token11,
      aux_sym_instruction_prefix_token12,
      aux_sym_instruction_prefix_token13,
      aux_sym_instruction_prefix_token14,
      aux_sym_instruction_prefix_token15,
      aux_sym_instruction_prefix_token16,
      aux_sym_instruction_prefix_token17,
      aux_sym_instruction_prefix_token18,
      aux_sym_instruction_prefix_token19,
      aux_sym_instruction_prefix_token20,
      aux_sym_instruction_prefix_token21,
      aux_sym_instruction_prefix_token22,
  [253] = 10,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(110), 1,
      aux_sym_source_file_token1,
    ACTIONS(118), 1,
      aux_sym_word_token1,
    STATE(18), 1,
      sym_word,
    STATE(31), 1,
      sym_instruction_prefix,
    STATE(78), 1,
      sym_instruction,
    STATE(9), 3,
      sym_known_instruction,
      sym_pseudo_instruction,
      sym_unknown_instruction,
    ACTIONS(114), 5,
      aux_sym_known_instruction_token1,
      aux_sym_known_instruction_token2,
      aux_sym_known_instruction_token3,
      aux_sym_known_instruction_token4,
      aux_sym_known_instruction_token5,
    ACTIONS(116), 19,
      aux_sym_pseudo_instruction_token1,
      aux_sym_pseudo_instruction_token2,
      aux_sym_pseudo_instruction_token3,
      aux_sym_pseudo_instruction_token4,
      aux_sym_pseudo_instruction_token5,
      aux_sym_pseudo_instruction_token6,
      aux_sym_pseudo_instruction_token7,
      aux_sym_pseudo_instruction_token8,
      aux_sym_pseudo_instruction_token9,
      aux_sym_pseudo_instruction_token10,
      aux_sym_pseudo_instruction_token11,
      aux_sym_pseudo_instruction_token12,
      aux_sym_pseudo_instruction_token13,
      aux_sym_pseudo_instruction_token14,
      aux_sym_pseudo_instruction_token15,
      aux_sym_pseudo_instruction_token16,
      aux_sym_pseudo_instruction_token17,
      aux_sym_pseudo_instruction_token18,
      aux_sym_pseudo_instruction_token19,
    ACTIONS(9), 22,
      aux_sym_instruction_prefix_token1,
      aux_sym_instruction_prefix_token2,
      aux_sym_instruction_prefix_token3,
      aux_sym_instruction_prefix_token4,
      aux_sym_instruction_prefix_token5,
      aux_sym_instruction_prefix_token6,
      aux_sym_instruction_prefix_token7,
      aux_sym_instruction_prefix_token8,
      aux_sym_instruction_prefix_token9,
      aux_sym_instruction_prefix_token10,
      aux_sym_instruction_prefix_token11,
      aux_sym_instruction_prefix_token12,
      aux_sym_instruction_prefix_token13,
      aux_sym_instruction_prefix_token14,
      aux_sym_instruction_prefix_token15,
      aux_sym_instruction_prefix_token16,
      aux_sym_instruction_prefix_token17,
      aux_sym_instruction_prefix_token18,
      aux_sym_instruction_prefix_token19,
      aux_sym_instruction_prefix_token20,
      aux_sym_instruction_prefix_token21,
      aux_sym_instruction_prefix_token22,
  [329] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(120), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(122), 47,
      aux_sym_instruction_prefix_token1,
      aux_sym_instruction_prefix_token2,
      aux_sym_instruction_prefix_token3,
      aux_sym_instruction_prefix_token4,
      aux_sym_instruction_prefix_token5,
      aux_sym_instruction_prefix_token6,
      aux_sym_instruction_prefix_token7,
      aux_sym_instruction_prefix_token8,
      aux_sym_instruction_prefix_token9,
      aux_sym_instruction_prefix_token10,
      aux_sym_instruction_prefix_token11,
      aux_sym_instruction_prefix_token12,
      aux_sym_instruction_prefix_token13,
      aux_sym_instruction_prefix_token14,
      aux_sym_instruction_prefix_token15,
      aux_sym_instruction_prefix_token16,
      aux_sym_instruction_prefix_token17,
      aux_sym_instruction_prefix_token18,
      aux_sym_instruction_prefix_token19,
      aux_sym_instruction_prefix_token20,
      aux_sym_instruction_prefix_token21,
      aux_sym_instruction_prefix_token22,
      aux_sym_known_instruction_token1,
      aux_sym_known_instruction_token2,
      aux_sym_known_instruction_token3,
      aux_sym_known_instruction_token4,
      aux_sym_known_instruction_token5,
      aux_sym_pseudo_instruction_token1,
      aux_sym_pseudo_instruction_token2,
      aux_sym_pseudo_instruction_token3,
      aux_sym_pseudo_instruction_token4,
      aux_sym_pseudo_instruction_token5,
      aux_sym_pseudo_instruction_token6,
      aux_sym_pseudo_instruction_token7,
      aux_sym_pseudo_instruction_token8,
      aux_sym_pseudo_instruction_token9,
      aux_sym_pseudo_instruction_token10,
      aux_sym_pseudo_instruction_token11,
      aux_sym_pseudo_instruction_token12,
      aux_sym_pseudo_instruction_token13,
      aux_sym_pseudo_instruction_token14,
      aux_sym_pseudo_instruction_token15,
      aux_sym_pseudo_instruction_token16,
      aux_sym_pseudo_instruction_token17,
      aux_sym_pseudo_instruction_token18,
      aux_sym_pseudo_instruction_token19,
      aux_sym_word_token1,
  [386] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(124), 47,
      aux_sym_instruction_prefix_token1,
      aux_sym_instruction_prefix_token2,
      aux_sym_instruction_prefix_token3,
      aux_sym_instruction_prefix_token4,
      aux_sym_instruction_prefix_token5,
      aux_sym_instruction_prefix_token6,
      aux_sym_instruction_prefix_token7,
      aux_sym_instruction_prefix_token8,
      aux_sym_instruction_prefix_token9,
      aux_sym_instruction_prefix_token10,
      aux_sym_instruction_prefix_token11,
      aux_sym_instruction_prefix_token12,
      aux_sym_instruction_prefix_token13,
      aux_sym_instruction_prefix_token14,
      aux_sym_instruction_prefix_token15,
      aux_sym_instruction_prefix_token16,
      aux_sym_instruction_prefix_token17,
      aux_sym_instruction_prefix_token18,
      aux_sym_instruction_prefix_token19,
      aux_sym_instruction_prefix_token20,
      aux_sym_instruction_prefix_token21,
      aux_sym_instruction_prefix_token22,
      aux_sym_known_instruction_token1,
      aux_sym_known_instruction_token2,
      aux_sym_known_instruction_token3,
      aux_sym_known_instruction_token4,
      aux_sym_known_instruction_token5,
      aux_sym_pseudo_instruction_token1,
      aux_sym_pseudo_instruction_token2,
      aux_sym_pseudo_instruction_token3,
      aux_sym_pseudo_instruction_token4,
      aux_sym_pseudo_instruction_token5,
      aux_sym_pseudo_instruction_token6,
      aux_sym_pseudo_instruction_token7,
      aux_sym_pseudo_instruction_token8,
      aux_sym_pseudo_instruction_token9,
      aux_sym_pseudo_instruction_token10,
      aux_sym_pseudo_instruction_token11,
      aux_sym_pseudo_instruction_token12,
      aux_sym_pseudo_instruction_token13,
      aux_sym_pseudo_instruction_token14,
      aux_sym_pseudo_instruction_token15,
      aux_sym_pseudo_instruction_token16,
      aux_sym_pseudo_instruction_token17,
      aux_sym_pseudo_instruction_token18,
      aux_sym_pseudo_instruction_token19,
      aux_sym_word_token1,
  [443] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(120), 1,
      aux_sym_source_file_token1,
    ACTIONS(122), 47,
      aux_sym_instruction_prefix_token1,
      aux_sym_instruction_prefix_token2,
      aux_sym_instruction_prefix_token3,
      aux_sym_instruction_prefix_token4,
      aux_sym_instruction_prefix_token5,
      aux_sym_instruction_prefix_token6,
      aux_sym_instruction_prefix_token7,
      aux_sym_instruction_prefix_token8,
      aux_sym_instruction_prefix_token9,
      aux_sym_instruction_prefix_token10,
      aux_sym_instruction_prefix_token11,
      aux_sym_instruction_prefix_token12,
      aux_sym_instruction_prefix_token13,
      aux_sym_instruction_prefix_token14,
      aux_sym_instruction_prefix_token15,
      aux_sym_instruction_prefix_token16,
      aux_sym_instruction_prefix_token17,
      aux_sym_instruction_prefix_token18,
      aux_sym_instruction_prefix_token19,
      aux_sym_instruction_prefix_token20,
      aux_sym_instruction_prefix_token21,
      aux_sym_instruction_prefix_token22,
      aux_sym_known_instruction_token1,
      aux_sym_known_instruction_token2,
      aux_sym_known_instruction_token3,
      aux_sym_known_instruction_token4,
      aux_sym_known_instruction_token5,
      aux_sym_pseudo_instruction_token1,
      aux_sym_pseudo_instruction_token2,
      aux_sym_pseudo_instruction_token3,
      aux_sym_pseudo_instruction_token4,
      aux_sym_pseudo_instruction_token5,
      aux_sym_pseudo_instruction_token6,
      aux_sym_pseudo_instruction_token7,
      aux_sym_pseudo_instruction_token8,
      aux_sym_pseudo_instruction_token9,
      aux_sym_pseudo_instruction_token10,
      aux_sym_pseudo_instruction_token11,
      aux_sym_pseudo_instruction_token12,
      aux_sym_pseudo_instruction_token13,
      aux_sym_pseudo_instruction_token14,
      aux_sym_pseudo_instruction_token15,
      aux_sym_pseudo_instruction_token16,
      aux_sym_pseudo_instruction_token17,
      aux_sym_pseudo_instruction_token18,
      aux_sym_pseudo_instruction_token19,
      aux_sym_word_token1,
  [499] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      aux_sym_word_token1,
    STATE(18), 1,
      sym_word,
    STATE(8), 3,
      sym_known_instruction,
      sym_pseudo_instruction,
      sym_unknown_instruction,
    ACTIONS(114), 5,
      aux_sym_known_instruction_token1,
      aux_sym_known_instruction_token2,
      aux_sym_known_instruction_token3,
      aux_sym_known_instruction_token4,
      aux_sym_known_instruction_token5,
    ACTIONS(116), 19,
      aux_sym_pseudo_instruction_token1,
      aux_sym_pseudo_instruction_token2,
      aux_sym_pseudo_instruction_token3,
      aux_sym_pseudo_instruction_token4,
      aux_sym_pseudo_instruction_token5,
      aux_sym_pseudo_instruction_token6,
      aux_sym_pseudo_instruction_token7,
      aux_sym_pseudo_instruction_token8,
      aux_sym_pseudo_instruction_token9,
      aux_sym_pseudo_instruction_token10,
      aux_sym_pseudo_instruction_token11,
      aux_sym_pseudo_instruction_token12,
      aux_sym_pseudo_instruction_token13,
      aux_sym_pseudo_instruction_token14,
      aux_sym_pseudo_instruction_token15,
      aux_sym_pseudo_instruction_token16,
      aux_sym_pseudo_instruction_token17,
      aux_sym_pseudo_instruction_token18,
      aux_sym_pseudo_instruction_token19,
  [542] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      aux_sym_word_token1,
    STATE(12), 1,
      sym_word,
    STATE(6), 3,
      sym_known_instruction,
      sym_pseudo_instruction,
      sym_unknown_instruction,
    ACTIONS(11), 5,
      aux_sym_known_instruction_token1,
      aux_sym_known_instruction_token2,
      aux_sym_known_instruction_token3,
      aux_sym_known_instruction_token4,
      aux_sym_known_instruction_token5,
    ACTIONS(13), 19,
      aux_sym_pseudo_instruction_token1,
      aux_sym_pseudo_instruction_token2,
      aux_sym_pseudo_instruction_token3,
      aux_sym_pseudo_instruction_token4,
      aux_sym_pseudo_instruction_token5,
      aux_sym_pseudo_instruction_token6,
      aux_sym_pseudo_instruction_token7,
      aux_sym_pseudo_instruction_token8,
      aux_sym_pseudo_instruction_token9,
      aux_sym_pseudo_instruction_token10,
      aux_sym_pseudo_instruction_token11,
      aux_sym_pseudo_instruction_token12,
      aux_sym_pseudo_instruction_token13,
      aux_sym_pseudo_instruction_token14,
      aux_sym_pseudo_instruction_token15,
      aux_sym_pseudo_instruction_token16,
      aux_sym_pseudo_instruction_token17,
      aux_sym_pseudo_instruction_token18,
      aux_sym_pseudo_instruction_token19,
  [585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 25,
      aux_sym_known_instruction_token1,
      aux_sym_known_instruction_token2,
      aux_sym_known_instruction_token3,
      aux_sym_known_instruction_token4,
      aux_sym_known_instruction_token5,
      aux_sym_pseudo_instruction_token1,
      aux_sym_pseudo_instruction_token2,
      aux_sym_pseudo_instruction_token3,
      aux_sym_pseudo_instruction_token4,
      aux_sym_pseudo_instruction_token5,
      aux_sym_pseudo_instruction_token6,
      aux_sym_pseudo_instruction_token7,
      aux_sym_pseudo_instruction_token8,
      aux_sym_pseudo_instruction_token9,
      aux_sym_pseudo_instruction_token10,
      aux_sym_pseudo_instruction_token11,
      aux_sym_pseudo_instruction_token12,
      aux_sym_pseudo_instruction_token13,
      aux_sym_pseudo_instruction_token14,
      aux_sym_pseudo_instruction_token15,
      aux_sym_pseudo_instruction_token16,
      aux_sym_pseudo_instruction_token17,
      aux_sym_pseudo_instruction_token18,
      aux_sym_pseudo_instruction_token19,
      aux_sym_word_token1,
  [616] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      aux_sym_word_token1,
    STATE(73), 1,
      sym_expression,
    STATE(77), 1,
      sym_word,
    ACTIONS(128), 6,
      aux_sym_operand_prefix_token1,
      aux_sym_operand_prefix_token2,
      aux_sym_operand_prefix_token3,
      aux_sym_effective_address_token1,
      aux_sym_effective_address_token2,
      aux_sym_effective_address_token3,
  [637] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      aux_sym_word_token1,
    STATE(77), 1,
      sym_word,
    STATE(79), 1,
      sym_expression,
    ACTIONS(132), 6,
      aux_sym_operand_prefix_token1,
      aux_sym_operand_prefix_token2,
      aux_sym_operand_prefix_token3,
      aux_sym_effective_address_token1,
      aux_sym_effective_address_token2,
      aux_sym_effective_address_token3,
  [658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 8,
      aux_sym_operand_prefix_token1,
      aux_sym_operand_prefix_token2,
      aux_sym_operand_prefix_token3,
      aux_sym_operand_prefix_token4,
      aux_sym_operand_prefix_token5,
      aux_sym_operand_prefix_token6,
      aux_sym_operand_prefix_token7,
      aux_sym_operand_prefix_token8,
  [672] = 4,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    STATE(38), 1,
      aux_sym_operands_repeat1,
    ACTIONS(136), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [686] = 4,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      aux_sym_operands_repeat1,
    ACTIONS(140), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [700] = 4,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      aux_sym_operands_repeat1,
    ACTIONS(142), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [714] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [725] = 4,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(140), 1,
      aux_sym_source_file_token1,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      aux_sym_operands_repeat1,
  [738] = 4,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(136), 1,
      aux_sym_source_file_token1,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym_operands_repeat1,
  [751] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [762] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(142), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [773] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    ACTIONS(159), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [784] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_word_token1,
    STATE(71), 1,
      sym_expression,
    STATE(77), 1,
      sym_word,
  [797] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_word_token1,
    STATE(77), 1,
      sym_word,
    STATE(80), 1,
      sym_expression,
  [810] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(165), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [821] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(169), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [832] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    ACTIONS(173), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [843] = 4,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(142), 1,
      aux_sym_source_file_token1,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      aux_sym_operands_repeat1,
  [856] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [867] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_COMMA,
    ACTIONS(184), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [878] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(188), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [889] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(180), 1,
      aux_sym_source_file_token1,
    ACTIONS(182), 1,
      anon_sym_COMMA,
  [899] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(153), 1,
      aux_sym_source_file_token1,
    ACTIONS(155), 1,
      anon_sym_COMMA,
  [909] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(188), 1,
      aux_sym_source_file_token1,
    ACTIONS(190), 1,
      anon_sym_COMMA,
  [919] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(184), 1,
      aux_sym_source_file_token1,
    ACTIONS(186), 1,
      anon_sym_COMMA,
  [929] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(192), 1,
      aux_sym_source_file_token1,
  [939] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [947] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(194), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [955] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [963] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(173), 1,
      aux_sym_source_file_token1,
    ACTIONS(175), 1,
      anon_sym_COMMA,
  [973] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(169), 1,
      aux_sym_source_file_token1,
    ACTIONS(171), 1,
      anon_sym_COMMA,
  [983] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(165), 1,
      aux_sym_source_file_token1,
    ACTIONS(167), 1,
      anon_sym_COMMA,
  [993] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_source_file_token1,
    ACTIONS(161), 1,
      anon_sym_COMMA,
  [1003] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(192), 1,
      aux_sym_source_file_token1,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
  [1013] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(142), 1,
      aux_sym_source_file_token1,
    ACTIONS(157), 1,
      anon_sym_COMMA,
  [1023] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(198), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [1031] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(147), 1,
      aux_sym_source_file_token1,
    ACTIONS(149), 1,
      anon_sym_COMMA,
  [1041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_RBRACK,
  [1048] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(110), 1,
      aux_sym_source_file_token1,
  [1055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_RBRACK,
  [1062] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(198), 1,
      aux_sym_source_file_token1,
  [1069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_RBRACK,
  [1076] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(192), 1,
      aux_sym_source_file_token1,
  [1083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_RBRACK,
  [1090] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(194), 1,
      aux_sym_source_file_token1,
  [1097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_RBRACK,
  [1104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_RBRACK,
  [1111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
  [1118] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_source_file_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(24)] = 0,
  [SMALL_STATE(25)] = 88,
  [SMALL_STATE(26)] = 176,
  [SMALL_STATE(27)] = 253,
  [SMALL_STATE(28)] = 329,
  [SMALL_STATE(29)] = 386,
  [SMALL_STATE(30)] = 443,
  [SMALL_STATE(31)] = 499,
  [SMALL_STATE(32)] = 542,
  [SMALL_STATE(33)] = 585,
  [SMALL_STATE(34)] = 616,
  [SMALL_STATE(35)] = 637,
  [SMALL_STATE(36)] = 658,
  [SMALL_STATE(37)] = 672,
  [SMALL_STATE(38)] = 686,
  [SMALL_STATE(39)] = 700,
  [SMALL_STATE(40)] = 714,
  [SMALL_STATE(41)] = 725,
  [SMALL_STATE(42)] = 738,
  [SMALL_STATE(43)] = 751,
  [SMALL_STATE(44)] = 762,
  [SMALL_STATE(45)] = 773,
  [SMALL_STATE(46)] = 784,
  [SMALL_STATE(47)] = 797,
  [SMALL_STATE(48)] = 810,
  [SMALL_STATE(49)] = 821,
  [SMALL_STATE(50)] = 832,
  [SMALL_STATE(51)] = 843,
  [SMALL_STATE(52)] = 856,
  [SMALL_STATE(53)] = 867,
  [SMALL_STATE(54)] = 878,
  [SMALL_STATE(55)] = 889,
  [SMALL_STATE(56)] = 899,
  [SMALL_STATE(57)] = 909,
  [SMALL_STATE(58)] = 919,
  [SMALL_STATE(59)] = 929,
  [SMALL_STATE(60)] = 939,
  [SMALL_STATE(61)] = 947,
  [SMALL_STATE(62)] = 955,
  [SMALL_STATE(63)] = 963,
  [SMALL_STATE(64)] = 973,
  [SMALL_STATE(65)] = 983,
  [SMALL_STATE(66)] = 993,
  [SMALL_STATE(67)] = 1003,
  [SMALL_STATE(68)] = 1013,
  [SMALL_STATE(69)] = 1023,
  [SMALL_STATE(70)] = 1031,
  [SMALL_STATE(71)] = 1041,
  [SMALL_STATE(72)] = 1048,
  [SMALL_STATE(73)] = 1055,
  [SMALL_STATE(74)] = 1062,
  [SMALL_STATE(75)] = 1069,
  [SMALL_STATE(76)] = 1076,
  [SMALL_STATE(77)] = 1083,
  [SMALL_STATE(78)] = 1090,
  [SMALL_STATE(79)] = 1097,
  [SMALL_STATE(80)] = 1104,
  [SMALL_STATE(81)] = 1111,
  [SMALL_STATE(82)] = 1118,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unknown_instruction, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unknown_instruction, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_instruction, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_instruction, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_known_instruction, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_known_instruction, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_prefix, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_prefix, 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_prefix, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_prefix, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_line, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_prefix, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2), SHIFT_REPEAT(10),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effective_address, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_effective_address, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effective_address, 4),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_effective_address, 4),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 1),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2), SHIFT_REPEAT(11),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_charstr, 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant_charstr, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_numeric, 1),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant_numeric, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 1),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_line, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [208] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
