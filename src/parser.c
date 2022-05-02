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
#define STATE_COUNT 49
#define LARGE_STATE_COUNT 13
#define SYMBOL_COUNT 140
#define ALIAS_COUNT 0
#define TOKEN_COUNT 121
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
  sym_constant_numeric = 108,
  aux_sym_constant_charstr_token1 = 109,
  aux_sym_constant_charstr_token2 = 110,
  aux_sym_constant_charstr_token3 = 111,
  sym_constant_floatpt = 112,
  aux_sym_known_instruction_token1 = 113,
  aux_sym_known_instruction_token2 = 114,
  aux_sym_known_instruction_token3 = 115,
  aux_sym_known_instruction_token4 = 116,
  aux_sym_known_instruction_token5 = 117,
  anon_sym_SEMI = 118,
  aux_sym_comment_token1 = 119,
  aux_sym_word_token1 = 120,
  sym_source_file = 121,
  sym_source_line = 122,
  sym_label = 123,
  sym_instruction = 124,
  sym_instruction_prefix = 125,
  sym_operands = 126,
  sym_operand = 127,
  sym_operand_prefix = 128,
  sym_register = 129,
  sym_effective_address = 130,
  sym_constant = 131,
  sym_constant_charstr = 132,
  sym_known_instruction = 133,
  sym_unknown_instruction = 134,
  sym_comment = 135,
  sym_word = 136,
  sym_expression = 137,
  aux_sym_source_file_repeat1 = 138,
  aux_sym_operands_repeat1 = 139,
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
  [sym_constant_numeric] = "constant_numeric",
  [aux_sym_constant_charstr_token1] = "constant_charstr_token1",
  [aux_sym_constant_charstr_token2] = "constant_charstr_token2",
  [aux_sym_constant_charstr_token3] = "constant_charstr_token3",
  [sym_constant_floatpt] = "constant_floatpt",
  [aux_sym_known_instruction_token1] = "known_instruction_token1",
  [aux_sym_known_instruction_token2] = "known_instruction_token2",
  [aux_sym_known_instruction_token3] = "known_instruction_token3",
  [aux_sym_known_instruction_token4] = "known_instruction_token4",
  [aux_sym_known_instruction_token5] = "known_instruction_token5",
  [anon_sym_SEMI] = ";",
  [aux_sym_comment_token1] = "comment_token1",
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
  [sym_constant_numeric] = sym_constant_numeric,
  [aux_sym_constant_charstr_token1] = aux_sym_constant_charstr_token1,
  [aux_sym_constant_charstr_token2] = aux_sym_constant_charstr_token2,
  [aux_sym_constant_charstr_token3] = aux_sym_constant_charstr_token3,
  [sym_constant_floatpt] = sym_constant_floatpt,
  [aux_sym_known_instruction_token1] = aux_sym_known_instruction_token1,
  [aux_sym_known_instruction_token2] = aux_sym_known_instruction_token2,
  [aux_sym_known_instruction_token3] = aux_sym_known_instruction_token3,
  [aux_sym_known_instruction_token4] = aux_sym_known_instruction_token4,
  [aux_sym_known_instruction_token5] = aux_sym_known_instruction_token5,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
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
  [aux_sym_known_instruction_token5] = {
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
      if (eof) ADVANCE(70);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == ',') ADVANCE(98);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == ';') ADVANCE(199);
      if (lookahead == 'S') ADVANCE(234);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '\\') SKIP(66)
      if (lookahead == ']') ADVANCE(188);
      if (lookahead == '`') ADVANCE(34);
      if (lookahead == 's') ADVANCE(221);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(204);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(261);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(264);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(266);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(224);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(313);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(314);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(283);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(289);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(286);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(287);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(210);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(327);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(207);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(328);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(288);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(226);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(329);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '?' ||
          ('H' <= lookahead && lookahead <= 'V') ||
          ('_' <= lookahead && lookahead <= 'v')) ADVANCE(336);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ',') ADVANCE(98);
      if (lookahead == ';') ADVANCE(199);
      if (lookahead == '\\') SKIP(3)
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(206);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(284);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(311);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(312);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(318);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(313);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(314);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(283);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(289);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(286);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(290);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(211);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(257);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(235);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(226);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '?' ||
          ('H' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(2)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(24)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '\r') SKIP(4)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(25)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '\r') SKIP(6)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(26)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\r') SKIP(8)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(27)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '\r') SKIP(10)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(30)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(30)
      if (lookahead == '\r') SKIP(12)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(31)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '\r') SKIP(14)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(32)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(32)
      if (lookahead == '\r') SKIP(16)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(33)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(33)
      if (lookahead == '\r') SKIP(18)
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(202);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == ';') ADVANCE(200);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(202);
      if (lookahead == '\r') ADVANCE(23);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(202);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '\r') ADVANCE(23);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(24);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == ',') ADVANCE(98);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == ';') ADVANCE(199);
      if (lookahead == 'S') ADVANCE(234);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '\\') SKIP(5)
      if (lookahead == '`') ADVANCE(34);
      if (lookahead == 's') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(24)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(205);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(261);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(264);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(266);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(224);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(313);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(314);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(283);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(289);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(286);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(290);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(210);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(327);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(208);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(328);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(288);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(226);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(329);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '?' ||
          ('H' <= lookahead && lookahead <= 'V') ||
          ('_' <= lookahead && lookahead <= 'v')) ADVANCE(336);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '\r') ADVANCE(25);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == ';') ADVANCE(199);
      if (lookahead == 'S') ADVANCE(269);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '\\') SKIP(7)
      if (lookahead == '`') ADVANCE(34);
      if (lookahead == 's') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(25)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(260);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(262);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(265);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(267);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(225);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(326);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(327);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(209);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(328);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(288);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(329);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '?' ||
          ('F' <= lookahead && lookahead <= 'X') ||
          ('_' <= lookahead && lookahead <= 'x')) ADVANCE(336);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == ';') ADVANCE(199);
      if (lookahead == 'S') ADVANCE(269);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '\\') SKIP(9)
      if (lookahead == '`') ADVANCE(34);
      if (lookahead == 's') ADVANCE(222);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(260);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(262);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(265);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(267);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(225);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(326);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(327);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(209);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(328);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(288);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(329);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '?' ||
          ('F' <= lookahead && lookahead <= 'X') ||
          ('_' <= lookahead && lookahead <= 'x')) ADVANCE(336);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == ';') ADVANCE(199);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '\\') SKIP(11)
      if (lookahead == '`') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(260);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(263);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(265);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(268);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(225);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(209);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '?' ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '\'') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == ';') ADVANCE(199);
      if (lookahead == '\\') SKIP(13)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(241);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(283);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(286);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 31:
      if (lookahead == ';') ADVANCE(199);
      if (lookahead == '\\') SKIP(15)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(233);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(335);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(325);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(291);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(258);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '?' ||
          ('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 32:
      if (lookahead == ';') ADVANCE(199);
      if (lookahead == '\\') SKIP(17)
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(64);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(58);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(59);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(60);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(61);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(43);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(62);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      END_STATE();
    case 33:
      if (lookahead == ';') ADVANCE(199);
      if (lookahead == '\\') SKIP(19)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 34:
      if (lookahead == '`') ADVANCE(192);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(102);
      END_STATE();
    case 36:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(104);
      END_STATE();
    case 37:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(110);
      END_STATE();
    case 38:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(106);
      END_STATE();
    case 39:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(108);
      END_STATE();
    case 40:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 41:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(114);
      END_STATE();
    case 42:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(100);
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
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(56);
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
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 57:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(42);
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
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(49);
      END_STATE();
    case 64:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(57);
      END_STATE();
    case 65:
      if (eof) ADVANCE(70);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 66:
      if (eof) ADVANCE(70);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(65)
      END_STATE();
    case 67:
      if (eof) ADVANCE(70);
      if (lookahead == '\n') SKIP(69)
      END_STATE();
    case 68:
      if (eof) ADVANCE(70);
      if (lookahead == '\n') SKIP(69)
      if (lookahead == '\r') SKIP(67)
      END_STATE();
    case 69:
      if (eof) ADVANCE(70);
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ',') ADVANCE(98);
      if (lookahead == ';') ADVANCE(199);
      if (lookahead == '\\') SKIP(68)
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(69)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(206);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(284);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(311);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(312);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(318);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(313);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(314);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(283);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(289);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(286);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(290);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(211);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(257);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(235);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(226);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '?' ||
          ('H' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(24);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '\r') ADVANCE(25);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token1);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(254);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(78);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token3);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token4);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token5);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token6);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token7);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token8);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token9);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token10);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token11);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token12);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token13);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token14);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token15);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token16);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token17);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token18);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token19);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token20);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(158);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(156);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token20);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token21);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token22);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_strict);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token1);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token1);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token2);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token2);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token3);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token3);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token4);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token4);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token5);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token5);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token6);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token6);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token7);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token7);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token8);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token8);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_register_token1);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_register_token2);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_register_token3);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_register_token4);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_register_token5);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_register_token6);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_register_token7);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_register_token8);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_register_token9);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_register_token10);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_register_token11);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_register_token12);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_register_token13);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_register_token14);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_register_token15);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_register_token16);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_register_token17);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_register_token18);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_register_token19);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_register_token20);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_register_token21);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_register_token22);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_register_token23);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_register_token24);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_register_token25);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(124);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_register_token26);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(125);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_register_token27);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(126);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_register_token28);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(127);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_register_token29);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_register_token30);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_register_token31);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_register_token32);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_register_token33);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_register_token34);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_register_token35);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_register_token36);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_register_token37);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_register_token38);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_register_token39);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_register_token40);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_register_token41);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_register_token42);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_register_token43);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_register_token44);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_register_token45);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_register_token46);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_register_token47);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_register_token48);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_register_token49);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_register_token50);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_register_token51);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_register_token52);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_register_token53);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_register_token54);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_register_token55);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_register_token56);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_register_token57);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_register_token58);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_register_token59);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_register_token60);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_register_token61);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(128);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(160);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(144);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_register_token62);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(129);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(161);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(145);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_register_token63);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(130);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(162);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(146);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_register_token64);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(131);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(163);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(147);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_register_token65);
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
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_register_token66);
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
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_register_token67);
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
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_register_token68);
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
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_effective_address_token1);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_effective_address_token2);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_effective_address_token3);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_constant_numeric);
      if (lookahead == '.') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_constant_charstr_token1);
      if (lookahead == '"') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(28);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_constant_charstr_token2);
      if (lookahead == '\'') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(29);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_constant_charstr_token3);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_constant_floatpt);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_known_instruction_token1);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_known_instruction_token2);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_known_instruction_token3);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_known_instruction_token4);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_known_instruction_token5);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '\r') ADVANCE(23);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(202);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == ';') ADVANCE(200);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '0') ADVANCE(178);
      if (lookahead == '1') ADVANCE(179);
      if (lookahead == '2') ADVANCE(180);
      if (lookahead == '3') ADVANCE(181);
      if (lookahead == '4') ADVANCE(182);
      if (lookahead == '5') ADVANCE(183);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('6' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '1') ADVANCE(216);
      if (lookahead == '3') ADVANCE(212);
      if (lookahead == '6') ADVANCE(214);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(315);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(242);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(117);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(116);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(136);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '1') ADVANCE(216);
      if (lookahead == '3') ADVANCE(212);
      if (lookahead == '6') ADVANCE(214);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(242);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(117);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(116);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(136);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '1') ADVANCE(216);
      if (lookahead == '3') ADVANCE(212);
      if (lookahead == '6') ADVANCE(214);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(242);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '1') ADVANCE(203);
      if (lookahead == '8') ADVANCE(176);
      if (lookahead == '9') ADVANCE(177);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(333);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(299);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(334);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(272);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(277);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(273);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '7') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '1') ADVANCE(203);
      if (lookahead == '8') ADVANCE(176);
      if (lookahead == '9') ADVANCE(177);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(333);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(299);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(334);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(272);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(300);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(273);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '7') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '1') ADVANCE(203);
      if (lookahead == '8') ADVANCE(176);
      if (lookahead == '9') ADVANCE(177);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(333);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(299);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(334);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(272);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(273);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '7') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '1') ADVANCE(217);
      if (lookahead == '3') ADVANCE(213);
      if (lookahead == '6') ADVANCE(215);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(293);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '1') ADVANCE(217);
      if (lookahead == '3') ADVANCE(213);
      if (lookahead == '6') ADVANCE(215);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '2') ADVANCE(86);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '2') ADVANCE(89);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '4') ADVANCE(87);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '4') ADVANCE(90);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '6') ADVANCE(85);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '6') ADVANCE(88);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'c') ADVANCE(223);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'i') ADVANCE(218);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'r') ADVANCE(219);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(220);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(228);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(142);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(140);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(93);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(319);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(220);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(142);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(140);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(99);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(331);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(298);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(332);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(270);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(94);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(331);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(298);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(332);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(270);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(271);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(239);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(252);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(282);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(317);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(320);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(198);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(285);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(301);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(285);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(315);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(228);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(142);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(140);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(93);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(319);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(228);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(93);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(319);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(228);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(319);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(196);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(276);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(302);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(227);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(242);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(195);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(83);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(103);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(105);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 246:
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
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 247:
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
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 248:
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
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 249:
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
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 250:
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
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 251:
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
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(101);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(80);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(81);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 256:
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
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(300);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 258:
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
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(229);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(117);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(116);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(136);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(123);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(122);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(243);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(141);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(139);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(322);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(123);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(122);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(141);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(139);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(322);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(123);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(122);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(141);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(139);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(119);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(118);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(91);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(137);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(119);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(118);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(137);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(121);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(143);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(120);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(92);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(292);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(138);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(121);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(143);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(120);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(292);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(138);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(121);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(143);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(120);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(138);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(142);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(140);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(159);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(154);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(158);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(156);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(175);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(170);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(174);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(172);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(321);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(305);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(75);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(186);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(76);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(186);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(274);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(197);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(259);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(280);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(237);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(243);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(246);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(324);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(231);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(303);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(238);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(232);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(316);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(304);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(306);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(307);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(308);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(309);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(310);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(157);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(155);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(173);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(171);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(76);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(279);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(323);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(244);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(245);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(255);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(247);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(248);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(249);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(250);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(251);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(91);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(92);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(96);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(97);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(187);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(301);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(230);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 318:
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
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(240);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(256);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(185);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(253);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(275);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(194);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(292);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(293);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(294);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(295);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(296);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(297);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(152);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(153);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(168);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(169);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(322);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(336);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 69},
  [2] = {.lex_state = 24},
  [3] = {.lex_state = 24},
  [4] = {.lex_state = 25},
  [5] = {.lex_state = 25},
  [6] = {.lex_state = 26},
  [7] = {.lex_state = 25},
  [8] = {.lex_state = 25},
  [9] = {.lex_state = 25},
  [10] = {.lex_state = 27},
  [11] = {.lex_state = 27},
  [12] = {.lex_state = 27},
  [13] = {.lex_state = 69},
  [14] = {.lex_state = 69},
  [15] = {.lex_state = 69},
  [16] = {.lex_state = 69},
  [17] = {.lex_state = 69},
  [18] = {.lex_state = 69},
  [19] = {.lex_state = 69},
  [20] = {.lex_state = 69},
  [21] = {.lex_state = 30},
  [22] = {.lex_state = 31},
  [23] = {.lex_state = 32},
  [24] = {.lex_state = 30},
  [25] = {.lex_state = 33},
  [26] = {.lex_state = 69},
  [27] = {.lex_state = 69},
  [28] = {.lex_state = 69},
  [29] = {.lex_state = 69},
  [30] = {.lex_state = 69},
  [31] = {.lex_state = 69},
  [32] = {.lex_state = 69},
  [33] = {.lex_state = 69},
  [34] = {.lex_state = 69},
  [35] = {.lex_state = 69},
  [36] = {.lex_state = 69},
  [37] = {.lex_state = 69},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 20},
  [40] = {.lex_state = 69},
  [41] = {.lex_state = 69},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 69},
  [44] = {.lex_state = 69},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
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
    [sym_constant_numeric] = ACTIONS(1),
    [aux_sym_constant_charstr_token1] = ACTIONS(1),
    [aux_sym_constant_charstr_token2] = ACTIONS(1),
    [aux_sym_constant_charstr_token3] = ACTIONS(1),
    [sym_constant_floatpt] = ACTIONS(1),
    [aux_sym_known_instruction_token1] = ACTIONS(1),
    [aux_sym_known_instruction_token2] = ACTIONS(1),
    [aux_sym_known_instruction_token3] = ACTIONS(1),
    [aux_sym_known_instruction_token4] = ACTIONS(1),
    [aux_sym_known_instruction_token5] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(3),
    [aux_sym_word_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(45),
    [sym_source_line] = STATE(16),
    [sym_label] = STATE(15),
    [sym_instruction] = STATE(40),
    [sym_instruction_prefix] = STATE(21),
    [sym_known_instruction] = STATE(4),
    [sym_unknown_instruction] = STATE(4),
    [sym_comment] = STATE(1),
    [sym_word] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(13),
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
    [anon_sym_SEMI] = ACTIONS(13),
    [aux_sym_word_token1] = ACTIONS(15),
  },
  [2] = {
    [sym_comment] = STATE(2),
    [aux_sym_source_file_token1] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [aux_sym_instruction_prefix_token1] = ACTIONS(19),
    [aux_sym_instruction_prefix_token2] = ACTIONS(19),
    [aux_sym_instruction_prefix_token3] = ACTIONS(19),
    [aux_sym_instruction_prefix_token4] = ACTIONS(19),
    [aux_sym_instruction_prefix_token5] = ACTIONS(19),
    [aux_sym_instruction_prefix_token6] = ACTIONS(19),
    [aux_sym_instruction_prefix_token7] = ACTIONS(19),
    [aux_sym_instruction_prefix_token8] = ACTIONS(19),
    [aux_sym_instruction_prefix_token9] = ACTIONS(19),
    [aux_sym_instruction_prefix_token10] = ACTIONS(19),
    [aux_sym_instruction_prefix_token11] = ACTIONS(19),
    [aux_sym_instruction_prefix_token12] = ACTIONS(19),
    [aux_sym_instruction_prefix_token13] = ACTIONS(19),
    [aux_sym_instruction_prefix_token14] = ACTIONS(19),
    [aux_sym_instruction_prefix_token15] = ACTIONS(19),
    [aux_sym_instruction_prefix_token16] = ACTIONS(19),
    [aux_sym_instruction_prefix_token17] = ACTIONS(19),
    [aux_sym_instruction_prefix_token18] = ACTIONS(19),
    [aux_sym_instruction_prefix_token19] = ACTIONS(19),
    [aux_sym_instruction_prefix_token20] = ACTIONS(19),
    [aux_sym_instruction_prefix_token21] = ACTIONS(19),
    [aux_sym_instruction_prefix_token22] = ACTIONS(19),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_strict] = ACTIONS(19),
    [aux_sym_operand_prefix_token1] = ACTIONS(19),
    [aux_sym_operand_prefix_token2] = ACTIONS(19),
    [aux_sym_operand_prefix_token3] = ACTIONS(19),
    [aux_sym_operand_prefix_token4] = ACTIONS(19),
    [aux_sym_operand_prefix_token5] = ACTIONS(19),
    [aux_sym_operand_prefix_token6] = ACTIONS(19),
    [aux_sym_operand_prefix_token7] = ACTIONS(19),
    [aux_sym_operand_prefix_token8] = ACTIONS(19),
    [aux_sym_register_token1] = ACTIONS(19),
    [aux_sym_register_token2] = ACTIONS(19),
    [aux_sym_register_token3] = ACTIONS(19),
    [aux_sym_register_token4] = ACTIONS(19),
    [aux_sym_register_token5] = ACTIONS(19),
    [aux_sym_register_token6] = ACTIONS(19),
    [aux_sym_register_token7] = ACTIONS(19),
    [aux_sym_register_token8] = ACTIONS(19),
    [aux_sym_register_token9] = ACTIONS(19),
    [aux_sym_register_token10] = ACTIONS(19),
    [aux_sym_register_token11] = ACTIONS(19),
    [aux_sym_register_token12] = ACTIONS(19),
    [aux_sym_register_token13] = ACTIONS(19),
    [aux_sym_register_token14] = ACTIONS(19),
    [aux_sym_register_token15] = ACTIONS(19),
    [aux_sym_register_token16] = ACTIONS(19),
    [aux_sym_register_token17] = ACTIONS(19),
    [aux_sym_register_token18] = ACTIONS(19),
    [aux_sym_register_token19] = ACTIONS(19),
    [aux_sym_register_token20] = ACTIONS(19),
    [aux_sym_register_token21] = ACTIONS(19),
    [aux_sym_register_token22] = ACTIONS(19),
    [aux_sym_register_token23] = ACTIONS(19),
    [aux_sym_register_token24] = ACTIONS(19),
    [aux_sym_register_token25] = ACTIONS(19),
    [aux_sym_register_token26] = ACTIONS(19),
    [aux_sym_register_token27] = ACTIONS(19),
    [aux_sym_register_token28] = ACTIONS(19),
    [aux_sym_register_token29] = ACTIONS(19),
    [aux_sym_register_token30] = ACTIONS(19),
    [aux_sym_register_token31] = ACTIONS(19),
    [aux_sym_register_token32] = ACTIONS(19),
    [aux_sym_register_token33] = ACTIONS(19),
    [aux_sym_register_token34] = ACTIONS(19),
    [aux_sym_register_token35] = ACTIONS(19),
    [aux_sym_register_token36] = ACTIONS(19),
    [aux_sym_register_token37] = ACTIONS(19),
    [aux_sym_register_token38] = ACTIONS(19),
    [aux_sym_register_token39] = ACTIONS(19),
    [aux_sym_register_token40] = ACTIONS(19),
    [aux_sym_register_token41] = ACTIONS(19),
    [aux_sym_register_token42] = ACTIONS(19),
    [aux_sym_register_token43] = ACTIONS(19),
    [aux_sym_register_token44] = ACTIONS(19),
    [aux_sym_register_token45] = ACTIONS(19),
    [aux_sym_register_token46] = ACTIONS(19),
    [aux_sym_register_token47] = ACTIONS(19),
    [aux_sym_register_token48] = ACTIONS(19),
    [aux_sym_register_token49] = ACTIONS(19),
    [aux_sym_register_token50] = ACTIONS(19),
    [aux_sym_register_token51] = ACTIONS(19),
    [aux_sym_register_token52] = ACTIONS(19),
    [aux_sym_register_token53] = ACTIONS(19),
    [aux_sym_register_token54] = ACTIONS(19),
    [aux_sym_register_token55] = ACTIONS(19),
    [aux_sym_register_token56] = ACTIONS(19),
    [aux_sym_register_token57] = ACTIONS(19),
    [aux_sym_register_token58] = ACTIONS(19),
    [aux_sym_register_token59] = ACTIONS(19),
    [aux_sym_register_token60] = ACTIONS(19),
    [aux_sym_register_token61] = ACTIONS(19),
    [aux_sym_register_token62] = ACTIONS(19),
    [aux_sym_register_token63] = ACTIONS(19),
    [aux_sym_register_token64] = ACTIONS(19),
    [aux_sym_register_token65] = ACTIONS(19),
    [aux_sym_register_token66] = ACTIONS(19),
    [aux_sym_register_token67] = ACTIONS(19),
    [aux_sym_register_token68] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(19),
    [sym_constant_numeric] = ACTIONS(19),
    [aux_sym_constant_charstr_token1] = ACTIONS(19),
    [aux_sym_constant_charstr_token2] = ACTIONS(19),
    [aux_sym_constant_charstr_token3] = ACTIONS(19),
    [sym_constant_floatpt] = ACTIONS(19),
    [aux_sym_known_instruction_token1] = ACTIONS(19),
    [aux_sym_known_instruction_token2] = ACTIONS(19),
    [aux_sym_known_instruction_token3] = ACTIONS(19),
    [aux_sym_known_instruction_token4] = ACTIONS(19),
    [aux_sym_known_instruction_token5] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(13),
    [aux_sym_word_token1] = ACTIONS(19),
  },
  [3] = {
    [sym_comment] = STATE(3),
    [aux_sym_source_file_token1] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(24),
    [aux_sym_instruction_prefix_token1] = ACTIONS(26),
    [aux_sym_instruction_prefix_token2] = ACTIONS(26),
    [aux_sym_instruction_prefix_token3] = ACTIONS(26),
    [aux_sym_instruction_prefix_token4] = ACTIONS(26),
    [aux_sym_instruction_prefix_token5] = ACTIONS(26),
    [aux_sym_instruction_prefix_token6] = ACTIONS(26),
    [aux_sym_instruction_prefix_token7] = ACTIONS(26),
    [aux_sym_instruction_prefix_token8] = ACTIONS(26),
    [aux_sym_instruction_prefix_token9] = ACTIONS(26),
    [aux_sym_instruction_prefix_token10] = ACTIONS(26),
    [aux_sym_instruction_prefix_token11] = ACTIONS(26),
    [aux_sym_instruction_prefix_token12] = ACTIONS(26),
    [aux_sym_instruction_prefix_token13] = ACTIONS(26),
    [aux_sym_instruction_prefix_token14] = ACTIONS(26),
    [aux_sym_instruction_prefix_token15] = ACTIONS(26),
    [aux_sym_instruction_prefix_token16] = ACTIONS(26),
    [aux_sym_instruction_prefix_token17] = ACTIONS(26),
    [aux_sym_instruction_prefix_token18] = ACTIONS(26),
    [aux_sym_instruction_prefix_token19] = ACTIONS(26),
    [aux_sym_instruction_prefix_token20] = ACTIONS(26),
    [aux_sym_instruction_prefix_token21] = ACTIONS(26),
    [aux_sym_instruction_prefix_token22] = ACTIONS(26),
    [anon_sym_strict] = ACTIONS(28),
    [aux_sym_operand_prefix_token1] = ACTIONS(28),
    [aux_sym_operand_prefix_token2] = ACTIONS(28),
    [aux_sym_operand_prefix_token3] = ACTIONS(28),
    [aux_sym_operand_prefix_token4] = ACTIONS(28),
    [aux_sym_operand_prefix_token5] = ACTIONS(28),
    [aux_sym_operand_prefix_token6] = ACTIONS(28),
    [aux_sym_operand_prefix_token7] = ACTIONS(28),
    [aux_sym_operand_prefix_token8] = ACTIONS(28),
    [aux_sym_register_token1] = ACTIONS(28),
    [aux_sym_register_token2] = ACTIONS(28),
    [aux_sym_register_token3] = ACTIONS(28),
    [aux_sym_register_token4] = ACTIONS(28),
    [aux_sym_register_token5] = ACTIONS(28),
    [aux_sym_register_token6] = ACTIONS(28),
    [aux_sym_register_token7] = ACTIONS(28),
    [aux_sym_register_token8] = ACTIONS(28),
    [aux_sym_register_token9] = ACTIONS(28),
    [aux_sym_register_token10] = ACTIONS(28),
    [aux_sym_register_token11] = ACTIONS(28),
    [aux_sym_register_token12] = ACTIONS(28),
    [aux_sym_register_token13] = ACTIONS(28),
    [aux_sym_register_token14] = ACTIONS(28),
    [aux_sym_register_token15] = ACTIONS(28),
    [aux_sym_register_token16] = ACTIONS(28),
    [aux_sym_register_token17] = ACTIONS(28),
    [aux_sym_register_token18] = ACTIONS(28),
    [aux_sym_register_token19] = ACTIONS(28),
    [aux_sym_register_token20] = ACTIONS(28),
    [aux_sym_register_token21] = ACTIONS(28),
    [aux_sym_register_token22] = ACTIONS(28),
    [aux_sym_register_token23] = ACTIONS(28),
    [aux_sym_register_token24] = ACTIONS(28),
    [aux_sym_register_token25] = ACTIONS(28),
    [aux_sym_register_token26] = ACTIONS(28),
    [aux_sym_register_token27] = ACTIONS(28),
    [aux_sym_register_token28] = ACTIONS(28),
    [aux_sym_register_token29] = ACTIONS(28),
    [aux_sym_register_token30] = ACTIONS(28),
    [aux_sym_register_token31] = ACTIONS(28),
    [aux_sym_register_token32] = ACTIONS(28),
    [aux_sym_register_token33] = ACTIONS(28),
    [aux_sym_register_token34] = ACTIONS(28),
    [aux_sym_register_token35] = ACTIONS(28),
    [aux_sym_register_token36] = ACTIONS(28),
    [aux_sym_register_token37] = ACTIONS(28),
    [aux_sym_register_token38] = ACTIONS(28),
    [aux_sym_register_token39] = ACTIONS(28),
    [aux_sym_register_token40] = ACTIONS(28),
    [aux_sym_register_token41] = ACTIONS(28),
    [aux_sym_register_token42] = ACTIONS(28),
    [aux_sym_register_token43] = ACTIONS(28),
    [aux_sym_register_token44] = ACTIONS(28),
    [aux_sym_register_token45] = ACTIONS(28),
    [aux_sym_register_token46] = ACTIONS(28),
    [aux_sym_register_token47] = ACTIONS(28),
    [aux_sym_register_token48] = ACTIONS(28),
    [aux_sym_register_token49] = ACTIONS(28),
    [aux_sym_register_token50] = ACTIONS(28),
    [aux_sym_register_token51] = ACTIONS(28),
    [aux_sym_register_token52] = ACTIONS(28),
    [aux_sym_register_token53] = ACTIONS(28),
    [aux_sym_register_token54] = ACTIONS(28),
    [aux_sym_register_token55] = ACTIONS(28),
    [aux_sym_register_token56] = ACTIONS(28),
    [aux_sym_register_token57] = ACTIONS(28),
    [aux_sym_register_token58] = ACTIONS(28),
    [aux_sym_register_token59] = ACTIONS(28),
    [aux_sym_register_token60] = ACTIONS(28),
    [aux_sym_register_token61] = ACTIONS(28),
    [aux_sym_register_token62] = ACTIONS(28),
    [aux_sym_register_token63] = ACTIONS(28),
    [aux_sym_register_token64] = ACTIONS(28),
    [aux_sym_register_token65] = ACTIONS(28),
    [aux_sym_register_token66] = ACTIONS(28),
    [aux_sym_register_token67] = ACTIONS(28),
    [aux_sym_register_token68] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(28),
    [sym_constant_numeric] = ACTIONS(28),
    [aux_sym_constant_charstr_token1] = ACTIONS(28),
    [aux_sym_constant_charstr_token2] = ACTIONS(28),
    [aux_sym_constant_charstr_token3] = ACTIONS(28),
    [sym_constant_floatpt] = ACTIONS(28),
    [aux_sym_known_instruction_token1] = ACTIONS(26),
    [aux_sym_known_instruction_token2] = ACTIONS(26),
    [aux_sym_known_instruction_token3] = ACTIONS(26),
    [aux_sym_known_instruction_token4] = ACTIONS(26),
    [aux_sym_known_instruction_token5] = ACTIONS(26),
    [anon_sym_SEMI] = ACTIONS(13),
    [aux_sym_word_token1] = ACTIONS(30),
  },
  [4] = {
    [sym_operands] = STATE(41),
    [sym_operand] = STATE(27),
    [sym_operand_prefix] = STATE(10),
    [sym_register] = STATE(30),
    [sym_effective_address] = STATE(30),
    [sym_constant] = STATE(30),
    [sym_constant_charstr] = STATE(29),
    [sym_comment] = STATE(4),
    [sym_word] = STATE(31),
    [sym_expression] = STATE(30),
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
    [sym_constant_numeric] = ACTIONS(43),
    [aux_sym_constant_charstr_token1] = ACTIONS(45),
    [aux_sym_constant_charstr_token2] = ACTIONS(45),
    [aux_sym_constant_charstr_token3] = ACTIONS(45),
    [sym_constant_floatpt] = ACTIONS(43),
    [anon_sym_SEMI] = ACTIONS(13),
    [aux_sym_word_token1] = ACTIONS(15),
  },
  [5] = {
    [sym_operands] = STATE(44),
    [sym_operand] = STATE(27),
    [sym_operand_prefix] = STATE(10),
    [sym_register] = STATE(30),
    [sym_effective_address] = STATE(30),
    [sym_constant] = STATE(30),
    [sym_constant_charstr] = STATE(29),
    [sym_comment] = STATE(5),
    [sym_word] = STATE(31),
    [sym_expression] = STATE(30),
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
    [sym_constant_numeric] = ACTIONS(43),
    [aux_sym_constant_charstr_token1] = ACTIONS(45),
    [aux_sym_constant_charstr_token2] = ACTIONS(45),
    [aux_sym_constant_charstr_token3] = ACTIONS(45),
    [sym_constant_floatpt] = ACTIONS(43),
    [anon_sym_SEMI] = ACTIONS(13),
    [aux_sym_word_token1] = ACTIONS(15),
  },
  [6] = {
    [sym_operand] = STATE(35),
    [sym_operand_prefix] = STATE(10),
    [sym_register] = STATE(30),
    [sym_effective_address] = STATE(30),
    [sym_constant] = STATE(30),
    [sym_constant_charstr] = STATE(29),
    [sym_comment] = STATE(6),
    [sym_word] = STATE(31),
    [sym_expression] = STATE(30),
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
    [anon_sym_LBRACK] = ACTIONS(49),
    [sym_constant_numeric] = ACTIONS(43),
    [aux_sym_constant_charstr_token1] = ACTIONS(51),
    [aux_sym_constant_charstr_token2] = ACTIONS(51),
    [aux_sym_constant_charstr_token3] = ACTIONS(51),
    [sym_constant_floatpt] = ACTIONS(53),
    [anon_sym_SEMI] = ACTIONS(3),
    [aux_sym_word_token1] = ACTIONS(15),
  },
  [7] = {
    [sym_comment] = STATE(7),
    [aux_sym_source_file_token1] = ACTIONS(55),
    [anon_sym_strict] = ACTIONS(57),
    [aux_sym_operand_prefix_token1] = ACTIONS(57),
    [aux_sym_operand_prefix_token2] = ACTIONS(57),
    [aux_sym_operand_prefix_token3] = ACTIONS(57),
    [aux_sym_operand_prefix_token4] = ACTIONS(57),
    [aux_sym_operand_prefix_token5] = ACTIONS(57),
    [aux_sym_operand_prefix_token6] = ACTIONS(57),
    [aux_sym_operand_prefix_token7] = ACTIONS(57),
    [aux_sym_operand_prefix_token8] = ACTIONS(57),
    [aux_sym_register_token1] = ACTIONS(57),
    [aux_sym_register_token2] = ACTIONS(57),
    [aux_sym_register_token3] = ACTIONS(57),
    [aux_sym_register_token4] = ACTIONS(57),
    [aux_sym_register_token5] = ACTIONS(57),
    [aux_sym_register_token6] = ACTIONS(57),
    [aux_sym_register_token7] = ACTIONS(57),
    [aux_sym_register_token8] = ACTIONS(57),
    [aux_sym_register_token9] = ACTIONS(57),
    [aux_sym_register_token10] = ACTIONS(57),
    [aux_sym_register_token11] = ACTIONS(57),
    [aux_sym_register_token12] = ACTIONS(57),
    [aux_sym_register_token13] = ACTIONS(57),
    [aux_sym_register_token14] = ACTIONS(57),
    [aux_sym_register_token15] = ACTIONS(57),
    [aux_sym_register_token16] = ACTIONS(57),
    [aux_sym_register_token17] = ACTIONS(57),
    [aux_sym_register_token18] = ACTIONS(57),
    [aux_sym_register_token19] = ACTIONS(57),
    [aux_sym_register_token20] = ACTIONS(57),
    [aux_sym_register_token21] = ACTIONS(57),
    [aux_sym_register_token22] = ACTIONS(57),
    [aux_sym_register_token23] = ACTIONS(57),
    [aux_sym_register_token24] = ACTIONS(57),
    [aux_sym_register_token25] = ACTIONS(57),
    [aux_sym_register_token26] = ACTIONS(57),
    [aux_sym_register_token27] = ACTIONS(57),
    [aux_sym_register_token28] = ACTIONS(57),
    [aux_sym_register_token29] = ACTIONS(57),
    [aux_sym_register_token30] = ACTIONS(57),
    [aux_sym_register_token31] = ACTIONS(57),
    [aux_sym_register_token32] = ACTIONS(57),
    [aux_sym_register_token33] = ACTIONS(57),
    [aux_sym_register_token34] = ACTIONS(57),
    [aux_sym_register_token35] = ACTIONS(57),
    [aux_sym_register_token36] = ACTIONS(57),
    [aux_sym_register_token37] = ACTIONS(57),
    [aux_sym_register_token38] = ACTIONS(57),
    [aux_sym_register_token39] = ACTIONS(57),
    [aux_sym_register_token40] = ACTIONS(57),
    [aux_sym_register_token41] = ACTIONS(57),
    [aux_sym_register_token42] = ACTIONS(57),
    [aux_sym_register_token43] = ACTIONS(57),
    [aux_sym_register_token44] = ACTIONS(57),
    [aux_sym_register_token45] = ACTIONS(57),
    [aux_sym_register_token46] = ACTIONS(57),
    [aux_sym_register_token47] = ACTIONS(57),
    [aux_sym_register_token48] = ACTIONS(57),
    [aux_sym_register_token49] = ACTIONS(57),
    [aux_sym_register_token50] = ACTIONS(57),
    [aux_sym_register_token51] = ACTIONS(57),
    [aux_sym_register_token52] = ACTIONS(57),
    [aux_sym_register_token53] = ACTIONS(57),
    [aux_sym_register_token54] = ACTIONS(57),
    [aux_sym_register_token55] = ACTIONS(57),
    [aux_sym_register_token56] = ACTIONS(57),
    [aux_sym_register_token57] = ACTIONS(57),
    [aux_sym_register_token58] = ACTIONS(57),
    [aux_sym_register_token59] = ACTIONS(57),
    [aux_sym_register_token60] = ACTIONS(57),
    [aux_sym_register_token61] = ACTIONS(57),
    [aux_sym_register_token62] = ACTIONS(57),
    [aux_sym_register_token63] = ACTIONS(57),
    [aux_sym_register_token64] = ACTIONS(57),
    [aux_sym_register_token65] = ACTIONS(57),
    [aux_sym_register_token66] = ACTIONS(57),
    [aux_sym_register_token67] = ACTIONS(57),
    [aux_sym_register_token68] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(57),
    [sym_constant_numeric] = ACTIONS(57),
    [aux_sym_constant_charstr_token1] = ACTIONS(57),
    [aux_sym_constant_charstr_token2] = ACTIONS(57),
    [aux_sym_constant_charstr_token3] = ACTIONS(57),
    [sym_constant_floatpt] = ACTIONS(57),
    [anon_sym_SEMI] = ACTIONS(13),
    [aux_sym_word_token1] = ACTIONS(57),
  },
  [8] = {
    [sym_comment] = STATE(8),
    [aux_sym_source_file_token1] = ACTIONS(17),
    [anon_sym_strict] = ACTIONS(19),
    [aux_sym_operand_prefix_token1] = ACTIONS(19),
    [aux_sym_operand_prefix_token2] = ACTIONS(19),
    [aux_sym_operand_prefix_token3] = ACTIONS(19),
    [aux_sym_operand_prefix_token4] = ACTIONS(19),
    [aux_sym_operand_prefix_token5] = ACTIONS(19),
    [aux_sym_operand_prefix_token6] = ACTIONS(19),
    [aux_sym_operand_prefix_token7] = ACTIONS(19),
    [aux_sym_operand_prefix_token8] = ACTIONS(19),
    [aux_sym_register_token1] = ACTIONS(19),
    [aux_sym_register_token2] = ACTIONS(19),
    [aux_sym_register_token3] = ACTIONS(19),
    [aux_sym_register_token4] = ACTIONS(19),
    [aux_sym_register_token5] = ACTIONS(19),
    [aux_sym_register_token6] = ACTIONS(19),
    [aux_sym_register_token7] = ACTIONS(19),
    [aux_sym_register_token8] = ACTIONS(19),
    [aux_sym_register_token9] = ACTIONS(19),
    [aux_sym_register_token10] = ACTIONS(19),
    [aux_sym_register_token11] = ACTIONS(19),
    [aux_sym_register_token12] = ACTIONS(19),
    [aux_sym_register_token13] = ACTIONS(19),
    [aux_sym_register_token14] = ACTIONS(19),
    [aux_sym_register_token15] = ACTIONS(19),
    [aux_sym_register_token16] = ACTIONS(19),
    [aux_sym_register_token17] = ACTIONS(19),
    [aux_sym_register_token18] = ACTIONS(19),
    [aux_sym_register_token19] = ACTIONS(19),
    [aux_sym_register_token20] = ACTIONS(19),
    [aux_sym_register_token21] = ACTIONS(19),
    [aux_sym_register_token22] = ACTIONS(19),
    [aux_sym_register_token23] = ACTIONS(19),
    [aux_sym_register_token24] = ACTIONS(19),
    [aux_sym_register_token25] = ACTIONS(19),
    [aux_sym_register_token26] = ACTIONS(19),
    [aux_sym_register_token27] = ACTIONS(19),
    [aux_sym_register_token28] = ACTIONS(19),
    [aux_sym_register_token29] = ACTIONS(19),
    [aux_sym_register_token30] = ACTIONS(19),
    [aux_sym_register_token31] = ACTIONS(19),
    [aux_sym_register_token32] = ACTIONS(19),
    [aux_sym_register_token33] = ACTIONS(19),
    [aux_sym_register_token34] = ACTIONS(19),
    [aux_sym_register_token35] = ACTIONS(19),
    [aux_sym_register_token36] = ACTIONS(19),
    [aux_sym_register_token37] = ACTIONS(19),
    [aux_sym_register_token38] = ACTIONS(19),
    [aux_sym_register_token39] = ACTIONS(19),
    [aux_sym_register_token40] = ACTIONS(19),
    [aux_sym_register_token41] = ACTIONS(19),
    [aux_sym_register_token42] = ACTIONS(19),
    [aux_sym_register_token43] = ACTIONS(19),
    [aux_sym_register_token44] = ACTIONS(19),
    [aux_sym_register_token45] = ACTIONS(19),
    [aux_sym_register_token46] = ACTIONS(19),
    [aux_sym_register_token47] = ACTIONS(19),
    [aux_sym_register_token48] = ACTIONS(19),
    [aux_sym_register_token49] = ACTIONS(19),
    [aux_sym_register_token50] = ACTIONS(19),
    [aux_sym_register_token51] = ACTIONS(19),
    [aux_sym_register_token52] = ACTIONS(19),
    [aux_sym_register_token53] = ACTIONS(19),
    [aux_sym_register_token54] = ACTIONS(19),
    [aux_sym_register_token55] = ACTIONS(19),
    [aux_sym_register_token56] = ACTIONS(19),
    [aux_sym_register_token57] = ACTIONS(19),
    [aux_sym_register_token58] = ACTIONS(19),
    [aux_sym_register_token59] = ACTIONS(19),
    [aux_sym_register_token60] = ACTIONS(19),
    [aux_sym_register_token61] = ACTIONS(19),
    [aux_sym_register_token62] = ACTIONS(19),
    [aux_sym_register_token63] = ACTIONS(19),
    [aux_sym_register_token64] = ACTIONS(19),
    [aux_sym_register_token65] = ACTIONS(19),
    [aux_sym_register_token66] = ACTIONS(19),
    [aux_sym_register_token67] = ACTIONS(19),
    [aux_sym_register_token68] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(19),
    [sym_constant_numeric] = ACTIONS(19),
    [aux_sym_constant_charstr_token1] = ACTIONS(19),
    [aux_sym_constant_charstr_token2] = ACTIONS(19),
    [aux_sym_constant_charstr_token3] = ACTIONS(19),
    [sym_constant_floatpt] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(13),
    [aux_sym_word_token1] = ACTIONS(19),
  },
  [9] = {
    [sym_comment] = STATE(9),
    [aux_sym_source_file_token1] = ACTIONS(59),
    [anon_sym_strict] = ACTIONS(28),
    [aux_sym_operand_prefix_token1] = ACTIONS(28),
    [aux_sym_operand_prefix_token2] = ACTIONS(28),
    [aux_sym_operand_prefix_token3] = ACTIONS(28),
    [aux_sym_operand_prefix_token4] = ACTIONS(28),
    [aux_sym_operand_prefix_token5] = ACTIONS(28),
    [aux_sym_operand_prefix_token6] = ACTIONS(28),
    [aux_sym_operand_prefix_token7] = ACTIONS(28),
    [aux_sym_operand_prefix_token8] = ACTIONS(28),
    [aux_sym_register_token1] = ACTIONS(28),
    [aux_sym_register_token2] = ACTIONS(28),
    [aux_sym_register_token3] = ACTIONS(28),
    [aux_sym_register_token4] = ACTIONS(28),
    [aux_sym_register_token5] = ACTIONS(28),
    [aux_sym_register_token6] = ACTIONS(28),
    [aux_sym_register_token7] = ACTIONS(28),
    [aux_sym_register_token8] = ACTIONS(28),
    [aux_sym_register_token9] = ACTIONS(28),
    [aux_sym_register_token10] = ACTIONS(28),
    [aux_sym_register_token11] = ACTIONS(28),
    [aux_sym_register_token12] = ACTIONS(28),
    [aux_sym_register_token13] = ACTIONS(28),
    [aux_sym_register_token14] = ACTIONS(28),
    [aux_sym_register_token15] = ACTIONS(28),
    [aux_sym_register_token16] = ACTIONS(28),
    [aux_sym_register_token17] = ACTIONS(28),
    [aux_sym_register_token18] = ACTIONS(28),
    [aux_sym_register_token19] = ACTIONS(28),
    [aux_sym_register_token20] = ACTIONS(28),
    [aux_sym_register_token21] = ACTIONS(28),
    [aux_sym_register_token22] = ACTIONS(28),
    [aux_sym_register_token23] = ACTIONS(28),
    [aux_sym_register_token24] = ACTIONS(28),
    [aux_sym_register_token25] = ACTIONS(28),
    [aux_sym_register_token26] = ACTIONS(28),
    [aux_sym_register_token27] = ACTIONS(28),
    [aux_sym_register_token28] = ACTIONS(28),
    [aux_sym_register_token29] = ACTIONS(28),
    [aux_sym_register_token30] = ACTIONS(28),
    [aux_sym_register_token31] = ACTIONS(28),
    [aux_sym_register_token32] = ACTIONS(28),
    [aux_sym_register_token33] = ACTIONS(28),
    [aux_sym_register_token34] = ACTIONS(28),
    [aux_sym_register_token35] = ACTIONS(28),
    [aux_sym_register_token36] = ACTIONS(28),
    [aux_sym_register_token37] = ACTIONS(28),
    [aux_sym_register_token38] = ACTIONS(28),
    [aux_sym_register_token39] = ACTIONS(28),
    [aux_sym_register_token40] = ACTIONS(28),
    [aux_sym_register_token41] = ACTIONS(28),
    [aux_sym_register_token42] = ACTIONS(28),
    [aux_sym_register_token43] = ACTIONS(28),
    [aux_sym_register_token44] = ACTIONS(28),
    [aux_sym_register_token45] = ACTIONS(28),
    [aux_sym_register_token46] = ACTIONS(28),
    [aux_sym_register_token47] = ACTIONS(28),
    [aux_sym_register_token48] = ACTIONS(28),
    [aux_sym_register_token49] = ACTIONS(28),
    [aux_sym_register_token50] = ACTIONS(28),
    [aux_sym_register_token51] = ACTIONS(28),
    [aux_sym_register_token52] = ACTIONS(28),
    [aux_sym_register_token53] = ACTIONS(28),
    [aux_sym_register_token54] = ACTIONS(28),
    [aux_sym_register_token55] = ACTIONS(28),
    [aux_sym_register_token56] = ACTIONS(28),
    [aux_sym_register_token57] = ACTIONS(28),
    [aux_sym_register_token58] = ACTIONS(28),
    [aux_sym_register_token59] = ACTIONS(28),
    [aux_sym_register_token60] = ACTIONS(28),
    [aux_sym_register_token61] = ACTIONS(28),
    [aux_sym_register_token62] = ACTIONS(28),
    [aux_sym_register_token63] = ACTIONS(28),
    [aux_sym_register_token64] = ACTIONS(28),
    [aux_sym_register_token65] = ACTIONS(28),
    [aux_sym_register_token66] = ACTIONS(28),
    [aux_sym_register_token67] = ACTIONS(28),
    [aux_sym_register_token68] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(28),
    [sym_constant_numeric] = ACTIONS(28),
    [aux_sym_constant_charstr_token1] = ACTIONS(28),
    [aux_sym_constant_charstr_token2] = ACTIONS(28),
    [aux_sym_constant_charstr_token3] = ACTIONS(28),
    [sym_constant_floatpt] = ACTIONS(28),
    [anon_sym_SEMI] = ACTIONS(13),
    [aux_sym_word_token1] = ACTIONS(28),
  },
  [10] = {
    [sym_register] = STATE(37),
    [sym_effective_address] = STATE(37),
    [sym_constant] = STATE(37),
    [sym_constant_charstr] = STATE(29),
    [sym_comment] = STATE(10),
    [sym_word] = STATE(31),
    [sym_expression] = STATE(37),
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
    [anon_sym_LBRACK] = ACTIONS(49),
    [sym_constant_numeric] = ACTIONS(43),
    [aux_sym_constant_charstr_token1] = ACTIONS(51),
    [aux_sym_constant_charstr_token2] = ACTIONS(51),
    [aux_sym_constant_charstr_token3] = ACTIONS(51),
    [sym_constant_floatpt] = ACTIONS(53),
    [anon_sym_SEMI] = ACTIONS(3),
    [aux_sym_word_token1] = ACTIONS(15),
  },
  [11] = {
    [sym_comment] = STATE(11),
    [aux_sym_register_token1] = ACTIONS(61),
    [aux_sym_register_token2] = ACTIONS(61),
    [aux_sym_register_token3] = ACTIONS(61),
    [aux_sym_register_token4] = ACTIONS(61),
    [aux_sym_register_token5] = ACTIONS(61),
    [aux_sym_register_token6] = ACTIONS(61),
    [aux_sym_register_token7] = ACTIONS(61),
    [aux_sym_register_token8] = ACTIONS(61),
    [aux_sym_register_token9] = ACTIONS(61),
    [aux_sym_register_token10] = ACTIONS(61),
    [aux_sym_register_token11] = ACTIONS(61),
    [aux_sym_register_token12] = ACTIONS(61),
    [aux_sym_register_token13] = ACTIONS(61),
    [aux_sym_register_token14] = ACTIONS(61),
    [aux_sym_register_token15] = ACTIONS(61),
    [aux_sym_register_token16] = ACTIONS(61),
    [aux_sym_register_token17] = ACTIONS(61),
    [aux_sym_register_token18] = ACTIONS(61),
    [aux_sym_register_token19] = ACTIONS(61),
    [aux_sym_register_token20] = ACTIONS(61),
    [aux_sym_register_token21] = ACTIONS(61),
    [aux_sym_register_token22] = ACTIONS(61),
    [aux_sym_register_token23] = ACTIONS(61),
    [aux_sym_register_token24] = ACTIONS(61),
    [aux_sym_register_token25] = ACTIONS(61),
    [aux_sym_register_token26] = ACTIONS(61),
    [aux_sym_register_token27] = ACTIONS(61),
    [aux_sym_register_token28] = ACTIONS(61),
    [aux_sym_register_token29] = ACTIONS(61),
    [aux_sym_register_token30] = ACTIONS(61),
    [aux_sym_register_token31] = ACTIONS(61),
    [aux_sym_register_token32] = ACTIONS(61),
    [aux_sym_register_token33] = ACTIONS(61),
    [aux_sym_register_token34] = ACTIONS(61),
    [aux_sym_register_token35] = ACTIONS(61),
    [aux_sym_register_token36] = ACTIONS(61),
    [aux_sym_register_token37] = ACTIONS(61),
    [aux_sym_register_token38] = ACTIONS(61),
    [aux_sym_register_token39] = ACTIONS(61),
    [aux_sym_register_token40] = ACTIONS(61),
    [aux_sym_register_token41] = ACTIONS(61),
    [aux_sym_register_token42] = ACTIONS(61),
    [aux_sym_register_token43] = ACTIONS(61),
    [aux_sym_register_token44] = ACTIONS(61),
    [aux_sym_register_token45] = ACTIONS(61),
    [aux_sym_register_token46] = ACTIONS(61),
    [aux_sym_register_token47] = ACTIONS(61),
    [aux_sym_register_token48] = ACTIONS(61),
    [aux_sym_register_token49] = ACTIONS(61),
    [aux_sym_register_token50] = ACTIONS(61),
    [aux_sym_register_token51] = ACTIONS(61),
    [aux_sym_register_token52] = ACTIONS(61),
    [aux_sym_register_token53] = ACTIONS(61),
    [aux_sym_register_token54] = ACTIONS(61),
    [aux_sym_register_token55] = ACTIONS(61),
    [aux_sym_register_token56] = ACTIONS(61),
    [aux_sym_register_token57] = ACTIONS(61),
    [aux_sym_register_token58] = ACTIONS(61),
    [aux_sym_register_token59] = ACTIONS(61),
    [aux_sym_register_token60] = ACTIONS(61),
    [aux_sym_register_token61] = ACTIONS(61),
    [aux_sym_register_token62] = ACTIONS(61),
    [aux_sym_register_token63] = ACTIONS(61),
    [aux_sym_register_token64] = ACTIONS(61),
    [aux_sym_register_token65] = ACTIONS(61),
    [aux_sym_register_token66] = ACTIONS(61),
    [aux_sym_register_token67] = ACTIONS(61),
    [aux_sym_register_token68] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(63),
    [sym_constant_numeric] = ACTIONS(61),
    [aux_sym_constant_charstr_token1] = ACTIONS(63),
    [aux_sym_constant_charstr_token2] = ACTIONS(63),
    [aux_sym_constant_charstr_token3] = ACTIONS(63),
    [sym_constant_floatpt] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(3),
    [aux_sym_word_token1] = ACTIONS(61),
  },
  [12] = {
    [sym_comment] = STATE(12),
    [aux_sym_register_token1] = ACTIONS(65),
    [aux_sym_register_token2] = ACTIONS(65),
    [aux_sym_register_token3] = ACTIONS(65),
    [aux_sym_register_token4] = ACTIONS(65),
    [aux_sym_register_token5] = ACTIONS(65),
    [aux_sym_register_token6] = ACTIONS(65),
    [aux_sym_register_token7] = ACTIONS(65),
    [aux_sym_register_token8] = ACTIONS(65),
    [aux_sym_register_token9] = ACTIONS(65),
    [aux_sym_register_token10] = ACTIONS(65),
    [aux_sym_register_token11] = ACTIONS(65),
    [aux_sym_register_token12] = ACTIONS(65),
    [aux_sym_register_token13] = ACTIONS(65),
    [aux_sym_register_token14] = ACTIONS(65),
    [aux_sym_register_token15] = ACTIONS(65),
    [aux_sym_register_token16] = ACTIONS(65),
    [aux_sym_register_token17] = ACTIONS(65),
    [aux_sym_register_token18] = ACTIONS(65),
    [aux_sym_register_token19] = ACTIONS(65),
    [aux_sym_register_token20] = ACTIONS(65),
    [aux_sym_register_token21] = ACTIONS(65),
    [aux_sym_register_token22] = ACTIONS(65),
    [aux_sym_register_token23] = ACTIONS(65),
    [aux_sym_register_token24] = ACTIONS(65),
    [aux_sym_register_token25] = ACTIONS(65),
    [aux_sym_register_token26] = ACTIONS(65),
    [aux_sym_register_token27] = ACTIONS(65),
    [aux_sym_register_token28] = ACTIONS(65),
    [aux_sym_register_token29] = ACTIONS(65),
    [aux_sym_register_token30] = ACTIONS(65),
    [aux_sym_register_token31] = ACTIONS(65),
    [aux_sym_register_token32] = ACTIONS(65),
    [aux_sym_register_token33] = ACTIONS(65),
    [aux_sym_register_token34] = ACTIONS(65),
    [aux_sym_register_token35] = ACTIONS(65),
    [aux_sym_register_token36] = ACTIONS(65),
    [aux_sym_register_token37] = ACTIONS(65),
    [aux_sym_register_token38] = ACTIONS(65),
    [aux_sym_register_token39] = ACTIONS(65),
    [aux_sym_register_token40] = ACTIONS(65),
    [aux_sym_register_token41] = ACTIONS(65),
    [aux_sym_register_token42] = ACTIONS(65),
    [aux_sym_register_token43] = ACTIONS(65),
    [aux_sym_register_token44] = ACTIONS(65),
    [aux_sym_register_token45] = ACTIONS(65),
    [aux_sym_register_token46] = ACTIONS(65),
    [aux_sym_register_token47] = ACTIONS(65),
    [aux_sym_register_token48] = ACTIONS(65),
    [aux_sym_register_token49] = ACTIONS(65),
    [aux_sym_register_token50] = ACTIONS(65),
    [aux_sym_register_token51] = ACTIONS(65),
    [aux_sym_register_token52] = ACTIONS(65),
    [aux_sym_register_token53] = ACTIONS(65),
    [aux_sym_register_token54] = ACTIONS(65),
    [aux_sym_register_token55] = ACTIONS(65),
    [aux_sym_register_token56] = ACTIONS(65),
    [aux_sym_register_token57] = ACTIONS(65),
    [aux_sym_register_token58] = ACTIONS(65),
    [aux_sym_register_token59] = ACTIONS(65),
    [aux_sym_register_token60] = ACTIONS(65),
    [aux_sym_register_token61] = ACTIONS(65),
    [aux_sym_register_token62] = ACTIONS(65),
    [aux_sym_register_token63] = ACTIONS(65),
    [aux_sym_register_token64] = ACTIONS(65),
    [aux_sym_register_token65] = ACTIONS(65),
    [aux_sym_register_token66] = ACTIONS(65),
    [aux_sym_register_token67] = ACTIONS(65),
    [aux_sym_register_token68] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(67),
    [sym_constant_numeric] = ACTIONS(65),
    [aux_sym_constant_charstr_token1] = ACTIONS(67),
    [aux_sym_constant_charstr_token2] = ACTIONS(67),
    [aux_sym_constant_charstr_token3] = ACTIONS(67),
    [sym_constant_floatpt] = ACTIONS(67),
    [anon_sym_SEMI] = ACTIONS(3),
    [aux_sym_word_token1] = ACTIONS(65),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(7), 1,
      aux_sym_source_file_token1,
    ACTIONS(13), 1,
      anon_sym_SEMI,
    ACTIONS(15), 1,
      aux_sym_word_token1,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_word,
    STATE(13), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym_source_file_repeat1,
    STATE(15), 1,
      sym_label,
    STATE(16), 1,
      sym_source_line,
    STATE(21), 1,
      sym_instruction_prefix,
    STATE(40), 1,
      sym_instruction,
    STATE(4), 2,
      sym_known_instruction,
      sym_unknown_instruction,
    ACTIONS(11), 5,
      aux_sym_known_instruction_token1,
      aux_sym_known_instruction_token2,
      aux_sym_known_instruction_token3,
      aux_sym_known_instruction_token4,
      aux_sym_known_instruction_token5,
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
  [69] = 13,
    ACTIONS(13), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      aux_sym_source_file_token1,
    ACTIONS(82), 1,
      aux_sym_word_token1,
    STATE(3), 1,
      sym_word,
    STATE(15), 1,
      sym_label,
    STATE(16), 1,
      sym_source_line,
    STATE(21), 1,
      sym_instruction_prefix,
    STATE(40), 1,
      sym_instruction,
    STATE(4), 2,
      sym_known_instruction,
      sym_unknown_instruction,
    STATE(14), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    ACTIONS(79), 5,
      aux_sym_known_instruction_token1,
      aux_sym_known_instruction_token2,
      aux_sym_known_instruction_token3,
      aux_sym_known_instruction_token4,
      aux_sym_known_instruction_token5,
    ACTIONS(76), 22,
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
  [136] = 10,
    ACTIONS(13), 1,
      anon_sym_SEMI,
    ACTIONS(85), 1,
      aux_sym_source_file_token1,
    ACTIONS(87), 1,
      aux_sym_word_token1,
    STATE(9), 1,
      sym_word,
    STATE(15), 1,
      sym_comment,
    STATE(21), 1,
      sym_instruction_prefix,
    STATE(43), 1,
      sym_instruction,
    STATE(4), 2,
      sym_known_instruction,
      sym_unknown_instruction,
    ACTIONS(11), 5,
      aux_sym_known_instruction_token1,
      aux_sym_known_instruction_token2,
      aux_sym_known_instruction_token3,
      aux_sym_known_instruction_token4,
      aux_sym_known_instruction_token5,
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
  [193] = 4,
    ACTIONS(13), 1,
      anon_sym_SEMI,
    STATE(16), 1,
      sym_comment,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(91), 28,
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
      aux_sym_word_token1,
  [234] = 4,
    ACTIONS(13), 1,
      anon_sym_SEMI,
    STATE(17), 1,
      sym_comment,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(95), 28,
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
      aux_sym_word_token1,
  [275] = 4,
    ACTIONS(13), 1,
      anon_sym_SEMI,
    STATE(18), 1,
      sym_comment,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(99), 28,
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
      aux_sym_word_token1,
  [316] = 4,
    ACTIONS(13), 1,
      anon_sym_SEMI,
    STATE(19), 1,
      sym_comment,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(103), 28,
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
      aux_sym_word_token1,
  [357] = 4,
    ACTIONS(13), 1,
      anon_sym_SEMI,
    ACTIONS(105), 1,
      aux_sym_source_file_token1,
    STATE(20), 1,
      sym_comment,
    ACTIONS(107), 28,
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
      aux_sym_word_token1,
  [397] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(87), 1,
      aux_sym_word_token1,
    STATE(9), 1,
      sym_word,
    STATE(21), 1,
      sym_comment,
    STATE(5), 2,
      sym_known_instruction,
      sym_unknown_instruction,
    ACTIONS(11), 5,
      aux_sym_known_instruction_token1,
      aux_sym_known_instruction_token2,
      aux_sym_known_instruction_token3,
      aux_sym_known_instruction_token4,
      aux_sym_known_instruction_token5,
  [421] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(111), 1,
      aux_sym_word_token1,
    STATE(22), 1,
      sym_comment,
    STATE(42), 1,
      sym_expression,
    STATE(46), 1,
      sym_word,
    ACTIONS(109), 6,
      aux_sym_operand_prefix_token1,
      aux_sym_operand_prefix_token2,
      aux_sym_operand_prefix_token3,
      aux_sym_effective_address_token1,
      aux_sym_effective_address_token2,
      aux_sym_effective_address_token3,
  [445] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(23), 1,
      sym_comment,
    ACTIONS(113), 8,
      aux_sym_operand_prefix_token1,
      aux_sym_operand_prefix_token2,
      aux_sym_operand_prefix_token3,
      aux_sym_operand_prefix_token4,
      aux_sym_operand_prefix_token5,
      aux_sym_operand_prefix_token6,
      aux_sym_operand_prefix_token7,
      aux_sym_operand_prefix_token8,
  [462] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(24), 1,
      sym_comment,
    ACTIONS(115), 6,
      aux_sym_known_instruction_token1,
      aux_sym_known_instruction_token2,
      aux_sym_known_instruction_token3,
      aux_sym_known_instruction_token4,
      aux_sym_known_instruction_token5,
      aux_sym_word_token1,
  [477] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(117), 1,
      aux_sym_word_token1,
    STATE(25), 1,
      sym_comment,
    STATE(38), 1,
      sym_expression,
    STATE(46), 1,
      sym_word,
  [493] = 5,
    ACTIONS(13), 1,
      anon_sym_SEMI,
    ACTIONS(119), 1,
      aux_sym_source_file_token1,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      sym_comment,
    STATE(28), 1,
      aux_sym_operands_repeat1,
  [509] = 5,
    ACTIONS(13), 1,
      anon_sym_SEMI,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    ACTIONS(123), 1,
      aux_sym_source_file_token1,
    STATE(26), 1,
      aux_sym_operands_repeat1,
    STATE(27), 1,
      sym_comment,
  [525] = 4,
    ACTIONS(13), 1,
      anon_sym_SEMI,
    ACTIONS(125), 1,
      aux_sym_source_file_token1,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    STATE(28), 2,
      sym_comment,
      aux_sym_operands_repeat1,
  [539] = 4,
    ACTIONS(13), 1,
      anon_sym_SEMI,
    ACTIONS(130), 1,
      aux_sym_source_file_token1,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      sym_comment,
  [552] = 4,
    ACTIONS(13), 1,
      anon_sym_SEMI,
    ACTIONS(134), 1,
      aux_sym_source_file_token1,
    ACTIONS(136), 1,
      anon_sym_COMMA,
    STATE(30), 1,
      sym_comment,
  [565] = 4,
    ACTIONS(13), 1,
      anon_sym_SEMI,
    ACTIONS(138), 1,
      aux_sym_source_file_token1,
    ACTIONS(140), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      sym_comment,
  [578] = 4,
    ACTIONS(13), 1,
      anon_sym_SEMI,
    ACTIONS(142), 1,
      aux_sym_source_file_token1,
    ACTIONS(144), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      sym_comment,
  [591] = 4,
    ACTIONS(13), 1,
      anon_sym_SEMI,
    ACTIONS(146), 1,
      aux_sym_source_file_token1,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      sym_comment,
  [604] = 4,
    ACTIONS(13), 1,
      anon_sym_SEMI,
    ACTIONS(150), 1,
      aux_sym_source_file_token1,
    ACTIONS(152), 1,
      anon_sym_COMMA,
    STATE(34), 1,
      sym_comment,
  [617] = 4,
    ACTIONS(13), 1,
      anon_sym_SEMI,
    ACTIONS(125), 1,
      aux_sym_source_file_token1,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    STATE(35), 1,
      sym_comment,
  [630] = 4,
    ACTIONS(13), 1,
      anon_sym_SEMI,
    ACTIONS(156), 1,
      aux_sym_source_file_token1,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    STATE(36), 1,
      sym_comment,
  [643] = 4,
    ACTIONS(13), 1,
      anon_sym_SEMI,
    ACTIONS(160), 1,
      aux_sym_source_file_token1,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    STATE(37), 1,
      sym_comment,
  [656] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(164), 1,
      anon_sym_RBRACK,
    STATE(38), 1,
      sym_comment,
  [666] = 3,
    ACTIONS(13), 1,
      anon_sym_SEMI,
    ACTIONS(166), 1,
      aux_sym_comment_token1,
    STATE(39), 1,
      sym_comment,
  [676] = 3,
    ACTIONS(13), 1,
      anon_sym_SEMI,
    ACTIONS(85), 1,
      aux_sym_source_file_token1,
    STATE(40), 1,
      sym_comment,
  [686] = 3,
    ACTIONS(13), 1,
      anon_sym_SEMI,
    ACTIONS(47), 1,
      aux_sym_source_file_token1,
    STATE(41), 1,
      sym_comment,
  [696] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(168), 1,
      anon_sym_RBRACK,
    STATE(42), 1,
      sym_comment,
  [706] = 3,
    ACTIONS(13), 1,
      anon_sym_SEMI,
    ACTIONS(170), 1,
      aux_sym_source_file_token1,
    STATE(43), 1,
      sym_comment,
  [716] = 3,
    ACTIONS(13), 1,
      anon_sym_SEMI,
    ACTIONS(172), 1,
      aux_sym_source_file_token1,
    STATE(44), 1,
      sym_comment,
  [726] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
    STATE(45), 1,
      sym_comment,
  [736] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(138), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      sym_comment,
  [746] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(17), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      sym_comment,
  [756] = 1,
    ACTIONS(176), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(13)] = 0,
  [SMALL_STATE(14)] = 69,
  [SMALL_STATE(15)] = 136,
  [SMALL_STATE(16)] = 193,
  [SMALL_STATE(17)] = 234,
  [SMALL_STATE(18)] = 275,
  [SMALL_STATE(19)] = 316,
  [SMALL_STATE(20)] = 357,
  [SMALL_STATE(21)] = 397,
  [SMALL_STATE(22)] = 421,
  [SMALL_STATE(23)] = 445,
  [SMALL_STATE(24)] = 462,
  [SMALL_STATE(25)] = 477,
  [SMALL_STATE(26)] = 493,
  [SMALL_STATE(27)] = 509,
  [SMALL_STATE(28)] = 525,
  [SMALL_STATE(29)] = 539,
  [SMALL_STATE(30)] = 552,
  [SMALL_STATE(31)] = 565,
  [SMALL_STATE(32)] = 578,
  [SMALL_STATE(33)] = 591,
  [SMALL_STATE(34)] = 604,
  [SMALL_STATE(35)] = 617,
  [SMALL_STATE(36)] = 630,
  [SMALL_STATE(37)] = 643,
  [SMALL_STATE(38)] = 656,
  [SMALL_STATE(39)] = 666,
  [SMALL_STATE(40)] = 676,
  [SMALL_STATE(41)] = 686,
  [SMALL_STATE(42)] = 696,
  [SMALL_STATE(43)] = 706,
  [SMALL_STATE(44)] = 716,
  [SMALL_STATE(45)] = 726,
  [SMALL_STATE(46)] = 736,
  [SMALL_STATE(47)] = 746,
  [SMALL_STATE(48)] = 756,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_label, 1), REDUCE(sym_unknown_instruction, 1),
  [24] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unknown_instruction, 1),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_label, 1), REDUCE(sym_unknown_instruction, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_known_instruction, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_known_instruction, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unknown_instruction, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_prefix, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_prefix, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_prefix, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_prefix, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_line, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_source_line, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_line, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_source_line, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_line, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_source_line, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_prefix, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2), SHIFT_REPEAT(6),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_charstr, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant_charstr, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effective_address, 4),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_effective_address, 4),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effective_address, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_effective_address, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 2),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3),
  [174] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
