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
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 14
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
      if (eof) ADVANCE(71);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '$') ADVANCE(402);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == ',') ADVANCE(102);
      if (lookahead == '0') ADVANCE(193);
      if (lookahead == '1') ADVANCE(194);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == 'S') ADVANCE(287);
      if (lookahead == '[') ADVANCE(188);
      if (lookahead == '\\') SKIP(67)
      if (lookahead == ']') ADVANCE(192);
      if (lookahead == '`') ADVANCE(33);
      if (lookahead == 's') ADVANCE(270);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(250);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(317);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(320);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(279);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(273);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(376);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(378);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(346);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(352);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(349);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(350);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(252);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(394);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(254);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(329);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(351);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(276);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(396);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(397);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(195);
      if (lookahead == '.' ||
          lookahead == '?' ||
          ('H' <= lookahead && lookahead <= 'V') ||
          ('_' <= lookahead && lookahead <= 'v')) ADVANCE(403);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(247);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(248);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(248);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == ',') ADVANCE(102);
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(257);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(345);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(375);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(282);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(364);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(377);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(378);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(346);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(352);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(349);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(353);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(253);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(311);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(288);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(330);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(276);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '?' ||
          ('H' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(4)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(23)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(24)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(25)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(26)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(29)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(29)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(30)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(30)
      if (lookahead == '\r') SKIP(17)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(31)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '\r') SKIP(19)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(32)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(32)
      if (lookahead == '\r') SKIP(21)
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '\r') ADVANCE(23);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '$') ADVANCE(402);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == ',') ADVANCE(102);
      if (lookahead == '0') ADVANCE(197);
      if (lookahead == '1') ADVANCE(198);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == 'S') ADVANCE(287);
      if (lookahead == '[') ADVANCE(188);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == '`') ADVANCE(33);
      if (lookahead == 's') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(23)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(251);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(317);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(320);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(279);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(273);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(376);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(378);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(346);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(352);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(349);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(353);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(252);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(394);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(255);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(329);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(351);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(276);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(396);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(397);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(200);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(199);
      if (lookahead == '.' ||
          lookahead == '?' ||
          ('H' <= lookahead && lookahead <= 'V') ||
          ('_' <= lookahead && lookahead <= 'v')) ADVANCE(403);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(24);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '$') ADVANCE(402);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '0') ADVANCE(197);
      if (lookahead == '1') ADVANCE(198);
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == 'S') ADVANCE(328);
      if (lookahead == '[') ADVANCE(188);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == '`') ADVANCE(33);
      if (lookahead == 's') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(24)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(316);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(318);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(321);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(322);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(274);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(401);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(392);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(394);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(256);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(395);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(351);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(396);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(397);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(200);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(199);
      if (lookahead == '.' ||
          lookahead == '?' ||
          ('G' <= lookahead && lookahead <= 'X') ||
          ('_' <= lookahead && lookahead <= 'x')) ADVANCE(403);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '$') ADVANCE(402);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '0') ADVANCE(197);
      if (lookahead == '1') ADVANCE(198);
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == 'S') ADVANCE(328);
      if (lookahead == '[') ADVANCE(188);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == '`') ADVANCE(33);
      if (lookahead == 's') ADVANCE(271);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(316);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(318);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(321);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(322);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(274);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(401);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(392);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(394);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(256);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(395);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(351);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(396);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(397);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(199);
      if (lookahead == '.' ||
          lookahead == '?' ||
          ('G' <= lookahead && lookahead <= 'X') ||
          ('_' <= lookahead && lookahead <= 'x')) ADVANCE(403);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '$') ADVANCE(402);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '0') ADVANCE(197);
      if (lookahead == '1') ADVANCE(198);
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == '[') ADVANCE(188);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == '`') ADVANCE(33);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(316);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(319);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(321);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(323);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(274);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(401);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(256);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(328);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(199);
      if (lookahead == '.' ||
          lookahead == '?' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(216);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '\'') ADVANCE(215);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(305);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(283);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(365);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(346);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(349);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(314);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(289);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 30:
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(286);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(400);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(393);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(354);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(313);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(351);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '?' ||
          ('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 31:
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(63);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(57);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(58);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(59);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(60);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(42);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(61);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      END_STATE();
    case 32:
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 33:
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead == '`') ADVANCE(217);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(106);
      END_STATE();
    case 35:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(108);
      END_STATE();
    case 36:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(114);
      END_STATE();
    case 37:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(110);
      END_STATE();
    case 38:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 39:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(116);
      END_STATE();
    case 40:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(118);
      END_STATE();
    case 41:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
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
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 47:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 48:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(55);
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
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 54:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 55:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 56:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(41);
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
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(46);
      END_STATE();
    case 61:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(47);
      END_STATE();
    case 62:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(48);
      END_STATE();
    case 63:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(56);
      END_STATE();
    case 64:
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 65:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 66:
      if (eof) ADVANCE(71);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 67:
      if (eof) ADVANCE(71);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(66)
      END_STATE();
    case 68:
      if (eof) ADVANCE(71);
      if (lookahead == '\n') SKIP(70)
      END_STATE();
    case 69:
      if (eof) ADVANCE(71);
      if (lookahead == '\n') SKIP(70)
      if (lookahead == '\r') SKIP(68)
      END_STATE();
    case 70:
      if (eof) ADVANCE(71);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == ',') ADVANCE(102);
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == '\\') SKIP(69)
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(70)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(257);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(345);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(375);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(282);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(364);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(377);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(378);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(346);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(352);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(349);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(353);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(253);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(311);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(288);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(330);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(276);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '?' ||
          ('H' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(4);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '\r') ADVANCE(23);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(24);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token1);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(78);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(308);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(79);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token3);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token4);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token5);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token6);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token7);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token8);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token9);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token10);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token11);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token11);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token12);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token12);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token13);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token13);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token14);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token15);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token16);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token17);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token18);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token19);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token20);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(162);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(160);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token20);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token21);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token22);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_strict);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token1);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token1);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token2);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token2);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token3);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token3);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token4);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token4);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token5);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token5);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token6);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token6);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token7);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token7);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token8);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token8);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_register_token1);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_register_token2);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_register_token3);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_register_token4);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_register_token5);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_register_token6);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_register_token7);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_register_token8);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_register_token9);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_register_token10);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_register_token11);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_register_token12);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_register_token13);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_register_token14);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_register_token15);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_register_token16);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_register_token17);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_register_token18);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_register_token19);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_register_token20);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_register_token21);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_register_token22);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_register_token23);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_register_token24);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_register_token25);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(128);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_register_token26);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(129);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_register_token27);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(130);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_register_token28);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(131);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_register_token29);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_register_token30);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_register_token31);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_register_token32);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_register_token33);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_register_token34);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_register_token35);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_register_token36);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_register_token37);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_register_token38);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_register_token39);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_register_token40);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_register_token41);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_register_token42);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_register_token43);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_register_token44);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_register_token45);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_register_token46);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_register_token47);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_register_token48);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_register_token49);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_register_token50);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_register_token51);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_register_token52);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_register_token53);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_register_token54);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_register_token55);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_register_token56);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_register_token57);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_register_token58);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_register_token59);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_register_token60);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_register_token61);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(132);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(164);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(148);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_register_token62);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(133);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(165);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(149);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_register_token63);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(134);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(166);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(150);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_register_token64);
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
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_register_token65);
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
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_register_token66);
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
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_register_token67);
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
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_register_token68);
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
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_effective_address_token1);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_effective_address_token2);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_effective_address_token3);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token1);
      if (lookahead == '.') ADVANCE(218);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(211);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(205);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(206);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(212);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(194);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(196);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(202);
      if (lookahead == 'O' ||
          lookahead == 'Q' ||
          lookahead == 'o' ||
          lookahead == 'q') ADVANCE(209);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token1);
      if (lookahead == '.') ADVANCE(218);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(214);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(208);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(207);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(213);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(194);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(196);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(203);
      if (lookahead == 'O' ||
          lookahead == 'Q' ||
          lookahead == 'o' ||
          lookahead == 'q') ADVANCE(210);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token1);
      if (lookahead == '.') ADVANCE(218);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(208);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(207);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(196);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(203);
      if (lookahead == 'O' ||
          lookahead == 'Q' ||
          lookahead == 'o' ||
          lookahead == 'q') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token1);
      if (lookahead == '.') ADVANCE(218);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(208);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(207);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(211);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(205);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(206);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(212);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(198);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(200);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(202);
      if (lookahead == 'O' ||
          lookahead == 'Q' ||
          lookahead == 'o' ||
          lookahead == 'q') ADVANCE(209);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(214);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(208);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(207);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(213);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(198);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(200);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(203);
      if (lookahead == 'O' ||
          lookahead == 'Q' ||
          lookahead == 'o' ||
          lookahead == 'q') ADVANCE(210);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(208);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(207);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(200);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(203);
      if (lookahead == 'O' ||
          lookahead == 'Q' ||
          lookahead == 'o' ||
          lookahead == 'q') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(208);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(207);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(201);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token4);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token4);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token5);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token6);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token6);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token7);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token8);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token9);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(211);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(203);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token9);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token10);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token10);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_constant_charstr_token1);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_constant_charstr_token2);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_constant_charstr_token3);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_constant_floatpt);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_known_instruction_token1);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_known_instruction_token2);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_known_instruction_token2);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_known_instruction_token3);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(336);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_known_instruction_token4);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_known_instruction_token5);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token1);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token1);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(368);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token2);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token3);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token3);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token4);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token5);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token6);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token7);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token8);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token9);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token10);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token11);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token12);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token13);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token14);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token15);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token16);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token17);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token18);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token19);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(247);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '0') ADVANCE(182);
      if (lookahead == '1') ADVANCE(183);
      if (lookahead == '2') ADVANCE(184);
      if (lookahead == '3') ADVANCE(185);
      if (lookahead == '4') ADVANCE(186);
      if (lookahead == '5') ADVANCE(187);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('6' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '1') ADVANCE(264);
      if (lookahead == '3') ADVANCE(258);
      if (lookahead == '6') ADVANCE(261);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(379);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(294);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(121);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(120);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '1') ADVANCE(264);
      if (lookahead == '3') ADVANCE(258);
      if (lookahead == '6') ADVANCE(261);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(294);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(121);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(120);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '1') ADVANCE(265);
      if (lookahead == '3') ADVANCE(259);
      if (lookahead == '6') ADVANCE(262);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(356);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '1') ADVANCE(265);
      if (lookahead == '3') ADVANCE(259);
      if (lookahead == '6') ADVANCE(262);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '1') ADVANCE(249);
      if (lookahead == '8') ADVANCE(180);
      if (lookahead == '9') ADVANCE(181);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(398);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(361);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(399);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(332);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(338);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(333);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '7') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '1') ADVANCE(249);
      if (lookahead == '8') ADVANCE(180);
      if (lookahead == '9') ADVANCE(181);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(398);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(361);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(399);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(332);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(362);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(333);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '7') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '1') ADVANCE(249);
      if (lookahead == '8') ADVANCE(180);
      if (lookahead == '9') ADVANCE(181);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(398);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(361);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(399);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(332);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(333);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '7') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '1') ADVANCE(266);
      if (lookahead == '3') ADVANCE(260);
      if (lookahead == '6') ADVANCE(263);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(304);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '2') ADVANCE(88);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '2') ADVANCE(93);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '2') ADVANCE(89);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '4') ADVANCE(90);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '4') ADVANCE(94);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '4') ADVANCE(91);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '6') ADVANCE(86);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '6') ADVANCE(92);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '6') ADVANCE(87);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'c') ADVANCE(272);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'i') ADVANCE(267);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'r') ADVANCE(268);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(269);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(275);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(146);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(144);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(97);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(385);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(269);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(146);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(144);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(103);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(326);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(325);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(327);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(324);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(389);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(98);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'F' ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(401);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(326);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(325);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(327);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(324);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(331);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'F' ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(401);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(383);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(292);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(306);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(343);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(386);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(225);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(229);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(125);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(147);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(124);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(233);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(231);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(96);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(232);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(227);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(142);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(234);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'v') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(236);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(238);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(241);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(239);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(240);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(237);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(242);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(243);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'X') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(224);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(226);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(230);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(233);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(231);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(96);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(232);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(228);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(234);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(235);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'X') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(226);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(230);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(233);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(231);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(232);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(228);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(234);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(235);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'X') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(348);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(363);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(348);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(380);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(275);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(146);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(144);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(97);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(385);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(275);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(97);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(385);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(275);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(385);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(222);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(337);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(366);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(277);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(220);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(84);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 296:
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
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(109);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(85);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(115);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(111);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(113);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(117);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 303:
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
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(221);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(304);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(342);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(80);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(81);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(362);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(384);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(339);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(382);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(278);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(121);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(120);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(127);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(126);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(295);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(145);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(143);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(127);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(126);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(145);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(143);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(127);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(126);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(145);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(123);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(122);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(95);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(123);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(122);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(125);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(147);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(124);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(355);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(125);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(147);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(124);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(204);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(163);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(204);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(161);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(204);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(204);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(146);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(144);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(344);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(358);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(344);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(162);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(160);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(179);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(174);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(178);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(176);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(387);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(370);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(347);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(76);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(190);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(77);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(280);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(190);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(223);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(334);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(315);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(340);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(312);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(295);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(290);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(244);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(298);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(391);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(284);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(367);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(291);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(285);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(381);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(368);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(369);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 357:
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
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 358:
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
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 359:
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
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(374);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(177);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(175);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(77);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(280);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(341);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(389);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(99);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(389);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(390);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(296);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(297);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(299);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(309);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
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
          lookahead == '~') ADVANCE(403);
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
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(302);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 374:
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
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(95);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(100);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(100);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(101);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(191);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(191);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(363);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(280);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(281);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(246);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(293);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(310);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(189);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(307);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(245);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(335);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(219);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(356);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(355);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(357);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(358);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 396:
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
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 397:
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
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(172);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(173);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(388);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(403);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 70},
  [2] = {.lex_state = 23},
  [3] = {.lex_state = 23},
  [4] = {.lex_state = 24},
  [5] = {.lex_state = 24},
  [6] = {.lex_state = 25},
  [7] = {.lex_state = 24},
  [8] = {.lex_state = 24},
  [9] = {.lex_state = 24},
  [10] = {.lex_state = 24},
  [11] = {.lex_state = 26},
  [12] = {.lex_state = 26},
  [13] = {.lex_state = 26},
  [14] = {.lex_state = 70},
  [15] = {.lex_state = 70},
  [16] = {.lex_state = 70},
  [17] = {.lex_state = 70},
  [18] = {.lex_state = 70},
  [19] = {.lex_state = 70},
  [20] = {.lex_state = 70},
  [21] = {.lex_state = 29},
  [22] = {.lex_state = 29},
  [23] = {.lex_state = 30},
  [24] = {.lex_state = 31},
  [25] = {.lex_state = 70},
  [26] = {.lex_state = 32},
  [27] = {.lex_state = 70},
  [28] = {.lex_state = 70},
  [29] = {.lex_state = 70},
  [30] = {.lex_state = 70},
  [31] = {.lex_state = 70},
  [32] = {.lex_state = 70},
  [33] = {.lex_state = 70},
  [34] = {.lex_state = 70},
  [35] = {.lex_state = 70},
  [36] = {.lex_state = 70},
  [37] = {.lex_state = 70},
  [38] = {.lex_state = 70},
  [39] = {.lex_state = 70},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 70},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 70},
  [45] = {.lex_state = 70},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
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
    [sym_source_file] = STATE(43),
    [sym_source_line] = STATE(15),
    [sym_label] = STATE(16),
    [sym_instruction] = STATE(45),
    [sym_instruction_prefix] = STATE(21),
    [sym_known_instruction] = STATE(4),
    [sym_pseudo_instruction] = STATE(4),
    [sym_unknown_instruction] = STATE(4),
    [sym_word] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(15),
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
    [aux_sym_source_file_token1] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(26),
    [aux_sym_instruction_prefix_token1] = ACTIONS(28),
    [aux_sym_instruction_prefix_token2] = ACTIONS(28),
    [aux_sym_instruction_prefix_token3] = ACTIONS(28),
    [aux_sym_instruction_prefix_token4] = ACTIONS(28),
    [aux_sym_instruction_prefix_token5] = ACTIONS(28),
    [aux_sym_instruction_prefix_token6] = ACTIONS(28),
    [aux_sym_instruction_prefix_token7] = ACTIONS(28),
    [aux_sym_instruction_prefix_token8] = ACTIONS(28),
    [aux_sym_instruction_prefix_token9] = ACTIONS(28),
    [aux_sym_instruction_prefix_token10] = ACTIONS(28),
    [aux_sym_instruction_prefix_token11] = ACTIONS(28),
    [aux_sym_instruction_prefix_token12] = ACTIONS(28),
    [aux_sym_instruction_prefix_token13] = ACTIONS(28),
    [aux_sym_instruction_prefix_token14] = ACTIONS(28),
    [aux_sym_instruction_prefix_token15] = ACTIONS(28),
    [aux_sym_instruction_prefix_token16] = ACTIONS(28),
    [aux_sym_instruction_prefix_token17] = ACTIONS(28),
    [aux_sym_instruction_prefix_token18] = ACTIONS(28),
    [aux_sym_instruction_prefix_token19] = ACTIONS(28),
    [aux_sym_instruction_prefix_token20] = ACTIONS(28),
    [aux_sym_instruction_prefix_token21] = ACTIONS(28),
    [aux_sym_instruction_prefix_token22] = ACTIONS(28),
    [anon_sym_strict] = ACTIONS(30),
    [aux_sym_operand_prefix_token1] = ACTIONS(30),
    [aux_sym_operand_prefix_token2] = ACTIONS(30),
    [aux_sym_operand_prefix_token3] = ACTIONS(30),
    [aux_sym_operand_prefix_token4] = ACTIONS(30),
    [aux_sym_operand_prefix_token5] = ACTIONS(30),
    [aux_sym_operand_prefix_token6] = ACTIONS(30),
    [aux_sym_operand_prefix_token7] = ACTIONS(30),
    [aux_sym_operand_prefix_token8] = ACTIONS(30),
    [aux_sym_register_token1] = ACTIONS(30),
    [aux_sym_register_token2] = ACTIONS(30),
    [aux_sym_register_token3] = ACTIONS(30),
    [aux_sym_register_token4] = ACTIONS(30),
    [aux_sym_register_token5] = ACTIONS(30),
    [aux_sym_register_token6] = ACTIONS(30),
    [aux_sym_register_token7] = ACTIONS(30),
    [aux_sym_register_token8] = ACTIONS(30),
    [aux_sym_register_token9] = ACTIONS(30),
    [aux_sym_register_token10] = ACTIONS(30),
    [aux_sym_register_token11] = ACTIONS(30),
    [aux_sym_register_token12] = ACTIONS(30),
    [aux_sym_register_token13] = ACTIONS(30),
    [aux_sym_register_token14] = ACTIONS(30),
    [aux_sym_register_token15] = ACTIONS(30),
    [aux_sym_register_token16] = ACTIONS(30),
    [aux_sym_register_token17] = ACTIONS(30),
    [aux_sym_register_token18] = ACTIONS(30),
    [aux_sym_register_token19] = ACTIONS(30),
    [aux_sym_register_token20] = ACTIONS(30),
    [aux_sym_register_token21] = ACTIONS(30),
    [aux_sym_register_token22] = ACTIONS(30),
    [aux_sym_register_token23] = ACTIONS(30),
    [aux_sym_register_token24] = ACTIONS(30),
    [aux_sym_register_token25] = ACTIONS(30),
    [aux_sym_register_token26] = ACTIONS(30),
    [aux_sym_register_token27] = ACTIONS(30),
    [aux_sym_register_token28] = ACTIONS(30),
    [aux_sym_register_token29] = ACTIONS(30),
    [aux_sym_register_token30] = ACTIONS(30),
    [aux_sym_register_token31] = ACTIONS(30),
    [aux_sym_register_token32] = ACTIONS(30),
    [aux_sym_register_token33] = ACTIONS(30),
    [aux_sym_register_token34] = ACTIONS(30),
    [aux_sym_register_token35] = ACTIONS(30),
    [aux_sym_register_token36] = ACTIONS(30),
    [aux_sym_register_token37] = ACTIONS(30),
    [aux_sym_register_token38] = ACTIONS(30),
    [aux_sym_register_token39] = ACTIONS(30),
    [aux_sym_register_token40] = ACTIONS(30),
    [aux_sym_register_token41] = ACTIONS(30),
    [aux_sym_register_token42] = ACTIONS(30),
    [aux_sym_register_token43] = ACTIONS(30),
    [aux_sym_register_token44] = ACTIONS(30),
    [aux_sym_register_token45] = ACTIONS(30),
    [aux_sym_register_token46] = ACTIONS(30),
    [aux_sym_register_token47] = ACTIONS(30),
    [aux_sym_register_token48] = ACTIONS(30),
    [aux_sym_register_token49] = ACTIONS(30),
    [aux_sym_register_token50] = ACTIONS(30),
    [aux_sym_register_token51] = ACTIONS(30),
    [aux_sym_register_token52] = ACTIONS(30),
    [aux_sym_register_token53] = ACTIONS(30),
    [aux_sym_register_token54] = ACTIONS(30),
    [aux_sym_register_token55] = ACTIONS(30),
    [aux_sym_register_token56] = ACTIONS(30),
    [aux_sym_register_token57] = ACTIONS(30),
    [aux_sym_register_token58] = ACTIONS(30),
    [aux_sym_register_token59] = ACTIONS(30),
    [aux_sym_register_token60] = ACTIONS(30),
    [aux_sym_register_token61] = ACTIONS(30),
    [aux_sym_register_token62] = ACTIONS(30),
    [aux_sym_register_token63] = ACTIONS(30),
    [aux_sym_register_token64] = ACTIONS(30),
    [aux_sym_register_token65] = ACTIONS(30),
    [aux_sym_register_token66] = ACTIONS(30),
    [aux_sym_register_token67] = ACTIONS(30),
    [aux_sym_register_token68] = ACTIONS(30),
    [anon_sym_LBRACK] = ACTIONS(30),
    [aux_sym_constant_numeric_token1] = ACTIONS(30),
    [aux_sym_constant_numeric_token2] = ACTIONS(30),
    [aux_sym_constant_numeric_token3] = ACTIONS(30),
    [aux_sym_constant_numeric_token4] = ACTIONS(30),
    [aux_sym_constant_numeric_token5] = ACTIONS(30),
    [aux_sym_constant_numeric_token6] = ACTIONS(30),
    [aux_sym_constant_numeric_token7] = ACTIONS(30),
    [aux_sym_constant_numeric_token8] = ACTIONS(30),
    [aux_sym_constant_numeric_token9] = ACTIONS(30),
    [aux_sym_constant_numeric_token10] = ACTIONS(30),
    [aux_sym_constant_charstr_token1] = ACTIONS(30),
    [aux_sym_constant_charstr_token2] = ACTIONS(30),
    [aux_sym_constant_charstr_token3] = ACTIONS(30),
    [aux_sym_known_instruction_token1] = ACTIONS(28),
    [aux_sym_known_instruction_token2] = ACTIONS(28),
    [aux_sym_known_instruction_token3] = ACTIONS(28),
    [aux_sym_known_instruction_token4] = ACTIONS(28),
    [aux_sym_known_instruction_token5] = ACTIONS(28),
    [aux_sym_pseudo_instruction_token1] = ACTIONS(28),
    [aux_sym_pseudo_instruction_token2] = ACTIONS(28),
    [aux_sym_pseudo_instruction_token3] = ACTIONS(28),
    [aux_sym_pseudo_instruction_token4] = ACTIONS(28),
    [aux_sym_pseudo_instruction_token5] = ACTIONS(28),
    [aux_sym_pseudo_instruction_token6] = ACTIONS(28),
    [aux_sym_pseudo_instruction_token7] = ACTIONS(28),
    [aux_sym_pseudo_instruction_token8] = ACTIONS(28),
    [aux_sym_pseudo_instruction_token9] = ACTIONS(28),
    [aux_sym_pseudo_instruction_token10] = ACTIONS(28),
    [aux_sym_pseudo_instruction_token11] = ACTIONS(28),
    [aux_sym_pseudo_instruction_token12] = ACTIONS(28),
    [aux_sym_pseudo_instruction_token13] = ACTIONS(28),
    [aux_sym_pseudo_instruction_token14] = ACTIONS(28),
    [aux_sym_pseudo_instruction_token15] = ACTIONS(28),
    [aux_sym_pseudo_instruction_token16] = ACTIONS(28),
    [aux_sym_pseudo_instruction_token17] = ACTIONS(28),
    [aux_sym_pseudo_instruction_token18] = ACTIONS(28),
    [aux_sym_pseudo_instruction_token19] = ACTIONS(28),
    [sym_comment] = ACTIONS(15),
    [aux_sym_word_token1] = ACTIONS(32),
  },
  [4] = {
    [sym_operands] = STATE(39),
    [sym_operand] = STATE(27),
    [sym_operand_prefix] = STATE(11),
    [sym_register] = STATE(31),
    [sym_effective_address] = STATE(31),
    [sym_constant] = STATE(31),
    [sym_constant_numeric] = STATE(32),
    [sym_constant_charstr] = STATE(32),
    [sym_word] = STATE(33),
    [sym_expression] = STATE(31),
    [aux_sym_source_file_token1] = ACTIONS(35),
    [anon_sym_strict] = ACTIONS(37),
    [aux_sym_operand_prefix_token1] = ACTIONS(39),
    [aux_sym_operand_prefix_token2] = ACTIONS(39),
    [aux_sym_operand_prefix_token3] = ACTIONS(39),
    [aux_sym_operand_prefix_token4] = ACTIONS(39),
    [aux_sym_operand_prefix_token5] = ACTIONS(39),
    [aux_sym_operand_prefix_token6] = ACTIONS(39),
    [aux_sym_operand_prefix_token7] = ACTIONS(39),
    [aux_sym_operand_prefix_token8] = ACTIONS(39),
    [aux_sym_register_token1] = ACTIONS(41),
    [aux_sym_register_token2] = ACTIONS(41),
    [aux_sym_register_token3] = ACTIONS(41),
    [aux_sym_register_token4] = ACTIONS(41),
    [aux_sym_register_token5] = ACTIONS(41),
    [aux_sym_register_token6] = ACTIONS(41),
    [aux_sym_register_token7] = ACTIONS(41),
    [aux_sym_register_token8] = ACTIONS(41),
    [aux_sym_register_token9] = ACTIONS(41),
    [aux_sym_register_token10] = ACTIONS(41),
    [aux_sym_register_token11] = ACTIONS(41),
    [aux_sym_register_token12] = ACTIONS(41),
    [aux_sym_register_token13] = ACTIONS(41),
    [aux_sym_register_token14] = ACTIONS(41),
    [aux_sym_register_token15] = ACTIONS(41),
    [aux_sym_register_token16] = ACTIONS(41),
    [aux_sym_register_token17] = ACTIONS(41),
    [aux_sym_register_token18] = ACTIONS(41),
    [aux_sym_register_token19] = ACTIONS(41),
    [aux_sym_register_token20] = ACTIONS(41),
    [aux_sym_register_token21] = ACTIONS(41),
    [aux_sym_register_token22] = ACTIONS(41),
    [aux_sym_register_token23] = ACTIONS(41),
    [aux_sym_register_token24] = ACTIONS(41),
    [aux_sym_register_token25] = ACTIONS(41),
    [aux_sym_register_token26] = ACTIONS(41),
    [aux_sym_register_token27] = ACTIONS(41),
    [aux_sym_register_token28] = ACTIONS(41),
    [aux_sym_register_token29] = ACTIONS(41),
    [aux_sym_register_token30] = ACTIONS(41),
    [aux_sym_register_token31] = ACTIONS(41),
    [aux_sym_register_token32] = ACTIONS(41),
    [aux_sym_register_token33] = ACTIONS(41),
    [aux_sym_register_token34] = ACTIONS(41),
    [aux_sym_register_token35] = ACTIONS(41),
    [aux_sym_register_token36] = ACTIONS(41),
    [aux_sym_register_token37] = ACTIONS(41),
    [aux_sym_register_token38] = ACTIONS(41),
    [aux_sym_register_token39] = ACTIONS(41),
    [aux_sym_register_token40] = ACTIONS(41),
    [aux_sym_register_token41] = ACTIONS(41),
    [aux_sym_register_token42] = ACTIONS(41),
    [aux_sym_register_token43] = ACTIONS(41),
    [aux_sym_register_token44] = ACTIONS(41),
    [aux_sym_register_token45] = ACTIONS(41),
    [aux_sym_register_token46] = ACTIONS(41),
    [aux_sym_register_token47] = ACTIONS(41),
    [aux_sym_register_token48] = ACTIONS(41),
    [aux_sym_register_token49] = ACTIONS(41),
    [aux_sym_register_token50] = ACTIONS(41),
    [aux_sym_register_token51] = ACTIONS(41),
    [aux_sym_register_token52] = ACTIONS(41),
    [aux_sym_register_token53] = ACTIONS(41),
    [aux_sym_register_token54] = ACTIONS(41),
    [aux_sym_register_token55] = ACTIONS(41),
    [aux_sym_register_token56] = ACTIONS(41),
    [aux_sym_register_token57] = ACTIONS(41),
    [aux_sym_register_token58] = ACTIONS(41),
    [aux_sym_register_token59] = ACTIONS(41),
    [aux_sym_register_token60] = ACTIONS(41),
    [aux_sym_register_token61] = ACTIONS(41),
    [aux_sym_register_token62] = ACTIONS(41),
    [aux_sym_register_token63] = ACTIONS(41),
    [aux_sym_register_token64] = ACTIONS(41),
    [aux_sym_register_token65] = ACTIONS(41),
    [aux_sym_register_token66] = ACTIONS(41),
    [aux_sym_register_token67] = ACTIONS(41),
    [aux_sym_register_token68] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [aux_sym_constant_numeric_token1] = ACTIONS(45),
    [aux_sym_constant_numeric_token2] = ACTIONS(45),
    [aux_sym_constant_numeric_token3] = ACTIONS(45),
    [aux_sym_constant_numeric_token4] = ACTIONS(45),
    [aux_sym_constant_numeric_token5] = ACTIONS(45),
    [aux_sym_constant_numeric_token6] = ACTIONS(45),
    [aux_sym_constant_numeric_token7] = ACTIONS(45),
    [aux_sym_constant_numeric_token8] = ACTIONS(45),
    [aux_sym_constant_numeric_token9] = ACTIONS(45),
    [aux_sym_constant_numeric_token10] = ACTIONS(45),
    [aux_sym_constant_charstr_token1] = ACTIONS(47),
    [aux_sym_constant_charstr_token2] = ACTIONS(47),
    [aux_sym_constant_charstr_token3] = ACTIONS(47),
    [sym_comment] = ACTIONS(15),
    [aux_sym_word_token1] = ACTIONS(17),
  },
  [5] = {
    [sym_operands] = STATE(42),
    [sym_operand] = STATE(27),
    [sym_operand_prefix] = STATE(11),
    [sym_register] = STATE(31),
    [sym_effective_address] = STATE(31),
    [sym_constant] = STATE(31),
    [sym_constant_numeric] = STATE(32),
    [sym_constant_charstr] = STATE(32),
    [sym_word] = STATE(33),
    [sym_expression] = STATE(31),
    [aux_sym_source_file_token1] = ACTIONS(49),
    [anon_sym_strict] = ACTIONS(37),
    [aux_sym_operand_prefix_token1] = ACTIONS(39),
    [aux_sym_operand_prefix_token2] = ACTIONS(39),
    [aux_sym_operand_prefix_token3] = ACTIONS(39),
    [aux_sym_operand_prefix_token4] = ACTIONS(39),
    [aux_sym_operand_prefix_token5] = ACTIONS(39),
    [aux_sym_operand_prefix_token6] = ACTIONS(39),
    [aux_sym_operand_prefix_token7] = ACTIONS(39),
    [aux_sym_operand_prefix_token8] = ACTIONS(39),
    [aux_sym_register_token1] = ACTIONS(41),
    [aux_sym_register_token2] = ACTIONS(41),
    [aux_sym_register_token3] = ACTIONS(41),
    [aux_sym_register_token4] = ACTIONS(41),
    [aux_sym_register_token5] = ACTIONS(41),
    [aux_sym_register_token6] = ACTIONS(41),
    [aux_sym_register_token7] = ACTIONS(41),
    [aux_sym_register_token8] = ACTIONS(41),
    [aux_sym_register_token9] = ACTIONS(41),
    [aux_sym_register_token10] = ACTIONS(41),
    [aux_sym_register_token11] = ACTIONS(41),
    [aux_sym_register_token12] = ACTIONS(41),
    [aux_sym_register_token13] = ACTIONS(41),
    [aux_sym_register_token14] = ACTIONS(41),
    [aux_sym_register_token15] = ACTIONS(41),
    [aux_sym_register_token16] = ACTIONS(41),
    [aux_sym_register_token17] = ACTIONS(41),
    [aux_sym_register_token18] = ACTIONS(41),
    [aux_sym_register_token19] = ACTIONS(41),
    [aux_sym_register_token20] = ACTIONS(41),
    [aux_sym_register_token21] = ACTIONS(41),
    [aux_sym_register_token22] = ACTIONS(41),
    [aux_sym_register_token23] = ACTIONS(41),
    [aux_sym_register_token24] = ACTIONS(41),
    [aux_sym_register_token25] = ACTIONS(41),
    [aux_sym_register_token26] = ACTIONS(41),
    [aux_sym_register_token27] = ACTIONS(41),
    [aux_sym_register_token28] = ACTIONS(41),
    [aux_sym_register_token29] = ACTIONS(41),
    [aux_sym_register_token30] = ACTIONS(41),
    [aux_sym_register_token31] = ACTIONS(41),
    [aux_sym_register_token32] = ACTIONS(41),
    [aux_sym_register_token33] = ACTIONS(41),
    [aux_sym_register_token34] = ACTIONS(41),
    [aux_sym_register_token35] = ACTIONS(41),
    [aux_sym_register_token36] = ACTIONS(41),
    [aux_sym_register_token37] = ACTIONS(41),
    [aux_sym_register_token38] = ACTIONS(41),
    [aux_sym_register_token39] = ACTIONS(41),
    [aux_sym_register_token40] = ACTIONS(41),
    [aux_sym_register_token41] = ACTIONS(41),
    [aux_sym_register_token42] = ACTIONS(41),
    [aux_sym_register_token43] = ACTIONS(41),
    [aux_sym_register_token44] = ACTIONS(41),
    [aux_sym_register_token45] = ACTIONS(41),
    [aux_sym_register_token46] = ACTIONS(41),
    [aux_sym_register_token47] = ACTIONS(41),
    [aux_sym_register_token48] = ACTIONS(41),
    [aux_sym_register_token49] = ACTIONS(41),
    [aux_sym_register_token50] = ACTIONS(41),
    [aux_sym_register_token51] = ACTIONS(41),
    [aux_sym_register_token52] = ACTIONS(41),
    [aux_sym_register_token53] = ACTIONS(41),
    [aux_sym_register_token54] = ACTIONS(41),
    [aux_sym_register_token55] = ACTIONS(41),
    [aux_sym_register_token56] = ACTIONS(41),
    [aux_sym_register_token57] = ACTIONS(41),
    [aux_sym_register_token58] = ACTIONS(41),
    [aux_sym_register_token59] = ACTIONS(41),
    [aux_sym_register_token60] = ACTIONS(41),
    [aux_sym_register_token61] = ACTIONS(41),
    [aux_sym_register_token62] = ACTIONS(41),
    [aux_sym_register_token63] = ACTIONS(41),
    [aux_sym_register_token64] = ACTIONS(41),
    [aux_sym_register_token65] = ACTIONS(41),
    [aux_sym_register_token66] = ACTIONS(41),
    [aux_sym_register_token67] = ACTIONS(41),
    [aux_sym_register_token68] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [aux_sym_constant_numeric_token1] = ACTIONS(45),
    [aux_sym_constant_numeric_token2] = ACTIONS(45),
    [aux_sym_constant_numeric_token3] = ACTIONS(45),
    [aux_sym_constant_numeric_token4] = ACTIONS(45),
    [aux_sym_constant_numeric_token5] = ACTIONS(45),
    [aux_sym_constant_numeric_token6] = ACTIONS(45),
    [aux_sym_constant_numeric_token7] = ACTIONS(45),
    [aux_sym_constant_numeric_token8] = ACTIONS(45),
    [aux_sym_constant_numeric_token9] = ACTIONS(45),
    [aux_sym_constant_numeric_token10] = ACTIONS(45),
    [aux_sym_constant_charstr_token1] = ACTIONS(47),
    [aux_sym_constant_charstr_token2] = ACTIONS(47),
    [aux_sym_constant_charstr_token3] = ACTIONS(47),
    [sym_comment] = ACTIONS(15),
    [aux_sym_word_token1] = ACTIONS(17),
  },
  [6] = {
    [sym_operand] = STATE(34),
    [sym_operand_prefix] = STATE(11),
    [sym_register] = STATE(31),
    [sym_effective_address] = STATE(31),
    [sym_constant] = STATE(31),
    [sym_constant_numeric] = STATE(32),
    [sym_constant_charstr] = STATE(32),
    [sym_word] = STATE(33),
    [sym_expression] = STATE(31),
    [anon_sym_strict] = ACTIONS(37),
    [aux_sym_operand_prefix_token1] = ACTIONS(39),
    [aux_sym_operand_prefix_token2] = ACTIONS(39),
    [aux_sym_operand_prefix_token3] = ACTIONS(39),
    [aux_sym_operand_prefix_token4] = ACTIONS(39),
    [aux_sym_operand_prefix_token5] = ACTIONS(39),
    [aux_sym_operand_prefix_token6] = ACTIONS(39),
    [aux_sym_operand_prefix_token7] = ACTIONS(39),
    [aux_sym_operand_prefix_token8] = ACTIONS(39),
    [aux_sym_register_token1] = ACTIONS(41),
    [aux_sym_register_token2] = ACTIONS(41),
    [aux_sym_register_token3] = ACTIONS(41),
    [aux_sym_register_token4] = ACTIONS(41),
    [aux_sym_register_token5] = ACTIONS(41),
    [aux_sym_register_token6] = ACTIONS(41),
    [aux_sym_register_token7] = ACTIONS(41),
    [aux_sym_register_token8] = ACTIONS(41),
    [aux_sym_register_token9] = ACTIONS(41),
    [aux_sym_register_token10] = ACTIONS(41),
    [aux_sym_register_token11] = ACTIONS(41),
    [aux_sym_register_token12] = ACTIONS(41),
    [aux_sym_register_token13] = ACTIONS(41),
    [aux_sym_register_token14] = ACTIONS(41),
    [aux_sym_register_token15] = ACTIONS(41),
    [aux_sym_register_token16] = ACTIONS(41),
    [aux_sym_register_token17] = ACTIONS(41),
    [aux_sym_register_token18] = ACTIONS(41),
    [aux_sym_register_token19] = ACTIONS(41),
    [aux_sym_register_token20] = ACTIONS(41),
    [aux_sym_register_token21] = ACTIONS(41),
    [aux_sym_register_token22] = ACTIONS(41),
    [aux_sym_register_token23] = ACTIONS(41),
    [aux_sym_register_token24] = ACTIONS(41),
    [aux_sym_register_token25] = ACTIONS(41),
    [aux_sym_register_token26] = ACTIONS(41),
    [aux_sym_register_token27] = ACTIONS(41),
    [aux_sym_register_token28] = ACTIONS(41),
    [aux_sym_register_token29] = ACTIONS(41),
    [aux_sym_register_token30] = ACTIONS(41),
    [aux_sym_register_token31] = ACTIONS(41),
    [aux_sym_register_token32] = ACTIONS(41),
    [aux_sym_register_token33] = ACTIONS(41),
    [aux_sym_register_token34] = ACTIONS(41),
    [aux_sym_register_token35] = ACTIONS(41),
    [aux_sym_register_token36] = ACTIONS(41),
    [aux_sym_register_token37] = ACTIONS(41),
    [aux_sym_register_token38] = ACTIONS(41),
    [aux_sym_register_token39] = ACTIONS(41),
    [aux_sym_register_token40] = ACTIONS(41),
    [aux_sym_register_token41] = ACTIONS(41),
    [aux_sym_register_token42] = ACTIONS(41),
    [aux_sym_register_token43] = ACTIONS(41),
    [aux_sym_register_token44] = ACTIONS(41),
    [aux_sym_register_token45] = ACTIONS(41),
    [aux_sym_register_token46] = ACTIONS(41),
    [aux_sym_register_token47] = ACTIONS(41),
    [aux_sym_register_token48] = ACTIONS(41),
    [aux_sym_register_token49] = ACTIONS(41),
    [aux_sym_register_token50] = ACTIONS(41),
    [aux_sym_register_token51] = ACTIONS(41),
    [aux_sym_register_token52] = ACTIONS(41),
    [aux_sym_register_token53] = ACTIONS(41),
    [aux_sym_register_token54] = ACTIONS(41),
    [aux_sym_register_token55] = ACTIONS(41),
    [aux_sym_register_token56] = ACTIONS(41),
    [aux_sym_register_token57] = ACTIONS(41),
    [aux_sym_register_token58] = ACTIONS(41),
    [aux_sym_register_token59] = ACTIONS(41),
    [aux_sym_register_token60] = ACTIONS(41),
    [aux_sym_register_token61] = ACTIONS(41),
    [aux_sym_register_token62] = ACTIONS(41),
    [aux_sym_register_token63] = ACTIONS(41),
    [aux_sym_register_token64] = ACTIONS(41),
    [aux_sym_register_token65] = ACTIONS(41),
    [aux_sym_register_token66] = ACTIONS(41),
    [aux_sym_register_token67] = ACTIONS(41),
    [aux_sym_register_token68] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(51),
    [aux_sym_constant_numeric_token1] = ACTIONS(45),
    [aux_sym_constant_numeric_token2] = ACTIONS(45),
    [aux_sym_constant_numeric_token3] = ACTIONS(53),
    [aux_sym_constant_numeric_token4] = ACTIONS(45),
    [aux_sym_constant_numeric_token5] = ACTIONS(45),
    [aux_sym_constant_numeric_token6] = ACTIONS(45),
    [aux_sym_constant_numeric_token7] = ACTIONS(53),
    [aux_sym_constant_numeric_token8] = ACTIONS(45),
    [aux_sym_constant_numeric_token9] = ACTIONS(45),
    [aux_sym_constant_numeric_token10] = ACTIONS(45),
    [aux_sym_constant_charstr_token1] = ACTIONS(55),
    [aux_sym_constant_charstr_token2] = ACTIONS(55),
    [aux_sym_constant_charstr_token3] = ACTIONS(55),
    [sym_comment] = ACTIONS(3),
    [aux_sym_word_token1] = ACTIONS(17),
  },
  [7] = {
    [aux_sym_source_file_token1] = ACTIONS(57),
    [anon_sym_strict] = ACTIONS(59),
    [aux_sym_operand_prefix_token1] = ACTIONS(59),
    [aux_sym_operand_prefix_token2] = ACTIONS(59),
    [aux_sym_operand_prefix_token3] = ACTIONS(59),
    [aux_sym_operand_prefix_token4] = ACTIONS(59),
    [aux_sym_operand_prefix_token5] = ACTIONS(59),
    [aux_sym_operand_prefix_token6] = ACTIONS(59),
    [aux_sym_operand_prefix_token7] = ACTIONS(59),
    [aux_sym_operand_prefix_token8] = ACTIONS(59),
    [aux_sym_register_token1] = ACTIONS(59),
    [aux_sym_register_token2] = ACTIONS(59),
    [aux_sym_register_token3] = ACTIONS(59),
    [aux_sym_register_token4] = ACTIONS(59),
    [aux_sym_register_token5] = ACTIONS(59),
    [aux_sym_register_token6] = ACTIONS(59),
    [aux_sym_register_token7] = ACTIONS(59),
    [aux_sym_register_token8] = ACTIONS(59),
    [aux_sym_register_token9] = ACTIONS(59),
    [aux_sym_register_token10] = ACTIONS(59),
    [aux_sym_register_token11] = ACTIONS(59),
    [aux_sym_register_token12] = ACTIONS(59),
    [aux_sym_register_token13] = ACTIONS(59),
    [aux_sym_register_token14] = ACTIONS(59),
    [aux_sym_register_token15] = ACTIONS(59),
    [aux_sym_register_token16] = ACTIONS(59),
    [aux_sym_register_token17] = ACTIONS(59),
    [aux_sym_register_token18] = ACTIONS(59),
    [aux_sym_register_token19] = ACTIONS(59),
    [aux_sym_register_token20] = ACTIONS(59),
    [aux_sym_register_token21] = ACTIONS(59),
    [aux_sym_register_token22] = ACTIONS(59),
    [aux_sym_register_token23] = ACTIONS(59),
    [aux_sym_register_token24] = ACTIONS(59),
    [aux_sym_register_token25] = ACTIONS(59),
    [aux_sym_register_token26] = ACTIONS(59),
    [aux_sym_register_token27] = ACTIONS(59),
    [aux_sym_register_token28] = ACTIONS(59),
    [aux_sym_register_token29] = ACTIONS(59),
    [aux_sym_register_token30] = ACTIONS(59),
    [aux_sym_register_token31] = ACTIONS(59),
    [aux_sym_register_token32] = ACTIONS(59),
    [aux_sym_register_token33] = ACTIONS(59),
    [aux_sym_register_token34] = ACTIONS(59),
    [aux_sym_register_token35] = ACTIONS(59),
    [aux_sym_register_token36] = ACTIONS(59),
    [aux_sym_register_token37] = ACTIONS(59),
    [aux_sym_register_token38] = ACTIONS(59),
    [aux_sym_register_token39] = ACTIONS(59),
    [aux_sym_register_token40] = ACTIONS(59),
    [aux_sym_register_token41] = ACTIONS(59),
    [aux_sym_register_token42] = ACTIONS(59),
    [aux_sym_register_token43] = ACTIONS(59),
    [aux_sym_register_token44] = ACTIONS(59),
    [aux_sym_register_token45] = ACTIONS(59),
    [aux_sym_register_token46] = ACTIONS(59),
    [aux_sym_register_token47] = ACTIONS(59),
    [aux_sym_register_token48] = ACTIONS(59),
    [aux_sym_register_token49] = ACTIONS(59),
    [aux_sym_register_token50] = ACTIONS(59),
    [aux_sym_register_token51] = ACTIONS(59),
    [aux_sym_register_token52] = ACTIONS(59),
    [aux_sym_register_token53] = ACTIONS(59),
    [aux_sym_register_token54] = ACTIONS(59),
    [aux_sym_register_token55] = ACTIONS(59),
    [aux_sym_register_token56] = ACTIONS(59),
    [aux_sym_register_token57] = ACTIONS(59),
    [aux_sym_register_token58] = ACTIONS(59),
    [aux_sym_register_token59] = ACTIONS(59),
    [aux_sym_register_token60] = ACTIONS(59),
    [aux_sym_register_token61] = ACTIONS(59),
    [aux_sym_register_token62] = ACTIONS(59),
    [aux_sym_register_token63] = ACTIONS(59),
    [aux_sym_register_token64] = ACTIONS(59),
    [aux_sym_register_token65] = ACTIONS(59),
    [aux_sym_register_token66] = ACTIONS(59),
    [aux_sym_register_token67] = ACTIONS(59),
    [aux_sym_register_token68] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(59),
    [aux_sym_constant_numeric_token1] = ACTIONS(59),
    [aux_sym_constant_numeric_token2] = ACTIONS(59),
    [aux_sym_constant_numeric_token3] = ACTIONS(59),
    [aux_sym_constant_numeric_token4] = ACTIONS(59),
    [aux_sym_constant_numeric_token5] = ACTIONS(59),
    [aux_sym_constant_numeric_token6] = ACTIONS(59),
    [aux_sym_constant_numeric_token7] = ACTIONS(59),
    [aux_sym_constant_numeric_token8] = ACTIONS(59),
    [aux_sym_constant_numeric_token9] = ACTIONS(59),
    [aux_sym_constant_numeric_token10] = ACTIONS(59),
    [aux_sym_constant_charstr_token1] = ACTIONS(59),
    [aux_sym_constant_charstr_token2] = ACTIONS(59),
    [aux_sym_constant_charstr_token3] = ACTIONS(59),
    [sym_comment] = ACTIONS(15),
    [aux_sym_word_token1] = ACTIONS(59),
  },
  [8] = {
    [aux_sym_source_file_token1] = ACTIONS(61),
    [anon_sym_strict] = ACTIONS(63),
    [aux_sym_operand_prefix_token1] = ACTIONS(63),
    [aux_sym_operand_prefix_token2] = ACTIONS(63),
    [aux_sym_operand_prefix_token3] = ACTIONS(63),
    [aux_sym_operand_prefix_token4] = ACTIONS(63),
    [aux_sym_operand_prefix_token5] = ACTIONS(63),
    [aux_sym_operand_prefix_token6] = ACTIONS(63),
    [aux_sym_operand_prefix_token7] = ACTIONS(63),
    [aux_sym_operand_prefix_token8] = ACTIONS(63),
    [aux_sym_register_token1] = ACTIONS(63),
    [aux_sym_register_token2] = ACTIONS(63),
    [aux_sym_register_token3] = ACTIONS(63),
    [aux_sym_register_token4] = ACTIONS(63),
    [aux_sym_register_token5] = ACTIONS(63),
    [aux_sym_register_token6] = ACTIONS(63),
    [aux_sym_register_token7] = ACTIONS(63),
    [aux_sym_register_token8] = ACTIONS(63),
    [aux_sym_register_token9] = ACTIONS(63),
    [aux_sym_register_token10] = ACTIONS(63),
    [aux_sym_register_token11] = ACTIONS(63),
    [aux_sym_register_token12] = ACTIONS(63),
    [aux_sym_register_token13] = ACTIONS(63),
    [aux_sym_register_token14] = ACTIONS(63),
    [aux_sym_register_token15] = ACTIONS(63),
    [aux_sym_register_token16] = ACTIONS(63),
    [aux_sym_register_token17] = ACTIONS(63),
    [aux_sym_register_token18] = ACTIONS(63),
    [aux_sym_register_token19] = ACTIONS(63),
    [aux_sym_register_token20] = ACTIONS(63),
    [aux_sym_register_token21] = ACTIONS(63),
    [aux_sym_register_token22] = ACTIONS(63),
    [aux_sym_register_token23] = ACTIONS(63),
    [aux_sym_register_token24] = ACTIONS(63),
    [aux_sym_register_token25] = ACTIONS(63),
    [aux_sym_register_token26] = ACTIONS(63),
    [aux_sym_register_token27] = ACTIONS(63),
    [aux_sym_register_token28] = ACTIONS(63),
    [aux_sym_register_token29] = ACTIONS(63),
    [aux_sym_register_token30] = ACTIONS(63),
    [aux_sym_register_token31] = ACTIONS(63),
    [aux_sym_register_token32] = ACTIONS(63),
    [aux_sym_register_token33] = ACTIONS(63),
    [aux_sym_register_token34] = ACTIONS(63),
    [aux_sym_register_token35] = ACTIONS(63),
    [aux_sym_register_token36] = ACTIONS(63),
    [aux_sym_register_token37] = ACTIONS(63),
    [aux_sym_register_token38] = ACTIONS(63),
    [aux_sym_register_token39] = ACTIONS(63),
    [aux_sym_register_token40] = ACTIONS(63),
    [aux_sym_register_token41] = ACTIONS(63),
    [aux_sym_register_token42] = ACTIONS(63),
    [aux_sym_register_token43] = ACTIONS(63),
    [aux_sym_register_token44] = ACTIONS(63),
    [aux_sym_register_token45] = ACTIONS(63),
    [aux_sym_register_token46] = ACTIONS(63),
    [aux_sym_register_token47] = ACTIONS(63),
    [aux_sym_register_token48] = ACTIONS(63),
    [aux_sym_register_token49] = ACTIONS(63),
    [aux_sym_register_token50] = ACTIONS(63),
    [aux_sym_register_token51] = ACTIONS(63),
    [aux_sym_register_token52] = ACTIONS(63),
    [aux_sym_register_token53] = ACTIONS(63),
    [aux_sym_register_token54] = ACTIONS(63),
    [aux_sym_register_token55] = ACTIONS(63),
    [aux_sym_register_token56] = ACTIONS(63),
    [aux_sym_register_token57] = ACTIONS(63),
    [aux_sym_register_token58] = ACTIONS(63),
    [aux_sym_register_token59] = ACTIONS(63),
    [aux_sym_register_token60] = ACTIONS(63),
    [aux_sym_register_token61] = ACTIONS(63),
    [aux_sym_register_token62] = ACTIONS(63),
    [aux_sym_register_token63] = ACTIONS(63),
    [aux_sym_register_token64] = ACTIONS(63),
    [aux_sym_register_token65] = ACTIONS(63),
    [aux_sym_register_token66] = ACTIONS(63),
    [aux_sym_register_token67] = ACTIONS(63),
    [aux_sym_register_token68] = ACTIONS(63),
    [anon_sym_LBRACK] = ACTIONS(63),
    [aux_sym_constant_numeric_token1] = ACTIONS(63),
    [aux_sym_constant_numeric_token2] = ACTIONS(63),
    [aux_sym_constant_numeric_token3] = ACTIONS(63),
    [aux_sym_constant_numeric_token4] = ACTIONS(63),
    [aux_sym_constant_numeric_token5] = ACTIONS(63),
    [aux_sym_constant_numeric_token6] = ACTIONS(63),
    [aux_sym_constant_numeric_token7] = ACTIONS(63),
    [aux_sym_constant_numeric_token8] = ACTIONS(63),
    [aux_sym_constant_numeric_token9] = ACTIONS(63),
    [aux_sym_constant_numeric_token10] = ACTIONS(63),
    [aux_sym_constant_charstr_token1] = ACTIONS(63),
    [aux_sym_constant_charstr_token2] = ACTIONS(63),
    [aux_sym_constant_charstr_token3] = ACTIONS(63),
    [sym_comment] = ACTIONS(15),
    [aux_sym_word_token1] = ACTIONS(63),
  },
  [9] = {
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
  [10] = {
    [aux_sym_source_file_token1] = ACTIONS(65),
    [anon_sym_strict] = ACTIONS(30),
    [aux_sym_operand_prefix_token1] = ACTIONS(30),
    [aux_sym_operand_prefix_token2] = ACTIONS(30),
    [aux_sym_operand_prefix_token3] = ACTIONS(30),
    [aux_sym_operand_prefix_token4] = ACTIONS(30),
    [aux_sym_operand_prefix_token5] = ACTIONS(30),
    [aux_sym_operand_prefix_token6] = ACTIONS(30),
    [aux_sym_operand_prefix_token7] = ACTIONS(30),
    [aux_sym_operand_prefix_token8] = ACTIONS(30),
    [aux_sym_register_token1] = ACTIONS(30),
    [aux_sym_register_token2] = ACTIONS(30),
    [aux_sym_register_token3] = ACTIONS(30),
    [aux_sym_register_token4] = ACTIONS(30),
    [aux_sym_register_token5] = ACTIONS(30),
    [aux_sym_register_token6] = ACTIONS(30),
    [aux_sym_register_token7] = ACTIONS(30),
    [aux_sym_register_token8] = ACTIONS(30),
    [aux_sym_register_token9] = ACTIONS(30),
    [aux_sym_register_token10] = ACTIONS(30),
    [aux_sym_register_token11] = ACTIONS(30),
    [aux_sym_register_token12] = ACTIONS(30),
    [aux_sym_register_token13] = ACTIONS(30),
    [aux_sym_register_token14] = ACTIONS(30),
    [aux_sym_register_token15] = ACTIONS(30),
    [aux_sym_register_token16] = ACTIONS(30),
    [aux_sym_register_token17] = ACTIONS(30),
    [aux_sym_register_token18] = ACTIONS(30),
    [aux_sym_register_token19] = ACTIONS(30),
    [aux_sym_register_token20] = ACTIONS(30),
    [aux_sym_register_token21] = ACTIONS(30),
    [aux_sym_register_token22] = ACTIONS(30),
    [aux_sym_register_token23] = ACTIONS(30),
    [aux_sym_register_token24] = ACTIONS(30),
    [aux_sym_register_token25] = ACTIONS(30),
    [aux_sym_register_token26] = ACTIONS(30),
    [aux_sym_register_token27] = ACTIONS(30),
    [aux_sym_register_token28] = ACTIONS(30),
    [aux_sym_register_token29] = ACTIONS(30),
    [aux_sym_register_token30] = ACTIONS(30),
    [aux_sym_register_token31] = ACTIONS(30),
    [aux_sym_register_token32] = ACTIONS(30),
    [aux_sym_register_token33] = ACTIONS(30),
    [aux_sym_register_token34] = ACTIONS(30),
    [aux_sym_register_token35] = ACTIONS(30),
    [aux_sym_register_token36] = ACTIONS(30),
    [aux_sym_register_token37] = ACTIONS(30),
    [aux_sym_register_token38] = ACTIONS(30),
    [aux_sym_register_token39] = ACTIONS(30),
    [aux_sym_register_token40] = ACTIONS(30),
    [aux_sym_register_token41] = ACTIONS(30),
    [aux_sym_register_token42] = ACTIONS(30),
    [aux_sym_register_token43] = ACTIONS(30),
    [aux_sym_register_token44] = ACTIONS(30),
    [aux_sym_register_token45] = ACTIONS(30),
    [aux_sym_register_token46] = ACTIONS(30),
    [aux_sym_register_token47] = ACTIONS(30),
    [aux_sym_register_token48] = ACTIONS(30),
    [aux_sym_register_token49] = ACTIONS(30),
    [aux_sym_register_token50] = ACTIONS(30),
    [aux_sym_register_token51] = ACTIONS(30),
    [aux_sym_register_token52] = ACTIONS(30),
    [aux_sym_register_token53] = ACTIONS(30),
    [aux_sym_register_token54] = ACTIONS(30),
    [aux_sym_register_token55] = ACTIONS(30),
    [aux_sym_register_token56] = ACTIONS(30),
    [aux_sym_register_token57] = ACTIONS(30),
    [aux_sym_register_token58] = ACTIONS(30),
    [aux_sym_register_token59] = ACTIONS(30),
    [aux_sym_register_token60] = ACTIONS(30),
    [aux_sym_register_token61] = ACTIONS(30),
    [aux_sym_register_token62] = ACTIONS(30),
    [aux_sym_register_token63] = ACTIONS(30),
    [aux_sym_register_token64] = ACTIONS(30),
    [aux_sym_register_token65] = ACTIONS(30),
    [aux_sym_register_token66] = ACTIONS(30),
    [aux_sym_register_token67] = ACTIONS(30),
    [aux_sym_register_token68] = ACTIONS(30),
    [anon_sym_LBRACK] = ACTIONS(30),
    [aux_sym_constant_numeric_token1] = ACTIONS(30),
    [aux_sym_constant_numeric_token2] = ACTIONS(30),
    [aux_sym_constant_numeric_token3] = ACTIONS(30),
    [aux_sym_constant_numeric_token4] = ACTIONS(30),
    [aux_sym_constant_numeric_token5] = ACTIONS(30),
    [aux_sym_constant_numeric_token6] = ACTIONS(30),
    [aux_sym_constant_numeric_token7] = ACTIONS(30),
    [aux_sym_constant_numeric_token8] = ACTIONS(30),
    [aux_sym_constant_numeric_token9] = ACTIONS(30),
    [aux_sym_constant_numeric_token10] = ACTIONS(30),
    [aux_sym_constant_charstr_token1] = ACTIONS(30),
    [aux_sym_constant_charstr_token2] = ACTIONS(30),
    [aux_sym_constant_charstr_token3] = ACTIONS(30),
    [sym_comment] = ACTIONS(15),
    [aux_sym_word_token1] = ACTIONS(30),
  },
  [11] = {
    [sym_register] = STATE(37),
    [sym_effective_address] = STATE(37),
    [sym_constant] = STATE(37),
    [sym_constant_numeric] = STATE(32),
    [sym_constant_charstr] = STATE(32),
    [sym_word] = STATE(33),
    [sym_expression] = STATE(37),
    [aux_sym_register_token1] = ACTIONS(41),
    [aux_sym_register_token2] = ACTIONS(41),
    [aux_sym_register_token3] = ACTIONS(41),
    [aux_sym_register_token4] = ACTIONS(41),
    [aux_sym_register_token5] = ACTIONS(41),
    [aux_sym_register_token6] = ACTIONS(41),
    [aux_sym_register_token7] = ACTIONS(41),
    [aux_sym_register_token8] = ACTIONS(41),
    [aux_sym_register_token9] = ACTIONS(41),
    [aux_sym_register_token10] = ACTIONS(41),
    [aux_sym_register_token11] = ACTIONS(41),
    [aux_sym_register_token12] = ACTIONS(41),
    [aux_sym_register_token13] = ACTIONS(41),
    [aux_sym_register_token14] = ACTIONS(41),
    [aux_sym_register_token15] = ACTIONS(41),
    [aux_sym_register_token16] = ACTIONS(41),
    [aux_sym_register_token17] = ACTIONS(41),
    [aux_sym_register_token18] = ACTIONS(41),
    [aux_sym_register_token19] = ACTIONS(41),
    [aux_sym_register_token20] = ACTIONS(41),
    [aux_sym_register_token21] = ACTIONS(41),
    [aux_sym_register_token22] = ACTIONS(41),
    [aux_sym_register_token23] = ACTIONS(41),
    [aux_sym_register_token24] = ACTIONS(41),
    [aux_sym_register_token25] = ACTIONS(41),
    [aux_sym_register_token26] = ACTIONS(41),
    [aux_sym_register_token27] = ACTIONS(41),
    [aux_sym_register_token28] = ACTIONS(41),
    [aux_sym_register_token29] = ACTIONS(41),
    [aux_sym_register_token30] = ACTIONS(41),
    [aux_sym_register_token31] = ACTIONS(41),
    [aux_sym_register_token32] = ACTIONS(41),
    [aux_sym_register_token33] = ACTIONS(41),
    [aux_sym_register_token34] = ACTIONS(41),
    [aux_sym_register_token35] = ACTIONS(41),
    [aux_sym_register_token36] = ACTIONS(41),
    [aux_sym_register_token37] = ACTIONS(41),
    [aux_sym_register_token38] = ACTIONS(41),
    [aux_sym_register_token39] = ACTIONS(41),
    [aux_sym_register_token40] = ACTIONS(41),
    [aux_sym_register_token41] = ACTIONS(41),
    [aux_sym_register_token42] = ACTIONS(41),
    [aux_sym_register_token43] = ACTIONS(41),
    [aux_sym_register_token44] = ACTIONS(41),
    [aux_sym_register_token45] = ACTIONS(41),
    [aux_sym_register_token46] = ACTIONS(41),
    [aux_sym_register_token47] = ACTIONS(41),
    [aux_sym_register_token48] = ACTIONS(41),
    [aux_sym_register_token49] = ACTIONS(41),
    [aux_sym_register_token50] = ACTIONS(41),
    [aux_sym_register_token51] = ACTIONS(41),
    [aux_sym_register_token52] = ACTIONS(41),
    [aux_sym_register_token53] = ACTIONS(41),
    [aux_sym_register_token54] = ACTIONS(41),
    [aux_sym_register_token55] = ACTIONS(41),
    [aux_sym_register_token56] = ACTIONS(41),
    [aux_sym_register_token57] = ACTIONS(41),
    [aux_sym_register_token58] = ACTIONS(41),
    [aux_sym_register_token59] = ACTIONS(41),
    [aux_sym_register_token60] = ACTIONS(41),
    [aux_sym_register_token61] = ACTIONS(41),
    [aux_sym_register_token62] = ACTIONS(41),
    [aux_sym_register_token63] = ACTIONS(41),
    [aux_sym_register_token64] = ACTIONS(41),
    [aux_sym_register_token65] = ACTIONS(41),
    [aux_sym_register_token66] = ACTIONS(41),
    [aux_sym_register_token67] = ACTIONS(41),
    [aux_sym_register_token68] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(51),
    [aux_sym_constant_numeric_token1] = ACTIONS(45),
    [aux_sym_constant_numeric_token2] = ACTIONS(45),
    [aux_sym_constant_numeric_token3] = ACTIONS(53),
    [aux_sym_constant_numeric_token4] = ACTIONS(45),
    [aux_sym_constant_numeric_token5] = ACTIONS(45),
    [aux_sym_constant_numeric_token6] = ACTIONS(45),
    [aux_sym_constant_numeric_token7] = ACTIONS(53),
    [aux_sym_constant_numeric_token8] = ACTIONS(45),
    [aux_sym_constant_numeric_token9] = ACTIONS(45),
    [aux_sym_constant_numeric_token10] = ACTIONS(45),
    [aux_sym_constant_charstr_token1] = ACTIONS(55),
    [aux_sym_constant_charstr_token2] = ACTIONS(55),
    [aux_sym_constant_charstr_token3] = ACTIONS(55),
    [sym_comment] = ACTIONS(3),
    [aux_sym_word_token1] = ACTIONS(17),
  },
  [12] = {
    [aux_sym_register_token1] = ACTIONS(67),
    [aux_sym_register_token2] = ACTIONS(67),
    [aux_sym_register_token3] = ACTIONS(67),
    [aux_sym_register_token4] = ACTIONS(67),
    [aux_sym_register_token5] = ACTIONS(67),
    [aux_sym_register_token6] = ACTIONS(67),
    [aux_sym_register_token7] = ACTIONS(67),
    [aux_sym_register_token8] = ACTIONS(67),
    [aux_sym_register_token9] = ACTIONS(67),
    [aux_sym_register_token10] = ACTIONS(67),
    [aux_sym_register_token11] = ACTIONS(67),
    [aux_sym_register_token12] = ACTIONS(67),
    [aux_sym_register_token13] = ACTIONS(67),
    [aux_sym_register_token14] = ACTIONS(67),
    [aux_sym_register_token15] = ACTIONS(67),
    [aux_sym_register_token16] = ACTIONS(67),
    [aux_sym_register_token17] = ACTIONS(67),
    [aux_sym_register_token18] = ACTIONS(67),
    [aux_sym_register_token19] = ACTIONS(67),
    [aux_sym_register_token20] = ACTIONS(67),
    [aux_sym_register_token21] = ACTIONS(67),
    [aux_sym_register_token22] = ACTIONS(67),
    [aux_sym_register_token23] = ACTIONS(67),
    [aux_sym_register_token24] = ACTIONS(67),
    [aux_sym_register_token25] = ACTIONS(67),
    [aux_sym_register_token26] = ACTIONS(67),
    [aux_sym_register_token27] = ACTIONS(67),
    [aux_sym_register_token28] = ACTIONS(67),
    [aux_sym_register_token29] = ACTIONS(67),
    [aux_sym_register_token30] = ACTIONS(67),
    [aux_sym_register_token31] = ACTIONS(67),
    [aux_sym_register_token32] = ACTIONS(67),
    [aux_sym_register_token33] = ACTIONS(67),
    [aux_sym_register_token34] = ACTIONS(67),
    [aux_sym_register_token35] = ACTIONS(67),
    [aux_sym_register_token36] = ACTIONS(67),
    [aux_sym_register_token37] = ACTIONS(67),
    [aux_sym_register_token38] = ACTIONS(67),
    [aux_sym_register_token39] = ACTIONS(67),
    [aux_sym_register_token40] = ACTIONS(67),
    [aux_sym_register_token41] = ACTIONS(67),
    [aux_sym_register_token42] = ACTIONS(67),
    [aux_sym_register_token43] = ACTIONS(67),
    [aux_sym_register_token44] = ACTIONS(67),
    [aux_sym_register_token45] = ACTIONS(67),
    [aux_sym_register_token46] = ACTIONS(67),
    [aux_sym_register_token47] = ACTIONS(67),
    [aux_sym_register_token48] = ACTIONS(67),
    [aux_sym_register_token49] = ACTIONS(67),
    [aux_sym_register_token50] = ACTIONS(67),
    [aux_sym_register_token51] = ACTIONS(67),
    [aux_sym_register_token52] = ACTIONS(67),
    [aux_sym_register_token53] = ACTIONS(67),
    [aux_sym_register_token54] = ACTIONS(67),
    [aux_sym_register_token55] = ACTIONS(67),
    [aux_sym_register_token56] = ACTIONS(67),
    [aux_sym_register_token57] = ACTIONS(67),
    [aux_sym_register_token58] = ACTIONS(67),
    [aux_sym_register_token59] = ACTIONS(67),
    [aux_sym_register_token60] = ACTIONS(67),
    [aux_sym_register_token61] = ACTIONS(67),
    [aux_sym_register_token62] = ACTIONS(67),
    [aux_sym_register_token63] = ACTIONS(67),
    [aux_sym_register_token64] = ACTIONS(67),
    [aux_sym_register_token65] = ACTIONS(67),
    [aux_sym_register_token66] = ACTIONS(67),
    [aux_sym_register_token67] = ACTIONS(67),
    [aux_sym_register_token68] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [aux_sym_constant_numeric_token1] = ACTIONS(67),
    [aux_sym_constant_numeric_token2] = ACTIONS(67),
    [aux_sym_constant_numeric_token3] = ACTIONS(69),
    [aux_sym_constant_numeric_token4] = ACTIONS(67),
    [aux_sym_constant_numeric_token5] = ACTIONS(67),
    [aux_sym_constant_numeric_token6] = ACTIONS(67),
    [aux_sym_constant_numeric_token7] = ACTIONS(69),
    [aux_sym_constant_numeric_token8] = ACTIONS(67),
    [aux_sym_constant_numeric_token9] = ACTIONS(67),
    [aux_sym_constant_numeric_token10] = ACTIONS(67),
    [aux_sym_constant_charstr_token1] = ACTIONS(69),
    [aux_sym_constant_charstr_token2] = ACTIONS(69),
    [aux_sym_constant_charstr_token3] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
    [aux_sym_word_token1] = ACTIONS(67),
  },
  [13] = {
    [aux_sym_register_token1] = ACTIONS(71),
    [aux_sym_register_token2] = ACTIONS(71),
    [aux_sym_register_token3] = ACTIONS(71),
    [aux_sym_register_token4] = ACTIONS(71),
    [aux_sym_register_token5] = ACTIONS(71),
    [aux_sym_register_token6] = ACTIONS(71),
    [aux_sym_register_token7] = ACTIONS(71),
    [aux_sym_register_token8] = ACTIONS(71),
    [aux_sym_register_token9] = ACTIONS(71),
    [aux_sym_register_token10] = ACTIONS(71),
    [aux_sym_register_token11] = ACTIONS(71),
    [aux_sym_register_token12] = ACTIONS(71),
    [aux_sym_register_token13] = ACTIONS(71),
    [aux_sym_register_token14] = ACTIONS(71),
    [aux_sym_register_token15] = ACTIONS(71),
    [aux_sym_register_token16] = ACTIONS(71),
    [aux_sym_register_token17] = ACTIONS(71),
    [aux_sym_register_token18] = ACTIONS(71),
    [aux_sym_register_token19] = ACTIONS(71),
    [aux_sym_register_token20] = ACTIONS(71),
    [aux_sym_register_token21] = ACTIONS(71),
    [aux_sym_register_token22] = ACTIONS(71),
    [aux_sym_register_token23] = ACTIONS(71),
    [aux_sym_register_token24] = ACTIONS(71),
    [aux_sym_register_token25] = ACTIONS(71),
    [aux_sym_register_token26] = ACTIONS(71),
    [aux_sym_register_token27] = ACTIONS(71),
    [aux_sym_register_token28] = ACTIONS(71),
    [aux_sym_register_token29] = ACTIONS(71),
    [aux_sym_register_token30] = ACTIONS(71),
    [aux_sym_register_token31] = ACTIONS(71),
    [aux_sym_register_token32] = ACTIONS(71),
    [aux_sym_register_token33] = ACTIONS(71),
    [aux_sym_register_token34] = ACTIONS(71),
    [aux_sym_register_token35] = ACTIONS(71),
    [aux_sym_register_token36] = ACTIONS(71),
    [aux_sym_register_token37] = ACTIONS(71),
    [aux_sym_register_token38] = ACTIONS(71),
    [aux_sym_register_token39] = ACTIONS(71),
    [aux_sym_register_token40] = ACTIONS(71),
    [aux_sym_register_token41] = ACTIONS(71),
    [aux_sym_register_token42] = ACTIONS(71),
    [aux_sym_register_token43] = ACTIONS(71),
    [aux_sym_register_token44] = ACTIONS(71),
    [aux_sym_register_token45] = ACTIONS(71),
    [aux_sym_register_token46] = ACTIONS(71),
    [aux_sym_register_token47] = ACTIONS(71),
    [aux_sym_register_token48] = ACTIONS(71),
    [aux_sym_register_token49] = ACTIONS(71),
    [aux_sym_register_token50] = ACTIONS(71),
    [aux_sym_register_token51] = ACTIONS(71),
    [aux_sym_register_token52] = ACTIONS(71),
    [aux_sym_register_token53] = ACTIONS(71),
    [aux_sym_register_token54] = ACTIONS(71),
    [aux_sym_register_token55] = ACTIONS(71),
    [aux_sym_register_token56] = ACTIONS(71),
    [aux_sym_register_token57] = ACTIONS(71),
    [aux_sym_register_token58] = ACTIONS(71),
    [aux_sym_register_token59] = ACTIONS(71),
    [aux_sym_register_token60] = ACTIONS(71),
    [aux_sym_register_token61] = ACTIONS(71),
    [aux_sym_register_token62] = ACTIONS(71),
    [aux_sym_register_token63] = ACTIONS(71),
    [aux_sym_register_token64] = ACTIONS(71),
    [aux_sym_register_token65] = ACTIONS(71),
    [aux_sym_register_token66] = ACTIONS(71),
    [aux_sym_register_token67] = ACTIONS(71),
    [aux_sym_register_token68] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_constant_numeric_token1] = ACTIONS(71),
    [aux_sym_constant_numeric_token2] = ACTIONS(71),
    [aux_sym_constant_numeric_token3] = ACTIONS(73),
    [aux_sym_constant_numeric_token4] = ACTIONS(71),
    [aux_sym_constant_numeric_token5] = ACTIONS(71),
    [aux_sym_constant_numeric_token6] = ACTIONS(71),
    [aux_sym_constant_numeric_token7] = ACTIONS(73),
    [aux_sym_constant_numeric_token8] = ACTIONS(71),
    [aux_sym_constant_numeric_token9] = ACTIONS(71),
    [aux_sym_constant_numeric_token10] = ACTIONS(71),
    [aux_sym_constant_charstr_token1] = ACTIONS(73),
    [aux_sym_constant_charstr_token2] = ACTIONS(73),
    [aux_sym_constant_charstr_token3] = ACTIONS(73),
    [sym_comment] = ACTIONS(3),
    [aux_sym_word_token1] = ACTIONS(71),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      aux_sym_source_file_token1,
    ACTIONS(89), 1,
      aux_sym_word_token1,
    STATE(3), 1,
      sym_word,
    STATE(16), 1,
      sym_label,
    STATE(21), 1,
      sym_instruction_prefix,
    STATE(45), 1,
      sym_instruction,
    STATE(14), 2,
      sym_source_line,
      aux_sym_source_file_repeat1,
    STATE(4), 3,
      sym_known_instruction,
      sym_pseudo_instruction,
      sym_unknown_instruction,
    ACTIONS(83), 5,
      aux_sym_known_instruction_token1,
      aux_sym_known_instruction_token2,
      aux_sym_known_instruction_token3,
      aux_sym_known_instruction_token4,
      aux_sym_known_instruction_token5,
    ACTIONS(86), 19,
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
    ACTIONS(80), 22,
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
  [86] = 13,
    ACTIONS(7), 1,
      aux_sym_source_file_token1,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_word_token1,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_word,
    STATE(16), 1,
      sym_label,
    STATE(21), 1,
      sym_instruction_prefix,
    STATE(45), 1,
      sym_instruction,
    STATE(14), 2,
      sym_source_line,
      aux_sym_source_file_repeat1,
    STATE(4), 3,
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
  [172] = 10,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(94), 1,
      aux_sym_source_file_token1,
    ACTIONS(96), 1,
      aux_sym_word_token1,
    STATE(10), 1,
      sym_word,
    STATE(21), 1,
      sym_instruction_prefix,
    STATE(44), 1,
      sym_instruction,
    STATE(4), 3,
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
  [248] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(98), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(100), 47,
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
  [305] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(102), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(104), 47,
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
  [362] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(108), 47,
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
  [419] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(110), 1,
      aux_sym_source_file_token1,
    ACTIONS(112), 47,
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
  [475] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      aux_sym_word_token1,
    STATE(10), 1,
      sym_word,
    STATE(5), 3,
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
  [518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 25,
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
  [549] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      aux_sym_word_token1,
    STATE(41), 1,
      sym_expression,
    STATE(46), 1,
      sym_word,
    ACTIONS(116), 6,
      aux_sym_operand_prefix_token1,
      aux_sym_operand_prefix_token2,
      aux_sym_operand_prefix_token3,
      aux_sym_effective_address_token1,
      aux_sym_effective_address_token2,
      aux_sym_effective_address_token3,
  [570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 8,
      aux_sym_operand_prefix_token1,
      aux_sym_operand_prefix_token2,
      aux_sym_operand_prefix_token3,
      aux_sym_operand_prefix_token4,
      aux_sym_operand_prefix_token5,
      aux_sym_operand_prefix_token6,
      aux_sym_operand_prefix_token7,
      aux_sym_operand_prefix_token8,
  [584] = 4,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(122), 1,
      aux_sym_source_file_token1,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    STATE(25), 1,
      aux_sym_operands_repeat1,
  [597] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      aux_sym_word_token1,
    STATE(40), 1,
      sym_expression,
    STATE(46), 1,
      sym_word,
  [610] = 4,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(129), 1,
      aux_sym_source_file_token1,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      aux_sym_operands_repeat1,
  [623] = 4,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(133), 1,
      aux_sym_source_file_token1,
    STATE(25), 1,
      aux_sym_operands_repeat1,
  [636] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(135), 1,
      aux_sym_source_file_token1,
    ACTIONS(137), 1,
      anon_sym_COMMA,
  [646] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(139), 1,
      aux_sym_source_file_token1,
    ACTIONS(141), 1,
      anon_sym_COMMA,
  [656] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(143), 1,
      aux_sym_source_file_token1,
    ACTIONS(145), 1,
      anon_sym_COMMA,
  [666] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(147), 1,
      aux_sym_source_file_token1,
    ACTIONS(149), 1,
      anon_sym_COMMA,
  [676] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(151), 1,
      aux_sym_source_file_token1,
    ACTIONS(153), 1,
      anon_sym_COMMA,
  [686] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(122), 1,
      aux_sym_source_file_token1,
    ACTIONS(155), 1,
      anon_sym_COMMA,
  [696] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(157), 1,
      aux_sym_source_file_token1,
    ACTIONS(159), 1,
      anon_sym_COMMA,
  [706] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(161), 1,
      aux_sym_source_file_token1,
    ACTIONS(163), 1,
      anon_sym_COMMA,
  [716] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(165), 1,
      aux_sym_source_file_token1,
    ACTIONS(167), 1,
      anon_sym_COMMA,
  [726] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(169), 1,
      aux_sym_source_file_token1,
    ACTIONS(171), 1,
      anon_sym_COMMA,
  [736] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(49), 1,
      aux_sym_source_file_token1,
  [743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_RBRACK,
  [750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_RBRACK,
  [757] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(177), 1,
      aux_sym_source_file_token1,
  [764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
  [771] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(181), 1,
      aux_sym_source_file_token1,
  [778] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(94), 1,
      aux_sym_source_file_token1,
  [785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_RBRACK,
  [792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(14)] = 0,
  [SMALL_STATE(15)] = 86,
  [SMALL_STATE(16)] = 172,
  [SMALL_STATE(17)] = 248,
  [SMALL_STATE(18)] = 305,
  [SMALL_STATE(19)] = 362,
  [SMALL_STATE(20)] = 419,
  [SMALL_STATE(21)] = 475,
  [SMALL_STATE(22)] = 518,
  [SMALL_STATE(23)] = 549,
  [SMALL_STATE(24)] = 570,
  [SMALL_STATE(25)] = 584,
  [SMALL_STATE(26)] = 597,
  [SMALL_STATE(27)] = 610,
  [SMALL_STATE(28)] = 623,
  [SMALL_STATE(29)] = 636,
  [SMALL_STATE(30)] = 646,
  [SMALL_STATE(31)] = 656,
  [SMALL_STATE(32)] = 666,
  [SMALL_STATE(33)] = 676,
  [SMALL_STATE(34)] = 686,
  [SMALL_STATE(35)] = 696,
  [SMALL_STATE(36)] = 706,
  [SMALL_STATE(37)] = 716,
  [SMALL_STATE(38)] = 726,
  [SMALL_STATE(39)] = 736,
  [SMALL_STATE(40)] = 743,
  [SMALL_STATE(41)] = 750,
  [SMALL_STATE(42)] = 757,
  [SMALL_STATE(43)] = 764,
  [SMALL_STATE(44)] = 771,
  [SMALL_STATE(45)] = 778,
  [SMALL_STATE(46)] = 785,
  [SMALL_STATE(47)] = 792,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_label, 1), REDUCE(sym_unknown_instruction, 1),
  [26] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unknown_instruction, 1),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_label, 1), REDUCE(sym_unknown_instruction, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_known_instruction, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_known_instruction, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_instruction, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_instruction, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unknown_instruction, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_prefix, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_prefix, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_prefix, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_prefix, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_line, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_source_line, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_line, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_source_line, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_line, 3),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_source_line, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_prefix, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2), SHIFT_REPEAT(6),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effective_address, 4),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_effective_address, 4),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_charstr, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant_charstr, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_numeric, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant_numeric, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effective_address, 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_effective_address, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3),
  [179] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
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
