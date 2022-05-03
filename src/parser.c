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
#define STATE_COUNT 95
#define LARGE_STATE_COUNT 27
#define SYMBOL_COUNT 194
#define ALIAS_COUNT 0
#define TOKEN_COUNT 171
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_source_file_token1 = 1,
  anon_sym_PERCENT = 2,
  aux_sym_preproc_directive_token1 = 3,
  anon_sym_bits = 4,
  anon_sym_use16 = 5,
  anon_sym_use32 = 6,
  anon_sym_default = 7,
  anon_sym_section = 8,
  anon_sym_segment = 9,
  anon_sym_absolute = 10,
  anon_sym_extern = 11,
  anon_sym_required = 12,
  anon_sym_global = 13,
  anon_sym_static = 14,
  anon_sym_common = 15,
  anon_sym_prefix = 16,
  anon_sym_gprefix = 17,
  anon_sym_lprefix = 18,
  anon_sym_postfix = 19,
  anon_sym_gpostfix = 20,
  anon_sym_lpostfix = 21,
  anon_sym_cpu = 22,
  anon_sym_float = 23,
  anon_sym_warning = 24,
  anon_sym_COLON = 25,
  aux_sym_instruction_prefix_token1 = 26,
  aux_sym_instruction_prefix_token2 = 27,
  aux_sym_instruction_prefix_token3 = 28,
  aux_sym_instruction_prefix_token4 = 29,
  aux_sym_instruction_prefix_token5 = 30,
  aux_sym_instruction_prefix_token6 = 31,
  aux_sym_instruction_prefix_token7 = 32,
  aux_sym_instruction_prefix_token8 = 33,
  aux_sym_instruction_prefix_token9 = 34,
  aux_sym_instruction_prefix_token10 = 35,
  aux_sym_instruction_prefix_token11 = 36,
  aux_sym_instruction_prefix_token12 = 37,
  aux_sym_instruction_prefix_token13 = 38,
  aux_sym_instruction_prefix_token14 = 39,
  aux_sym_instruction_prefix_token15 = 40,
  aux_sym_instruction_prefix_token16 = 41,
  aux_sym_instruction_prefix_token17 = 42,
  aux_sym_instruction_prefix_token18 = 43,
  aux_sym_instruction_prefix_token19 = 44,
  aux_sym_instruction_prefix_token20 = 45,
  aux_sym_instruction_prefix_token21 = 46,
  aux_sym_instruction_prefix_token22 = 47,
  anon_sym_COMMA = 48,
  anon_sym_strict = 49,
  aux_sym_operand_prefix_token1 = 50,
  aux_sym_operand_prefix_token2 = 51,
  aux_sym_operand_prefix_token3 = 52,
  aux_sym_operand_prefix_token4 = 53,
  aux_sym_operand_prefix_token5 = 54,
  aux_sym_operand_prefix_token6 = 55,
  aux_sym_operand_prefix_token7 = 56,
  aux_sym_operand_prefix_token8 = 57,
  aux_sym_register_token1 = 58,
  aux_sym_register_token2 = 59,
  aux_sym_register_token3 = 60,
  aux_sym_register_token4 = 61,
  aux_sym_register_token5 = 62,
  aux_sym_register_token6 = 63,
  aux_sym_register_token7 = 64,
  aux_sym_register_token8 = 65,
  aux_sym_register_token9 = 66,
  aux_sym_register_token10 = 67,
  aux_sym_register_token11 = 68,
  aux_sym_register_token12 = 69,
  aux_sym_register_token13 = 70,
  aux_sym_register_token14 = 71,
  aux_sym_register_token15 = 72,
  aux_sym_register_token16 = 73,
  aux_sym_register_token17 = 74,
  aux_sym_register_token18 = 75,
  aux_sym_register_token19 = 76,
  aux_sym_register_token20 = 77,
  aux_sym_register_token21 = 78,
  aux_sym_register_token22 = 79,
  aux_sym_register_token23 = 80,
  aux_sym_register_token24 = 81,
  aux_sym_register_token25 = 82,
  aux_sym_register_token26 = 83,
  aux_sym_register_token27 = 84,
  aux_sym_register_token28 = 85,
  aux_sym_register_token29 = 86,
  aux_sym_register_token30 = 87,
  aux_sym_register_token31 = 88,
  aux_sym_register_token32 = 89,
  aux_sym_register_token33 = 90,
  aux_sym_register_token34 = 91,
  aux_sym_register_token35 = 92,
  aux_sym_register_token36 = 93,
  aux_sym_register_token37 = 94,
  aux_sym_register_token38 = 95,
  aux_sym_register_token39 = 96,
  aux_sym_register_token40 = 97,
  aux_sym_register_token41 = 98,
  aux_sym_register_token42 = 99,
  aux_sym_register_token43 = 100,
  aux_sym_register_token44 = 101,
  aux_sym_register_token45 = 102,
  aux_sym_register_token46 = 103,
  aux_sym_register_token47 = 104,
  aux_sym_register_token48 = 105,
  aux_sym_register_token49 = 106,
  aux_sym_register_token50 = 107,
  aux_sym_register_token51 = 108,
  aux_sym_register_token52 = 109,
  aux_sym_register_token53 = 110,
  aux_sym_register_token54 = 111,
  aux_sym_register_token55 = 112,
  aux_sym_register_token56 = 113,
  aux_sym_register_token57 = 114,
  aux_sym_register_token58 = 115,
  aux_sym_register_token59 = 116,
  aux_sym_register_token60 = 117,
  aux_sym_register_token61 = 118,
  aux_sym_register_token62 = 119,
  aux_sym_register_token63 = 120,
  aux_sym_register_token64 = 121,
  aux_sym_register_token65 = 122,
  aux_sym_register_token66 = 123,
  aux_sym_register_token67 = 124,
  aux_sym_register_token68 = 125,
  anon_sym_LBRACK = 126,
  aux_sym_effective_address_token1 = 127,
  aux_sym_effective_address_token2 = 128,
  aux_sym_effective_address_token3 = 129,
  anon_sym_RBRACK = 130,
  aux_sym_constant_numeric_token1 = 131,
  aux_sym_constant_numeric_token2 = 132,
  aux_sym_constant_numeric_token3 = 133,
  aux_sym_constant_numeric_token4 = 134,
  aux_sym_constant_numeric_token5 = 135,
  aux_sym_constant_numeric_token6 = 136,
  aux_sym_constant_numeric_token7 = 137,
  aux_sym_constant_numeric_token8 = 138,
  aux_sym_constant_numeric_token9 = 139,
  aux_sym_constant_numeric_token10 = 140,
  aux_sym_constant_charstr_token1 = 141,
  aux_sym_constant_charstr_token2 = 142,
  aux_sym_constant_charstr_token3 = 143,
  sym_constant_floatpt = 144,
  aux_sym_known_instruction_token1 = 145,
  aux_sym_known_instruction_token2 = 146,
  aux_sym_known_instruction_token3 = 147,
  aux_sym_known_instruction_token4 = 148,
  aux_sym_known_instruction_token5 = 149,
  aux_sym_pseudo_instruction_token1 = 150,
  aux_sym_pseudo_instruction_token2 = 151,
  aux_sym_pseudo_instruction_token3 = 152,
  aux_sym_pseudo_instruction_token4 = 153,
  aux_sym_pseudo_instruction_token5 = 154,
  aux_sym_pseudo_instruction_token6 = 155,
  aux_sym_pseudo_instruction_token7 = 156,
  aux_sym_pseudo_instruction_token8 = 157,
  aux_sym_pseudo_instruction_token9 = 158,
  aux_sym_pseudo_instruction_token10 = 159,
  aux_sym_pseudo_instruction_token11 = 160,
  aux_sym_pseudo_instruction_token12 = 161,
  aux_sym_pseudo_instruction_token13 = 162,
  aux_sym_pseudo_instruction_token14 = 163,
  aux_sym_pseudo_instruction_token15 = 164,
  aux_sym_pseudo_instruction_token16 = 165,
  aux_sym_pseudo_instruction_token17 = 166,
  aux_sym_pseudo_instruction_token18 = 167,
  aux_sym_pseudo_instruction_token19 = 168,
  sym_comment = 169,
  aux_sym_word_token1 = 170,
  sym_source_file = 171,
  sym_source_line = 172,
  sym_preproc_directive = 173,
  sym_assembl_directive = 174,
  sym_label = 175,
  sym_instruction = 176,
  sym_instruction_prefix = 177,
  sym_operands = 178,
  sym_operand = 179,
  sym_operand_prefix = 180,
  sym_register = 181,
  sym_effective_address = 182,
  sym_constant = 183,
  sym_constant_numeric = 184,
  sym_constant_charstr = 185,
  sym_known_instruction = 186,
  sym_pseudo_instruction = 187,
  sym_unknown_instruction = 188,
  sym_word = 189,
  sym_expression = 190,
  aux_sym_source_file_repeat1 = 191,
  aux_sym_preproc_directive_repeat1 = 192,
  aux_sym_operands_repeat1 = 193,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_file_token1] = "source_file_token1",
  [anon_sym_PERCENT] = "%",
  [aux_sym_preproc_directive_token1] = "preproc_directive_token1",
  [anon_sym_bits] = "bits",
  [anon_sym_use16] = "use16",
  [anon_sym_use32] = "use32",
  [anon_sym_default] = "default",
  [anon_sym_section] = "section",
  [anon_sym_segment] = "segment",
  [anon_sym_absolute] = "absolute",
  [anon_sym_extern] = "extern",
  [anon_sym_required] = "required",
  [anon_sym_global] = "global",
  [anon_sym_static] = "static",
  [anon_sym_common] = "common",
  [anon_sym_prefix] = "prefix",
  [anon_sym_gprefix] = "gprefix",
  [anon_sym_lprefix] = "lprefix",
  [anon_sym_postfix] = "postfix",
  [anon_sym_gpostfix] = "gpostfix",
  [anon_sym_lpostfix] = "lpostfix",
  [anon_sym_cpu] = "cpu",
  [anon_sym_float] = "float",
  [anon_sym_warning] = "warning",
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
  [sym_preproc_directive] = "preproc_directive",
  [sym_assembl_directive] = "assembl_directive",
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
  [aux_sym_preproc_directive_repeat1] = "preproc_directive_repeat1",
  [aux_sym_operands_repeat1] = "operands_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_file_token1] = aux_sym_source_file_token1,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [aux_sym_preproc_directive_token1] = aux_sym_preproc_directive_token1,
  [anon_sym_bits] = anon_sym_bits,
  [anon_sym_use16] = anon_sym_use16,
  [anon_sym_use32] = anon_sym_use32,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_section] = anon_sym_section,
  [anon_sym_segment] = anon_sym_segment,
  [anon_sym_absolute] = anon_sym_absolute,
  [anon_sym_extern] = anon_sym_extern,
  [anon_sym_required] = anon_sym_required,
  [anon_sym_global] = anon_sym_global,
  [anon_sym_static] = anon_sym_static,
  [anon_sym_common] = anon_sym_common,
  [anon_sym_prefix] = anon_sym_prefix,
  [anon_sym_gprefix] = anon_sym_gprefix,
  [anon_sym_lprefix] = anon_sym_lprefix,
  [anon_sym_postfix] = anon_sym_postfix,
  [anon_sym_gpostfix] = anon_sym_gpostfix,
  [anon_sym_lpostfix] = anon_sym_lpostfix,
  [anon_sym_cpu] = anon_sym_cpu,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_warning] = anon_sym_warning,
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
  [sym_preproc_directive] = sym_preproc_directive,
  [sym_assembl_directive] = sym_assembl_directive,
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
  [aux_sym_preproc_directive_repeat1] = aux_sym_preproc_directive_repeat1,
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
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_preproc_directive_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_bits] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_section] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_segment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_absolute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extern] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_required] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_global] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_common] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prefix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gprefix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lprefix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_postfix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gpostfix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lpostfix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cpu] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_warning] = {
    .visible = true,
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
  [sym_preproc_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_assembl_directive] = {
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
  [aux_sym_preproc_directive_repeat1] = {
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
      if (eof) ADVANCE(81);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '$') ADVANCE(553);
      if (lookahead == '%') ADVANCE(87);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == ',') ADVANCE(139);
      if (lookahead == '0') ADVANCE(230);
      if (lookahead == '1') ADVANCE(231);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == ';') ADVANCE(285);
      if (lookahead == 'B') ADVANCE(467);
      if (lookahead == 'C') ADVANCE(470);
      if (lookahead == 'D') ADVANCE(430);
      if (lookahead == 'E') ADVANCE(424);
      if (lookahead == 'F') ADVANCE(527);
      if (lookahead == 'G') ADVANCE(529);
      if (lookahead == 'L') ADVANCE(500);
      if (lookahead == 'R') ADVANCE(290);
      if (lookahead == 'S') ADVANCE(438);
      if (lookahead == 'W') ADVANCE(501);
      if (lookahead == '[') ADVANCE(225);
      if (lookahead == '\\') SKIP(67)
      if (lookahead == ']') ADVANCE(229);
      if (lookahead == '`') ADVANCE(33);
      if (lookahead == 'b') ADVANCE(346);
      if (lookahead == 'c') ADVANCE(374);
      if (lookahead == 'd') ADVANCE(325);
      if (lookahead == 'e') ADVANCE(416);
      if (lookahead == 'f') ADVANCE(359);
      if (lookahead == 'g') ADVANCE(362);
      if (lookahead == 'l') ADVANCE(384);
      if (lookahead == 'p') ADVANCE(378);
      if (lookahead == 'r') ADVANCE(289);
      if (lookahead == 's') ADVANCE(326);
      if (lookahead == 'u') ADVANCE(393);
      if (lookahead == 'w') ADVANCE(312);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(293);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(498);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(502);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(503);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(295);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(545);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(480);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(427);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(547);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(548);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(232);
      if (lookahead == '.' ||
          lookahead == '?' ||
          ('H' <= lookahead && lookahead <= 'V') ||
          ('_' <= lookahead && lookahead <= 'v')) ADVANCE(554);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(87);
      if (lookahead == ',') ADVANCE(139);
      if (lookahead == ';') ADVANCE(285);
      if (lookahead == 'A') ADVANCE(299);
      if (lookahead == 'B') ADVANCE(496);
      if (lookahead == 'C') ADVANCE(526);
      if (lookahead == 'D') ADVANCE(433);
      if (lookahead == 'E') ADVANCE(515);
      if (lookahead == 'F') ADVANCE(528);
      if (lookahead == 'G') ADVANCE(529);
      if (lookahead == 'L') ADVANCE(500);
      if (lookahead == 'R') ADVANCE(462);
      if (lookahead == 'S') ADVANCE(439);
      if (lookahead == '\\') SKIP(3)
      if (lookahead == 'a') ADVANCE(298);
      if (lookahead == 'b') ADVANCE(347);
      if (lookahead == 'c') ADVANCE(375);
      if (lookahead == 'd') ADVANCE(332);
      if (lookahead == 'e') ADVANCE(423);
      if (lookahead == 'f') ADVANCE(360);
      if (lookahead == 'g') ADVANCE(362);
      if (lookahead == 'l') ADVANCE(384);
      if (lookahead == 'p') ADVANCE(378);
      if (lookahead == 'r') ADVANCE(311);
      if (lookahead == 's') ADVANCE(327);
      if (lookahead == 'u') ADVANCE(393);
      if (lookahead == 'w') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(498);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(502);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(504);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(296);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(481);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(427);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '?' ||
          ('H' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(554);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(2)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(22)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '\r') SKIP(4)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(23)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '\r') SKIP(6)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(25)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '\r') SKIP(8)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(26)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(26)
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
      if (lookahead == '\n') SKIP(29)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(29)
      if (lookahead == '\r') SKIP(14)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(30)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(30)
      if (lookahead == '\r') SKIP(16)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(31)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '\r') SKIP(18)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(32)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(32)
      if (lookahead == '\r') SKIP(20)
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '\r') ADVANCE(22);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '$') ADVANCE(553);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == ',') ADVANCE(139);
      if (lookahead == '0') ADVANCE(234);
      if (lookahead == '1') ADVANCE(235);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == ';') ADVANCE(285);
      if (lookahead == 'S') ADVANCE(438);
      if (lookahead == '[') ADVANCE(225);
      if (lookahead == '\\') SKIP(5)
      if (lookahead == '`') ADVANCE(33);
      if (lookahead == 's') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(22)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(294);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(467);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(470);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(430);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(424);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(527);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(529);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(498);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(500);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(502);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(504);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(295);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(545);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(291);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(480);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(501);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(427);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(547);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(548);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(237);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(236);
      if (lookahead == '.' ||
          lookahead == '?' ||
          ('H' <= lookahead && lookahead <= 'V') ||
          ('_' <= lookahead && lookahead <= 'v')) ADVANCE(554);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\r') ADVANCE(23);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '$') ADVANCE(553);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '0') ADVANCE(234);
      if (lookahead == '1') ADVANCE(235);
      if (lookahead == ';') ADVANCE(285);
      if (lookahead == 'S') ADVANCE(479);
      if (lookahead == '[') ADVANCE(225);
      if (lookahead == '\\') SKIP(7)
      if (lookahead == '`') ADVANCE(33);
      if (lookahead == 's') ADVANCE(404);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(23)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(478);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(468);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(471);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(472);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(425);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(552);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(543);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(545);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(292);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(546);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(501);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(547);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(548);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(237);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(236);
      if (lookahead == '.' ||
          lookahead == '?' ||
          ('G' <= lookahead && lookahead <= 'X') ||
          ('_' <= lookahead && lookahead <= 'x')) ADVANCE(554);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\r') ADVANCE(24);
      if (lookahead == ';') ADVANCE(285);
      if (lookahead == '\\') SKIP(13)
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(24)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(299);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(496);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(526);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(433);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(515);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(528);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(529);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(498);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(500);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(502);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(504);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(296);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(462);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(439);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(481);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(427);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '?' ||
          ('H' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(554);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '$') ADVANCE(553);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '0') ADVANCE(234);
      if (lookahead == '1') ADVANCE(235);
      if (lookahead == ';') ADVANCE(285);
      if (lookahead == 'S') ADVANCE(479);
      if (lookahead == '[') ADVANCE(225);
      if (lookahead == '\\') SKIP(9)
      if (lookahead == '`') ADVANCE(33);
      if (lookahead == 's') ADVANCE(404);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(478);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(468);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(471);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(472);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(425);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(552);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(543);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(545);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(292);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(546);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(501);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(547);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(548);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(236);
      if (lookahead == '.' ||
          lookahead == '?' ||
          ('G' <= lookahead && lookahead <= 'X') ||
          ('_' <= lookahead && lookahead <= 'x')) ADVANCE(554);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '$') ADVANCE(553);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '0') ADVANCE(234);
      if (lookahead == '1') ADVANCE(235);
      if (lookahead == ';') ADVANCE(285);
      if (lookahead == '[') ADVANCE(225);
      if (lookahead == '\\') SKIP(11)
      if (lookahead == '`') ADVANCE(33);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(478);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(469);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(471);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(473);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(425);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(552);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(292);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(479);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(236);
      if (lookahead == '.' ||
          lookahead == '?' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(554);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(254);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '\'') ADVANCE(253);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == ';') ADVANCE(285);
      if (lookahead == '\\') SKIP(15)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(456);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(434);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(516);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(498);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(502);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(465);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(440);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(554);
      END_STATE();
    case 30:
      if (lookahead == ';') ADVANCE(285);
      if (lookahead == '\\') SKIP(17)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(437);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(551);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(544);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(505);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(464);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(501);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '?' ||
          ('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(554);
      END_STATE();
    case 31:
      if (lookahead == ';') ADVANCE(285);
      if (lookahead == '\\') SKIP(19)
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
      if (lookahead == ';') ADVANCE(285);
      if (lookahead == '\\') SKIP(21)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(554);
      END_STATE();
    case 33:
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead == '`') ADVANCE(255);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(143);
      END_STATE();
    case 35:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(145);
      END_STATE();
    case 36:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(151);
      END_STATE();
    case 37:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(147);
      END_STATE();
    case 38:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(149);
      END_STATE();
    case 39:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(153);
      END_STATE();
    case 40:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(155);
      END_STATE();
    case 41:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
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
          lookahead == 'x') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 65:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 66:
      if (eof) ADVANCE(81);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 67:
      if (eof) ADVANCE(81);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(66)
      END_STATE();
    case 68:
      if (eof) ADVANCE(81);
      if (lookahead == '\n') SKIP(70)
      END_STATE();
    case 69:
      if (eof) ADVANCE(81);
      if (lookahead == '\n') SKIP(70)
      if (lookahead == '\r') SKIP(68)
      END_STATE();
    case 70:
      if (eof) ADVANCE(81);
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(87);
      if (lookahead == ',') ADVANCE(139);
      if (lookahead == ';') ADVANCE(285);
      if (lookahead == 'A') ADVANCE(299);
      if (lookahead == 'B') ADVANCE(496);
      if (lookahead == 'C') ADVANCE(526);
      if (lookahead == 'D') ADVANCE(433);
      if (lookahead == 'E') ADVANCE(515);
      if (lookahead == 'F') ADVANCE(528);
      if (lookahead == 'G') ADVANCE(529);
      if (lookahead == 'L') ADVANCE(500);
      if (lookahead == 'R') ADVANCE(462);
      if (lookahead == 'S') ADVANCE(439);
      if (lookahead == '\\') SKIP(69)
      if (lookahead == 'a') ADVANCE(298);
      if (lookahead == 'b') ADVANCE(347);
      if (lookahead == 'c') ADVANCE(375);
      if (lookahead == 'd') ADVANCE(332);
      if (lookahead == 'e') ADVANCE(423);
      if (lookahead == 'f') ADVANCE(360);
      if (lookahead == 'g') ADVANCE(362);
      if (lookahead == 'l') ADVANCE(384);
      if (lookahead == 'p') ADVANCE(378);
      if (lookahead == 'r') ADVANCE(311);
      if (lookahead == 's') ADVANCE(327);
      if (lookahead == 'u') ADVANCE(393);
      if (lookahead == 'w') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(70)
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(498);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(502);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(504);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(296);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(481);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(427);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '?' ||
          ('H' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(554);
      END_STATE();
    case 71:
      if (eof) ADVANCE(81);
      if (lookahead == '\n') SKIP(78)
      END_STATE();
    case 72:
      if (eof) ADVANCE(81);
      if (lookahead == '\n') SKIP(78)
      if (lookahead == '\r') SKIP(71)
      END_STATE();
    case 73:
      if (eof) ADVANCE(81);
      if (lookahead == '\n') SKIP(79)
      END_STATE();
    case 74:
      if (eof) ADVANCE(81);
      if (lookahead == '\n') SKIP(79)
      if (lookahead == '\r') SKIP(73)
      END_STATE();
    case 75:
      if (eof) ADVANCE(81);
      if (lookahead == '\n') SKIP(80)
      END_STATE();
    case 76:
      if (eof) ADVANCE(81);
      if (lookahead == '\n') SKIP(80)
      if (lookahead == '\r') SKIP(75)
      END_STATE();
    case 77:
      if (eof) ADVANCE(81);
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == '\r') ADVANCE(89);
      if (lookahead == ';') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 78:
      if (eof) ADVANCE(81);
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '\r') ADVANCE(22);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '$') ADVANCE(553);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == ',') ADVANCE(139);
      if (lookahead == '0') ADVANCE(234);
      if (lookahead == '1') ADVANCE(235);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == ';') ADVANCE(285);
      if (lookahead == 'S') ADVANCE(438);
      if (lookahead == '[') ADVANCE(225);
      if (lookahead == '\\') SKIP(72)
      if (lookahead == '`') ADVANCE(33);
      if (lookahead == 's') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(78)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(294);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(467);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(470);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(430);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(424);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(527);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(529);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(498);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(500);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(502);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(504);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(295);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(545);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(291);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(480);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(501);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(427);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(547);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(548);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(237);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(236);
      if (lookahead == '.' ||
          lookahead == '?' ||
          ('H' <= lookahead && lookahead <= 'V') ||
          ('_' <= lookahead && lookahead <= 'v')) ADVANCE(554);
      END_STATE();
    case 79:
      if (eof) ADVANCE(81);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\r') ADVANCE(23);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '$') ADVANCE(553);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '0') ADVANCE(234);
      if (lookahead == '1') ADVANCE(235);
      if (lookahead == ';') ADVANCE(285);
      if (lookahead == 'S') ADVANCE(479);
      if (lookahead == '[') ADVANCE(225);
      if (lookahead == '\\') SKIP(74)
      if (lookahead == '`') ADVANCE(33);
      if (lookahead == 's') ADVANCE(404);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(79)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(478);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(468);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(471);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(472);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(425);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(552);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(543);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(545);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(292);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(546);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(501);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(547);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(548);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(237);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(236);
      if (lookahead == '.' ||
          lookahead == '?' ||
          ('G' <= lookahead && lookahead <= 'X') ||
          ('_' <= lookahead && lookahead <= 'x')) ADVANCE(554);
      END_STATE();
    case 80:
      if (eof) ADVANCE(81);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\r') ADVANCE(24);
      if (lookahead == ';') ADVANCE(285);
      if (lookahead == '\\') SKIP(76)
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(80)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(299);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(496);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(526);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(433);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(515);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(528);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(529);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(498);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(500);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(502);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(504);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(296);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(462);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(439);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(481);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(427);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '?' ||
          ('H' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(554);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == '\r') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(89);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '\r') ADVANCE(22);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\r') ADVANCE(23);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\r') ADVANCE(24);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_preproc_directive_token1);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_preproc_directive_token1);
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == '\r') ADVANCE(89);
      if (lookahead == ';') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_preproc_directive_token1);
      if (lookahead == '\\') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(285);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_bits);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_use16);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_use32);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_section);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_segment);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_absolute);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_extern);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_required);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_static);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_common);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_prefix);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_gprefix);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_lprefix);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_postfix);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_gpostfix);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_lpostfix);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_cpu);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_warning);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token1);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(115);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(459);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(116);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token3);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token4);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token5);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token6);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token7);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token8);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token9);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token10);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token11);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token11);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token12);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token12);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token13);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token13);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token14);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token15);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token16);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token17);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token18);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token19);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token20);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(199);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(197);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token20);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token21);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token22);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_strict);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token1);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token1);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token2);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token2);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token3);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token3);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token4);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token4);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token5);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token5);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token6);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token6);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token7);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token7);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token8);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token8);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_register_token1);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_register_token2);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_register_token3);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_register_token4);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_register_token5);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_register_token6);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_register_token7);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_register_token8);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_register_token9);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_register_token10);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_register_token11);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_register_token12);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_register_token13);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_register_token14);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_register_token15);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_register_token16);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_register_token17);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_register_token18);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_register_token19);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_register_token20);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_register_token21);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_register_token22);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_register_token23);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_register_token24);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_register_token25);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(165);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_register_token26);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(166);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_register_token27);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(167);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_register_token28);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(168);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_register_token29);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_register_token30);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_register_token31);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_register_token32);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_register_token33);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_register_token34);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_register_token35);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_register_token36);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_register_token37);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_register_token38);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_register_token39);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_register_token40);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_register_token41);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_register_token42);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_register_token43);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_register_token44);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_register_token45);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_register_token46);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_register_token47);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_register_token48);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_register_token49);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_register_token50);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_register_token51);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_register_token52);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_register_token53);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_register_token54);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_register_token55);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_register_token56);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_register_token57);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_register_token58);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_register_token59);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_register_token60);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_register_token61);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(169);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(201);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(185);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_register_token62);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(170);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(202);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(186);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_register_token63);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(171);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(203);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(187);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_register_token64);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(172);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(204);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(188);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_register_token65);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(173);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(205);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(189);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_register_token66);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(174);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(206);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(190);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_register_token67);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(175);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(207);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(191);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_register_token68);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(176);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(208);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(192);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_effective_address_token1);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_effective_address_token2);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_effective_address_token3);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token1);
      if (lookahead == '.') ADVANCE(256);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(249);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(243);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(244);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(250);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(231);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(233);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(239);
      if (lookahead == 'O' ||
          lookahead == 'Q' ||
          lookahead == 'o' ||
          lookahead == 'q') ADVANCE(247);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token1);
      if (lookahead == '.') ADVANCE(256);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(252);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(246);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(245);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(251);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(231);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(233);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(240);
      if (lookahead == 'O' ||
          lookahead == 'Q' ||
          lookahead == 'o' ||
          lookahead == 'q') ADVANCE(248);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token1);
      if (lookahead == '.') ADVANCE(256);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(246);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(245);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(233);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(240);
      if (lookahead == 'O' ||
          lookahead == 'Q' ||
          lookahead == 'o' ||
          lookahead == 'q') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token1);
      if (lookahead == '.') ADVANCE(256);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(246);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(245);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(249);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(243);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(244);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(250);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(235);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(237);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(239);
      if (lookahead == 'O' ||
          lookahead == 'Q' ||
          lookahead == 'o' ||
          lookahead == 'q') ADVANCE(247);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(252);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(246);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(245);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(251);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(235);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(237);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(240);
      if (lookahead == 'O' ||
          lookahead == 'Q' ||
          lookahead == 'o' ||
          lookahead == 'q') ADVANCE(248);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(246);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(245);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(237);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(240);
      if (lookahead == 'O' ||
          lookahead == 'Q' ||
          lookahead == 'o' ||
          lookahead == 'q') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(246);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(245);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token4);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token4);
      if (lookahead == 't') ADVANCE(334);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token4);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token5);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token6);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token6);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token7);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token8);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token9);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(249);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(240);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token9);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token10);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token10);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_constant_charstr_token1);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_constant_charstr_token2);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_constant_charstr_token3);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_constant_floatpt);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_known_instruction_token1);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_known_instruction_token2);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_known_instruction_token2);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_known_instruction_token3);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(487);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_known_instruction_token4);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_known_instruction_token5);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token1);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token1);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(519);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token2);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token3);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token3);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token4);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token5);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token6);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token7);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token8);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token9);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token10);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token11);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token12);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token13);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token14);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token15);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token16);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token17);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token18);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token19);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(285);
      if (lookahead == '\r') ADVANCE(287);
      if (lookahead == '\\') ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(285);
      if (lookahead == '\\') ADVANCE(286);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '0') ADVANCE(219);
      if (lookahead == '1') ADVANCE(220);
      if (lookahead == '2') ADVANCE(221);
      if (lookahead == '3') ADVANCE(222);
      if (lookahead == '4') ADVANCE(223);
      if (lookahead == '5') ADVANCE(224);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('6' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '1') ADVANCE(288);
      if (lookahead == '8') ADVANCE(217);
      if (lookahead == '9') ADVANCE(218);
      if (lookahead == 'E') ADVANCE(489);
      if (lookahead == 'e') ADVANCE(385);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(549);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(512);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(550);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(483);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(484);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '7') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '1') ADVANCE(288);
      if (lookahead == '8') ADVANCE(217);
      if (lookahead == '9') ADVANCE(218);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(549);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(512);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(550);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(483);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(489);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(484);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '7') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '1') ADVANCE(288);
      if (lookahead == '8') ADVANCE(217);
      if (lookahead == '9') ADVANCE(218);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(549);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(512);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(550);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(483);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(513);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(484);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '7') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '1') ADVANCE(288);
      if (lookahead == '8') ADVANCE(217);
      if (lookahead == '9') ADVANCE(218);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(549);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(512);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(550);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(483);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(484);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '7') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '1') ADVANCE(307);
      if (lookahead == '3') ADVANCE(300);
      if (lookahead == '6') ADVANCE(304);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(531);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(446);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(158);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(157);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '1') ADVANCE(307);
      if (lookahead == '3') ADVANCE(300);
      if (lookahead == '6') ADVANCE(304);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(446);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(158);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(157);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '1') ADVANCE(308);
      if (lookahead == '3') ADVANCE(301);
      if (lookahead == '6') ADVANCE(305);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(507);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '1') ADVANCE(308);
      if (lookahead == '3') ADVANCE(301);
      if (lookahead == '6') ADVANCE(305);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '1') ADVANCE(309);
      if (lookahead == '3') ADVANCE(302);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '1') ADVANCE(310);
      if (lookahead == '3') ADVANCE(303);
      if (lookahead == '6') ADVANCE(306);
      if (lookahead == 'b') ADVANCE(394);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(455);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '1') ADVANCE(310);
      if (lookahead == '3') ADVANCE(303);
      if (lookahead == '6') ADVANCE(306);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(455);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '2') ADVANCE(125);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '2') ADVANCE(130);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '2') ADVANCE(93);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '2') ADVANCE(126);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '4') ADVANCE(127);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '4') ADVANCE(131);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '4') ADVANCE(128);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '6') ADVANCE(123);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '6') ADVANCE(129);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '6') ADVANCE(92);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '6') ADVANCE(124);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E') ADVANCE(513);
      if (lookahead == 'e') ADVANCE(386);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'a') ADVANCE(388);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(518);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'a') ADVANCE(388);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'a') ADVANCE(412);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'a') ADVANCE(361);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'a') ADVANCE(413);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'a') ADVANCE(407);
      if (lookahead == 'r') ADVANCE(348);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'a') ADVANCE(407);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'a') ADVANCE(397);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'b') ADVANCE(315);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'c') ADVANCE(101);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'c') ADVANCE(405);
      if (lookahead == 'g') ADVANCE(367);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'c') ADVANCE(398);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'd') ADVANCE(99);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(337);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(263);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(267);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(184);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(161);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(271);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(269);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(133);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(270);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(265);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(179);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(272);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'v') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(322);
      if (lookahead == 't') ADVANCE(317);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(426);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(183);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(181);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(134);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(536);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(322);
      if (lookahead == 't') ADVANCE(318);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(426);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(134);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(536);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(338);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(297);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(324);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(339);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(264);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(268);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(271);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(269);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(133);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(270);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(266);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(272);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(273);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'X') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(373);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(389);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(340);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(341);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'f') ADVANCE(314);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(552);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'f') ADVANCE(349);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'f') ADVANCE(316);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'f') ADVANCE(352);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'f') ADVANCE(353);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'f') ADVANCE(355);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'f') ADVANCE(357);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'f') ADVANCE(358);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'g') ADVANCE(111);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'i') ADVANCE(401);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(164);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(163);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(445);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(182);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(180);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'i') ADVANCE(401);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(445);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'i') ADVANCE(323);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'i') ADVANCE(417);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'i') ADVANCE(390);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'i') ADVANCE(321);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'i') ADVANCE(418);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'i') ADVANCE(419);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'i') ADVANCE(381);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'i') ADVANCE(420);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'i') ADVANCE(370);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'i') ADVANCE(421);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'i') ADVANCE(422);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'l') ADVANCE(376);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(137);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'l') ADVANCE(376);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(137);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'l') ADVANCE(100);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'l') ADVANCE(377);
      if (lookahead == 'p') ADVANCE(382);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(138);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'l') ADVANCE(415);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'l') ADVANCE(399);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'm') ADVANCE(366);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'm') ADVANCE(379);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'm') ADVANCE(333);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'n') ADVANCE(102);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'n') ADVANCE(98);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'n') ADVANCE(345);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'n') ADVANCE(95);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'n') ADVANCE(356);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'n') ADVANCE(400);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'o') ADVANCE(365);
      if (lookahead == 'p') ADVANCE(411);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(160);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(159);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(132);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'o') ADVANCE(365);
      if (lookahead == 'p') ADVANCE(411);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(132);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'o') ADVANCE(319);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'o') ADVANCE(320);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'o') ADVANCE(392);
      if (lookahead == 'r') ADVANCE(328);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'o') ADVANCE(368);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'o') ADVANCE(363);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'o') ADVANCE(371);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'o') ADVANCE(395);
      if (lookahead == 'r') ADVANCE(335);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'o') ADVANCE(396);
      if (lookahead == 'r') ADVANCE(336);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'p') ADVANCE(383);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(441);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'q') ADVANCE(414);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(227);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(114);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(431);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'q') ADVANCE(414);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(114);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(431);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'r') ADVANCE(348);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'r') ADVANCE(372);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'r') ADVANCE(369);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'r') ADVANCE(330);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 's') ADVANCE(91);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 's') ADVANCE(408);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 's') ADVANCE(329);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 's') ADVANCE(380);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 's') ADVANCE(409);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 's') ADVANCE(410);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(110);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(140);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(391);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(334);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(387);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(426);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(183);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(181);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(134);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(536);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(387);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(183);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(181);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(354);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(331);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(351);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(342);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(343);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(344);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'u') ADVANCE(109);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'u') ADVANCE(364);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'u') ADVANCE(364);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'u') ADVANCE(350);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'u') ADVANCE(406);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'x') ADVANCE(241);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(476);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(475);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(477);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(474);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(540);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(135);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'F' ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(552);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'x') ADVANCE(103);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'x') ADVANCE(104);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'x') ADVANCE(105);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'x') ADVANCE(106);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'x') ADVANCE(107);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'x') ADVANCE(108);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'x') ADVANCE(402);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(540);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(136);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(476);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(475);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(477);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(474);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(540);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(135);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'F' ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(552);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(476);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(475);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(477);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(474);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(482);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'F' ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(552);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(534);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(443);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(457);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(494);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(537);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(263);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(267);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(184);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(161);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(271);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(269);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(133);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(270);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(265);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(179);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(272);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'v') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(274);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(276);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(279);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(277);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(278);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(275);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(280);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(281);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'X') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(262);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(264);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(268);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(271);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(269);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(133);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(270);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(266);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(272);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(273);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'X') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(264);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(268);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(271);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(269);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(270);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(266);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(272);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(273);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'X') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(499);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(514);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(499);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(532);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(426);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(183);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(181);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(134);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(536);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(426);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(134);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(536);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(426);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(536);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(488);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(260);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(517);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(428);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(121);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(258);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(144);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(146);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 449:
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
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(152);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(148);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(150);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(154);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(156);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(259);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(455);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(493);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(117);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(118);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(119);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(120);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(513);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(535);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(490);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(530);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(429);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(164);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(163);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(445);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(182);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(180);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(164);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(163);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(182);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(180);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(164);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(163);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(182);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(160);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(159);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(132);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(160);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(159);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(184);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(161);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(506);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(184);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(161);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(242);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(242);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(198);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(242);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(242);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(158);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(157);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(183);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(181);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(495);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(509);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(495);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(199);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(197);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(216);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(211);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(215);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(213);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(538);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(521);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(497);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(113);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(227);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(114);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(431);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(227);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(261);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(485);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(466);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(491);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(463);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(445);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(282);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(442);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(449);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(441);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(518);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(542);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(435);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(436);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(533);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(519);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(520);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(522);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(523);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(524);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(525);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(214);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(212);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(114);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(431);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(492);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(540);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(136);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(540);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(541);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(447);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(448);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(450);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(460);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(451);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(452);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(453);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(454);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(132);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(137);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(137);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(138);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(431);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(228);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(228);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(514);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(432);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 535:
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
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(444);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(461);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(226);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(458);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(283);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(486);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(257);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(507);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(506);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(508);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(509);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(510);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(511);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(209);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(210);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(539);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(554);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 70},
  [2] = {.lex_state = 78},
  [3] = {.lex_state = 78},
  [4] = {.lex_state = 78},
  [5] = {.lex_state = 78},
  [6] = {.lex_state = 79},
  [7] = {.lex_state = 79},
  [8] = {.lex_state = 79},
  [9] = {.lex_state = 79},
  [10] = {.lex_state = 25},
  [11] = {.lex_state = 25},
  [12] = {.lex_state = 79},
  [13] = {.lex_state = 79},
  [14] = {.lex_state = 79},
  [15] = {.lex_state = 79},
  [16] = {.lex_state = 79},
  [17] = {.lex_state = 79},
  [18] = {.lex_state = 79},
  [19] = {.lex_state = 79},
  [20] = {.lex_state = 26},
  [21] = {.lex_state = 26},
  [22] = {.lex_state = 26},
  [23] = {.lex_state = 26},
  [24] = {.lex_state = 70},
  [25] = {.lex_state = 70},
  [26] = {.lex_state = 70},
  [27] = {.lex_state = 80},
  [28] = {.lex_state = 80},
  [29] = {.lex_state = 80},
  [30] = {.lex_state = 80},
  [31] = {.lex_state = 29},
  [32] = {.lex_state = 29},
  [33] = {.lex_state = 29},
  [34] = {.lex_state = 30},
  [35] = {.lex_state = 30},
  [36] = {.lex_state = 31},
  [37] = {.lex_state = 77},
  [38] = {.lex_state = 70},
  [39] = {.lex_state = 77},
  [40] = {.lex_state = 70},
  [41] = {.lex_state = 77},
  [42] = {.lex_state = 70},
  [43] = {.lex_state = 70},
  [44] = {.lex_state = 70},
  [45] = {.lex_state = 70},
  [46] = {.lex_state = 32},
  [47] = {.lex_state = 70},
  [48] = {.lex_state = 70},
  [49] = {.lex_state = 77},
  [50] = {.lex_state = 70},
  [51] = {.lex_state = 70},
  [52] = {.lex_state = 32},
  [53] = {.lex_state = 77},
  [54] = {.lex_state = 77},
  [55] = {.lex_state = 70},
  [56] = {.lex_state = 70},
  [57] = {.lex_state = 70},
  [58] = {.lex_state = 70},
  [59] = {.lex_state = 70},
  [60] = {.lex_state = 77},
  [61] = {.lex_state = 70},
  [62] = {.lex_state = 70},
  [63] = {.lex_state = 70},
  [64] = {.lex_state = 70},
  [65] = {.lex_state = 70},
  [66] = {.lex_state = 70},
  [67] = {.lex_state = 70},
  [68] = {.lex_state = 70},
  [69] = {.lex_state = 32},
  [70] = {.lex_state = 70},
  [71] = {.lex_state = 70},
  [72] = {.lex_state = 77},
  [73] = {.lex_state = 70},
  [74] = {.lex_state = 70},
  [75] = {.lex_state = 70},
  [76] = {.lex_state = 70},
  [77] = {.lex_state = 70},
  [78] = {.lex_state = 70},
  [79] = {.lex_state = 32},
  [80] = {.lex_state = 70},
  [81] = {.lex_state = 70},
  [82] = {.lex_state = 70},
  [83] = {.lex_state = 70},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 70},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 70},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 70},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 70},
  [94] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_bits] = ACTIONS(1),
    [anon_sym_use16] = ACTIONS(1),
    [anon_sym_use32] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_section] = ACTIONS(1),
    [anon_sym_segment] = ACTIONS(1),
    [anon_sym_extern] = ACTIONS(1),
    [anon_sym_required] = ACTIONS(1),
    [anon_sym_global] = ACTIONS(1),
    [anon_sym_static] = ACTIONS(1),
    [anon_sym_common] = ACTIONS(1),
    [anon_sym_prefix] = ACTIONS(1),
    [anon_sym_gprefix] = ACTIONS(1),
    [anon_sym_lprefix] = ACTIONS(1),
    [anon_sym_postfix] = ACTIONS(1),
    [anon_sym_gpostfix] = ACTIONS(1),
    [anon_sym_lpostfix] = ACTIONS(1),
    [anon_sym_cpu] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_warning] = ACTIONS(1),
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
    [sym_source_file] = STATE(89),
    [sym_source_line] = STATE(63),
    [sym_preproc_directive] = STATE(63),
    [sym_assembl_directive] = STATE(63),
    [sym_label] = STATE(27),
    [sym_instruction] = STATE(74),
    [sym_instruction_prefix] = STATE(32),
    [sym_known_instruction] = STATE(7),
    [sym_pseudo_instruction] = STATE(7),
    [sym_unknown_instruction] = STATE(7),
    [sym_word] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_source_file_token1] = ACTIONS(7),
    [anon_sym_PERCENT] = ACTIONS(9),
    [anon_sym_bits] = ACTIONS(11),
    [anon_sym_use16] = ACTIONS(11),
    [anon_sym_use32] = ACTIONS(11),
    [anon_sym_default] = ACTIONS(11),
    [anon_sym_section] = ACTIONS(11),
    [anon_sym_segment] = ACTIONS(11),
    [anon_sym_absolute] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(11),
    [anon_sym_required] = ACTIONS(11),
    [anon_sym_global] = ACTIONS(11),
    [anon_sym_static] = ACTIONS(11),
    [anon_sym_common] = ACTIONS(11),
    [anon_sym_prefix] = ACTIONS(11),
    [anon_sym_gprefix] = ACTIONS(11),
    [anon_sym_lprefix] = ACTIONS(11),
    [anon_sym_postfix] = ACTIONS(11),
    [anon_sym_gpostfix] = ACTIONS(11),
    [anon_sym_lpostfix] = ACTIONS(11),
    [anon_sym_cpu] = ACTIONS(11),
    [anon_sym_float] = ACTIONS(11),
    [anon_sym_warning] = ACTIONS(11),
    [aux_sym_instruction_prefix_token1] = ACTIONS(13),
    [aux_sym_instruction_prefix_token2] = ACTIONS(13),
    [aux_sym_instruction_prefix_token3] = ACTIONS(13),
    [aux_sym_instruction_prefix_token4] = ACTIONS(13),
    [aux_sym_instruction_prefix_token5] = ACTIONS(13),
    [aux_sym_instruction_prefix_token6] = ACTIONS(13),
    [aux_sym_instruction_prefix_token7] = ACTIONS(13),
    [aux_sym_instruction_prefix_token8] = ACTIONS(13),
    [aux_sym_instruction_prefix_token9] = ACTIONS(13),
    [aux_sym_instruction_prefix_token10] = ACTIONS(13),
    [aux_sym_instruction_prefix_token11] = ACTIONS(13),
    [aux_sym_instruction_prefix_token12] = ACTIONS(13),
    [aux_sym_instruction_prefix_token13] = ACTIONS(13),
    [aux_sym_instruction_prefix_token14] = ACTIONS(13),
    [aux_sym_instruction_prefix_token15] = ACTIONS(13),
    [aux_sym_instruction_prefix_token16] = ACTIONS(13),
    [aux_sym_instruction_prefix_token17] = ACTIONS(13),
    [aux_sym_instruction_prefix_token18] = ACTIONS(13),
    [aux_sym_instruction_prefix_token19] = ACTIONS(13),
    [aux_sym_instruction_prefix_token20] = ACTIONS(13),
    [aux_sym_instruction_prefix_token21] = ACTIONS(13),
    [aux_sym_instruction_prefix_token22] = ACTIONS(13),
    [aux_sym_known_instruction_token1] = ACTIONS(15),
    [aux_sym_known_instruction_token2] = ACTIONS(15),
    [aux_sym_known_instruction_token3] = ACTIONS(15),
    [aux_sym_known_instruction_token4] = ACTIONS(15),
    [aux_sym_known_instruction_token5] = ACTIONS(15),
    [aux_sym_pseudo_instruction_token1] = ACTIONS(17),
    [aux_sym_pseudo_instruction_token2] = ACTIONS(17),
    [aux_sym_pseudo_instruction_token3] = ACTIONS(17),
    [aux_sym_pseudo_instruction_token4] = ACTIONS(17),
    [aux_sym_pseudo_instruction_token5] = ACTIONS(17),
    [aux_sym_pseudo_instruction_token6] = ACTIONS(17),
    [aux_sym_pseudo_instruction_token7] = ACTIONS(17),
    [aux_sym_pseudo_instruction_token8] = ACTIONS(17),
    [aux_sym_pseudo_instruction_token9] = ACTIONS(17),
    [aux_sym_pseudo_instruction_token10] = ACTIONS(17),
    [aux_sym_pseudo_instruction_token11] = ACTIONS(17),
    [aux_sym_pseudo_instruction_token12] = ACTIONS(17),
    [aux_sym_pseudo_instruction_token13] = ACTIONS(17),
    [aux_sym_pseudo_instruction_token14] = ACTIONS(17),
    [aux_sym_pseudo_instruction_token15] = ACTIONS(17),
    [aux_sym_pseudo_instruction_token16] = ACTIONS(17),
    [aux_sym_pseudo_instruction_token17] = ACTIONS(17),
    [aux_sym_pseudo_instruction_token18] = ACTIONS(17),
    [aux_sym_pseudo_instruction_token19] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
    [aux_sym_word_token1] = ACTIONS(21),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(23),
    [aux_sym_source_file_token1] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [aux_sym_instruction_prefix_token1] = ACTIONS(25),
    [aux_sym_instruction_prefix_token2] = ACTIONS(25),
    [aux_sym_instruction_prefix_token3] = ACTIONS(25),
    [aux_sym_instruction_prefix_token4] = ACTIONS(25),
    [aux_sym_instruction_prefix_token5] = ACTIONS(25),
    [aux_sym_instruction_prefix_token6] = ACTIONS(25),
    [aux_sym_instruction_prefix_token7] = ACTIONS(25),
    [aux_sym_instruction_prefix_token8] = ACTIONS(25),
    [aux_sym_instruction_prefix_token9] = ACTIONS(25),
    [aux_sym_instruction_prefix_token10] = ACTIONS(25),
    [aux_sym_instruction_prefix_token11] = ACTIONS(25),
    [aux_sym_instruction_prefix_token12] = ACTIONS(25),
    [aux_sym_instruction_prefix_token13] = ACTIONS(25),
    [aux_sym_instruction_prefix_token14] = ACTIONS(25),
    [aux_sym_instruction_prefix_token15] = ACTIONS(25),
    [aux_sym_instruction_prefix_token16] = ACTIONS(25),
    [aux_sym_instruction_prefix_token17] = ACTIONS(25),
    [aux_sym_instruction_prefix_token18] = ACTIONS(25),
    [aux_sym_instruction_prefix_token19] = ACTIONS(25),
    [aux_sym_instruction_prefix_token20] = ACTIONS(25),
    [aux_sym_instruction_prefix_token21] = ACTIONS(25),
    [aux_sym_instruction_prefix_token22] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_strict] = ACTIONS(25),
    [aux_sym_operand_prefix_token1] = ACTIONS(25),
    [aux_sym_operand_prefix_token2] = ACTIONS(25),
    [aux_sym_operand_prefix_token3] = ACTIONS(25),
    [aux_sym_operand_prefix_token4] = ACTIONS(25),
    [aux_sym_operand_prefix_token5] = ACTIONS(25),
    [aux_sym_operand_prefix_token6] = ACTIONS(25),
    [aux_sym_operand_prefix_token7] = ACTIONS(25),
    [aux_sym_operand_prefix_token8] = ACTIONS(25),
    [aux_sym_register_token1] = ACTIONS(25),
    [aux_sym_register_token2] = ACTIONS(25),
    [aux_sym_register_token3] = ACTIONS(25),
    [aux_sym_register_token4] = ACTIONS(25),
    [aux_sym_register_token5] = ACTIONS(25),
    [aux_sym_register_token6] = ACTIONS(25),
    [aux_sym_register_token7] = ACTIONS(25),
    [aux_sym_register_token8] = ACTIONS(25),
    [aux_sym_register_token9] = ACTIONS(25),
    [aux_sym_register_token10] = ACTIONS(25),
    [aux_sym_register_token11] = ACTIONS(25),
    [aux_sym_register_token12] = ACTIONS(25),
    [aux_sym_register_token13] = ACTIONS(25),
    [aux_sym_register_token14] = ACTIONS(25),
    [aux_sym_register_token15] = ACTIONS(25),
    [aux_sym_register_token16] = ACTIONS(25),
    [aux_sym_register_token17] = ACTIONS(25),
    [aux_sym_register_token18] = ACTIONS(25),
    [aux_sym_register_token19] = ACTIONS(25),
    [aux_sym_register_token20] = ACTIONS(25),
    [aux_sym_register_token21] = ACTIONS(25),
    [aux_sym_register_token22] = ACTIONS(25),
    [aux_sym_register_token23] = ACTIONS(25),
    [aux_sym_register_token24] = ACTIONS(25),
    [aux_sym_register_token25] = ACTIONS(25),
    [aux_sym_register_token26] = ACTIONS(25),
    [aux_sym_register_token27] = ACTIONS(25),
    [aux_sym_register_token28] = ACTIONS(25),
    [aux_sym_register_token29] = ACTIONS(25),
    [aux_sym_register_token30] = ACTIONS(25),
    [aux_sym_register_token31] = ACTIONS(25),
    [aux_sym_register_token32] = ACTIONS(25),
    [aux_sym_register_token33] = ACTIONS(25),
    [aux_sym_register_token34] = ACTIONS(25),
    [aux_sym_register_token35] = ACTIONS(25),
    [aux_sym_register_token36] = ACTIONS(25),
    [aux_sym_register_token37] = ACTIONS(25),
    [aux_sym_register_token38] = ACTIONS(25),
    [aux_sym_register_token39] = ACTIONS(25),
    [aux_sym_register_token40] = ACTIONS(25),
    [aux_sym_register_token41] = ACTIONS(25),
    [aux_sym_register_token42] = ACTIONS(25),
    [aux_sym_register_token43] = ACTIONS(25),
    [aux_sym_register_token44] = ACTIONS(25),
    [aux_sym_register_token45] = ACTIONS(25),
    [aux_sym_register_token46] = ACTIONS(25),
    [aux_sym_register_token47] = ACTIONS(25),
    [aux_sym_register_token48] = ACTIONS(25),
    [aux_sym_register_token49] = ACTIONS(25),
    [aux_sym_register_token50] = ACTIONS(25),
    [aux_sym_register_token51] = ACTIONS(25),
    [aux_sym_register_token52] = ACTIONS(25),
    [aux_sym_register_token53] = ACTIONS(25),
    [aux_sym_register_token54] = ACTIONS(25),
    [aux_sym_register_token55] = ACTIONS(25),
    [aux_sym_register_token56] = ACTIONS(25),
    [aux_sym_register_token57] = ACTIONS(25),
    [aux_sym_register_token58] = ACTIONS(25),
    [aux_sym_register_token59] = ACTIONS(25),
    [aux_sym_register_token60] = ACTIONS(25),
    [aux_sym_register_token61] = ACTIONS(25),
    [aux_sym_register_token62] = ACTIONS(25),
    [aux_sym_register_token63] = ACTIONS(25),
    [aux_sym_register_token64] = ACTIONS(25),
    [aux_sym_register_token65] = ACTIONS(25),
    [aux_sym_register_token66] = ACTIONS(25),
    [aux_sym_register_token67] = ACTIONS(25),
    [aux_sym_register_token68] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(25),
    [aux_sym_constant_numeric_token1] = ACTIONS(25),
    [aux_sym_constant_numeric_token2] = ACTIONS(25),
    [aux_sym_constant_numeric_token3] = ACTIONS(25),
    [aux_sym_constant_numeric_token4] = ACTIONS(25),
    [aux_sym_constant_numeric_token5] = ACTIONS(25),
    [aux_sym_constant_numeric_token6] = ACTIONS(25),
    [aux_sym_constant_numeric_token7] = ACTIONS(25),
    [aux_sym_constant_numeric_token8] = ACTIONS(25),
    [aux_sym_constant_numeric_token9] = ACTIONS(25),
    [aux_sym_constant_numeric_token10] = ACTIONS(25),
    [aux_sym_constant_charstr_token1] = ACTIONS(25),
    [aux_sym_constant_charstr_token2] = ACTIONS(25),
    [aux_sym_constant_charstr_token3] = ACTIONS(25),
    [aux_sym_known_instruction_token1] = ACTIONS(25),
    [aux_sym_known_instruction_token2] = ACTIONS(25),
    [aux_sym_known_instruction_token3] = ACTIONS(25),
    [aux_sym_known_instruction_token4] = ACTIONS(25),
    [aux_sym_known_instruction_token5] = ACTIONS(25),
    [aux_sym_pseudo_instruction_token1] = ACTIONS(25),
    [aux_sym_pseudo_instruction_token2] = ACTIONS(25),
    [aux_sym_pseudo_instruction_token3] = ACTIONS(25),
    [aux_sym_pseudo_instruction_token4] = ACTIONS(25),
    [aux_sym_pseudo_instruction_token5] = ACTIONS(25),
    [aux_sym_pseudo_instruction_token6] = ACTIONS(25),
    [aux_sym_pseudo_instruction_token7] = ACTIONS(25),
    [aux_sym_pseudo_instruction_token8] = ACTIONS(25),
    [aux_sym_pseudo_instruction_token9] = ACTIONS(25),
    [aux_sym_pseudo_instruction_token10] = ACTIONS(25),
    [aux_sym_pseudo_instruction_token11] = ACTIONS(25),
    [aux_sym_pseudo_instruction_token12] = ACTIONS(25),
    [aux_sym_pseudo_instruction_token13] = ACTIONS(25),
    [aux_sym_pseudo_instruction_token14] = ACTIONS(25),
    [aux_sym_pseudo_instruction_token15] = ACTIONS(25),
    [aux_sym_pseudo_instruction_token16] = ACTIONS(25),
    [aux_sym_pseudo_instruction_token17] = ACTIONS(25),
    [aux_sym_pseudo_instruction_token18] = ACTIONS(25),
    [aux_sym_pseudo_instruction_token19] = ACTIONS(25),
    [sym_comment] = ACTIONS(19),
    [aux_sym_word_token1] = ACTIONS(25),
  },
  [3] = {
    [aux_sym_source_file_token1] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [aux_sym_instruction_prefix_token1] = ACTIONS(25),
    [aux_sym_instruction_prefix_token2] = ACTIONS(25),
    [aux_sym_instruction_prefix_token3] = ACTIONS(25),
    [aux_sym_instruction_prefix_token4] = ACTIONS(25),
    [aux_sym_instruction_prefix_token5] = ACTIONS(25),
    [aux_sym_instruction_prefix_token6] = ACTIONS(25),
    [aux_sym_instruction_prefix_token7] = ACTIONS(25),
    [aux_sym_instruction_prefix_token8] = ACTIONS(25),
    [aux_sym_instruction_prefix_token9] = ACTIONS(25),
    [aux_sym_instruction_prefix_token10] = ACTIONS(25),
    [aux_sym_instruction_prefix_token11] = ACTIONS(25),
    [aux_sym_instruction_prefix_token12] = ACTIONS(25),
    [aux_sym_instruction_prefix_token13] = ACTIONS(25),
    [aux_sym_instruction_prefix_token14] = ACTIONS(25),
    [aux_sym_instruction_prefix_token15] = ACTIONS(25),
    [aux_sym_instruction_prefix_token16] = ACTIONS(25),
    [aux_sym_instruction_prefix_token17] = ACTIONS(25),
    [aux_sym_instruction_prefix_token18] = ACTIONS(25),
    [aux_sym_instruction_prefix_token19] = ACTIONS(25),
    [aux_sym_instruction_prefix_token20] = ACTIONS(25),
    [aux_sym_instruction_prefix_token21] = ACTIONS(25),
    [aux_sym_instruction_prefix_token22] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_strict] = ACTIONS(25),
    [aux_sym_operand_prefix_token1] = ACTIONS(25),
    [aux_sym_operand_prefix_token2] = ACTIONS(25),
    [aux_sym_operand_prefix_token3] = ACTIONS(25),
    [aux_sym_operand_prefix_token4] = ACTIONS(25),
    [aux_sym_operand_prefix_token5] = ACTIONS(25),
    [aux_sym_operand_prefix_token6] = ACTIONS(25),
    [aux_sym_operand_prefix_token7] = ACTIONS(25),
    [aux_sym_operand_prefix_token8] = ACTIONS(25),
    [aux_sym_register_token1] = ACTIONS(25),
    [aux_sym_register_token2] = ACTIONS(25),
    [aux_sym_register_token3] = ACTIONS(25),
    [aux_sym_register_token4] = ACTIONS(25),
    [aux_sym_register_token5] = ACTIONS(25),
    [aux_sym_register_token6] = ACTIONS(25),
    [aux_sym_register_token7] = ACTIONS(25),
    [aux_sym_register_token8] = ACTIONS(25),
    [aux_sym_register_token9] = ACTIONS(25),
    [aux_sym_register_token10] = ACTIONS(25),
    [aux_sym_register_token11] = ACTIONS(25),
    [aux_sym_register_token12] = ACTIONS(25),
    [aux_sym_register_token13] = ACTIONS(25),
    [aux_sym_register_token14] = ACTIONS(25),
    [aux_sym_register_token15] = ACTIONS(25),
    [aux_sym_register_token16] = ACTIONS(25),
    [aux_sym_register_token17] = ACTIONS(25),
    [aux_sym_register_token18] = ACTIONS(25),
    [aux_sym_register_token19] = ACTIONS(25),
    [aux_sym_register_token20] = ACTIONS(25),
    [aux_sym_register_token21] = ACTIONS(25),
    [aux_sym_register_token22] = ACTIONS(25),
    [aux_sym_register_token23] = ACTIONS(25),
    [aux_sym_register_token24] = ACTIONS(25),
    [aux_sym_register_token25] = ACTIONS(25),
    [aux_sym_register_token26] = ACTIONS(25),
    [aux_sym_register_token27] = ACTIONS(25),
    [aux_sym_register_token28] = ACTIONS(25),
    [aux_sym_register_token29] = ACTIONS(25),
    [aux_sym_register_token30] = ACTIONS(25),
    [aux_sym_register_token31] = ACTIONS(25),
    [aux_sym_register_token32] = ACTIONS(25),
    [aux_sym_register_token33] = ACTIONS(25),
    [aux_sym_register_token34] = ACTIONS(25),
    [aux_sym_register_token35] = ACTIONS(25),
    [aux_sym_register_token36] = ACTIONS(25),
    [aux_sym_register_token37] = ACTIONS(25),
    [aux_sym_register_token38] = ACTIONS(25),
    [aux_sym_register_token39] = ACTIONS(25),
    [aux_sym_register_token40] = ACTIONS(25),
    [aux_sym_register_token41] = ACTIONS(25),
    [aux_sym_register_token42] = ACTIONS(25),
    [aux_sym_register_token43] = ACTIONS(25),
    [aux_sym_register_token44] = ACTIONS(25),
    [aux_sym_register_token45] = ACTIONS(25),
    [aux_sym_register_token46] = ACTIONS(25),
    [aux_sym_register_token47] = ACTIONS(25),
    [aux_sym_register_token48] = ACTIONS(25),
    [aux_sym_register_token49] = ACTIONS(25),
    [aux_sym_register_token50] = ACTIONS(25),
    [aux_sym_register_token51] = ACTIONS(25),
    [aux_sym_register_token52] = ACTIONS(25),
    [aux_sym_register_token53] = ACTIONS(25),
    [aux_sym_register_token54] = ACTIONS(25),
    [aux_sym_register_token55] = ACTIONS(25),
    [aux_sym_register_token56] = ACTIONS(25),
    [aux_sym_register_token57] = ACTIONS(25),
    [aux_sym_register_token58] = ACTIONS(25),
    [aux_sym_register_token59] = ACTIONS(25),
    [aux_sym_register_token60] = ACTIONS(25),
    [aux_sym_register_token61] = ACTIONS(25),
    [aux_sym_register_token62] = ACTIONS(25),
    [aux_sym_register_token63] = ACTIONS(25),
    [aux_sym_register_token64] = ACTIONS(25),
    [aux_sym_register_token65] = ACTIONS(25),
    [aux_sym_register_token66] = ACTIONS(25),
    [aux_sym_register_token67] = ACTIONS(25),
    [aux_sym_register_token68] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(25),
    [aux_sym_constant_numeric_token1] = ACTIONS(25),
    [aux_sym_constant_numeric_token2] = ACTIONS(25),
    [aux_sym_constant_numeric_token3] = ACTIONS(25),
    [aux_sym_constant_numeric_token4] = ACTIONS(25),
    [aux_sym_constant_numeric_token5] = ACTIONS(25),
    [aux_sym_constant_numeric_token6] = ACTIONS(25),
    [aux_sym_constant_numeric_token7] = ACTIONS(25),
    [aux_sym_constant_numeric_token8] = ACTIONS(25),
    [aux_sym_constant_numeric_token9] = ACTIONS(25),
    [aux_sym_constant_numeric_token10] = ACTIONS(25),
    [aux_sym_constant_charstr_token1] = ACTIONS(25),
    [aux_sym_constant_charstr_token2] = ACTIONS(25),
    [aux_sym_constant_charstr_token3] = ACTIONS(25),
    [aux_sym_known_instruction_token1] = ACTIONS(25),
    [aux_sym_known_instruction_token2] = ACTIONS(25),
    [aux_sym_known_instruction_token3] = ACTIONS(25),
    [aux_sym_known_instruction_token4] = ACTIONS(25),
    [aux_sym_known_instruction_token5] = ACTIONS(25),
    [aux_sym_pseudo_instruction_token1] = ACTIONS(25),
    [aux_sym_pseudo_instruction_token2] = ACTIONS(25),
    [aux_sym_pseudo_instruction_token3] = ACTIONS(25),
    [aux_sym_pseudo_instruction_token4] = ACTIONS(25),
    [aux_sym_pseudo_instruction_token5] = ACTIONS(25),
    [aux_sym_pseudo_instruction_token6] = ACTIONS(25),
    [aux_sym_pseudo_instruction_token7] = ACTIONS(25),
    [aux_sym_pseudo_instruction_token8] = ACTIONS(25),
    [aux_sym_pseudo_instruction_token9] = ACTIONS(25),
    [aux_sym_pseudo_instruction_token10] = ACTIONS(25),
    [aux_sym_pseudo_instruction_token11] = ACTIONS(25),
    [aux_sym_pseudo_instruction_token12] = ACTIONS(25),
    [aux_sym_pseudo_instruction_token13] = ACTIONS(25),
    [aux_sym_pseudo_instruction_token14] = ACTIONS(25),
    [aux_sym_pseudo_instruction_token15] = ACTIONS(25),
    [aux_sym_pseudo_instruction_token16] = ACTIONS(25),
    [aux_sym_pseudo_instruction_token17] = ACTIONS(25),
    [aux_sym_pseudo_instruction_token18] = ACTIONS(25),
    [aux_sym_pseudo_instruction_token19] = ACTIONS(25),
    [sym_comment] = ACTIONS(19),
    [aux_sym_word_token1] = ACTIONS(25),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(27),
    [aux_sym_source_file_token1] = ACTIONS(27),
    [anon_sym_COLON] = ACTIONS(29),
    [aux_sym_instruction_prefix_token1] = ACTIONS(31),
    [aux_sym_instruction_prefix_token2] = ACTIONS(31),
    [aux_sym_instruction_prefix_token3] = ACTIONS(31),
    [aux_sym_instruction_prefix_token4] = ACTIONS(31),
    [aux_sym_instruction_prefix_token5] = ACTIONS(31),
    [aux_sym_instruction_prefix_token6] = ACTIONS(31),
    [aux_sym_instruction_prefix_token7] = ACTIONS(31),
    [aux_sym_instruction_prefix_token8] = ACTIONS(31),
    [aux_sym_instruction_prefix_token9] = ACTIONS(31),
    [aux_sym_instruction_prefix_token10] = ACTIONS(31),
    [aux_sym_instruction_prefix_token11] = ACTIONS(31),
    [aux_sym_instruction_prefix_token12] = ACTIONS(31),
    [aux_sym_instruction_prefix_token13] = ACTIONS(31),
    [aux_sym_instruction_prefix_token14] = ACTIONS(31),
    [aux_sym_instruction_prefix_token15] = ACTIONS(31),
    [aux_sym_instruction_prefix_token16] = ACTIONS(31),
    [aux_sym_instruction_prefix_token17] = ACTIONS(31),
    [aux_sym_instruction_prefix_token18] = ACTIONS(31),
    [aux_sym_instruction_prefix_token19] = ACTIONS(31),
    [aux_sym_instruction_prefix_token20] = ACTIONS(31),
    [aux_sym_instruction_prefix_token21] = ACTIONS(31),
    [aux_sym_instruction_prefix_token22] = ACTIONS(31),
    [anon_sym_strict] = ACTIONS(33),
    [aux_sym_operand_prefix_token1] = ACTIONS(33),
    [aux_sym_operand_prefix_token2] = ACTIONS(33),
    [aux_sym_operand_prefix_token3] = ACTIONS(33),
    [aux_sym_operand_prefix_token4] = ACTIONS(33),
    [aux_sym_operand_prefix_token5] = ACTIONS(33),
    [aux_sym_operand_prefix_token6] = ACTIONS(33),
    [aux_sym_operand_prefix_token7] = ACTIONS(33),
    [aux_sym_operand_prefix_token8] = ACTIONS(33),
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
    [aux_sym_constant_numeric_token1] = ACTIONS(33),
    [aux_sym_constant_numeric_token2] = ACTIONS(33),
    [aux_sym_constant_numeric_token3] = ACTIONS(33),
    [aux_sym_constant_numeric_token4] = ACTIONS(33),
    [aux_sym_constant_numeric_token5] = ACTIONS(33),
    [aux_sym_constant_numeric_token6] = ACTIONS(33),
    [aux_sym_constant_numeric_token7] = ACTIONS(33),
    [aux_sym_constant_numeric_token8] = ACTIONS(33),
    [aux_sym_constant_numeric_token9] = ACTIONS(33),
    [aux_sym_constant_numeric_token10] = ACTIONS(33),
    [aux_sym_constant_charstr_token1] = ACTIONS(33),
    [aux_sym_constant_charstr_token2] = ACTIONS(33),
    [aux_sym_constant_charstr_token3] = ACTIONS(33),
    [aux_sym_known_instruction_token1] = ACTIONS(31),
    [aux_sym_known_instruction_token2] = ACTIONS(31),
    [aux_sym_known_instruction_token3] = ACTIONS(31),
    [aux_sym_known_instruction_token4] = ACTIONS(31),
    [aux_sym_known_instruction_token5] = ACTIONS(31),
    [aux_sym_pseudo_instruction_token1] = ACTIONS(31),
    [aux_sym_pseudo_instruction_token2] = ACTIONS(31),
    [aux_sym_pseudo_instruction_token3] = ACTIONS(31),
    [aux_sym_pseudo_instruction_token4] = ACTIONS(31),
    [aux_sym_pseudo_instruction_token5] = ACTIONS(31),
    [aux_sym_pseudo_instruction_token6] = ACTIONS(31),
    [aux_sym_pseudo_instruction_token7] = ACTIONS(31),
    [aux_sym_pseudo_instruction_token8] = ACTIONS(31),
    [aux_sym_pseudo_instruction_token9] = ACTIONS(31),
    [aux_sym_pseudo_instruction_token10] = ACTIONS(31),
    [aux_sym_pseudo_instruction_token11] = ACTIONS(31),
    [aux_sym_pseudo_instruction_token12] = ACTIONS(31),
    [aux_sym_pseudo_instruction_token13] = ACTIONS(31),
    [aux_sym_pseudo_instruction_token14] = ACTIONS(31),
    [aux_sym_pseudo_instruction_token15] = ACTIONS(31),
    [aux_sym_pseudo_instruction_token16] = ACTIONS(31),
    [aux_sym_pseudo_instruction_token17] = ACTIONS(31),
    [aux_sym_pseudo_instruction_token18] = ACTIONS(31),
    [aux_sym_pseudo_instruction_token19] = ACTIONS(31),
    [sym_comment] = ACTIONS(19),
    [aux_sym_word_token1] = ACTIONS(31),
  },
  [5] = {
    [aux_sym_source_file_token1] = ACTIONS(27),
    [anon_sym_COLON] = ACTIONS(35),
    [aux_sym_instruction_prefix_token1] = ACTIONS(31),
    [aux_sym_instruction_prefix_token2] = ACTIONS(31),
    [aux_sym_instruction_prefix_token3] = ACTIONS(31),
    [aux_sym_instruction_prefix_token4] = ACTIONS(31),
    [aux_sym_instruction_prefix_token5] = ACTIONS(31),
    [aux_sym_instruction_prefix_token6] = ACTIONS(31),
    [aux_sym_instruction_prefix_token7] = ACTIONS(31),
    [aux_sym_instruction_prefix_token8] = ACTIONS(31),
    [aux_sym_instruction_prefix_token9] = ACTIONS(31),
    [aux_sym_instruction_prefix_token10] = ACTIONS(31),
    [aux_sym_instruction_prefix_token11] = ACTIONS(31),
    [aux_sym_instruction_prefix_token12] = ACTIONS(31),
    [aux_sym_instruction_prefix_token13] = ACTIONS(31),
    [aux_sym_instruction_prefix_token14] = ACTIONS(31),
    [aux_sym_instruction_prefix_token15] = ACTIONS(31),
    [aux_sym_instruction_prefix_token16] = ACTIONS(31),
    [aux_sym_instruction_prefix_token17] = ACTIONS(31),
    [aux_sym_instruction_prefix_token18] = ACTIONS(31),
    [aux_sym_instruction_prefix_token19] = ACTIONS(31),
    [aux_sym_instruction_prefix_token20] = ACTIONS(31),
    [aux_sym_instruction_prefix_token21] = ACTIONS(31),
    [aux_sym_instruction_prefix_token22] = ACTIONS(31),
    [anon_sym_strict] = ACTIONS(33),
    [aux_sym_operand_prefix_token1] = ACTIONS(33),
    [aux_sym_operand_prefix_token2] = ACTIONS(33),
    [aux_sym_operand_prefix_token3] = ACTIONS(33),
    [aux_sym_operand_prefix_token4] = ACTIONS(33),
    [aux_sym_operand_prefix_token5] = ACTIONS(33),
    [aux_sym_operand_prefix_token6] = ACTIONS(33),
    [aux_sym_operand_prefix_token7] = ACTIONS(33),
    [aux_sym_operand_prefix_token8] = ACTIONS(33),
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
    [aux_sym_constant_numeric_token1] = ACTIONS(33),
    [aux_sym_constant_numeric_token2] = ACTIONS(33),
    [aux_sym_constant_numeric_token3] = ACTIONS(33),
    [aux_sym_constant_numeric_token4] = ACTIONS(33),
    [aux_sym_constant_numeric_token5] = ACTIONS(33),
    [aux_sym_constant_numeric_token6] = ACTIONS(33),
    [aux_sym_constant_numeric_token7] = ACTIONS(33),
    [aux_sym_constant_numeric_token8] = ACTIONS(33),
    [aux_sym_constant_numeric_token9] = ACTIONS(33),
    [aux_sym_constant_numeric_token10] = ACTIONS(33),
    [aux_sym_constant_charstr_token1] = ACTIONS(33),
    [aux_sym_constant_charstr_token2] = ACTIONS(33),
    [aux_sym_constant_charstr_token3] = ACTIONS(33),
    [aux_sym_known_instruction_token1] = ACTIONS(31),
    [aux_sym_known_instruction_token2] = ACTIONS(31),
    [aux_sym_known_instruction_token3] = ACTIONS(31),
    [aux_sym_known_instruction_token4] = ACTIONS(31),
    [aux_sym_known_instruction_token5] = ACTIONS(31),
    [aux_sym_pseudo_instruction_token1] = ACTIONS(31),
    [aux_sym_pseudo_instruction_token2] = ACTIONS(31),
    [aux_sym_pseudo_instruction_token3] = ACTIONS(31),
    [aux_sym_pseudo_instruction_token4] = ACTIONS(31),
    [aux_sym_pseudo_instruction_token5] = ACTIONS(31),
    [aux_sym_pseudo_instruction_token6] = ACTIONS(31),
    [aux_sym_pseudo_instruction_token7] = ACTIONS(31),
    [aux_sym_pseudo_instruction_token8] = ACTIONS(31),
    [aux_sym_pseudo_instruction_token9] = ACTIONS(31),
    [aux_sym_pseudo_instruction_token10] = ACTIONS(31),
    [aux_sym_pseudo_instruction_token11] = ACTIONS(31),
    [aux_sym_pseudo_instruction_token12] = ACTIONS(31),
    [aux_sym_pseudo_instruction_token13] = ACTIONS(31),
    [aux_sym_pseudo_instruction_token14] = ACTIONS(31),
    [aux_sym_pseudo_instruction_token15] = ACTIONS(31),
    [aux_sym_pseudo_instruction_token16] = ACTIONS(31),
    [aux_sym_pseudo_instruction_token17] = ACTIONS(31),
    [aux_sym_pseudo_instruction_token18] = ACTIONS(31),
    [aux_sym_pseudo_instruction_token19] = ACTIONS(31),
    [sym_comment] = ACTIONS(19),
    [aux_sym_word_token1] = ACTIONS(31),
  },
  [6] = {
    [sym_operands] = STATE(77),
    [sym_operand] = STATE(38),
    [sym_operand_prefix] = STATE(21),
    [sym_register] = STATE(59),
    [sym_effective_address] = STATE(59),
    [sym_constant] = STATE(59),
    [sym_constant_numeric] = STATE(58),
    [sym_constant_charstr] = STATE(58),
    [sym_word] = STATE(57),
    [sym_expression] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(37),
    [aux_sym_source_file_token1] = ACTIONS(37),
    [anon_sym_strict] = ACTIONS(39),
    [aux_sym_operand_prefix_token1] = ACTIONS(41),
    [aux_sym_operand_prefix_token2] = ACTIONS(41),
    [aux_sym_operand_prefix_token3] = ACTIONS(41),
    [aux_sym_operand_prefix_token4] = ACTIONS(41),
    [aux_sym_operand_prefix_token5] = ACTIONS(41),
    [aux_sym_operand_prefix_token6] = ACTIONS(41),
    [aux_sym_operand_prefix_token7] = ACTIONS(41),
    [aux_sym_operand_prefix_token8] = ACTIONS(41),
    [aux_sym_register_token1] = ACTIONS(43),
    [aux_sym_register_token2] = ACTIONS(43),
    [aux_sym_register_token3] = ACTIONS(43),
    [aux_sym_register_token4] = ACTIONS(43),
    [aux_sym_register_token5] = ACTIONS(43),
    [aux_sym_register_token6] = ACTIONS(43),
    [aux_sym_register_token7] = ACTIONS(43),
    [aux_sym_register_token8] = ACTIONS(43),
    [aux_sym_register_token9] = ACTIONS(43),
    [aux_sym_register_token10] = ACTIONS(43),
    [aux_sym_register_token11] = ACTIONS(43),
    [aux_sym_register_token12] = ACTIONS(43),
    [aux_sym_register_token13] = ACTIONS(43),
    [aux_sym_register_token14] = ACTIONS(43),
    [aux_sym_register_token15] = ACTIONS(43),
    [aux_sym_register_token16] = ACTIONS(43),
    [aux_sym_register_token17] = ACTIONS(43),
    [aux_sym_register_token18] = ACTIONS(43),
    [aux_sym_register_token19] = ACTIONS(43),
    [aux_sym_register_token20] = ACTIONS(43),
    [aux_sym_register_token21] = ACTIONS(43),
    [aux_sym_register_token22] = ACTIONS(43),
    [aux_sym_register_token23] = ACTIONS(43),
    [aux_sym_register_token24] = ACTIONS(43),
    [aux_sym_register_token25] = ACTIONS(43),
    [aux_sym_register_token26] = ACTIONS(43),
    [aux_sym_register_token27] = ACTIONS(43),
    [aux_sym_register_token28] = ACTIONS(43),
    [aux_sym_register_token29] = ACTIONS(43),
    [aux_sym_register_token30] = ACTIONS(43),
    [aux_sym_register_token31] = ACTIONS(43),
    [aux_sym_register_token32] = ACTIONS(43),
    [aux_sym_register_token33] = ACTIONS(43),
    [aux_sym_register_token34] = ACTIONS(43),
    [aux_sym_register_token35] = ACTIONS(43),
    [aux_sym_register_token36] = ACTIONS(43),
    [aux_sym_register_token37] = ACTIONS(43),
    [aux_sym_register_token38] = ACTIONS(43),
    [aux_sym_register_token39] = ACTIONS(43),
    [aux_sym_register_token40] = ACTIONS(43),
    [aux_sym_register_token41] = ACTIONS(43),
    [aux_sym_register_token42] = ACTIONS(43),
    [aux_sym_register_token43] = ACTIONS(43),
    [aux_sym_register_token44] = ACTIONS(43),
    [aux_sym_register_token45] = ACTIONS(43),
    [aux_sym_register_token46] = ACTIONS(43),
    [aux_sym_register_token47] = ACTIONS(43),
    [aux_sym_register_token48] = ACTIONS(43),
    [aux_sym_register_token49] = ACTIONS(43),
    [aux_sym_register_token50] = ACTIONS(43),
    [aux_sym_register_token51] = ACTIONS(43),
    [aux_sym_register_token52] = ACTIONS(43),
    [aux_sym_register_token53] = ACTIONS(43),
    [aux_sym_register_token54] = ACTIONS(43),
    [aux_sym_register_token55] = ACTIONS(43),
    [aux_sym_register_token56] = ACTIONS(43),
    [aux_sym_register_token57] = ACTIONS(43),
    [aux_sym_register_token58] = ACTIONS(43),
    [aux_sym_register_token59] = ACTIONS(43),
    [aux_sym_register_token60] = ACTIONS(43),
    [aux_sym_register_token61] = ACTIONS(43),
    [aux_sym_register_token62] = ACTIONS(43),
    [aux_sym_register_token63] = ACTIONS(43),
    [aux_sym_register_token64] = ACTIONS(43),
    [aux_sym_register_token65] = ACTIONS(43),
    [aux_sym_register_token66] = ACTIONS(43),
    [aux_sym_register_token67] = ACTIONS(43),
    [aux_sym_register_token68] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(45),
    [aux_sym_constant_numeric_token1] = ACTIONS(47),
    [aux_sym_constant_numeric_token2] = ACTIONS(47),
    [aux_sym_constant_numeric_token3] = ACTIONS(47),
    [aux_sym_constant_numeric_token4] = ACTIONS(47),
    [aux_sym_constant_numeric_token5] = ACTIONS(47),
    [aux_sym_constant_numeric_token6] = ACTIONS(47),
    [aux_sym_constant_numeric_token7] = ACTIONS(47),
    [aux_sym_constant_numeric_token8] = ACTIONS(47),
    [aux_sym_constant_numeric_token9] = ACTIONS(47),
    [aux_sym_constant_numeric_token10] = ACTIONS(47),
    [aux_sym_constant_charstr_token1] = ACTIONS(49),
    [aux_sym_constant_charstr_token2] = ACTIONS(49),
    [aux_sym_constant_charstr_token3] = ACTIONS(49),
    [sym_comment] = ACTIONS(19),
    [aux_sym_word_token1] = ACTIONS(21),
  },
  [7] = {
    [sym_operands] = STATE(65),
    [sym_operand] = STATE(38),
    [sym_operand_prefix] = STATE(21),
    [sym_register] = STATE(59),
    [sym_effective_address] = STATE(59),
    [sym_constant] = STATE(59),
    [sym_constant_numeric] = STATE(58),
    [sym_constant_charstr] = STATE(58),
    [sym_word] = STATE(57),
    [sym_expression] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(51),
    [aux_sym_source_file_token1] = ACTIONS(51),
    [anon_sym_strict] = ACTIONS(39),
    [aux_sym_operand_prefix_token1] = ACTIONS(41),
    [aux_sym_operand_prefix_token2] = ACTIONS(41),
    [aux_sym_operand_prefix_token3] = ACTIONS(41),
    [aux_sym_operand_prefix_token4] = ACTIONS(41),
    [aux_sym_operand_prefix_token5] = ACTIONS(41),
    [aux_sym_operand_prefix_token6] = ACTIONS(41),
    [aux_sym_operand_prefix_token7] = ACTIONS(41),
    [aux_sym_operand_prefix_token8] = ACTIONS(41),
    [aux_sym_register_token1] = ACTIONS(43),
    [aux_sym_register_token2] = ACTIONS(43),
    [aux_sym_register_token3] = ACTIONS(43),
    [aux_sym_register_token4] = ACTIONS(43),
    [aux_sym_register_token5] = ACTIONS(43),
    [aux_sym_register_token6] = ACTIONS(43),
    [aux_sym_register_token7] = ACTIONS(43),
    [aux_sym_register_token8] = ACTIONS(43),
    [aux_sym_register_token9] = ACTIONS(43),
    [aux_sym_register_token10] = ACTIONS(43),
    [aux_sym_register_token11] = ACTIONS(43),
    [aux_sym_register_token12] = ACTIONS(43),
    [aux_sym_register_token13] = ACTIONS(43),
    [aux_sym_register_token14] = ACTIONS(43),
    [aux_sym_register_token15] = ACTIONS(43),
    [aux_sym_register_token16] = ACTIONS(43),
    [aux_sym_register_token17] = ACTIONS(43),
    [aux_sym_register_token18] = ACTIONS(43),
    [aux_sym_register_token19] = ACTIONS(43),
    [aux_sym_register_token20] = ACTIONS(43),
    [aux_sym_register_token21] = ACTIONS(43),
    [aux_sym_register_token22] = ACTIONS(43),
    [aux_sym_register_token23] = ACTIONS(43),
    [aux_sym_register_token24] = ACTIONS(43),
    [aux_sym_register_token25] = ACTIONS(43),
    [aux_sym_register_token26] = ACTIONS(43),
    [aux_sym_register_token27] = ACTIONS(43),
    [aux_sym_register_token28] = ACTIONS(43),
    [aux_sym_register_token29] = ACTIONS(43),
    [aux_sym_register_token30] = ACTIONS(43),
    [aux_sym_register_token31] = ACTIONS(43),
    [aux_sym_register_token32] = ACTIONS(43),
    [aux_sym_register_token33] = ACTIONS(43),
    [aux_sym_register_token34] = ACTIONS(43),
    [aux_sym_register_token35] = ACTIONS(43),
    [aux_sym_register_token36] = ACTIONS(43),
    [aux_sym_register_token37] = ACTIONS(43),
    [aux_sym_register_token38] = ACTIONS(43),
    [aux_sym_register_token39] = ACTIONS(43),
    [aux_sym_register_token40] = ACTIONS(43),
    [aux_sym_register_token41] = ACTIONS(43),
    [aux_sym_register_token42] = ACTIONS(43),
    [aux_sym_register_token43] = ACTIONS(43),
    [aux_sym_register_token44] = ACTIONS(43),
    [aux_sym_register_token45] = ACTIONS(43),
    [aux_sym_register_token46] = ACTIONS(43),
    [aux_sym_register_token47] = ACTIONS(43),
    [aux_sym_register_token48] = ACTIONS(43),
    [aux_sym_register_token49] = ACTIONS(43),
    [aux_sym_register_token50] = ACTIONS(43),
    [aux_sym_register_token51] = ACTIONS(43),
    [aux_sym_register_token52] = ACTIONS(43),
    [aux_sym_register_token53] = ACTIONS(43),
    [aux_sym_register_token54] = ACTIONS(43),
    [aux_sym_register_token55] = ACTIONS(43),
    [aux_sym_register_token56] = ACTIONS(43),
    [aux_sym_register_token57] = ACTIONS(43),
    [aux_sym_register_token58] = ACTIONS(43),
    [aux_sym_register_token59] = ACTIONS(43),
    [aux_sym_register_token60] = ACTIONS(43),
    [aux_sym_register_token61] = ACTIONS(43),
    [aux_sym_register_token62] = ACTIONS(43),
    [aux_sym_register_token63] = ACTIONS(43),
    [aux_sym_register_token64] = ACTIONS(43),
    [aux_sym_register_token65] = ACTIONS(43),
    [aux_sym_register_token66] = ACTIONS(43),
    [aux_sym_register_token67] = ACTIONS(43),
    [aux_sym_register_token68] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(45),
    [aux_sym_constant_numeric_token1] = ACTIONS(47),
    [aux_sym_constant_numeric_token2] = ACTIONS(47),
    [aux_sym_constant_numeric_token3] = ACTIONS(47),
    [aux_sym_constant_numeric_token4] = ACTIONS(47),
    [aux_sym_constant_numeric_token5] = ACTIONS(47),
    [aux_sym_constant_numeric_token6] = ACTIONS(47),
    [aux_sym_constant_numeric_token7] = ACTIONS(47),
    [aux_sym_constant_numeric_token8] = ACTIONS(47),
    [aux_sym_constant_numeric_token9] = ACTIONS(47),
    [aux_sym_constant_numeric_token10] = ACTIONS(47),
    [aux_sym_constant_charstr_token1] = ACTIONS(49),
    [aux_sym_constant_charstr_token2] = ACTIONS(49),
    [aux_sym_constant_charstr_token3] = ACTIONS(49),
    [sym_comment] = ACTIONS(19),
    [aux_sym_word_token1] = ACTIONS(21),
  },
  [8] = {
    [sym_operands] = STATE(90),
    [sym_operand] = STATE(61),
    [sym_operand_prefix] = STATE(20),
    [sym_register] = STATE(70),
    [sym_effective_address] = STATE(70),
    [sym_constant] = STATE(70),
    [sym_constant_numeric] = STATE(71),
    [sym_constant_charstr] = STATE(71),
    [sym_word] = STATE(73),
    [sym_expression] = STATE(70),
    [aux_sym_source_file_token1] = ACTIONS(51),
    [anon_sym_strict] = ACTIONS(39),
    [aux_sym_operand_prefix_token1] = ACTIONS(41),
    [aux_sym_operand_prefix_token2] = ACTIONS(41),
    [aux_sym_operand_prefix_token3] = ACTIONS(41),
    [aux_sym_operand_prefix_token4] = ACTIONS(41),
    [aux_sym_operand_prefix_token5] = ACTIONS(41),
    [aux_sym_operand_prefix_token6] = ACTIONS(41),
    [aux_sym_operand_prefix_token7] = ACTIONS(41),
    [aux_sym_operand_prefix_token8] = ACTIONS(41),
    [aux_sym_register_token1] = ACTIONS(53),
    [aux_sym_register_token2] = ACTIONS(53),
    [aux_sym_register_token3] = ACTIONS(53),
    [aux_sym_register_token4] = ACTIONS(53),
    [aux_sym_register_token5] = ACTIONS(53),
    [aux_sym_register_token6] = ACTIONS(53),
    [aux_sym_register_token7] = ACTIONS(53),
    [aux_sym_register_token8] = ACTIONS(53),
    [aux_sym_register_token9] = ACTIONS(53),
    [aux_sym_register_token10] = ACTIONS(53),
    [aux_sym_register_token11] = ACTIONS(53),
    [aux_sym_register_token12] = ACTIONS(53),
    [aux_sym_register_token13] = ACTIONS(53),
    [aux_sym_register_token14] = ACTIONS(53),
    [aux_sym_register_token15] = ACTIONS(53),
    [aux_sym_register_token16] = ACTIONS(53),
    [aux_sym_register_token17] = ACTIONS(53),
    [aux_sym_register_token18] = ACTIONS(53),
    [aux_sym_register_token19] = ACTIONS(53),
    [aux_sym_register_token20] = ACTIONS(53),
    [aux_sym_register_token21] = ACTIONS(53),
    [aux_sym_register_token22] = ACTIONS(53),
    [aux_sym_register_token23] = ACTIONS(53),
    [aux_sym_register_token24] = ACTIONS(53),
    [aux_sym_register_token25] = ACTIONS(53),
    [aux_sym_register_token26] = ACTIONS(53),
    [aux_sym_register_token27] = ACTIONS(53),
    [aux_sym_register_token28] = ACTIONS(53),
    [aux_sym_register_token29] = ACTIONS(53),
    [aux_sym_register_token30] = ACTIONS(53),
    [aux_sym_register_token31] = ACTIONS(53),
    [aux_sym_register_token32] = ACTIONS(53),
    [aux_sym_register_token33] = ACTIONS(53),
    [aux_sym_register_token34] = ACTIONS(53),
    [aux_sym_register_token35] = ACTIONS(53),
    [aux_sym_register_token36] = ACTIONS(53),
    [aux_sym_register_token37] = ACTIONS(53),
    [aux_sym_register_token38] = ACTIONS(53),
    [aux_sym_register_token39] = ACTIONS(53),
    [aux_sym_register_token40] = ACTIONS(53),
    [aux_sym_register_token41] = ACTIONS(53),
    [aux_sym_register_token42] = ACTIONS(53),
    [aux_sym_register_token43] = ACTIONS(53),
    [aux_sym_register_token44] = ACTIONS(53),
    [aux_sym_register_token45] = ACTIONS(53),
    [aux_sym_register_token46] = ACTIONS(53),
    [aux_sym_register_token47] = ACTIONS(53),
    [aux_sym_register_token48] = ACTIONS(53),
    [aux_sym_register_token49] = ACTIONS(53),
    [aux_sym_register_token50] = ACTIONS(53),
    [aux_sym_register_token51] = ACTIONS(53),
    [aux_sym_register_token52] = ACTIONS(53),
    [aux_sym_register_token53] = ACTIONS(53),
    [aux_sym_register_token54] = ACTIONS(53),
    [aux_sym_register_token55] = ACTIONS(53),
    [aux_sym_register_token56] = ACTIONS(53),
    [aux_sym_register_token57] = ACTIONS(53),
    [aux_sym_register_token58] = ACTIONS(53),
    [aux_sym_register_token59] = ACTIONS(53),
    [aux_sym_register_token60] = ACTIONS(53),
    [aux_sym_register_token61] = ACTIONS(53),
    [aux_sym_register_token62] = ACTIONS(53),
    [aux_sym_register_token63] = ACTIONS(53),
    [aux_sym_register_token64] = ACTIONS(53),
    [aux_sym_register_token65] = ACTIONS(53),
    [aux_sym_register_token66] = ACTIONS(53),
    [aux_sym_register_token67] = ACTIONS(53),
    [aux_sym_register_token68] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(55),
    [aux_sym_constant_numeric_token1] = ACTIONS(57),
    [aux_sym_constant_numeric_token2] = ACTIONS(57),
    [aux_sym_constant_numeric_token3] = ACTIONS(57),
    [aux_sym_constant_numeric_token4] = ACTIONS(57),
    [aux_sym_constant_numeric_token5] = ACTIONS(57),
    [aux_sym_constant_numeric_token6] = ACTIONS(57),
    [aux_sym_constant_numeric_token7] = ACTIONS(57),
    [aux_sym_constant_numeric_token8] = ACTIONS(57),
    [aux_sym_constant_numeric_token9] = ACTIONS(57),
    [aux_sym_constant_numeric_token10] = ACTIONS(57),
    [aux_sym_constant_charstr_token1] = ACTIONS(59),
    [aux_sym_constant_charstr_token2] = ACTIONS(59),
    [aux_sym_constant_charstr_token3] = ACTIONS(59),
    [sym_comment] = ACTIONS(19),
    [aux_sym_word_token1] = ACTIONS(61),
  },
  [9] = {
    [sym_operands] = STATE(83),
    [sym_operand] = STATE(61),
    [sym_operand_prefix] = STATE(20),
    [sym_register] = STATE(70),
    [sym_effective_address] = STATE(70),
    [sym_constant] = STATE(70),
    [sym_constant_numeric] = STATE(71),
    [sym_constant_charstr] = STATE(71),
    [sym_word] = STATE(73),
    [sym_expression] = STATE(70),
    [aux_sym_source_file_token1] = ACTIONS(37),
    [anon_sym_strict] = ACTIONS(39),
    [aux_sym_operand_prefix_token1] = ACTIONS(41),
    [aux_sym_operand_prefix_token2] = ACTIONS(41),
    [aux_sym_operand_prefix_token3] = ACTIONS(41),
    [aux_sym_operand_prefix_token4] = ACTIONS(41),
    [aux_sym_operand_prefix_token5] = ACTIONS(41),
    [aux_sym_operand_prefix_token6] = ACTIONS(41),
    [aux_sym_operand_prefix_token7] = ACTIONS(41),
    [aux_sym_operand_prefix_token8] = ACTIONS(41),
    [aux_sym_register_token1] = ACTIONS(53),
    [aux_sym_register_token2] = ACTIONS(53),
    [aux_sym_register_token3] = ACTIONS(53),
    [aux_sym_register_token4] = ACTIONS(53),
    [aux_sym_register_token5] = ACTIONS(53),
    [aux_sym_register_token6] = ACTIONS(53),
    [aux_sym_register_token7] = ACTIONS(53),
    [aux_sym_register_token8] = ACTIONS(53),
    [aux_sym_register_token9] = ACTIONS(53),
    [aux_sym_register_token10] = ACTIONS(53),
    [aux_sym_register_token11] = ACTIONS(53),
    [aux_sym_register_token12] = ACTIONS(53),
    [aux_sym_register_token13] = ACTIONS(53),
    [aux_sym_register_token14] = ACTIONS(53),
    [aux_sym_register_token15] = ACTIONS(53),
    [aux_sym_register_token16] = ACTIONS(53),
    [aux_sym_register_token17] = ACTIONS(53),
    [aux_sym_register_token18] = ACTIONS(53),
    [aux_sym_register_token19] = ACTIONS(53),
    [aux_sym_register_token20] = ACTIONS(53),
    [aux_sym_register_token21] = ACTIONS(53),
    [aux_sym_register_token22] = ACTIONS(53),
    [aux_sym_register_token23] = ACTIONS(53),
    [aux_sym_register_token24] = ACTIONS(53),
    [aux_sym_register_token25] = ACTIONS(53),
    [aux_sym_register_token26] = ACTIONS(53),
    [aux_sym_register_token27] = ACTIONS(53),
    [aux_sym_register_token28] = ACTIONS(53),
    [aux_sym_register_token29] = ACTIONS(53),
    [aux_sym_register_token30] = ACTIONS(53),
    [aux_sym_register_token31] = ACTIONS(53),
    [aux_sym_register_token32] = ACTIONS(53),
    [aux_sym_register_token33] = ACTIONS(53),
    [aux_sym_register_token34] = ACTIONS(53),
    [aux_sym_register_token35] = ACTIONS(53),
    [aux_sym_register_token36] = ACTIONS(53),
    [aux_sym_register_token37] = ACTIONS(53),
    [aux_sym_register_token38] = ACTIONS(53),
    [aux_sym_register_token39] = ACTIONS(53),
    [aux_sym_register_token40] = ACTIONS(53),
    [aux_sym_register_token41] = ACTIONS(53),
    [aux_sym_register_token42] = ACTIONS(53),
    [aux_sym_register_token43] = ACTIONS(53),
    [aux_sym_register_token44] = ACTIONS(53),
    [aux_sym_register_token45] = ACTIONS(53),
    [aux_sym_register_token46] = ACTIONS(53),
    [aux_sym_register_token47] = ACTIONS(53),
    [aux_sym_register_token48] = ACTIONS(53),
    [aux_sym_register_token49] = ACTIONS(53),
    [aux_sym_register_token50] = ACTIONS(53),
    [aux_sym_register_token51] = ACTIONS(53),
    [aux_sym_register_token52] = ACTIONS(53),
    [aux_sym_register_token53] = ACTIONS(53),
    [aux_sym_register_token54] = ACTIONS(53),
    [aux_sym_register_token55] = ACTIONS(53),
    [aux_sym_register_token56] = ACTIONS(53),
    [aux_sym_register_token57] = ACTIONS(53),
    [aux_sym_register_token58] = ACTIONS(53),
    [aux_sym_register_token59] = ACTIONS(53),
    [aux_sym_register_token60] = ACTIONS(53),
    [aux_sym_register_token61] = ACTIONS(53),
    [aux_sym_register_token62] = ACTIONS(53),
    [aux_sym_register_token63] = ACTIONS(53),
    [aux_sym_register_token64] = ACTIONS(53),
    [aux_sym_register_token65] = ACTIONS(53),
    [aux_sym_register_token66] = ACTIONS(53),
    [aux_sym_register_token67] = ACTIONS(53),
    [aux_sym_register_token68] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(55),
    [aux_sym_constant_numeric_token1] = ACTIONS(57),
    [aux_sym_constant_numeric_token2] = ACTIONS(57),
    [aux_sym_constant_numeric_token3] = ACTIONS(57),
    [aux_sym_constant_numeric_token4] = ACTIONS(57),
    [aux_sym_constant_numeric_token5] = ACTIONS(57),
    [aux_sym_constant_numeric_token6] = ACTIONS(57),
    [aux_sym_constant_numeric_token7] = ACTIONS(57),
    [aux_sym_constant_numeric_token8] = ACTIONS(57),
    [aux_sym_constant_numeric_token9] = ACTIONS(57),
    [aux_sym_constant_numeric_token10] = ACTIONS(57),
    [aux_sym_constant_charstr_token1] = ACTIONS(59),
    [aux_sym_constant_charstr_token2] = ACTIONS(59),
    [aux_sym_constant_charstr_token3] = ACTIONS(59),
    [sym_comment] = ACTIONS(19),
    [aux_sym_word_token1] = ACTIONS(61),
  },
  [10] = {
    [sym_operand] = STATE(81),
    [sym_operand_prefix] = STATE(20),
    [sym_register] = STATE(70),
    [sym_effective_address] = STATE(70),
    [sym_constant] = STATE(70),
    [sym_constant_numeric] = STATE(71),
    [sym_constant_charstr] = STATE(71),
    [sym_word] = STATE(73),
    [sym_expression] = STATE(70),
    [anon_sym_strict] = ACTIONS(39),
    [aux_sym_operand_prefix_token1] = ACTIONS(41),
    [aux_sym_operand_prefix_token2] = ACTIONS(41),
    [aux_sym_operand_prefix_token3] = ACTIONS(41),
    [aux_sym_operand_prefix_token4] = ACTIONS(41),
    [aux_sym_operand_prefix_token5] = ACTIONS(41),
    [aux_sym_operand_prefix_token6] = ACTIONS(41),
    [aux_sym_operand_prefix_token7] = ACTIONS(41),
    [aux_sym_operand_prefix_token8] = ACTIONS(41),
    [aux_sym_register_token1] = ACTIONS(53),
    [aux_sym_register_token2] = ACTIONS(53),
    [aux_sym_register_token3] = ACTIONS(53),
    [aux_sym_register_token4] = ACTIONS(53),
    [aux_sym_register_token5] = ACTIONS(53),
    [aux_sym_register_token6] = ACTIONS(53),
    [aux_sym_register_token7] = ACTIONS(53),
    [aux_sym_register_token8] = ACTIONS(53),
    [aux_sym_register_token9] = ACTIONS(53),
    [aux_sym_register_token10] = ACTIONS(53),
    [aux_sym_register_token11] = ACTIONS(53),
    [aux_sym_register_token12] = ACTIONS(53),
    [aux_sym_register_token13] = ACTIONS(53),
    [aux_sym_register_token14] = ACTIONS(53),
    [aux_sym_register_token15] = ACTIONS(53),
    [aux_sym_register_token16] = ACTIONS(53),
    [aux_sym_register_token17] = ACTIONS(53),
    [aux_sym_register_token18] = ACTIONS(53),
    [aux_sym_register_token19] = ACTIONS(53),
    [aux_sym_register_token20] = ACTIONS(53),
    [aux_sym_register_token21] = ACTIONS(53),
    [aux_sym_register_token22] = ACTIONS(53),
    [aux_sym_register_token23] = ACTIONS(53),
    [aux_sym_register_token24] = ACTIONS(53),
    [aux_sym_register_token25] = ACTIONS(53),
    [aux_sym_register_token26] = ACTIONS(53),
    [aux_sym_register_token27] = ACTIONS(53),
    [aux_sym_register_token28] = ACTIONS(53),
    [aux_sym_register_token29] = ACTIONS(53),
    [aux_sym_register_token30] = ACTIONS(53),
    [aux_sym_register_token31] = ACTIONS(53),
    [aux_sym_register_token32] = ACTIONS(53),
    [aux_sym_register_token33] = ACTIONS(53),
    [aux_sym_register_token34] = ACTIONS(53),
    [aux_sym_register_token35] = ACTIONS(53),
    [aux_sym_register_token36] = ACTIONS(53),
    [aux_sym_register_token37] = ACTIONS(53),
    [aux_sym_register_token38] = ACTIONS(53),
    [aux_sym_register_token39] = ACTIONS(53),
    [aux_sym_register_token40] = ACTIONS(53),
    [aux_sym_register_token41] = ACTIONS(53),
    [aux_sym_register_token42] = ACTIONS(53),
    [aux_sym_register_token43] = ACTIONS(53),
    [aux_sym_register_token44] = ACTIONS(53),
    [aux_sym_register_token45] = ACTIONS(53),
    [aux_sym_register_token46] = ACTIONS(53),
    [aux_sym_register_token47] = ACTIONS(53),
    [aux_sym_register_token48] = ACTIONS(53),
    [aux_sym_register_token49] = ACTIONS(53),
    [aux_sym_register_token50] = ACTIONS(53),
    [aux_sym_register_token51] = ACTIONS(53),
    [aux_sym_register_token52] = ACTIONS(53),
    [aux_sym_register_token53] = ACTIONS(53),
    [aux_sym_register_token54] = ACTIONS(53),
    [aux_sym_register_token55] = ACTIONS(53),
    [aux_sym_register_token56] = ACTIONS(53),
    [aux_sym_register_token57] = ACTIONS(53),
    [aux_sym_register_token58] = ACTIONS(53),
    [aux_sym_register_token59] = ACTIONS(53),
    [aux_sym_register_token60] = ACTIONS(53),
    [aux_sym_register_token61] = ACTIONS(53),
    [aux_sym_register_token62] = ACTIONS(53),
    [aux_sym_register_token63] = ACTIONS(53),
    [aux_sym_register_token64] = ACTIONS(53),
    [aux_sym_register_token65] = ACTIONS(53),
    [aux_sym_register_token66] = ACTIONS(53),
    [aux_sym_register_token67] = ACTIONS(53),
    [aux_sym_register_token68] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(63),
    [aux_sym_constant_numeric_token1] = ACTIONS(57),
    [aux_sym_constant_numeric_token2] = ACTIONS(57),
    [aux_sym_constant_numeric_token3] = ACTIONS(65),
    [aux_sym_constant_numeric_token4] = ACTIONS(57),
    [aux_sym_constant_numeric_token5] = ACTIONS(57),
    [aux_sym_constant_numeric_token6] = ACTIONS(57),
    [aux_sym_constant_numeric_token7] = ACTIONS(65),
    [aux_sym_constant_numeric_token8] = ACTIONS(57),
    [aux_sym_constant_numeric_token9] = ACTIONS(57),
    [aux_sym_constant_numeric_token10] = ACTIONS(57),
    [aux_sym_constant_charstr_token1] = ACTIONS(67),
    [aux_sym_constant_charstr_token2] = ACTIONS(67),
    [aux_sym_constant_charstr_token3] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [aux_sym_word_token1] = ACTIONS(61),
  },
  [11] = {
    [sym_operand] = STATE(48),
    [sym_operand_prefix] = STATE(21),
    [sym_register] = STATE(59),
    [sym_effective_address] = STATE(59),
    [sym_constant] = STATE(59),
    [sym_constant_numeric] = STATE(58),
    [sym_constant_charstr] = STATE(58),
    [sym_word] = STATE(57),
    [sym_expression] = STATE(59),
    [anon_sym_strict] = ACTIONS(39),
    [aux_sym_operand_prefix_token1] = ACTIONS(41),
    [aux_sym_operand_prefix_token2] = ACTIONS(41),
    [aux_sym_operand_prefix_token3] = ACTIONS(41),
    [aux_sym_operand_prefix_token4] = ACTIONS(41),
    [aux_sym_operand_prefix_token5] = ACTIONS(41),
    [aux_sym_operand_prefix_token6] = ACTIONS(41),
    [aux_sym_operand_prefix_token7] = ACTIONS(41),
    [aux_sym_operand_prefix_token8] = ACTIONS(41),
    [aux_sym_register_token1] = ACTIONS(43),
    [aux_sym_register_token2] = ACTIONS(43),
    [aux_sym_register_token3] = ACTIONS(43),
    [aux_sym_register_token4] = ACTIONS(43),
    [aux_sym_register_token5] = ACTIONS(43),
    [aux_sym_register_token6] = ACTIONS(43),
    [aux_sym_register_token7] = ACTIONS(43),
    [aux_sym_register_token8] = ACTIONS(43),
    [aux_sym_register_token9] = ACTIONS(43),
    [aux_sym_register_token10] = ACTIONS(43),
    [aux_sym_register_token11] = ACTIONS(43),
    [aux_sym_register_token12] = ACTIONS(43),
    [aux_sym_register_token13] = ACTIONS(43),
    [aux_sym_register_token14] = ACTIONS(43),
    [aux_sym_register_token15] = ACTIONS(43),
    [aux_sym_register_token16] = ACTIONS(43),
    [aux_sym_register_token17] = ACTIONS(43),
    [aux_sym_register_token18] = ACTIONS(43),
    [aux_sym_register_token19] = ACTIONS(43),
    [aux_sym_register_token20] = ACTIONS(43),
    [aux_sym_register_token21] = ACTIONS(43),
    [aux_sym_register_token22] = ACTIONS(43),
    [aux_sym_register_token23] = ACTIONS(43),
    [aux_sym_register_token24] = ACTIONS(43),
    [aux_sym_register_token25] = ACTIONS(43),
    [aux_sym_register_token26] = ACTIONS(43),
    [aux_sym_register_token27] = ACTIONS(43),
    [aux_sym_register_token28] = ACTIONS(43),
    [aux_sym_register_token29] = ACTIONS(43),
    [aux_sym_register_token30] = ACTIONS(43),
    [aux_sym_register_token31] = ACTIONS(43),
    [aux_sym_register_token32] = ACTIONS(43),
    [aux_sym_register_token33] = ACTIONS(43),
    [aux_sym_register_token34] = ACTIONS(43),
    [aux_sym_register_token35] = ACTIONS(43),
    [aux_sym_register_token36] = ACTIONS(43),
    [aux_sym_register_token37] = ACTIONS(43),
    [aux_sym_register_token38] = ACTIONS(43),
    [aux_sym_register_token39] = ACTIONS(43),
    [aux_sym_register_token40] = ACTIONS(43),
    [aux_sym_register_token41] = ACTIONS(43),
    [aux_sym_register_token42] = ACTIONS(43),
    [aux_sym_register_token43] = ACTIONS(43),
    [aux_sym_register_token44] = ACTIONS(43),
    [aux_sym_register_token45] = ACTIONS(43),
    [aux_sym_register_token46] = ACTIONS(43),
    [aux_sym_register_token47] = ACTIONS(43),
    [aux_sym_register_token48] = ACTIONS(43),
    [aux_sym_register_token49] = ACTIONS(43),
    [aux_sym_register_token50] = ACTIONS(43),
    [aux_sym_register_token51] = ACTIONS(43),
    [aux_sym_register_token52] = ACTIONS(43),
    [aux_sym_register_token53] = ACTIONS(43),
    [aux_sym_register_token54] = ACTIONS(43),
    [aux_sym_register_token55] = ACTIONS(43),
    [aux_sym_register_token56] = ACTIONS(43),
    [aux_sym_register_token57] = ACTIONS(43),
    [aux_sym_register_token58] = ACTIONS(43),
    [aux_sym_register_token59] = ACTIONS(43),
    [aux_sym_register_token60] = ACTIONS(43),
    [aux_sym_register_token61] = ACTIONS(43),
    [aux_sym_register_token62] = ACTIONS(43),
    [aux_sym_register_token63] = ACTIONS(43),
    [aux_sym_register_token64] = ACTIONS(43),
    [aux_sym_register_token65] = ACTIONS(43),
    [aux_sym_register_token66] = ACTIONS(43),
    [aux_sym_register_token67] = ACTIONS(43),
    [aux_sym_register_token68] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(69),
    [aux_sym_constant_numeric_token1] = ACTIONS(47),
    [aux_sym_constant_numeric_token2] = ACTIONS(47),
    [aux_sym_constant_numeric_token3] = ACTIONS(71),
    [aux_sym_constant_numeric_token4] = ACTIONS(47),
    [aux_sym_constant_numeric_token5] = ACTIONS(47),
    [aux_sym_constant_numeric_token6] = ACTIONS(47),
    [aux_sym_constant_numeric_token7] = ACTIONS(71),
    [aux_sym_constant_numeric_token8] = ACTIONS(47),
    [aux_sym_constant_numeric_token9] = ACTIONS(47),
    [aux_sym_constant_numeric_token10] = ACTIONS(47),
    [aux_sym_constant_charstr_token1] = ACTIONS(73),
    [aux_sym_constant_charstr_token2] = ACTIONS(73),
    [aux_sym_constant_charstr_token3] = ACTIONS(73),
    [sym_comment] = ACTIONS(3),
    [aux_sym_word_token1] = ACTIONS(21),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [aux_sym_source_file_token1] = ACTIONS(75),
    [anon_sym_strict] = ACTIONS(77),
    [aux_sym_operand_prefix_token1] = ACTIONS(77),
    [aux_sym_operand_prefix_token2] = ACTIONS(77),
    [aux_sym_operand_prefix_token3] = ACTIONS(77),
    [aux_sym_operand_prefix_token4] = ACTIONS(77),
    [aux_sym_operand_prefix_token5] = ACTIONS(77),
    [aux_sym_operand_prefix_token6] = ACTIONS(77),
    [aux_sym_operand_prefix_token7] = ACTIONS(77),
    [aux_sym_operand_prefix_token8] = ACTIONS(77),
    [aux_sym_register_token1] = ACTIONS(77),
    [aux_sym_register_token2] = ACTIONS(77),
    [aux_sym_register_token3] = ACTIONS(77),
    [aux_sym_register_token4] = ACTIONS(77),
    [aux_sym_register_token5] = ACTIONS(77),
    [aux_sym_register_token6] = ACTIONS(77),
    [aux_sym_register_token7] = ACTIONS(77),
    [aux_sym_register_token8] = ACTIONS(77),
    [aux_sym_register_token9] = ACTIONS(77),
    [aux_sym_register_token10] = ACTIONS(77),
    [aux_sym_register_token11] = ACTIONS(77),
    [aux_sym_register_token12] = ACTIONS(77),
    [aux_sym_register_token13] = ACTIONS(77),
    [aux_sym_register_token14] = ACTIONS(77),
    [aux_sym_register_token15] = ACTIONS(77),
    [aux_sym_register_token16] = ACTIONS(77),
    [aux_sym_register_token17] = ACTIONS(77),
    [aux_sym_register_token18] = ACTIONS(77),
    [aux_sym_register_token19] = ACTIONS(77),
    [aux_sym_register_token20] = ACTIONS(77),
    [aux_sym_register_token21] = ACTIONS(77),
    [aux_sym_register_token22] = ACTIONS(77),
    [aux_sym_register_token23] = ACTIONS(77),
    [aux_sym_register_token24] = ACTIONS(77),
    [aux_sym_register_token25] = ACTIONS(77),
    [aux_sym_register_token26] = ACTIONS(77),
    [aux_sym_register_token27] = ACTIONS(77),
    [aux_sym_register_token28] = ACTIONS(77),
    [aux_sym_register_token29] = ACTIONS(77),
    [aux_sym_register_token30] = ACTIONS(77),
    [aux_sym_register_token31] = ACTIONS(77),
    [aux_sym_register_token32] = ACTIONS(77),
    [aux_sym_register_token33] = ACTIONS(77),
    [aux_sym_register_token34] = ACTIONS(77),
    [aux_sym_register_token35] = ACTIONS(77),
    [aux_sym_register_token36] = ACTIONS(77),
    [aux_sym_register_token37] = ACTIONS(77),
    [aux_sym_register_token38] = ACTIONS(77),
    [aux_sym_register_token39] = ACTIONS(77),
    [aux_sym_register_token40] = ACTIONS(77),
    [aux_sym_register_token41] = ACTIONS(77),
    [aux_sym_register_token42] = ACTIONS(77),
    [aux_sym_register_token43] = ACTIONS(77),
    [aux_sym_register_token44] = ACTIONS(77),
    [aux_sym_register_token45] = ACTIONS(77),
    [aux_sym_register_token46] = ACTIONS(77),
    [aux_sym_register_token47] = ACTIONS(77),
    [aux_sym_register_token48] = ACTIONS(77),
    [aux_sym_register_token49] = ACTIONS(77),
    [aux_sym_register_token50] = ACTIONS(77),
    [aux_sym_register_token51] = ACTIONS(77),
    [aux_sym_register_token52] = ACTIONS(77),
    [aux_sym_register_token53] = ACTIONS(77),
    [aux_sym_register_token54] = ACTIONS(77),
    [aux_sym_register_token55] = ACTIONS(77),
    [aux_sym_register_token56] = ACTIONS(77),
    [aux_sym_register_token57] = ACTIONS(77),
    [aux_sym_register_token58] = ACTIONS(77),
    [aux_sym_register_token59] = ACTIONS(77),
    [aux_sym_register_token60] = ACTIONS(77),
    [aux_sym_register_token61] = ACTIONS(77),
    [aux_sym_register_token62] = ACTIONS(77),
    [aux_sym_register_token63] = ACTIONS(77),
    [aux_sym_register_token64] = ACTIONS(77),
    [aux_sym_register_token65] = ACTIONS(77),
    [aux_sym_register_token66] = ACTIONS(77),
    [aux_sym_register_token67] = ACTIONS(77),
    [aux_sym_register_token68] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(77),
    [aux_sym_constant_numeric_token1] = ACTIONS(77),
    [aux_sym_constant_numeric_token2] = ACTIONS(77),
    [aux_sym_constant_numeric_token3] = ACTIONS(77),
    [aux_sym_constant_numeric_token4] = ACTIONS(77),
    [aux_sym_constant_numeric_token5] = ACTIONS(77),
    [aux_sym_constant_numeric_token6] = ACTIONS(77),
    [aux_sym_constant_numeric_token7] = ACTIONS(77),
    [aux_sym_constant_numeric_token8] = ACTIONS(77),
    [aux_sym_constant_numeric_token9] = ACTIONS(77),
    [aux_sym_constant_numeric_token10] = ACTIONS(77),
    [aux_sym_constant_charstr_token1] = ACTIONS(77),
    [aux_sym_constant_charstr_token2] = ACTIONS(77),
    [aux_sym_constant_charstr_token3] = ACTIONS(77),
    [sym_comment] = ACTIONS(19),
    [aux_sym_word_token1] = ACTIONS(77),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(79),
    [aux_sym_source_file_token1] = ACTIONS(79),
    [anon_sym_strict] = ACTIONS(81),
    [aux_sym_operand_prefix_token1] = ACTIONS(81),
    [aux_sym_operand_prefix_token2] = ACTIONS(81),
    [aux_sym_operand_prefix_token3] = ACTIONS(81),
    [aux_sym_operand_prefix_token4] = ACTIONS(81),
    [aux_sym_operand_prefix_token5] = ACTIONS(81),
    [aux_sym_operand_prefix_token6] = ACTIONS(81),
    [aux_sym_operand_prefix_token7] = ACTIONS(81),
    [aux_sym_operand_prefix_token8] = ACTIONS(81),
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
    [anon_sym_LBRACK] = ACTIONS(81),
    [aux_sym_constant_numeric_token1] = ACTIONS(81),
    [aux_sym_constant_numeric_token2] = ACTIONS(81),
    [aux_sym_constant_numeric_token3] = ACTIONS(81),
    [aux_sym_constant_numeric_token4] = ACTIONS(81),
    [aux_sym_constant_numeric_token5] = ACTIONS(81),
    [aux_sym_constant_numeric_token6] = ACTIONS(81),
    [aux_sym_constant_numeric_token7] = ACTIONS(81),
    [aux_sym_constant_numeric_token8] = ACTIONS(81),
    [aux_sym_constant_numeric_token9] = ACTIONS(81),
    [aux_sym_constant_numeric_token10] = ACTIONS(81),
    [aux_sym_constant_charstr_token1] = ACTIONS(81),
    [aux_sym_constant_charstr_token2] = ACTIONS(81),
    [aux_sym_constant_charstr_token3] = ACTIONS(81),
    [sym_comment] = ACTIONS(19),
    [aux_sym_word_token1] = ACTIONS(81),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(23),
    [aux_sym_source_file_token1] = ACTIONS(23),
    [anon_sym_strict] = ACTIONS(25),
    [aux_sym_operand_prefix_token1] = ACTIONS(25),
    [aux_sym_operand_prefix_token2] = ACTIONS(25),
    [aux_sym_operand_prefix_token3] = ACTIONS(25),
    [aux_sym_operand_prefix_token4] = ACTIONS(25),
    [aux_sym_operand_prefix_token5] = ACTIONS(25),
    [aux_sym_operand_prefix_token6] = ACTIONS(25),
    [aux_sym_operand_prefix_token7] = ACTIONS(25),
    [aux_sym_operand_prefix_token8] = ACTIONS(25),
    [aux_sym_register_token1] = ACTIONS(25),
    [aux_sym_register_token2] = ACTIONS(25),
    [aux_sym_register_token3] = ACTIONS(25),
    [aux_sym_register_token4] = ACTIONS(25),
    [aux_sym_register_token5] = ACTIONS(25),
    [aux_sym_register_token6] = ACTIONS(25),
    [aux_sym_register_token7] = ACTIONS(25),
    [aux_sym_register_token8] = ACTIONS(25),
    [aux_sym_register_token9] = ACTIONS(25),
    [aux_sym_register_token10] = ACTIONS(25),
    [aux_sym_register_token11] = ACTIONS(25),
    [aux_sym_register_token12] = ACTIONS(25),
    [aux_sym_register_token13] = ACTIONS(25),
    [aux_sym_register_token14] = ACTIONS(25),
    [aux_sym_register_token15] = ACTIONS(25),
    [aux_sym_register_token16] = ACTIONS(25),
    [aux_sym_register_token17] = ACTIONS(25),
    [aux_sym_register_token18] = ACTIONS(25),
    [aux_sym_register_token19] = ACTIONS(25),
    [aux_sym_register_token20] = ACTIONS(25),
    [aux_sym_register_token21] = ACTIONS(25),
    [aux_sym_register_token22] = ACTIONS(25),
    [aux_sym_register_token23] = ACTIONS(25),
    [aux_sym_register_token24] = ACTIONS(25),
    [aux_sym_register_token25] = ACTIONS(25),
    [aux_sym_register_token26] = ACTIONS(25),
    [aux_sym_register_token27] = ACTIONS(25),
    [aux_sym_register_token28] = ACTIONS(25),
    [aux_sym_register_token29] = ACTIONS(25),
    [aux_sym_register_token30] = ACTIONS(25),
    [aux_sym_register_token31] = ACTIONS(25),
    [aux_sym_register_token32] = ACTIONS(25),
    [aux_sym_register_token33] = ACTIONS(25),
    [aux_sym_register_token34] = ACTIONS(25),
    [aux_sym_register_token35] = ACTIONS(25),
    [aux_sym_register_token36] = ACTIONS(25),
    [aux_sym_register_token37] = ACTIONS(25),
    [aux_sym_register_token38] = ACTIONS(25),
    [aux_sym_register_token39] = ACTIONS(25),
    [aux_sym_register_token40] = ACTIONS(25),
    [aux_sym_register_token41] = ACTIONS(25),
    [aux_sym_register_token42] = ACTIONS(25),
    [aux_sym_register_token43] = ACTIONS(25),
    [aux_sym_register_token44] = ACTIONS(25),
    [aux_sym_register_token45] = ACTIONS(25),
    [aux_sym_register_token46] = ACTIONS(25),
    [aux_sym_register_token47] = ACTIONS(25),
    [aux_sym_register_token48] = ACTIONS(25),
    [aux_sym_register_token49] = ACTIONS(25),
    [aux_sym_register_token50] = ACTIONS(25),
    [aux_sym_register_token51] = ACTIONS(25),
    [aux_sym_register_token52] = ACTIONS(25),
    [aux_sym_register_token53] = ACTIONS(25),
    [aux_sym_register_token54] = ACTIONS(25),
    [aux_sym_register_token55] = ACTIONS(25),
    [aux_sym_register_token56] = ACTIONS(25),
    [aux_sym_register_token57] = ACTIONS(25),
    [aux_sym_register_token58] = ACTIONS(25),
    [aux_sym_register_token59] = ACTIONS(25),
    [aux_sym_register_token60] = ACTIONS(25),
    [aux_sym_register_token61] = ACTIONS(25),
    [aux_sym_register_token62] = ACTIONS(25),
    [aux_sym_register_token63] = ACTIONS(25),
    [aux_sym_register_token64] = ACTIONS(25),
    [aux_sym_register_token65] = ACTIONS(25),
    [aux_sym_register_token66] = ACTIONS(25),
    [aux_sym_register_token67] = ACTIONS(25),
    [aux_sym_register_token68] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(25),
    [aux_sym_constant_numeric_token1] = ACTIONS(25),
    [aux_sym_constant_numeric_token2] = ACTIONS(25),
    [aux_sym_constant_numeric_token3] = ACTIONS(25),
    [aux_sym_constant_numeric_token4] = ACTIONS(25),
    [aux_sym_constant_numeric_token5] = ACTIONS(25),
    [aux_sym_constant_numeric_token6] = ACTIONS(25),
    [aux_sym_constant_numeric_token7] = ACTIONS(25),
    [aux_sym_constant_numeric_token8] = ACTIONS(25),
    [aux_sym_constant_numeric_token9] = ACTIONS(25),
    [aux_sym_constant_numeric_token10] = ACTIONS(25),
    [aux_sym_constant_charstr_token1] = ACTIONS(25),
    [aux_sym_constant_charstr_token2] = ACTIONS(25),
    [aux_sym_constant_charstr_token3] = ACTIONS(25),
    [sym_comment] = ACTIONS(19),
    [aux_sym_word_token1] = ACTIONS(25),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [aux_sym_source_file_token1] = ACTIONS(83),
    [anon_sym_strict] = ACTIONS(33),
    [aux_sym_operand_prefix_token1] = ACTIONS(33),
    [aux_sym_operand_prefix_token2] = ACTIONS(33),
    [aux_sym_operand_prefix_token3] = ACTIONS(33),
    [aux_sym_operand_prefix_token4] = ACTIONS(33),
    [aux_sym_operand_prefix_token5] = ACTIONS(33),
    [aux_sym_operand_prefix_token6] = ACTIONS(33),
    [aux_sym_operand_prefix_token7] = ACTIONS(33),
    [aux_sym_operand_prefix_token8] = ACTIONS(33),
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
    [aux_sym_constant_numeric_token1] = ACTIONS(33),
    [aux_sym_constant_numeric_token2] = ACTIONS(33),
    [aux_sym_constant_numeric_token3] = ACTIONS(33),
    [aux_sym_constant_numeric_token4] = ACTIONS(33),
    [aux_sym_constant_numeric_token5] = ACTIONS(33),
    [aux_sym_constant_numeric_token6] = ACTIONS(33),
    [aux_sym_constant_numeric_token7] = ACTIONS(33),
    [aux_sym_constant_numeric_token8] = ACTIONS(33),
    [aux_sym_constant_numeric_token9] = ACTIONS(33),
    [aux_sym_constant_numeric_token10] = ACTIONS(33),
    [aux_sym_constant_charstr_token1] = ACTIONS(33),
    [aux_sym_constant_charstr_token2] = ACTIONS(33),
    [aux_sym_constant_charstr_token3] = ACTIONS(33),
    [sym_comment] = ACTIONS(19),
    [aux_sym_word_token1] = ACTIONS(33),
  },
  [16] = {
    [aux_sym_source_file_token1] = ACTIONS(23),
    [anon_sym_strict] = ACTIONS(25),
    [aux_sym_operand_prefix_token1] = ACTIONS(25),
    [aux_sym_operand_prefix_token2] = ACTIONS(25),
    [aux_sym_operand_prefix_token3] = ACTIONS(25),
    [aux_sym_operand_prefix_token4] = ACTIONS(25),
    [aux_sym_operand_prefix_token5] = ACTIONS(25),
    [aux_sym_operand_prefix_token6] = ACTIONS(25),
    [aux_sym_operand_prefix_token7] = ACTIONS(25),
    [aux_sym_operand_prefix_token8] = ACTIONS(25),
    [aux_sym_register_token1] = ACTIONS(25),
    [aux_sym_register_token2] = ACTIONS(25),
    [aux_sym_register_token3] = ACTIONS(25),
    [aux_sym_register_token4] = ACTIONS(25),
    [aux_sym_register_token5] = ACTIONS(25),
    [aux_sym_register_token6] = ACTIONS(25),
    [aux_sym_register_token7] = ACTIONS(25),
    [aux_sym_register_token8] = ACTIONS(25),
    [aux_sym_register_token9] = ACTIONS(25),
    [aux_sym_register_token10] = ACTIONS(25),
    [aux_sym_register_token11] = ACTIONS(25),
    [aux_sym_register_token12] = ACTIONS(25),
    [aux_sym_register_token13] = ACTIONS(25),
    [aux_sym_register_token14] = ACTIONS(25),
    [aux_sym_register_token15] = ACTIONS(25),
    [aux_sym_register_token16] = ACTIONS(25),
    [aux_sym_register_token17] = ACTIONS(25),
    [aux_sym_register_token18] = ACTIONS(25),
    [aux_sym_register_token19] = ACTIONS(25),
    [aux_sym_register_token20] = ACTIONS(25),
    [aux_sym_register_token21] = ACTIONS(25),
    [aux_sym_register_token22] = ACTIONS(25),
    [aux_sym_register_token23] = ACTIONS(25),
    [aux_sym_register_token24] = ACTIONS(25),
    [aux_sym_register_token25] = ACTIONS(25),
    [aux_sym_register_token26] = ACTIONS(25),
    [aux_sym_register_token27] = ACTIONS(25),
    [aux_sym_register_token28] = ACTIONS(25),
    [aux_sym_register_token29] = ACTIONS(25),
    [aux_sym_register_token30] = ACTIONS(25),
    [aux_sym_register_token31] = ACTIONS(25),
    [aux_sym_register_token32] = ACTIONS(25),
    [aux_sym_register_token33] = ACTIONS(25),
    [aux_sym_register_token34] = ACTIONS(25),
    [aux_sym_register_token35] = ACTIONS(25),
    [aux_sym_register_token36] = ACTIONS(25),
    [aux_sym_register_token37] = ACTIONS(25),
    [aux_sym_register_token38] = ACTIONS(25),
    [aux_sym_register_token39] = ACTIONS(25),
    [aux_sym_register_token40] = ACTIONS(25),
    [aux_sym_register_token41] = ACTIONS(25),
    [aux_sym_register_token42] = ACTIONS(25),
    [aux_sym_register_token43] = ACTIONS(25),
    [aux_sym_register_token44] = ACTIONS(25),
    [aux_sym_register_token45] = ACTIONS(25),
    [aux_sym_register_token46] = ACTIONS(25),
    [aux_sym_register_token47] = ACTIONS(25),
    [aux_sym_register_token48] = ACTIONS(25),
    [aux_sym_register_token49] = ACTIONS(25),
    [aux_sym_register_token50] = ACTIONS(25),
    [aux_sym_register_token51] = ACTIONS(25),
    [aux_sym_register_token52] = ACTIONS(25),
    [aux_sym_register_token53] = ACTIONS(25),
    [aux_sym_register_token54] = ACTIONS(25),
    [aux_sym_register_token55] = ACTIONS(25),
    [aux_sym_register_token56] = ACTIONS(25),
    [aux_sym_register_token57] = ACTIONS(25),
    [aux_sym_register_token58] = ACTIONS(25),
    [aux_sym_register_token59] = ACTIONS(25),
    [aux_sym_register_token60] = ACTIONS(25),
    [aux_sym_register_token61] = ACTIONS(25),
    [aux_sym_register_token62] = ACTIONS(25),
    [aux_sym_register_token63] = ACTIONS(25),
    [aux_sym_register_token64] = ACTIONS(25),
    [aux_sym_register_token65] = ACTIONS(25),
    [aux_sym_register_token66] = ACTIONS(25),
    [aux_sym_register_token67] = ACTIONS(25),
    [aux_sym_register_token68] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(25),
    [aux_sym_constant_numeric_token1] = ACTIONS(25),
    [aux_sym_constant_numeric_token2] = ACTIONS(25),
    [aux_sym_constant_numeric_token3] = ACTIONS(25),
    [aux_sym_constant_numeric_token4] = ACTIONS(25),
    [aux_sym_constant_numeric_token5] = ACTIONS(25),
    [aux_sym_constant_numeric_token6] = ACTIONS(25),
    [aux_sym_constant_numeric_token7] = ACTIONS(25),
    [aux_sym_constant_numeric_token8] = ACTIONS(25),
    [aux_sym_constant_numeric_token9] = ACTIONS(25),
    [aux_sym_constant_numeric_token10] = ACTIONS(25),
    [aux_sym_constant_charstr_token1] = ACTIONS(25),
    [aux_sym_constant_charstr_token2] = ACTIONS(25),
    [aux_sym_constant_charstr_token3] = ACTIONS(25),
    [sym_comment] = ACTIONS(19),
    [aux_sym_word_token1] = ACTIONS(25),
  },
  [17] = {
    [aux_sym_source_file_token1] = ACTIONS(75),
    [anon_sym_strict] = ACTIONS(77),
    [aux_sym_operand_prefix_token1] = ACTIONS(77),
    [aux_sym_operand_prefix_token2] = ACTIONS(77),
    [aux_sym_operand_prefix_token3] = ACTIONS(77),
    [aux_sym_operand_prefix_token4] = ACTIONS(77),
    [aux_sym_operand_prefix_token5] = ACTIONS(77),
    [aux_sym_operand_prefix_token6] = ACTIONS(77),
    [aux_sym_operand_prefix_token7] = ACTIONS(77),
    [aux_sym_operand_prefix_token8] = ACTIONS(77),
    [aux_sym_register_token1] = ACTIONS(77),
    [aux_sym_register_token2] = ACTIONS(77),
    [aux_sym_register_token3] = ACTIONS(77),
    [aux_sym_register_token4] = ACTIONS(77),
    [aux_sym_register_token5] = ACTIONS(77),
    [aux_sym_register_token6] = ACTIONS(77),
    [aux_sym_register_token7] = ACTIONS(77),
    [aux_sym_register_token8] = ACTIONS(77),
    [aux_sym_register_token9] = ACTIONS(77),
    [aux_sym_register_token10] = ACTIONS(77),
    [aux_sym_register_token11] = ACTIONS(77),
    [aux_sym_register_token12] = ACTIONS(77),
    [aux_sym_register_token13] = ACTIONS(77),
    [aux_sym_register_token14] = ACTIONS(77),
    [aux_sym_register_token15] = ACTIONS(77),
    [aux_sym_register_token16] = ACTIONS(77),
    [aux_sym_register_token17] = ACTIONS(77),
    [aux_sym_register_token18] = ACTIONS(77),
    [aux_sym_register_token19] = ACTIONS(77),
    [aux_sym_register_token20] = ACTIONS(77),
    [aux_sym_register_token21] = ACTIONS(77),
    [aux_sym_register_token22] = ACTIONS(77),
    [aux_sym_register_token23] = ACTIONS(77),
    [aux_sym_register_token24] = ACTIONS(77),
    [aux_sym_register_token25] = ACTIONS(77),
    [aux_sym_register_token26] = ACTIONS(77),
    [aux_sym_register_token27] = ACTIONS(77),
    [aux_sym_register_token28] = ACTIONS(77),
    [aux_sym_register_token29] = ACTIONS(77),
    [aux_sym_register_token30] = ACTIONS(77),
    [aux_sym_register_token31] = ACTIONS(77),
    [aux_sym_register_token32] = ACTIONS(77),
    [aux_sym_register_token33] = ACTIONS(77),
    [aux_sym_register_token34] = ACTIONS(77),
    [aux_sym_register_token35] = ACTIONS(77),
    [aux_sym_register_token36] = ACTIONS(77),
    [aux_sym_register_token37] = ACTIONS(77),
    [aux_sym_register_token38] = ACTIONS(77),
    [aux_sym_register_token39] = ACTIONS(77),
    [aux_sym_register_token40] = ACTIONS(77),
    [aux_sym_register_token41] = ACTIONS(77),
    [aux_sym_register_token42] = ACTIONS(77),
    [aux_sym_register_token43] = ACTIONS(77),
    [aux_sym_register_token44] = ACTIONS(77),
    [aux_sym_register_token45] = ACTIONS(77),
    [aux_sym_register_token46] = ACTIONS(77),
    [aux_sym_register_token47] = ACTIONS(77),
    [aux_sym_register_token48] = ACTIONS(77),
    [aux_sym_register_token49] = ACTIONS(77),
    [aux_sym_register_token50] = ACTIONS(77),
    [aux_sym_register_token51] = ACTIONS(77),
    [aux_sym_register_token52] = ACTIONS(77),
    [aux_sym_register_token53] = ACTIONS(77),
    [aux_sym_register_token54] = ACTIONS(77),
    [aux_sym_register_token55] = ACTIONS(77),
    [aux_sym_register_token56] = ACTIONS(77),
    [aux_sym_register_token57] = ACTIONS(77),
    [aux_sym_register_token58] = ACTIONS(77),
    [aux_sym_register_token59] = ACTIONS(77),
    [aux_sym_register_token60] = ACTIONS(77),
    [aux_sym_register_token61] = ACTIONS(77),
    [aux_sym_register_token62] = ACTIONS(77),
    [aux_sym_register_token63] = ACTIONS(77),
    [aux_sym_register_token64] = ACTIONS(77),
    [aux_sym_register_token65] = ACTIONS(77),
    [aux_sym_register_token66] = ACTIONS(77),
    [aux_sym_register_token67] = ACTIONS(77),
    [aux_sym_register_token68] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(77),
    [aux_sym_constant_numeric_token1] = ACTIONS(77),
    [aux_sym_constant_numeric_token2] = ACTIONS(77),
    [aux_sym_constant_numeric_token3] = ACTIONS(77),
    [aux_sym_constant_numeric_token4] = ACTIONS(77),
    [aux_sym_constant_numeric_token5] = ACTIONS(77),
    [aux_sym_constant_numeric_token6] = ACTIONS(77),
    [aux_sym_constant_numeric_token7] = ACTIONS(77),
    [aux_sym_constant_numeric_token8] = ACTIONS(77),
    [aux_sym_constant_numeric_token9] = ACTIONS(77),
    [aux_sym_constant_numeric_token10] = ACTIONS(77),
    [aux_sym_constant_charstr_token1] = ACTIONS(77),
    [aux_sym_constant_charstr_token2] = ACTIONS(77),
    [aux_sym_constant_charstr_token3] = ACTIONS(77),
    [sym_comment] = ACTIONS(19),
    [aux_sym_word_token1] = ACTIONS(77),
  },
  [18] = {
    [aux_sym_source_file_token1] = ACTIONS(83),
    [anon_sym_strict] = ACTIONS(33),
    [aux_sym_operand_prefix_token1] = ACTIONS(33),
    [aux_sym_operand_prefix_token2] = ACTIONS(33),
    [aux_sym_operand_prefix_token3] = ACTIONS(33),
    [aux_sym_operand_prefix_token4] = ACTIONS(33),
    [aux_sym_operand_prefix_token5] = ACTIONS(33),
    [aux_sym_operand_prefix_token6] = ACTIONS(33),
    [aux_sym_operand_prefix_token7] = ACTIONS(33),
    [aux_sym_operand_prefix_token8] = ACTIONS(33),
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
    [aux_sym_constant_numeric_token1] = ACTIONS(33),
    [aux_sym_constant_numeric_token2] = ACTIONS(33),
    [aux_sym_constant_numeric_token3] = ACTIONS(33),
    [aux_sym_constant_numeric_token4] = ACTIONS(33),
    [aux_sym_constant_numeric_token5] = ACTIONS(33),
    [aux_sym_constant_numeric_token6] = ACTIONS(33),
    [aux_sym_constant_numeric_token7] = ACTIONS(33),
    [aux_sym_constant_numeric_token8] = ACTIONS(33),
    [aux_sym_constant_numeric_token9] = ACTIONS(33),
    [aux_sym_constant_numeric_token10] = ACTIONS(33),
    [aux_sym_constant_charstr_token1] = ACTIONS(33),
    [aux_sym_constant_charstr_token2] = ACTIONS(33),
    [aux_sym_constant_charstr_token3] = ACTIONS(33),
    [sym_comment] = ACTIONS(19),
    [aux_sym_word_token1] = ACTIONS(33),
  },
  [19] = {
    [aux_sym_source_file_token1] = ACTIONS(79),
    [anon_sym_strict] = ACTIONS(81),
    [aux_sym_operand_prefix_token1] = ACTIONS(81),
    [aux_sym_operand_prefix_token2] = ACTIONS(81),
    [aux_sym_operand_prefix_token3] = ACTIONS(81),
    [aux_sym_operand_prefix_token4] = ACTIONS(81),
    [aux_sym_operand_prefix_token5] = ACTIONS(81),
    [aux_sym_operand_prefix_token6] = ACTIONS(81),
    [aux_sym_operand_prefix_token7] = ACTIONS(81),
    [aux_sym_operand_prefix_token8] = ACTIONS(81),
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
    [anon_sym_LBRACK] = ACTIONS(81),
    [aux_sym_constant_numeric_token1] = ACTIONS(81),
    [aux_sym_constant_numeric_token2] = ACTIONS(81),
    [aux_sym_constant_numeric_token3] = ACTIONS(81),
    [aux_sym_constant_numeric_token4] = ACTIONS(81),
    [aux_sym_constant_numeric_token5] = ACTIONS(81),
    [aux_sym_constant_numeric_token6] = ACTIONS(81),
    [aux_sym_constant_numeric_token7] = ACTIONS(81),
    [aux_sym_constant_numeric_token8] = ACTIONS(81),
    [aux_sym_constant_numeric_token9] = ACTIONS(81),
    [aux_sym_constant_numeric_token10] = ACTIONS(81),
    [aux_sym_constant_charstr_token1] = ACTIONS(81),
    [aux_sym_constant_charstr_token2] = ACTIONS(81),
    [aux_sym_constant_charstr_token3] = ACTIONS(81),
    [sym_comment] = ACTIONS(19),
    [aux_sym_word_token1] = ACTIONS(81),
  },
  [20] = {
    [sym_register] = STATE(78),
    [sym_effective_address] = STATE(78),
    [sym_constant] = STATE(78),
    [sym_constant_numeric] = STATE(71),
    [sym_constant_charstr] = STATE(71),
    [sym_word] = STATE(73),
    [sym_expression] = STATE(78),
    [aux_sym_register_token1] = ACTIONS(53),
    [aux_sym_register_token2] = ACTIONS(53),
    [aux_sym_register_token3] = ACTIONS(53),
    [aux_sym_register_token4] = ACTIONS(53),
    [aux_sym_register_token5] = ACTIONS(53),
    [aux_sym_register_token6] = ACTIONS(53),
    [aux_sym_register_token7] = ACTIONS(53),
    [aux_sym_register_token8] = ACTIONS(53),
    [aux_sym_register_token9] = ACTIONS(53),
    [aux_sym_register_token10] = ACTIONS(53),
    [aux_sym_register_token11] = ACTIONS(53),
    [aux_sym_register_token12] = ACTIONS(53),
    [aux_sym_register_token13] = ACTIONS(53),
    [aux_sym_register_token14] = ACTIONS(53),
    [aux_sym_register_token15] = ACTIONS(53),
    [aux_sym_register_token16] = ACTIONS(53),
    [aux_sym_register_token17] = ACTIONS(53),
    [aux_sym_register_token18] = ACTIONS(53),
    [aux_sym_register_token19] = ACTIONS(53),
    [aux_sym_register_token20] = ACTIONS(53),
    [aux_sym_register_token21] = ACTIONS(53),
    [aux_sym_register_token22] = ACTIONS(53),
    [aux_sym_register_token23] = ACTIONS(53),
    [aux_sym_register_token24] = ACTIONS(53),
    [aux_sym_register_token25] = ACTIONS(53),
    [aux_sym_register_token26] = ACTIONS(53),
    [aux_sym_register_token27] = ACTIONS(53),
    [aux_sym_register_token28] = ACTIONS(53),
    [aux_sym_register_token29] = ACTIONS(53),
    [aux_sym_register_token30] = ACTIONS(53),
    [aux_sym_register_token31] = ACTIONS(53),
    [aux_sym_register_token32] = ACTIONS(53),
    [aux_sym_register_token33] = ACTIONS(53),
    [aux_sym_register_token34] = ACTIONS(53),
    [aux_sym_register_token35] = ACTIONS(53),
    [aux_sym_register_token36] = ACTIONS(53),
    [aux_sym_register_token37] = ACTIONS(53),
    [aux_sym_register_token38] = ACTIONS(53),
    [aux_sym_register_token39] = ACTIONS(53),
    [aux_sym_register_token40] = ACTIONS(53),
    [aux_sym_register_token41] = ACTIONS(53),
    [aux_sym_register_token42] = ACTIONS(53),
    [aux_sym_register_token43] = ACTIONS(53),
    [aux_sym_register_token44] = ACTIONS(53),
    [aux_sym_register_token45] = ACTIONS(53),
    [aux_sym_register_token46] = ACTIONS(53),
    [aux_sym_register_token47] = ACTIONS(53),
    [aux_sym_register_token48] = ACTIONS(53),
    [aux_sym_register_token49] = ACTIONS(53),
    [aux_sym_register_token50] = ACTIONS(53),
    [aux_sym_register_token51] = ACTIONS(53),
    [aux_sym_register_token52] = ACTIONS(53),
    [aux_sym_register_token53] = ACTIONS(53),
    [aux_sym_register_token54] = ACTIONS(53),
    [aux_sym_register_token55] = ACTIONS(53),
    [aux_sym_register_token56] = ACTIONS(53),
    [aux_sym_register_token57] = ACTIONS(53),
    [aux_sym_register_token58] = ACTIONS(53),
    [aux_sym_register_token59] = ACTIONS(53),
    [aux_sym_register_token60] = ACTIONS(53),
    [aux_sym_register_token61] = ACTIONS(53),
    [aux_sym_register_token62] = ACTIONS(53),
    [aux_sym_register_token63] = ACTIONS(53),
    [aux_sym_register_token64] = ACTIONS(53),
    [aux_sym_register_token65] = ACTIONS(53),
    [aux_sym_register_token66] = ACTIONS(53),
    [aux_sym_register_token67] = ACTIONS(53),
    [aux_sym_register_token68] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(63),
    [aux_sym_constant_numeric_token1] = ACTIONS(57),
    [aux_sym_constant_numeric_token2] = ACTIONS(57),
    [aux_sym_constant_numeric_token3] = ACTIONS(65),
    [aux_sym_constant_numeric_token4] = ACTIONS(57),
    [aux_sym_constant_numeric_token5] = ACTIONS(57),
    [aux_sym_constant_numeric_token6] = ACTIONS(57),
    [aux_sym_constant_numeric_token7] = ACTIONS(65),
    [aux_sym_constant_numeric_token8] = ACTIONS(57),
    [aux_sym_constant_numeric_token9] = ACTIONS(57),
    [aux_sym_constant_numeric_token10] = ACTIONS(57),
    [aux_sym_constant_charstr_token1] = ACTIONS(67),
    [aux_sym_constant_charstr_token2] = ACTIONS(67),
    [aux_sym_constant_charstr_token3] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [aux_sym_word_token1] = ACTIONS(61),
  },
  [21] = {
    [sym_register] = STATE(45),
    [sym_effective_address] = STATE(45),
    [sym_constant] = STATE(45),
    [sym_constant_numeric] = STATE(58),
    [sym_constant_charstr] = STATE(58),
    [sym_word] = STATE(57),
    [sym_expression] = STATE(45),
    [aux_sym_register_token1] = ACTIONS(43),
    [aux_sym_register_token2] = ACTIONS(43),
    [aux_sym_register_token3] = ACTIONS(43),
    [aux_sym_register_token4] = ACTIONS(43),
    [aux_sym_register_token5] = ACTIONS(43),
    [aux_sym_register_token6] = ACTIONS(43),
    [aux_sym_register_token7] = ACTIONS(43),
    [aux_sym_register_token8] = ACTIONS(43),
    [aux_sym_register_token9] = ACTIONS(43),
    [aux_sym_register_token10] = ACTIONS(43),
    [aux_sym_register_token11] = ACTIONS(43),
    [aux_sym_register_token12] = ACTIONS(43),
    [aux_sym_register_token13] = ACTIONS(43),
    [aux_sym_register_token14] = ACTIONS(43),
    [aux_sym_register_token15] = ACTIONS(43),
    [aux_sym_register_token16] = ACTIONS(43),
    [aux_sym_register_token17] = ACTIONS(43),
    [aux_sym_register_token18] = ACTIONS(43),
    [aux_sym_register_token19] = ACTIONS(43),
    [aux_sym_register_token20] = ACTIONS(43),
    [aux_sym_register_token21] = ACTIONS(43),
    [aux_sym_register_token22] = ACTIONS(43),
    [aux_sym_register_token23] = ACTIONS(43),
    [aux_sym_register_token24] = ACTIONS(43),
    [aux_sym_register_token25] = ACTIONS(43),
    [aux_sym_register_token26] = ACTIONS(43),
    [aux_sym_register_token27] = ACTIONS(43),
    [aux_sym_register_token28] = ACTIONS(43),
    [aux_sym_register_token29] = ACTIONS(43),
    [aux_sym_register_token30] = ACTIONS(43),
    [aux_sym_register_token31] = ACTIONS(43),
    [aux_sym_register_token32] = ACTIONS(43),
    [aux_sym_register_token33] = ACTIONS(43),
    [aux_sym_register_token34] = ACTIONS(43),
    [aux_sym_register_token35] = ACTIONS(43),
    [aux_sym_register_token36] = ACTIONS(43),
    [aux_sym_register_token37] = ACTIONS(43),
    [aux_sym_register_token38] = ACTIONS(43),
    [aux_sym_register_token39] = ACTIONS(43),
    [aux_sym_register_token40] = ACTIONS(43),
    [aux_sym_register_token41] = ACTIONS(43),
    [aux_sym_register_token42] = ACTIONS(43),
    [aux_sym_register_token43] = ACTIONS(43),
    [aux_sym_register_token44] = ACTIONS(43),
    [aux_sym_register_token45] = ACTIONS(43),
    [aux_sym_register_token46] = ACTIONS(43),
    [aux_sym_register_token47] = ACTIONS(43),
    [aux_sym_register_token48] = ACTIONS(43),
    [aux_sym_register_token49] = ACTIONS(43),
    [aux_sym_register_token50] = ACTIONS(43),
    [aux_sym_register_token51] = ACTIONS(43),
    [aux_sym_register_token52] = ACTIONS(43),
    [aux_sym_register_token53] = ACTIONS(43),
    [aux_sym_register_token54] = ACTIONS(43),
    [aux_sym_register_token55] = ACTIONS(43),
    [aux_sym_register_token56] = ACTIONS(43),
    [aux_sym_register_token57] = ACTIONS(43),
    [aux_sym_register_token58] = ACTIONS(43),
    [aux_sym_register_token59] = ACTIONS(43),
    [aux_sym_register_token60] = ACTIONS(43),
    [aux_sym_register_token61] = ACTIONS(43),
    [aux_sym_register_token62] = ACTIONS(43),
    [aux_sym_register_token63] = ACTIONS(43),
    [aux_sym_register_token64] = ACTIONS(43),
    [aux_sym_register_token65] = ACTIONS(43),
    [aux_sym_register_token66] = ACTIONS(43),
    [aux_sym_register_token67] = ACTIONS(43),
    [aux_sym_register_token68] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(69),
    [aux_sym_constant_numeric_token1] = ACTIONS(47),
    [aux_sym_constant_numeric_token2] = ACTIONS(47),
    [aux_sym_constant_numeric_token3] = ACTIONS(71),
    [aux_sym_constant_numeric_token4] = ACTIONS(47),
    [aux_sym_constant_numeric_token5] = ACTIONS(47),
    [aux_sym_constant_numeric_token6] = ACTIONS(47),
    [aux_sym_constant_numeric_token7] = ACTIONS(71),
    [aux_sym_constant_numeric_token8] = ACTIONS(47),
    [aux_sym_constant_numeric_token9] = ACTIONS(47),
    [aux_sym_constant_numeric_token10] = ACTIONS(47),
    [aux_sym_constant_charstr_token1] = ACTIONS(73),
    [aux_sym_constant_charstr_token2] = ACTIONS(73),
    [aux_sym_constant_charstr_token3] = ACTIONS(73),
    [sym_comment] = ACTIONS(3),
    [aux_sym_word_token1] = ACTIONS(21),
  },
  [22] = {
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
  [23] = {
    [aux_sym_register_token1] = ACTIONS(89),
    [aux_sym_register_token2] = ACTIONS(89),
    [aux_sym_register_token3] = ACTIONS(89),
    [aux_sym_register_token4] = ACTIONS(89),
    [aux_sym_register_token5] = ACTIONS(89),
    [aux_sym_register_token6] = ACTIONS(89),
    [aux_sym_register_token7] = ACTIONS(89),
    [aux_sym_register_token8] = ACTIONS(89),
    [aux_sym_register_token9] = ACTIONS(89),
    [aux_sym_register_token10] = ACTIONS(89),
    [aux_sym_register_token11] = ACTIONS(89),
    [aux_sym_register_token12] = ACTIONS(89),
    [aux_sym_register_token13] = ACTIONS(89),
    [aux_sym_register_token14] = ACTIONS(89),
    [aux_sym_register_token15] = ACTIONS(89),
    [aux_sym_register_token16] = ACTIONS(89),
    [aux_sym_register_token17] = ACTIONS(89),
    [aux_sym_register_token18] = ACTIONS(89),
    [aux_sym_register_token19] = ACTIONS(89),
    [aux_sym_register_token20] = ACTIONS(89),
    [aux_sym_register_token21] = ACTIONS(89),
    [aux_sym_register_token22] = ACTIONS(89),
    [aux_sym_register_token23] = ACTIONS(89),
    [aux_sym_register_token24] = ACTIONS(89),
    [aux_sym_register_token25] = ACTIONS(89),
    [aux_sym_register_token26] = ACTIONS(89),
    [aux_sym_register_token27] = ACTIONS(89),
    [aux_sym_register_token28] = ACTIONS(89),
    [aux_sym_register_token29] = ACTIONS(89),
    [aux_sym_register_token30] = ACTIONS(89),
    [aux_sym_register_token31] = ACTIONS(89),
    [aux_sym_register_token32] = ACTIONS(89),
    [aux_sym_register_token33] = ACTIONS(89),
    [aux_sym_register_token34] = ACTIONS(89),
    [aux_sym_register_token35] = ACTIONS(89),
    [aux_sym_register_token36] = ACTIONS(89),
    [aux_sym_register_token37] = ACTIONS(89),
    [aux_sym_register_token38] = ACTIONS(89),
    [aux_sym_register_token39] = ACTIONS(89),
    [aux_sym_register_token40] = ACTIONS(89),
    [aux_sym_register_token41] = ACTIONS(89),
    [aux_sym_register_token42] = ACTIONS(89),
    [aux_sym_register_token43] = ACTIONS(89),
    [aux_sym_register_token44] = ACTIONS(89),
    [aux_sym_register_token45] = ACTIONS(89),
    [aux_sym_register_token46] = ACTIONS(89),
    [aux_sym_register_token47] = ACTIONS(89),
    [aux_sym_register_token48] = ACTIONS(89),
    [aux_sym_register_token49] = ACTIONS(89),
    [aux_sym_register_token50] = ACTIONS(89),
    [aux_sym_register_token51] = ACTIONS(89),
    [aux_sym_register_token52] = ACTIONS(89),
    [aux_sym_register_token53] = ACTIONS(89),
    [aux_sym_register_token54] = ACTIONS(89),
    [aux_sym_register_token55] = ACTIONS(89),
    [aux_sym_register_token56] = ACTIONS(89),
    [aux_sym_register_token57] = ACTIONS(89),
    [aux_sym_register_token58] = ACTIONS(89),
    [aux_sym_register_token59] = ACTIONS(89),
    [aux_sym_register_token60] = ACTIONS(89),
    [aux_sym_register_token61] = ACTIONS(89),
    [aux_sym_register_token62] = ACTIONS(89),
    [aux_sym_register_token63] = ACTIONS(89),
    [aux_sym_register_token64] = ACTIONS(89),
    [aux_sym_register_token65] = ACTIONS(89),
    [aux_sym_register_token66] = ACTIONS(89),
    [aux_sym_register_token67] = ACTIONS(89),
    [aux_sym_register_token68] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(91),
    [aux_sym_constant_numeric_token1] = ACTIONS(89),
    [aux_sym_constant_numeric_token2] = ACTIONS(89),
    [aux_sym_constant_numeric_token3] = ACTIONS(91),
    [aux_sym_constant_numeric_token4] = ACTIONS(89),
    [aux_sym_constant_numeric_token5] = ACTIONS(89),
    [aux_sym_constant_numeric_token6] = ACTIONS(89),
    [aux_sym_constant_numeric_token7] = ACTIONS(91),
    [aux_sym_constant_numeric_token8] = ACTIONS(89),
    [aux_sym_constant_numeric_token9] = ACTIONS(89),
    [aux_sym_constant_numeric_token10] = ACTIONS(89),
    [aux_sym_constant_charstr_token1] = ACTIONS(91),
    [aux_sym_constant_charstr_token2] = ACTIONS(91),
    [aux_sym_constant_charstr_token3] = ACTIONS(91),
    [sym_comment] = ACTIONS(3),
    [aux_sym_word_token1] = ACTIONS(89),
  },
  [24] = {
    [sym_source_line] = STATE(62),
    [sym_preproc_directive] = STATE(62),
    [sym_assembl_directive] = STATE(62),
    [sym_label] = STATE(27),
    [sym_instruction] = STATE(74),
    [sym_instruction_prefix] = STATE(32),
    [sym_known_instruction] = STATE(7),
    [sym_pseudo_instruction] = STATE(7),
    [sym_unknown_instruction] = STATE(7),
    [sym_word] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(93),
    [aux_sym_source_file_token1] = ACTIONS(95),
    [anon_sym_PERCENT] = ACTIONS(9),
    [anon_sym_bits] = ACTIONS(11),
    [anon_sym_use16] = ACTIONS(11),
    [anon_sym_use32] = ACTIONS(11),
    [anon_sym_default] = ACTIONS(11),
    [anon_sym_section] = ACTIONS(11),
    [anon_sym_segment] = ACTIONS(11),
    [anon_sym_absolute] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(11),
    [anon_sym_required] = ACTIONS(11),
    [anon_sym_global] = ACTIONS(11),
    [anon_sym_static] = ACTIONS(11),
    [anon_sym_common] = ACTIONS(11),
    [anon_sym_prefix] = ACTIONS(11),
    [anon_sym_gprefix] = ACTIONS(11),
    [anon_sym_lprefix] = ACTIONS(11),
    [anon_sym_postfix] = ACTIONS(11),
    [anon_sym_gpostfix] = ACTIONS(11),
    [anon_sym_lpostfix] = ACTIONS(11),
    [anon_sym_cpu] = ACTIONS(11),
    [anon_sym_float] = ACTIONS(11),
    [anon_sym_warning] = ACTIONS(11),
    [aux_sym_instruction_prefix_token1] = ACTIONS(13),
    [aux_sym_instruction_prefix_token2] = ACTIONS(13),
    [aux_sym_instruction_prefix_token3] = ACTIONS(13),
    [aux_sym_instruction_prefix_token4] = ACTIONS(13),
    [aux_sym_instruction_prefix_token5] = ACTIONS(13),
    [aux_sym_instruction_prefix_token6] = ACTIONS(13),
    [aux_sym_instruction_prefix_token7] = ACTIONS(13),
    [aux_sym_instruction_prefix_token8] = ACTIONS(13),
    [aux_sym_instruction_prefix_token9] = ACTIONS(13),
    [aux_sym_instruction_prefix_token10] = ACTIONS(13),
    [aux_sym_instruction_prefix_token11] = ACTIONS(13),
    [aux_sym_instruction_prefix_token12] = ACTIONS(13),
    [aux_sym_instruction_prefix_token13] = ACTIONS(13),
    [aux_sym_instruction_prefix_token14] = ACTIONS(13),
    [aux_sym_instruction_prefix_token15] = ACTIONS(13),
    [aux_sym_instruction_prefix_token16] = ACTIONS(13),
    [aux_sym_instruction_prefix_token17] = ACTIONS(13),
    [aux_sym_instruction_prefix_token18] = ACTIONS(13),
    [aux_sym_instruction_prefix_token19] = ACTIONS(13),
    [aux_sym_instruction_prefix_token20] = ACTIONS(13),
    [aux_sym_instruction_prefix_token21] = ACTIONS(13),
    [aux_sym_instruction_prefix_token22] = ACTIONS(13),
    [aux_sym_known_instruction_token1] = ACTIONS(15),
    [aux_sym_known_instruction_token2] = ACTIONS(15),
    [aux_sym_known_instruction_token3] = ACTIONS(15),
    [aux_sym_known_instruction_token4] = ACTIONS(15),
    [aux_sym_known_instruction_token5] = ACTIONS(15),
    [aux_sym_pseudo_instruction_token1] = ACTIONS(17),
    [aux_sym_pseudo_instruction_token2] = ACTIONS(17),
    [aux_sym_pseudo_instruction_token3] = ACTIONS(17),
    [aux_sym_pseudo_instruction_token4] = ACTIONS(17),
    [aux_sym_pseudo_instruction_token5] = ACTIONS(17),
    [aux_sym_pseudo_instruction_token6] = ACTIONS(17),
    [aux_sym_pseudo_instruction_token7] = ACTIONS(17),
    [aux_sym_pseudo_instruction_token8] = ACTIONS(17),
    [aux_sym_pseudo_instruction_token9] = ACTIONS(17),
    [aux_sym_pseudo_instruction_token10] = ACTIONS(17),
    [aux_sym_pseudo_instruction_token11] = ACTIONS(17),
    [aux_sym_pseudo_instruction_token12] = ACTIONS(17),
    [aux_sym_pseudo_instruction_token13] = ACTIONS(17),
    [aux_sym_pseudo_instruction_token14] = ACTIONS(17),
    [aux_sym_pseudo_instruction_token15] = ACTIONS(17),
    [aux_sym_pseudo_instruction_token16] = ACTIONS(17),
    [aux_sym_pseudo_instruction_token17] = ACTIONS(17),
    [aux_sym_pseudo_instruction_token18] = ACTIONS(17),
    [aux_sym_pseudo_instruction_token19] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
    [aux_sym_word_token1] = ACTIONS(21),
  },
  [25] = {
    [sym_source_line] = STATE(85),
    [sym_preproc_directive] = STATE(85),
    [sym_assembl_directive] = STATE(85),
    [sym_label] = STATE(28),
    [sym_instruction] = STATE(87),
    [sym_instruction_prefix] = STATE(31),
    [sym_known_instruction] = STATE(8),
    [sym_pseudo_instruction] = STATE(8),
    [sym_unknown_instruction] = STATE(8),
    [sym_word] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(97),
    [aux_sym_source_file_token1] = ACTIONS(99),
    [anon_sym_PERCENT] = ACTIONS(102),
    [anon_sym_bits] = ACTIONS(105),
    [anon_sym_use16] = ACTIONS(105),
    [anon_sym_use32] = ACTIONS(105),
    [anon_sym_default] = ACTIONS(105),
    [anon_sym_section] = ACTIONS(105),
    [anon_sym_segment] = ACTIONS(105),
    [anon_sym_absolute] = ACTIONS(105),
    [anon_sym_extern] = ACTIONS(105),
    [anon_sym_required] = ACTIONS(105),
    [anon_sym_global] = ACTIONS(105),
    [anon_sym_static] = ACTIONS(105),
    [anon_sym_common] = ACTIONS(105),
    [anon_sym_prefix] = ACTIONS(105),
    [anon_sym_gprefix] = ACTIONS(105),
    [anon_sym_lprefix] = ACTIONS(105),
    [anon_sym_postfix] = ACTIONS(105),
    [anon_sym_gpostfix] = ACTIONS(105),
    [anon_sym_lpostfix] = ACTIONS(105),
    [anon_sym_cpu] = ACTIONS(105),
    [anon_sym_float] = ACTIONS(105),
    [anon_sym_warning] = ACTIONS(105),
    [aux_sym_instruction_prefix_token1] = ACTIONS(108),
    [aux_sym_instruction_prefix_token2] = ACTIONS(108),
    [aux_sym_instruction_prefix_token3] = ACTIONS(108),
    [aux_sym_instruction_prefix_token4] = ACTIONS(108),
    [aux_sym_instruction_prefix_token5] = ACTIONS(108),
    [aux_sym_instruction_prefix_token6] = ACTIONS(108),
    [aux_sym_instruction_prefix_token7] = ACTIONS(108),
    [aux_sym_instruction_prefix_token8] = ACTIONS(108),
    [aux_sym_instruction_prefix_token9] = ACTIONS(108),
    [aux_sym_instruction_prefix_token10] = ACTIONS(108),
    [aux_sym_instruction_prefix_token11] = ACTIONS(108),
    [aux_sym_instruction_prefix_token12] = ACTIONS(108),
    [aux_sym_instruction_prefix_token13] = ACTIONS(108),
    [aux_sym_instruction_prefix_token14] = ACTIONS(108),
    [aux_sym_instruction_prefix_token15] = ACTIONS(108),
    [aux_sym_instruction_prefix_token16] = ACTIONS(108),
    [aux_sym_instruction_prefix_token17] = ACTIONS(108),
    [aux_sym_instruction_prefix_token18] = ACTIONS(108),
    [aux_sym_instruction_prefix_token19] = ACTIONS(108),
    [aux_sym_instruction_prefix_token20] = ACTIONS(108),
    [aux_sym_instruction_prefix_token21] = ACTIONS(108),
    [aux_sym_instruction_prefix_token22] = ACTIONS(108),
    [aux_sym_known_instruction_token1] = ACTIONS(111),
    [aux_sym_known_instruction_token2] = ACTIONS(111),
    [aux_sym_known_instruction_token3] = ACTIONS(111),
    [aux_sym_known_instruction_token4] = ACTIONS(111),
    [aux_sym_known_instruction_token5] = ACTIONS(111),
    [aux_sym_pseudo_instruction_token1] = ACTIONS(114),
    [aux_sym_pseudo_instruction_token2] = ACTIONS(114),
    [aux_sym_pseudo_instruction_token3] = ACTIONS(114),
    [aux_sym_pseudo_instruction_token4] = ACTIONS(114),
    [aux_sym_pseudo_instruction_token5] = ACTIONS(114),
    [aux_sym_pseudo_instruction_token6] = ACTIONS(114),
    [aux_sym_pseudo_instruction_token7] = ACTIONS(114),
    [aux_sym_pseudo_instruction_token8] = ACTIONS(114),
    [aux_sym_pseudo_instruction_token9] = ACTIONS(114),
    [aux_sym_pseudo_instruction_token10] = ACTIONS(114),
    [aux_sym_pseudo_instruction_token11] = ACTIONS(114),
    [aux_sym_pseudo_instruction_token12] = ACTIONS(114),
    [aux_sym_pseudo_instruction_token13] = ACTIONS(114),
    [aux_sym_pseudo_instruction_token14] = ACTIONS(114),
    [aux_sym_pseudo_instruction_token15] = ACTIONS(114),
    [aux_sym_pseudo_instruction_token16] = ACTIONS(114),
    [aux_sym_pseudo_instruction_token17] = ACTIONS(114),
    [aux_sym_pseudo_instruction_token18] = ACTIONS(114),
    [aux_sym_pseudo_instruction_token19] = ACTIONS(114),
    [sym_comment] = ACTIONS(19),
    [aux_sym_word_token1] = ACTIONS(117),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(97),
    [aux_sym_source_file_token1] = ACTIONS(97),
    [anon_sym_PERCENT] = ACTIONS(120),
    [anon_sym_bits] = ACTIONS(120),
    [anon_sym_use16] = ACTIONS(120),
    [anon_sym_use32] = ACTIONS(120),
    [anon_sym_default] = ACTIONS(120),
    [anon_sym_section] = ACTIONS(120),
    [anon_sym_segment] = ACTIONS(120),
    [anon_sym_absolute] = ACTIONS(120),
    [anon_sym_extern] = ACTIONS(120),
    [anon_sym_required] = ACTIONS(120),
    [anon_sym_global] = ACTIONS(120),
    [anon_sym_static] = ACTIONS(120),
    [anon_sym_common] = ACTIONS(120),
    [anon_sym_prefix] = ACTIONS(120),
    [anon_sym_gprefix] = ACTIONS(120),
    [anon_sym_lprefix] = ACTIONS(120),
    [anon_sym_postfix] = ACTIONS(120),
    [anon_sym_gpostfix] = ACTIONS(120),
    [anon_sym_lpostfix] = ACTIONS(120),
    [anon_sym_cpu] = ACTIONS(120),
    [anon_sym_float] = ACTIONS(120),
    [anon_sym_warning] = ACTIONS(120),
    [aux_sym_instruction_prefix_token1] = ACTIONS(120),
    [aux_sym_instruction_prefix_token2] = ACTIONS(120),
    [aux_sym_instruction_prefix_token3] = ACTIONS(120),
    [aux_sym_instruction_prefix_token4] = ACTIONS(120),
    [aux_sym_instruction_prefix_token5] = ACTIONS(120),
    [aux_sym_instruction_prefix_token6] = ACTIONS(120),
    [aux_sym_instruction_prefix_token7] = ACTIONS(120),
    [aux_sym_instruction_prefix_token8] = ACTIONS(120),
    [aux_sym_instruction_prefix_token9] = ACTIONS(120),
    [aux_sym_instruction_prefix_token10] = ACTIONS(120),
    [aux_sym_instruction_prefix_token11] = ACTIONS(120),
    [aux_sym_instruction_prefix_token12] = ACTIONS(120),
    [aux_sym_instruction_prefix_token13] = ACTIONS(120),
    [aux_sym_instruction_prefix_token14] = ACTIONS(120),
    [aux_sym_instruction_prefix_token15] = ACTIONS(120),
    [aux_sym_instruction_prefix_token16] = ACTIONS(120),
    [aux_sym_instruction_prefix_token17] = ACTIONS(120),
    [aux_sym_instruction_prefix_token18] = ACTIONS(120),
    [aux_sym_instruction_prefix_token19] = ACTIONS(120),
    [aux_sym_instruction_prefix_token20] = ACTIONS(120),
    [aux_sym_instruction_prefix_token21] = ACTIONS(120),
    [aux_sym_instruction_prefix_token22] = ACTIONS(120),
    [aux_sym_known_instruction_token1] = ACTIONS(120),
    [aux_sym_known_instruction_token2] = ACTIONS(120),
    [aux_sym_known_instruction_token3] = ACTIONS(120),
    [aux_sym_known_instruction_token4] = ACTIONS(120),
    [aux_sym_known_instruction_token5] = ACTIONS(120),
    [aux_sym_pseudo_instruction_token1] = ACTIONS(120),
    [aux_sym_pseudo_instruction_token2] = ACTIONS(120),
    [aux_sym_pseudo_instruction_token3] = ACTIONS(120),
    [aux_sym_pseudo_instruction_token4] = ACTIONS(120),
    [aux_sym_pseudo_instruction_token5] = ACTIONS(120),
    [aux_sym_pseudo_instruction_token6] = ACTIONS(120),
    [aux_sym_pseudo_instruction_token7] = ACTIONS(120),
    [aux_sym_pseudo_instruction_token8] = ACTIONS(120),
    [aux_sym_pseudo_instruction_token9] = ACTIONS(120),
    [aux_sym_pseudo_instruction_token10] = ACTIONS(120),
    [aux_sym_pseudo_instruction_token11] = ACTIONS(120),
    [aux_sym_pseudo_instruction_token12] = ACTIONS(120),
    [aux_sym_pseudo_instruction_token13] = ACTIONS(120),
    [aux_sym_pseudo_instruction_token14] = ACTIONS(120),
    [aux_sym_pseudo_instruction_token15] = ACTIONS(120),
    [aux_sym_pseudo_instruction_token16] = ACTIONS(120),
    [aux_sym_pseudo_instruction_token17] = ACTIONS(120),
    [aux_sym_pseudo_instruction_token18] = ACTIONS(120),
    [aux_sym_pseudo_instruction_token19] = ACTIONS(120),
    [sym_comment] = ACTIONS(19),
    [aux_sym_word_token1] = ACTIONS(120),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(124), 1,
      aux_sym_word_token1,
    STATE(15), 1,
      sym_word,
    STATE(32), 1,
      sym_instruction_prefix,
    STATE(76), 1,
      sym_instruction,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    STATE(7), 3,
      sym_known_instruction,
      sym_pseudo_instruction,
      sym_unknown_instruction,
    ACTIONS(15), 5,
      aux_sym_known_instruction_token1,
      aux_sym_known_instruction_token2,
      aux_sym_known_instruction_token3,
      aux_sym_known_instruction_token4,
      aux_sym_known_instruction_token5,
    ACTIONS(17), 19,
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
    ACTIONS(13), 22,
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
  [77] = 10,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(122), 1,
      aux_sym_source_file_token1,
    ACTIONS(130), 1,
      aux_sym_word_token1,
    STATE(18), 1,
      sym_word,
    STATE(31), 1,
      sym_instruction_prefix,
    STATE(93), 1,
      sym_instruction,
    STATE(8), 3,
      sym_known_instruction,
      sym_pseudo_instruction,
      sym_unknown_instruction,
    ACTIONS(126), 5,
      aux_sym_known_instruction_token1,
      aux_sym_known_instruction_token2,
      aux_sym_known_instruction_token3,
      aux_sym_known_instruction_token4,
      aux_sym_known_instruction_token5,
    ACTIONS(128), 19,
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
    ACTIONS(13), 22,
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
  [153] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(132), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(134), 47,
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
  [210] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(132), 1,
      aux_sym_source_file_token1,
    ACTIONS(134), 47,
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
  [266] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      aux_sym_word_token1,
    STATE(18), 1,
      sym_word,
    STATE(9), 3,
      sym_known_instruction,
      sym_pseudo_instruction,
      sym_unknown_instruction,
    ACTIONS(126), 5,
      aux_sym_known_instruction_token1,
      aux_sym_known_instruction_token2,
      aux_sym_known_instruction_token3,
      aux_sym_known_instruction_token4,
      aux_sym_known_instruction_token5,
    ACTIONS(128), 19,
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
  [309] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      aux_sym_word_token1,
    STATE(15), 1,
      sym_word,
    STATE(6), 3,
      sym_known_instruction,
      sym_pseudo_instruction,
      sym_unknown_instruction,
    ACTIONS(15), 5,
      aux_sym_known_instruction_token1,
      aux_sym_known_instruction_token2,
      aux_sym_known_instruction_token3,
      aux_sym_known_instruction_token4,
      aux_sym_known_instruction_token5,
    ACTIONS(17), 19,
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
  [352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 25,
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
  [383] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      aux_sym_word_token1,
    STATE(88), 1,
      sym_word,
    STATE(91), 1,
      sym_expression,
    ACTIONS(138), 6,
      aux_sym_operand_prefix_token1,
      aux_sym_operand_prefix_token2,
      aux_sym_operand_prefix_token3,
      aux_sym_effective_address_token1,
      aux_sym_effective_address_token2,
      aux_sym_effective_address_token3,
  [404] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      aux_sym_word_token1,
    STATE(84), 1,
      sym_expression,
    STATE(88), 1,
      sym_word,
    ACTIONS(142), 6,
      aux_sym_operand_prefix_token1,
      aux_sym_operand_prefix_token2,
      aux_sym_operand_prefix_token3,
      aux_sym_effective_address_token1,
      aux_sym_effective_address_token2,
      aux_sym_effective_address_token3,
  [425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 8,
      aux_sym_operand_prefix_token1,
      aux_sym_operand_prefix_token2,
      aux_sym_operand_prefix_token3,
      aux_sym_operand_prefix_token4,
      aux_sym_operand_prefix_token5,
      aux_sym_operand_prefix_token6,
      aux_sym_operand_prefix_token7,
      aux_sym_operand_prefix_token8,
  [439] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    ACTIONS(148), 1,
      aux_sym_source_file_token1,
    ACTIONS(150), 1,
      aux_sym_preproc_directive_token1,
    STATE(37), 1,
      aux_sym_preproc_directive_repeat1,
  [455] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      aux_sym_operands_repeat1,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [469] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    ACTIONS(159), 1,
      aux_sym_source_file_token1,
    ACTIONS(161), 1,
      aux_sym_preproc_directive_token1,
    STATE(37), 1,
      aux_sym_preproc_directive_repeat1,
  [485] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    STATE(40), 1,
      aux_sym_operands_repeat1,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [499] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(168), 1,
      ts_builtin_sym_end,
    ACTIONS(170), 1,
      aux_sym_source_file_token1,
    ACTIONS(172), 1,
      aux_sym_preproc_directive_token1,
    STATE(39), 1,
      aux_sym_preproc_directive_repeat1,
  [515] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    STATE(40), 1,
      aux_sym_operands_repeat1,
    ACTIONS(174), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [529] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(176), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [540] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [551] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_COMMA,
    ACTIONS(184), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [562] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      aux_sym_word_token1,
    STATE(88), 1,
      sym_word,
    STATE(92), 1,
      sym_expression,
  [575] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_source_file_token1,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    STATE(47), 1,
      aux_sym_operands_repeat1,
  [588] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [599] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(148), 1,
      aux_sym_source_file_token1,
    ACTIONS(195), 1,
      aux_sym_preproc_directive_token1,
    STATE(49), 1,
      aux_sym_preproc_directive_repeat1,
  [612] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_COMMA,
    ACTIONS(198), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [623] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(174), 1,
      aux_sym_source_file_token1,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    STATE(47), 1,
      aux_sym_operands_repeat1,
  [636] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      aux_sym_word_token1,
    STATE(88), 1,
      sym_word,
    STATE(94), 1,
      sym_expression,
  [649] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_source_file_token1,
    ACTIONS(204), 1,
      aux_sym_preproc_directive_token1,
    STATE(49), 1,
      aux_sym_preproc_directive_repeat1,
  [662] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 2,
      aux_sym_source_file_token1,
      aux_sym_preproc_directive_token1,
  [673] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_COMMA,
    ACTIONS(206), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [684] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_COMMA,
    ACTIONS(210), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [695] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    ACTIONS(214), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [706] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_COMMA,
    ACTIONS(218), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [717] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_COMMA,
    ACTIONS(222), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [728] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(170), 1,
      aux_sym_source_file_token1,
    ACTIONS(226), 1,
      aux_sym_preproc_directive_token1,
    STATE(53), 1,
      aux_sym_preproc_directive_repeat1,
  [741] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(153), 1,
      aux_sym_source_file_token1,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      aux_sym_operands_repeat1,
  [754] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    ACTIONS(230), 1,
      aux_sym_source_file_token1,
  [764] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(230), 1,
      aux_sym_source_file_token1,
  [774] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(232), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [782] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [790] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(206), 1,
      aux_sym_source_file_token1,
    ACTIONS(208), 1,
      anon_sym_COMMA,
  [800] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(180), 1,
      aux_sym_source_file_token1,
    ACTIONS(182), 1,
      anon_sym_COMMA,
  [810] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(210), 1,
      aux_sym_source_file_token1,
    ACTIONS(212), 1,
      anon_sym_COMMA,
  [820] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      aux_sym_word_token1,
    STATE(60), 1,
      sym_word,
  [830] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(222), 1,
      aux_sym_source_file_token1,
    ACTIONS(224), 1,
      anon_sym_COMMA,
  [840] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(218), 1,
      aux_sym_source_file_token1,
    ACTIONS(220), 1,
      anon_sym_COMMA,
  [850] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(25), 2,
      aux_sym_source_file_token1,
      aux_sym_preproc_directive_token1,
  [858] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(214), 1,
      aux_sym_source_file_token1,
    ACTIONS(216), 1,
      anon_sym_COMMA,
  [868] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [876] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(198), 1,
      aux_sym_source_file_token1,
    ACTIONS(200), 1,
      anon_sym_COMMA,
  [886] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(236), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [894] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(238), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [902] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(184), 1,
      aux_sym_source_file_token1,
    ACTIONS(186), 1,
      anon_sym_COMMA,
  [912] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      aux_sym_word_token1,
    STATE(41), 1,
      sym_word,
  [922] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(176), 1,
      aux_sym_source_file_token1,
    ACTIONS(178), 1,
      anon_sym_COMMA,
  [932] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_source_file_token1,
    ACTIONS(193), 1,
      anon_sym_COMMA,
  [942] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(232), 1,
      aux_sym_source_file_token1,
  [949] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(238), 1,
      aux_sym_source_file_token1,
  [956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_RBRACK,
  [963] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(230), 1,
      aux_sym_source_file_token1,
  [970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_RBRACK,
  [977] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(122), 1,
      aux_sym_source_file_token1,
  [984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_RBRACK,
  [991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
  [998] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(37), 1,
      aux_sym_source_file_token1,
  [1005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_RBRACK,
  [1012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_RBRACK,
  [1019] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(236), 1,
      aux_sym_source_file_token1,
  [1026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(27)] = 0,
  [SMALL_STATE(28)] = 77,
  [SMALL_STATE(29)] = 153,
  [SMALL_STATE(30)] = 210,
  [SMALL_STATE(31)] = 266,
  [SMALL_STATE(32)] = 309,
  [SMALL_STATE(33)] = 352,
  [SMALL_STATE(34)] = 383,
  [SMALL_STATE(35)] = 404,
  [SMALL_STATE(36)] = 425,
  [SMALL_STATE(37)] = 439,
  [SMALL_STATE(38)] = 455,
  [SMALL_STATE(39)] = 469,
  [SMALL_STATE(40)] = 485,
  [SMALL_STATE(41)] = 499,
  [SMALL_STATE(42)] = 515,
  [SMALL_STATE(43)] = 529,
  [SMALL_STATE(44)] = 540,
  [SMALL_STATE(45)] = 551,
  [SMALL_STATE(46)] = 562,
  [SMALL_STATE(47)] = 575,
  [SMALL_STATE(48)] = 588,
  [SMALL_STATE(49)] = 599,
  [SMALL_STATE(50)] = 612,
  [SMALL_STATE(51)] = 623,
  [SMALL_STATE(52)] = 636,
  [SMALL_STATE(53)] = 649,
  [SMALL_STATE(54)] = 662,
  [SMALL_STATE(55)] = 673,
  [SMALL_STATE(56)] = 684,
  [SMALL_STATE(57)] = 695,
  [SMALL_STATE(58)] = 706,
  [SMALL_STATE(59)] = 717,
  [SMALL_STATE(60)] = 728,
  [SMALL_STATE(61)] = 741,
  [SMALL_STATE(62)] = 754,
  [SMALL_STATE(63)] = 764,
  [SMALL_STATE(64)] = 774,
  [SMALL_STATE(65)] = 782,
  [SMALL_STATE(66)] = 790,
  [SMALL_STATE(67)] = 800,
  [SMALL_STATE(68)] = 810,
  [SMALL_STATE(69)] = 820,
  [SMALL_STATE(70)] = 830,
  [SMALL_STATE(71)] = 840,
  [SMALL_STATE(72)] = 850,
  [SMALL_STATE(73)] = 858,
  [SMALL_STATE(74)] = 868,
  [SMALL_STATE(75)] = 876,
  [SMALL_STATE(76)] = 886,
  [SMALL_STATE(77)] = 894,
  [SMALL_STATE(78)] = 902,
  [SMALL_STATE(79)] = 912,
  [SMALL_STATE(80)] = 922,
  [SMALL_STATE(81)] = 932,
  [SMALL_STATE(82)] = 942,
  [SMALL_STATE(83)] = 949,
  [SMALL_STATE(84)] = 956,
  [SMALL_STATE(85)] = 963,
  [SMALL_STATE(86)] = 970,
  [SMALL_STATE(87)] = 977,
  [SMALL_STATE(88)] = 984,
  [SMALL_STATE(89)] = 991,
  [SMALL_STATE(90)] = 998,
  [SMALL_STATE(91)] = 1005,
  [SMALL_STATE(92)] = 1012,
  [SMALL_STATE(93)] = 1019,
  [SMALL_STATE(94)] = 1026,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unknown_instruction, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_known_instruction, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_known_instruction, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_instruction, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_instruction, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unknown_instruction, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_prefix, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_prefix, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_prefix, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_prefix, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(82),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_line, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_prefix, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_preproc_directive_repeat1, 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_preproc_directive_repeat1, 2),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_preproc_directive_repeat1, 2), SHIFT_REPEAT(37),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_directive, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_directive, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2), SHIFT_REPEAT(11),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_directive, 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_directive, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effective_address, 3),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_effective_address, 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_numeric, 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant_numeric, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 2),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2), SHIFT_REPEAT(10),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_preproc_directive_repeat1, 2), SHIFT_REPEAT(49),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effective_address, 4),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_effective_address, 4),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 1),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_charstr, 1),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant_charstr, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 1),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 1),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assembl_directive, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_line, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [244] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
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
