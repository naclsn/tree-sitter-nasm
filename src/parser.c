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
#define STATE_COUNT 189
#define LARGE_STATE_COUNT 27
#define SYMBOL_COUNT 275
#define ALIAS_COUNT 0
#define TOKEN_COUNT 249
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_source_file_token1 = 1,
  anon_sym_PERCENT = 2,
  anon_sym_define = 3,
  anon_sym_idefine = 4,
  anon_sym_xdefine = 5,
  anon_sym_undef = 6,
  anon_sym_assign = 7,
  anon_sym_iassign = 8,
  anon_sym_defstr = 9,
  anon_sym_idefstr = 10,
  anon_sym_deftok = 11,
  anon_sym_ideftok = 12,
  anon_sym_defalias = 13,
  anon_sym_idefalias = 14,
  anon_sym_undefalias = 15,
  anon_sym_clear = 16,
  anon_sym_aliases = 17,
  anon_sym_ifdefalias = 18,
  anon_sym_strcat = 19,
  anon_sym_strlen = 20,
  anon_sym_substr = 21,
  anon_sym_macro = 22,
  anon_sym_imacro = 23,
  anon_sym_endmacro = 24,
  anon_sym_unmacro = 25,
  anon_sym_rotate = 26,
  anon_sym_if = 27,
  anon_sym_ifn = 28,
  anon_sym_elif = 29,
  anon_sym_elifn = 30,
  anon_sym_else = 31,
  anon_sym_endif = 32,
  anon_sym_rep = 33,
  anon_sym_endrep = 34,
  anon_sym_include = 35,
  anon_sym_pathsearch = 36,
  anon_sym_depend = 37,
  anon_sym_use = 38,
  anon_sym_push = 39,
  anon_sym_pop = 40,
  anon_sym_repl = 41,
  anon_sym_arg = 42,
  anon_sym_stacksize = 43,
  anon_sym_local = 44,
  anon_sym_error = 45,
  anon_sym_warning = 46,
  anon_sym_fatal = 47,
  anon_sym_pragma = 48,
  anon_sym_line = 49,
  anon_sym_bits = 50,
  anon_sym_use16 = 51,
  anon_sym_use32 = 52,
  anon_sym_default = 53,
  anon_sym_section = 54,
  anon_sym_segment = 55,
  anon_sym_absolute = 56,
  anon_sym_extern = 57,
  anon_sym_required = 58,
  anon_sym_global = 59,
  anon_sym_static = 60,
  anon_sym_common = 61,
  anon_sym_prefix = 62,
  anon_sym_gprefix = 63,
  anon_sym_lprefix = 64,
  anon_sym_postfix = 65,
  anon_sym_gpostfix = 66,
  anon_sym_lpostfix = 67,
  anon_sym_cpu = 68,
  anon_sym_float = 69,
  anon_sym_COLON = 70,
  aux_sym_instruction_prefix_token1 = 71,
  aux_sym_instruction_prefix_token2 = 72,
  aux_sym_instruction_prefix_token3 = 73,
  aux_sym_instruction_prefix_token4 = 74,
  aux_sym_instruction_prefix_token5 = 75,
  aux_sym_instruction_prefix_token6 = 76,
  aux_sym_instruction_prefix_token7 = 77,
  aux_sym_instruction_prefix_token8 = 78,
  aux_sym_instruction_prefix_token9 = 79,
  aux_sym_instruction_prefix_token10 = 80,
  aux_sym_instruction_prefix_token11 = 81,
  aux_sym_instruction_prefix_token12 = 82,
  aux_sym_instruction_prefix_token13 = 83,
  aux_sym_instruction_prefix_token14 = 84,
  aux_sym_instruction_prefix_token15 = 85,
  aux_sym_instruction_prefix_token16 = 86,
  aux_sym_instruction_prefix_token17 = 87,
  aux_sym_instruction_prefix_token18 = 88,
  aux_sym_instruction_prefix_token19 = 89,
  aux_sym_instruction_prefix_token20 = 90,
  aux_sym_instruction_prefix_token21 = 91,
  aux_sym_instruction_prefix_token22 = 92,
  aux_sym_known_instruction_token1 = 93,
  aux_sym_known_instruction_token2 = 94,
  aux_sym_known_instruction_token3 = 95,
  aux_sym_known_instruction_token4 = 96,
  aux_sym_known_instruction_token5 = 97,
  aux_sym_known_instruction_token6 = 98,
  aux_sym_pseudo_instruction_token1 = 99,
  aux_sym_pseudo_instruction_token2 = 100,
  aux_sym_pseudo_instruction_token3 = 101,
  aux_sym_pseudo_instruction_token4 = 102,
  aux_sym_pseudo_instruction_token5 = 103,
  aux_sym_pseudo_instruction_token6 = 104,
  aux_sym_pseudo_instruction_token7 = 105,
  aux_sym_pseudo_instruction_token8 = 106,
  aux_sym_pseudo_instruction_token9 = 107,
  aux_sym_pseudo_instruction_token10 = 108,
  aux_sym_pseudo_instruction_token11 = 109,
  aux_sym_pseudo_instruction_token12 = 110,
  aux_sym_pseudo_instruction_token13 = 111,
  aux_sym_pseudo_instruction_token14 = 112,
  aux_sym_pseudo_instruction_token15 = 113,
  aux_sym_pseudo_instruction_token16 = 114,
  aux_sym_pseudo_instruction_token17 = 115,
  aux_sym_pseudo_instruction_token18 = 116,
  aux_sym_pseudo_instruction_token19 = 117,
  anon_sym_COMMA = 118,
  aux_sym_operand_prefix_token1 = 119,
  aux_sym_operand_prefix_token2 = 120,
  aux_sym_operand_prefix_token3 = 121,
  aux_sym_operand_prefix_token4 = 122,
  aux_sym_operand_prefix_token5 = 123,
  aux_sym_operand_prefix_token6 = 124,
  aux_sym_operand_prefix_token7 = 125,
  aux_sym_operand_prefix_token8 = 126,
  aux_sym_operand_prefix_token9 = 127,
  aux_sym_register_token1 = 128,
  aux_sym_register_token2 = 129,
  aux_sym_register_token3 = 130,
  aux_sym_register_token4 = 131,
  aux_sym_register_token5 = 132,
  aux_sym_register_token6 = 133,
  aux_sym_register_token7 = 134,
  aux_sym_register_token8 = 135,
  aux_sym_register_token9 = 136,
  aux_sym_register_token10 = 137,
  aux_sym_register_token11 = 138,
  aux_sym_register_token12 = 139,
  aux_sym_register_token13 = 140,
  aux_sym_register_token14 = 141,
  aux_sym_register_token15 = 142,
  aux_sym_register_token16 = 143,
  aux_sym_register_token17 = 144,
  aux_sym_register_token18 = 145,
  aux_sym_register_token19 = 146,
  aux_sym_register_token20 = 147,
  aux_sym_register_token21 = 148,
  aux_sym_register_token22 = 149,
  aux_sym_register_token23 = 150,
  aux_sym_register_token24 = 151,
  aux_sym_register_token25 = 152,
  aux_sym_register_token26 = 153,
  aux_sym_register_token27 = 154,
  aux_sym_register_token28 = 155,
  aux_sym_register_token29 = 156,
  aux_sym_register_token30 = 157,
  aux_sym_register_token31 = 158,
  aux_sym_register_token32 = 159,
  aux_sym_register_token33 = 160,
  aux_sym_register_token34 = 161,
  aux_sym_register_token35 = 162,
  aux_sym_register_token36 = 163,
  aux_sym_register_token37 = 164,
  aux_sym_register_token38 = 165,
  aux_sym_register_token39 = 166,
  aux_sym_register_token40 = 167,
  aux_sym_register_token41 = 168,
  aux_sym_register_token42 = 169,
  aux_sym_register_token43 = 170,
  aux_sym_register_token44 = 171,
  aux_sym_register_token45 = 172,
  aux_sym_register_token46 = 173,
  aux_sym_register_token47 = 174,
  aux_sym_register_token48 = 175,
  aux_sym_register_token49 = 176,
  aux_sym_register_token50 = 177,
  aux_sym_register_token51 = 178,
  aux_sym_register_token52 = 179,
  aux_sym_register_token53 = 180,
  aux_sym_register_token54 = 181,
  aux_sym_register_token55 = 182,
  aux_sym_register_token56 = 183,
  aux_sym_register_token57 = 184,
  aux_sym_register_token58 = 185,
  aux_sym_register_token59 = 186,
  aux_sym_register_token60 = 187,
  aux_sym_register_token61 = 188,
  aux_sym_register_token62 = 189,
  aux_sym_register_token63 = 190,
  aux_sym_register_token64 = 191,
  aux_sym_register_token65 = 192,
  aux_sym_register_token66 = 193,
  aux_sym_register_token67 = 194,
  aux_sym_register_token68 = 195,
  anon_sym_LBRACK = 196,
  aux_sym_effective_address_token1 = 197,
  aux_sym_effective_address_token2 = 198,
  aux_sym_effective_address_token3 = 199,
  anon_sym_RBRACK = 200,
  aux_sym_constant_numeric_token1 = 201,
  aux_sym_constant_numeric_token2 = 202,
  aux_sym_constant_numeric_token3 = 203,
  aux_sym_constant_numeric_token4 = 204,
  aux_sym_constant_numeric_token5 = 205,
  aux_sym_constant_numeric_token6 = 206,
  aux_sym_constant_numeric_token7 = 207,
  aux_sym_constant_numeric_token8 = 208,
  aux_sym_constant_numeric_token9 = 209,
  aux_sym_constant_numeric_token10 = 210,
  aux_sym_constant_charstr_token1 = 211,
  aux_sym_constant_charstr_token2 = 212,
  aux_sym_constant_charstr_token3 = 213,
  aux_sym_constant_floatpt_token1 = 214,
  aux_sym_constant_floatpt_token2 = 215,
  anon_sym_QMARK = 216,
  anon_sym_PIPE_PIPE = 217,
  anon_sym_CARET_CARET = 218,
  anon_sym_AMP_AMP = 219,
  anon_sym_EQ = 220,
  anon_sym_EQ_EQ = 221,
  anon_sym_BANG_EQ = 222,
  anon_sym_LT_GT = 223,
  anon_sym_LT = 224,
  anon_sym_LT_EQ = 225,
  anon_sym_GT = 226,
  anon_sym_GT_EQ = 227,
  anon_sym_LT_EQ_GT = 228,
  anon_sym_PIPE = 229,
  anon_sym_CARET = 230,
  anon_sym_AMP = 231,
  anon_sym_LT_LT = 232,
  anon_sym_GT_GT = 233,
  anon_sym_LT_LT_LT = 234,
  anon_sym_GT_GT_GT = 235,
  anon_sym_PLUS = 236,
  anon_sym_DASH = 237,
  anon_sym_STAR = 238,
  anon_sym_SLASH = 239,
  anon_sym_SLASH_SLASH = 240,
  anon_sym_PERCENT_PERCENT = 241,
  anon_sym_TILDE = 242,
  anon_sym_BANG = 243,
  aux_sym_unary_expression_token1 = 244,
  anon_sym_LPAREN = 245,
  anon_sym_RPAREN = 246,
  sym_comment = 247,
  aux_sym_word_token1 = 248,
  sym_source_file = 249,
  sym_source_line = 250,
  sym_preproc_directive = 251,
  sym_assembl_directive = 252,
  sym_label = 253,
  sym_instruction = 254,
  sym_instruction_prefix = 255,
  sym_known_instruction = 256,
  sym_pseudo_instruction = 257,
  sym_unknown_instruction = 258,
  sym_operands = 259,
  sym_operand = 260,
  sym_operand_prefix = 261,
  sym_register = 262,
  sym_effective_address = 263,
  sym_constant = 264,
  sym_constant_numeric = 265,
  sym_constant_charstr = 266,
  sym_expression = 267,
  sym_conditional_expression = 268,
  sym_binary_expression = 269,
  sym_unary_expression = 270,
  sym_parenthesized_expression = 271,
  sym_word = 272,
  aux_sym_source_file_repeat1 = 273,
  aux_sym_operands_repeat1 = 274,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_file_token1] = "source_file_token1",
  [anon_sym_PERCENT] = "%",
  [anon_sym_define] = "define",
  [anon_sym_idefine] = "idefine",
  [anon_sym_xdefine] = "xdefine",
  [anon_sym_undef] = "undef",
  [anon_sym_assign] = "assign",
  [anon_sym_iassign] = "iassign",
  [anon_sym_defstr] = "defstr",
  [anon_sym_idefstr] = "idefstr",
  [anon_sym_deftok] = "deftok",
  [anon_sym_ideftok] = "ideftok",
  [anon_sym_defalias] = "defalias",
  [anon_sym_idefalias] = "idefalias",
  [anon_sym_undefalias] = "undefalias",
  [anon_sym_clear] = "clear",
  [anon_sym_aliases] = "aliases",
  [anon_sym_ifdefalias] = "ifdefalias",
  [anon_sym_strcat] = "strcat",
  [anon_sym_strlen] = "strlen",
  [anon_sym_substr] = "substr",
  [anon_sym_macro] = "macro",
  [anon_sym_imacro] = "imacro",
  [anon_sym_endmacro] = "endmacro",
  [anon_sym_unmacro] = "unmacro",
  [anon_sym_rotate] = "rotate",
  [anon_sym_if] = "if",
  [anon_sym_ifn] = "ifn",
  [anon_sym_elif] = "elif",
  [anon_sym_elifn] = "elifn",
  [anon_sym_else] = "else",
  [anon_sym_endif] = "endif",
  [anon_sym_rep] = "rep",
  [anon_sym_endrep] = "endrep",
  [anon_sym_include] = "include",
  [anon_sym_pathsearch] = "pathsearch",
  [anon_sym_depend] = "depend",
  [anon_sym_use] = "use",
  [anon_sym_push] = "push",
  [anon_sym_pop] = "pop",
  [anon_sym_repl] = "repl",
  [anon_sym_arg] = "arg",
  [anon_sym_stacksize] = "stacksize",
  [anon_sym_local] = "local",
  [anon_sym_error] = "error",
  [anon_sym_warning] = "warning",
  [anon_sym_fatal] = "fatal",
  [anon_sym_pragma] = "pragma",
  [anon_sym_line] = "line",
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
  [aux_sym_known_instruction_token1] = "known_instruction_token1",
  [aux_sym_known_instruction_token2] = "known_instruction_token2",
  [aux_sym_known_instruction_token3] = "known_instruction_token3",
  [aux_sym_known_instruction_token4] = "known_instruction_token4",
  [aux_sym_known_instruction_token5] = "known_instruction_token5",
  [aux_sym_known_instruction_token6] = "known_instruction_token6",
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
  [anon_sym_COMMA] = ",",
  [aux_sym_operand_prefix_token1] = "operand_prefix_token1",
  [aux_sym_operand_prefix_token2] = "operand_prefix_token2",
  [aux_sym_operand_prefix_token3] = "operand_prefix_token3",
  [aux_sym_operand_prefix_token4] = "operand_prefix_token4",
  [aux_sym_operand_prefix_token5] = "operand_prefix_token5",
  [aux_sym_operand_prefix_token6] = "operand_prefix_token6",
  [aux_sym_operand_prefix_token7] = "operand_prefix_token7",
  [aux_sym_operand_prefix_token8] = "operand_prefix_token8",
  [aux_sym_operand_prefix_token9] = "operand_prefix_token9",
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
  [aux_sym_constant_floatpt_token1] = "constant_floatpt_token1",
  [aux_sym_constant_floatpt_token2] = "constant_floatpt_token2",
  [anon_sym_QMARK] = "\?",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_CARET_CARET] = "^^",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_EQ] = "=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ_GT] = "<=>",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_AMP] = "&",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_LT_LT_LT] = "<<<",
  [anon_sym_GT_GT_GT] = ">>>",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_SLASH_SLASH] = "//",
  [anon_sym_PERCENT_PERCENT] = "%%",
  [anon_sym_TILDE] = "~",
  [anon_sym_BANG] = "!",
  [aux_sym_unary_expression_token1] = "unary_expression_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_comment] = "comment",
  [aux_sym_word_token1] = "word_token1",
  [sym_source_file] = "source_file",
  [sym_source_line] = "source_line",
  [sym_preproc_directive] = "preproc_directive",
  [sym_assembl_directive] = "assembl_directive",
  [sym_label] = "label",
  [sym_instruction] = "instruction",
  [sym_instruction_prefix] = "instruction_prefix",
  [sym_known_instruction] = "known_instruction",
  [sym_pseudo_instruction] = "pseudo_instruction",
  [sym_unknown_instruction] = "unknown_instruction",
  [sym_operands] = "operands",
  [sym_operand] = "operand",
  [sym_operand_prefix] = "operand_prefix",
  [sym_register] = "register",
  [sym_effective_address] = "effective_address",
  [sym_constant] = "constant",
  [sym_constant_numeric] = "constant_numeric",
  [sym_constant_charstr] = "constant_charstr",
  [sym_expression] = "expression",
  [sym_conditional_expression] = "conditional_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_word] = "word",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_operands_repeat1] = "operands_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_file_token1] = aux_sym_source_file_token1,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_define] = anon_sym_define,
  [anon_sym_idefine] = anon_sym_idefine,
  [anon_sym_xdefine] = anon_sym_xdefine,
  [anon_sym_undef] = anon_sym_undef,
  [anon_sym_assign] = anon_sym_assign,
  [anon_sym_iassign] = anon_sym_iassign,
  [anon_sym_defstr] = anon_sym_defstr,
  [anon_sym_idefstr] = anon_sym_idefstr,
  [anon_sym_deftok] = anon_sym_deftok,
  [anon_sym_ideftok] = anon_sym_ideftok,
  [anon_sym_defalias] = anon_sym_defalias,
  [anon_sym_idefalias] = anon_sym_idefalias,
  [anon_sym_undefalias] = anon_sym_undefalias,
  [anon_sym_clear] = anon_sym_clear,
  [anon_sym_aliases] = anon_sym_aliases,
  [anon_sym_ifdefalias] = anon_sym_ifdefalias,
  [anon_sym_strcat] = anon_sym_strcat,
  [anon_sym_strlen] = anon_sym_strlen,
  [anon_sym_substr] = anon_sym_substr,
  [anon_sym_macro] = anon_sym_macro,
  [anon_sym_imacro] = anon_sym_imacro,
  [anon_sym_endmacro] = anon_sym_endmacro,
  [anon_sym_unmacro] = anon_sym_unmacro,
  [anon_sym_rotate] = anon_sym_rotate,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_ifn] = anon_sym_ifn,
  [anon_sym_elif] = anon_sym_elif,
  [anon_sym_elifn] = anon_sym_elifn,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_endif] = anon_sym_endif,
  [anon_sym_rep] = anon_sym_rep,
  [anon_sym_endrep] = anon_sym_endrep,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_pathsearch] = anon_sym_pathsearch,
  [anon_sym_depend] = anon_sym_depend,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_push] = anon_sym_push,
  [anon_sym_pop] = anon_sym_pop,
  [anon_sym_repl] = anon_sym_repl,
  [anon_sym_arg] = anon_sym_arg,
  [anon_sym_stacksize] = anon_sym_stacksize,
  [anon_sym_local] = anon_sym_local,
  [anon_sym_error] = anon_sym_error,
  [anon_sym_warning] = anon_sym_warning,
  [anon_sym_fatal] = anon_sym_fatal,
  [anon_sym_pragma] = anon_sym_pragma,
  [anon_sym_line] = anon_sym_line,
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
  [aux_sym_known_instruction_token1] = aux_sym_known_instruction_token1,
  [aux_sym_known_instruction_token2] = aux_sym_known_instruction_token2,
  [aux_sym_known_instruction_token3] = aux_sym_known_instruction_token3,
  [aux_sym_known_instruction_token4] = aux_sym_known_instruction_token4,
  [aux_sym_known_instruction_token5] = aux_sym_known_instruction_token5,
  [aux_sym_known_instruction_token6] = aux_sym_known_instruction_token6,
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
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_operand_prefix_token1] = aux_sym_operand_prefix_token1,
  [aux_sym_operand_prefix_token2] = aux_sym_operand_prefix_token2,
  [aux_sym_operand_prefix_token3] = aux_sym_operand_prefix_token3,
  [aux_sym_operand_prefix_token4] = aux_sym_operand_prefix_token4,
  [aux_sym_operand_prefix_token5] = aux_sym_operand_prefix_token5,
  [aux_sym_operand_prefix_token6] = aux_sym_operand_prefix_token6,
  [aux_sym_operand_prefix_token7] = aux_sym_operand_prefix_token7,
  [aux_sym_operand_prefix_token8] = aux_sym_operand_prefix_token8,
  [aux_sym_operand_prefix_token9] = aux_sym_operand_prefix_token9,
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
  [aux_sym_constant_floatpt_token1] = aux_sym_constant_floatpt_token1,
  [aux_sym_constant_floatpt_token2] = aux_sym_constant_floatpt_token2,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_CARET_CARET] = anon_sym_CARET_CARET,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ_GT] = anon_sym_LT_EQ_GT,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_LT_LT_LT] = anon_sym_LT_LT_LT,
  [anon_sym_GT_GT_GT] = anon_sym_GT_GT_GT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [anon_sym_PERCENT_PERCENT] = anon_sym_PERCENT_PERCENT,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_BANG] = anon_sym_BANG,
  [aux_sym_unary_expression_token1] = aux_sym_unary_expression_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_comment] = sym_comment,
  [aux_sym_word_token1] = aux_sym_word_token1,
  [sym_source_file] = sym_source_file,
  [sym_source_line] = sym_source_line,
  [sym_preproc_directive] = sym_preproc_directive,
  [sym_assembl_directive] = sym_assembl_directive,
  [sym_label] = sym_label,
  [sym_instruction] = sym_instruction,
  [sym_instruction_prefix] = sym_instruction_prefix,
  [sym_known_instruction] = sym_known_instruction,
  [sym_pseudo_instruction] = sym_pseudo_instruction,
  [sym_unknown_instruction] = sym_unknown_instruction,
  [sym_operands] = sym_operands,
  [sym_operand] = sym_operand,
  [sym_operand_prefix] = sym_operand_prefix,
  [sym_register] = sym_register,
  [sym_effective_address] = sym_effective_address,
  [sym_constant] = sym_constant,
  [sym_constant_numeric] = sym_constant_numeric,
  [sym_constant_charstr] = sym_constant_charstr,
  [sym_expression] = sym_expression,
  [sym_conditional_expression] = sym_conditional_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_word] = sym_word,
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
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_idefine] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xdefine] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_undef] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iassign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defstr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_idefstr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deftok] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ideftok] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defalias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_idefalias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_undefalias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_clear] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aliases] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ifdefalias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_strcat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_strlen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_substr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_macro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_imacro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endmacro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unmacro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rotate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ifn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elifn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rep] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endrep] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pathsearch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_depend] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_repl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_arg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stacksize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_local] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_error] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_warning] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fatal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pragma] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_line] = {
    .visible = true,
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
  [aux_sym_known_instruction_token6] = {
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
  [anon_sym_COMMA] = {
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
  [aux_sym_operand_prefix_token9] = {
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
  [aux_sym_constant_floatpt_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constant_floatpt_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_unary_expression_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
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
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
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
      if (eof) ADVANCE(420);
      if (lookahead == '!') ADVANCE(844);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '$') ADVANCE(396);
      if (lookahead == '%') ADVANCE(427);
      if (lookahead == '&') ADVANCE(831);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '(') ADVANCE(847);
      if (lookahead == ')') ADVANCE(848);
      if (lookahead == '*') ADVANCE(838);
      if (lookahead == '+') ADVANCE(836);
      if (lookahead == ',') ADVANCE(619);
      if (lookahead == '-') ADVANCE(837);
      if (lookahead == '/') ADVANCE(839);
      if (lookahead == '0') ADVANCE(784);
      if (lookahead == '1') ADVANCE(785);
      if (lookahead == ':') ADVANCE(516);
      if (lookahead == ';') ADVANCE(849);
      if (lookahead == '<') ADVANCE(824);
      if (lookahead == '=') ADVANCE(820);
      if (lookahead == '>') ADVANCE(826);
      if (lookahead == '?') ADVANCE(816);
      if (lookahead == 'A') ADVANCE(38);
      if (lookahead == 'B') ADVANCE(337);
      if (lookahead == 'C') ADVANCE(338);
      if (lookahead == 'D') ADVANCE(303);
      if (lookahead == 'E') ADVANCE(297);
      if (lookahead == 'F') ADVANCE(377);
      if (lookahead == 'G') ADVANCE(378);
      if (lookahead == 'I') ADVANCE(353);
      if (lookahead == 'L') ADVANCE(356);
      if (lookahead == 'M') ADVANCE(357);
      if (lookahead == 'R') ADVANCE(40);
      if (lookahead == 'S') ADVANCE(307);
      if (lookahead == 'W') ADVANCE(359);
      if (lookahead == 'X') ADVANCE(298);
      if (lookahead == '[') ADVANCE(776);
      if (lookahead == '\\') SKIP(404)
      if (lookahead == ']') ADVANCE(783);
      if (lookahead == '^') ADVANCE(830);
      if (lookahead == '`') ADVANCE(57);
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'b') ADVANCE(164);
      if (lookahead == 'c') ADVANCE(53);
      if (lookahead == 'd') ADVANCE(115);
      if (lookahead == 'e') ADVANCE(191);
      if (lookahead == 'f') ADVANCE(58);
      if (lookahead == 'g') ADVANCE(195);
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == 'l') ADVANCE(54);
      if (lookahead == 'm') ADVANCE(60);
      if (lookahead == 'p') ADVANCE(68);
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == 's') ADVANCE(52);
      if (lookahead == 'u') ADVANCE(208);
      if (lookahead == 'w') ADVANCE(71);
      if (lookahead == 'x') ADVANCE(113);
      if (lookahead == '|') ADVANCE(829);
      if (lookahead == '~') ADVANCE(842);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(358);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(41);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(390);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(339);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(391);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(392);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(786);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(787);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(401);
      if (lookahead == '%') ADVANCE(426);
      if (lookahead == ',') ADVANCE(619);
      if (lookahead == ';') ADVANCE(849);
      if (lookahead == 'A') ADVANCE(854);
      if (lookahead == 'B') ADVANCE(1044);
      if (lookahead == 'C') ADVANCE(1072);
      if (lookahead == 'D') ADVANCE(973);
      if (lookahead == 'E') ADVANCE(1060);
      if (lookahead == 'F') ADVANCE(1074);
      if (lookahead == 'G') ADVANCE(1075);
      if (lookahead == 'L') ADVANCE(1046);
      if (lookahead == 'R') ADVANCE(1000);
      if (lookahead == 'S') ADVANCE(981);
      if (lookahead == '\\') SKIP(3)
      if (lookahead == 'a') ADVANCE(853);
      if (lookahead == 'b') ADVANCE(900);
      if (lookahead == 'c') ADVANCE(925);
      if (lookahead == 'd') ADVANCE(882);
      if (lookahead == 'e') ADVANCE(966);
      if (lookahead == 'f') ADVANCE(911);
      if (lookahead == 'g') ADVANCE(913);
      if (lookahead == 'l') ADVANCE(934);
      if (lookahead == 'p') ADVANCE(929);
      if (lookahead == 'r') ADVANCE(872);
      if (lookahead == 's') ADVANCE(883);
      if (lookahead == 'u') ADVANCE(940);
      if (lookahead == 'w') ADVANCE(873);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1042);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1047);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1048);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(859);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1027);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(969);
      if (lookahead == '.' ||
          lookahead == '?' ||
          ('H' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(1099);
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
      if (lookahead == '\n') SKIP(28)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '\r') SKIP(8)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(29)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(29)
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
      if (lookahead == '\n') SKIP(32)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(32)
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
      if (lookahead == '\n') SKIP(27)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '\r') SKIP(18)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(34)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(34)
      if (lookahead == '\r') SKIP(20)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(31)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '\r') SKIP(22)
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == '\r') ADVANCE(24);
      if (lookahead == '!') ADVANCE(843);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '$') ADVANCE(399);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '(') ADVANCE(847);
      if (lookahead == '+') ADVANCE(836);
      if (lookahead == '-') ADVANCE(837);
      if (lookahead == '0') ADVANCE(788);
      if (lookahead == '1') ADVANCE(789);
      if (lookahead == ':') ADVANCE(516);
      if (lookahead == ';') ADVANCE(849);
      if (lookahead == '[') ADVANCE(776);
      if (lookahead == '\\') SKIP(5)
      if (lookahead == '`') ADVANCE(57);
      if (lookahead == '~') ADVANCE(842);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(24)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(855);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1015);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1018);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(977);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(967);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1073);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1075);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1042);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1046);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1047);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1048);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(858);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(1091);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(856);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(980);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1026);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1049);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(969);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1093);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1094);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(790);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(791);
      if (lookahead == '.' ||
          lookahead == '?' ||
          ('H' <= lookahead && lookahead <= 'V') ||
          ('_' <= lookahead && lookahead <= 'v')) ADVANCE(1099);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '\r') ADVANCE(25);
      if (lookahead == '!') ADVANCE(843);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '$') ADVANCE(399);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '(') ADVANCE(847);
      if (lookahead == '+') ADVANCE(836);
      if (lookahead == '-') ADVANCE(837);
      if (lookahead == '0') ADVANCE(788);
      if (lookahead == '1') ADVANCE(789);
      if (lookahead == ';') ADVANCE(849);
      if (lookahead == '[') ADVANCE(776);
      if (lookahead == '\\') SKIP(7)
      if (lookahead == '`') ADVANCE(57);
      if (lookahead == '~') ADVANCE(842);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(25)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1014);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1016);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1019);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1020);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(968);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1098);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1089);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(1091);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(857);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1005);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1092);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1049);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1093);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1094);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(790);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(791);
      if (lookahead == '.' ||
          lookahead == '?' ||
          ('G' <= lookahead && lookahead <= 'X') ||
          ('_' <= lookahead && lookahead <= 'x')) ADVANCE(1099);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == '\r') ADVANCE(26);
      if (lookahead == '$') ADVANCE(401);
      if (lookahead == ';') ADVANCE(849);
      if (lookahead == '\\') SKIP(13)
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(26)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(854);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1044);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1072);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(973);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1060);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1074);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1075);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1042);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1046);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1047);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1048);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(859);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1000);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(981);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1027);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(969);
      if (lookahead == '.' ||
          lookahead == '?' ||
          ('H' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(1099);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == '\r') ADVANCE(27);
      if (lookahead == '!') ADVANCE(50);
      if (lookahead == '%') ADVANCE(427);
      if (lookahead == '&') ADVANCE(831);
      if (lookahead == '*') ADVANCE(838);
      if (lookahead == '+') ADVANCE(836);
      if (lookahead == ',') ADVANCE(619);
      if (lookahead == '-') ADVANCE(837);
      if (lookahead == '/') ADVANCE(839);
      if (lookahead == ';') ADVANCE(849);
      if (lookahead == '<') ADVANCE(824);
      if (lookahead == '=') ADVANCE(820);
      if (lookahead == '>') ADVANCE(826);
      if (lookahead == '?') ADVANCE(816);
      if (lookahead == '\\') SKIP(19)
      if (lookahead == '^') ADVANCE(830);
      if (lookahead == '|') ADVANCE(829);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(27)
      END_STATE();
    case 28:
      if (lookahead == '!') ADVANCE(843);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '$') ADVANCE(399);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '(') ADVANCE(847);
      if (lookahead == '+') ADVANCE(836);
      if (lookahead == '-') ADVANCE(837);
      if (lookahead == '0') ADVANCE(788);
      if (lookahead == '1') ADVANCE(789);
      if (lookahead == ';') ADVANCE(849);
      if (lookahead == '[') ADVANCE(776);
      if (lookahead == '\\') SKIP(9)
      if (lookahead == '`') ADVANCE(57);
      if (lookahead == '~') ADVANCE(842);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1014);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1016);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1019);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1020);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(968);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1098);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1089);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(1091);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(857);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1005);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1092);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1049);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1093);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1094);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(790);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(791);
      if (lookahead == '.' ||
          lookahead == '?' ||
          ('G' <= lookahead && lookahead <= 'X') ||
          ('_' <= lookahead && lookahead <= 'x')) ADVANCE(1099);
      END_STATE();
    case 29:
      if (lookahead == '!') ADVANCE(843);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '$') ADVANCE(399);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '(') ADVANCE(847);
      if (lookahead == '+') ADVANCE(836);
      if (lookahead == '-') ADVANCE(837);
      if (lookahead == '0') ADVANCE(788);
      if (lookahead == '1') ADVANCE(789);
      if (lookahead == ';') ADVANCE(849);
      if (lookahead == '[') ADVANCE(776);
      if (lookahead == '\\') SKIP(11)
      if (lookahead == '`') ADVANCE(57);
      if (lookahead == '~') ADVANCE(842);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1014);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1017);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1019);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1021);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(968);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1098);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(857);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1006);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(790);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(791);
      if (lookahead == '.' ||
          lookahead == '?' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1099);
      END_STATE();
    case 30:
      if (lookahead == '!') ADVANCE(843);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '$') ADVANCE(399);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '(') ADVANCE(847);
      if (lookahead == '+') ADVANCE(836);
      if (lookahead == '-') ADVANCE(837);
      if (lookahead == '0') ADVANCE(788);
      if (lookahead == '1') ADVANCE(789);
      if (lookahead == ';') ADVANCE(849);
      if (lookahead == '\\') SKIP(17)
      if (lookahead == '`') ADVANCE(57);
      if (lookahead == '~') ADVANCE(842);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(978);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1097);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1090);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1050);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1009);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1007);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1049);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(790);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('C' <= lookahead && lookahead <= 'F') ||
          ('c' <= lookahead && lookahead <= 'f')) ADVANCE(1098);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(791);
      if (lookahead == '.' ||
          lookahead == '?' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1099);
      END_STATE();
    case 31:
      if (lookahead == '!') ADVANCE(843);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '$') ADVANCE(399);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '(') ADVANCE(847);
      if (lookahead == '+') ADVANCE(836);
      if (lookahead == '-') ADVANCE(837);
      if (lookahead == '0') ADVANCE(788);
      if (lookahead == '1') ADVANCE(789);
      if (lookahead == ';') ADVANCE(849);
      if (lookahead == '\\') SKIP(23)
      if (lookahead == '`') ADVANCE(57);
      if (lookahead == '~') ADVANCE(842);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1007);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(790);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(791);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1098);
      if (lookahead == '.' ||
          lookahead == '?' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1099);
      END_STATE();
    case 32:
      if (lookahead == '!') ADVANCE(50);
      if (lookahead == '%') ADVANCE(427);
      if (lookahead == '&') ADVANCE(831);
      if (lookahead == ')') ADVANCE(848);
      if (lookahead == '*') ADVANCE(838);
      if (lookahead == '+') ADVANCE(836);
      if (lookahead == '-') ADVANCE(837);
      if (lookahead == '/') ADVANCE(839);
      if (lookahead == ':') ADVANCE(516);
      if (lookahead == ';') ADVANCE(849);
      if (lookahead == '<') ADVANCE(824);
      if (lookahead == '=') ADVANCE(820);
      if (lookahead == '>') ADVANCE(826);
      if (lookahead == '?') ADVANCE(816);
      if (lookahead == '\\') SKIP(15)
      if (lookahead == ']') ADVANCE(783);
      if (lookahead == '^') ADVANCE(830);
      if (lookahead == 'a') ADVANCE(201);
      if (lookahead == 'c') ADVANCE(200);
      if (lookahead == 'd') ADVANCE(125);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 'i') ADVANCE(66);
      if (lookahead == 'l') ADVANCE(165);
      if (lookahead == 'm') ADVANCE(59);
      if (lookahead == 'p') ADVANCE(69);
      if (lookahead == 'r') ADVANCE(132);
      if (lookahead == 's') ADVANCE(274);
      if (lookahead == 'u') ADVANCE(209);
      if (lookahead == 'w') ADVANCE(70);
      if (lookahead == 'x') ADVANCE(112);
      if (lookahead == '|') ADVANCE(829);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(809);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '$') ADVANCE(401);
      if (lookahead == ';') ADVANCE(849);
      if (lookahead == '\\') SKIP(21)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(988);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(974);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1061);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1042);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1047);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1011);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(982);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1027);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (lookahead == '.' ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1099);
      END_STATE();
    case 35:
      if (lookahead == '\'') ADVANCE(808);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '0') ADVANCE(764);
      if (lookahead == '1') ADVANCE(766);
      if (lookahead == '2') ADVANCE(768);
      if (lookahead == '3') ADVANCE(770);
      if (lookahead == '4') ADVANCE(772);
      if (lookahead == '5') ADVANCE(774);
      END_STATE();
    case 37:
      if (lookahead == '1') ADVANCE(47);
      if (lookahead == '3') ADVANCE(42);
      if (lookahead == '6') ADVANCE(45);
      if (lookahead == 'L') ADVANCE(638);
      if (lookahead == 'l') ADVANCE(639);
      if (lookahead == 'r') ADVANCE(156);
      if (lookahead == 's') ADVANCE(254);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(379);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(315);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(641);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 38:
      if (lookahead == '1') ADVANCE(47);
      if (lookahead == '3') ADVANCE(42);
      if (lookahead == '6') ADVANCE(45);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(379);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(315);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(641);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(638);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 39:
      if (lookahead == '1') ADVANCE(36);
      if (lookahead == '8') ADVANCE(760);
      if (lookahead == '9') ADVANCE(762);
      if (lookahead == 'E') ADVANCE(347);
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == 'o') ADVANCE(283);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(393);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(365);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(394);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(340);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(341);
      END_STATE();
    case 40:
      if (lookahead == '1') ADVANCE(36);
      if (lookahead == '8') ADVANCE(760);
      if (lookahead == '9') ADVANCE(762);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(393);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(365);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(394);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(340);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(347);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(341);
      END_STATE();
    case 41:
      if (lookahead == '1') ADVANCE(48);
      if (lookahead == '3') ADVANCE(43);
      if (lookahead == '6') ADVANCE(46);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(360);
      END_STATE();
    case 42:
      if (lookahead == '2') ADVANCE(540);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 43:
      if (lookahead == '2') ADVANCE(548);
      END_STATE();
    case 44:
      if (lookahead == '2') ADVANCE(482);
      END_STATE();
    case 45:
      if (lookahead == '4') ADVANCE(543);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 46:
      if (lookahead == '4') ADVANCE(550);
      END_STATE();
    case 47:
      if (lookahead == '6') ADVANCE(537);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 48:
      if (lookahead == '6') ADVANCE(546);
      END_STATE();
    case 49:
      if (lookahead == '6') ADVANCE(480);
      END_STATE();
    case 50:
      if (lookahead == '=') ADVANCE(822);
      END_STATE();
    case 51:
      if (lookahead == 'C') ADVANCE(346);
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(332);
      if (lookahead == 'T') ADVANCE(368);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == 'u') ADVANCE(93);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(299);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(692);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(688);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(556);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(382);
      END_STATE();
    case 53:
      if (lookahead == 'L') ADVANCE(643);
      if (lookahead == 'l') ADVANCE(644);
      if (lookahead == 'o') ADVANCE(205);
      if (lookahead == 'p') ADVANCE(287);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(646);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(552);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 54:
      if (lookahead == 'O') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(218);
      if (lookahead == 'o') ADVANCE(51);
      if (lookahead == 'p') ADVANCE(235);
      END_STATE();
    case 55:
      if (lookahead == 'P') ADVANCE(519);
      if (lookahead == 'p') ADVANCE(459);
      if (lookahead == 'q') ADVANCE(288);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(779);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(304);
      END_STATE();
    case 56:
      if (lookahead == 'R') ADVANCE(344);
      if (lookahead == 'a') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 57:
      if (lookahead == '\\') ADVANCE(402);
      if (lookahead == '`') ADVANCE(810);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(277);
      if (lookahead == 'l') ADVANCE(232);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(561);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(102);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(389);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(198);
      if (lookahead == 'i') ADVANCE(220);
      if (lookahead == 's') ADVANCE(279);
      if (lookahead == 't') ADVANCE(228);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(476);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(269);
      if (lookahead == 'd') ADVANCE(128);
      if (lookahead == 'f') ADVANCE(452);
      if (lookahead == 'm') ADVANCE(88);
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(269);
      if (lookahead == 'd') ADVANCE(128);
      if (lookahead == 'f') ADVANCE(452);
      if (lookahead == 'm') ADVANCE(88);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(308);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(270);
      if (lookahead == 'o') ADVANCE(237);
      if (lookahead == 'r') ADVANCE(65);
      if (lookahead == 'u') ADVANCE(261);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(270);
      if (lookahead == 'o') ADVANCE(236);
      if (lookahead == 'r') ADVANCE(64);
      if (lookahead == 'u') ADVANCE(261);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(245);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(369);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(517);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(240);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(202);
      if (lookahead == 'i') ADVANCE(221);
      if (lookahead == 's') ADVANCE(281);
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(262);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(271);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(282);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(257);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(247);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(258);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(259);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(272);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(276);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(203);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == 'i') ADVANCE(220);
      if (lookahead == 's') ADVANCE(279);
      if (lookahead == 't') ADVANCE(228);
      END_STATE();
    case 93:
      if (lookahead == 'b') ADVANCE(263);
      END_STATE();
    case 94:
      if (lookahead == 'b') ADVANCE(75);
      END_STATE();
    case 95:
      if (lookahead == 'c') ADVANCE(189);
      END_STATE();
    case 96:
      if (lookahead == 'c') ADVANCE(189);
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 97:
      if (lookahead == 'c') ADVANCE(496);
      END_STATE();
    case 98:
      if (lookahead == 'c') ADVANCE(162);
      END_STATE();
    case 99:
      if (lookahead == 'c') ADVANCE(278);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(845);
      END_STATE();
    case 100:
      if (lookahead == 'c') ADVANCE(196);
      END_STATE();
    case 101:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 102:
      if (lookahead == 'c') ADVANCE(248);
      END_STATE();
    case 103:
      if (lookahead == 'c') ADVANCE(250);
      END_STATE();
    case 104:
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'l') ADVANCE(135);
      END_STATE();
    case 105:
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'l') ADVANCE(135);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(311);
      END_STATE();
    case 106:
      if (lookahead == 'c') ADVANCE(251);
      END_STATE();
    case 107:
      if (lookahead == 'c') ADVANCE(252);
      END_STATE();
    case 108:
      if (lookahead == 'd') ADVANCE(175);
      END_STATE();
    case 109:
      if (lookahead == 'd') ADVANCE(463);
      END_STATE();
    case 110:
      if (lookahead == 'd') ADVANCE(492);
      END_STATE();
    case 111:
      if (lookahead == 'd') ADVANCE(127);
      END_STATE();
    case 112:
      if (lookahead == 'd') ADVANCE(133);
      END_STATE();
    case 113:
      if (lookahead == 'd') ADVANCE(133);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(310);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(325);
      END_STATE();
    case 114:
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(89);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(142);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(578);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(584);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(650);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(694);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(648);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(591);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(587);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(554);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(589);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(581);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(684);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(593);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(465);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(456);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(477);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(451);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(429);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(430);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(470);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(464);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(461);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(239);
      if (lookahead == 'o') ADVANCE(283);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 142:
      if (lookahead == 'f') ADVANCE(61);
      if (lookahead == 'p') ADVANCE(131);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(395);
      END_STATE();
    case 143:
      if (lookahead == 'f') ADVANCE(454);
      END_STATE();
    case 144:
      if (lookahead == 'f') ADVANCE(76);
      END_STATE();
    case 145:
      if (lookahead == 'f') ADVANCE(457);
      END_STATE();
    case 146:
      if (lookahead == 'f') ADVANCE(431);
      END_STATE();
    case 147:
      if (lookahead == 'f') ADVANCE(167);
      END_STATE();
    case 148:
      if (lookahead == 'f') ADVANCE(91);
      END_STATE();
    case 149:
      if (lookahead == 'f') ADVANCE(184);
      END_STATE();
    case 150:
      if (lookahead == 'f') ADVANCE(171);
      END_STATE();
    case 151:
      if (lookahead == 'f') ADVANCE(173);
      END_STATE();
    case 152:
      if (lookahead == 'f') ADVANCE(174);
      END_STATE();
    case 153:
      if (lookahead == 'f') ADVANCE(176);
      END_STATE();
    case 154:
      if (lookahead == 'f') ADVANCE(178);
      END_STATE();
    case 155:
      if (lookahead == 'f') ADVANCE(92);
      if (lookahead == 'p') ADVANCE(131);
      END_STATE();
    case 156:
      if (lookahead == 'g') ADVANCE(469);
      END_STATE();
    case 157:
      if (lookahead == 'g') ADVANCE(473);
      END_STATE();
    case 158:
      if (lookahead == 'g') ADVANCE(207);
      END_STATE();
    case 159:
      if (lookahead == 'g') ADVANCE(210);
      END_STATE();
    case 160:
      if (lookahead == 'g') ADVANCE(214);
      END_STATE();
    case 161:
      if (lookahead == 'h') ADVANCE(466);
      END_STATE();
    case 162:
      if (lookahead == 'h') ADVANCE(462);
      END_STATE();
    case 163:
      if (lookahead == 'h') ADVANCE(264);
      END_STATE();
    case 164:
      if (lookahead == 'i') ADVANCE(275);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(654);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(652);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(316);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(690);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(686);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 165:
      if (lookahead == 'i') ADVANCE(218);
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 166:
      if (lookahead == 'i') ADVANCE(143);
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 167:
      if (lookahead == 'i') ADVANCE(290);
      END_STATE();
    case 168:
      if (lookahead == 'i') ADVANCE(296);
      END_STATE();
    case 169:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 170:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 171:
      if (lookahead == 'i') ADVANCE(291);
      END_STATE();
    case 172:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 173:
      if (lookahead == 'i') ADVANCE(292);
      END_STATE();
    case 174:
      if (lookahead == 'i') ADVANCE(293);
      END_STATE();
    case 175:
      if (lookahead == 'i') ADVANCE(145);
      if (lookahead == 'm') ADVANCE(90);
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 176:
      if (lookahead == 'i') ADVANCE(294);
      END_STATE();
    case 177:
      if (lookahead == 'i') ADVANCE(253);
      END_STATE();
    case 178:
      if (lookahead == 'i') ADVANCE(295);
      END_STATE();
    case 179:
      if (lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 180:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 181:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 182:
      if (lookahead == 'i') ADVANCE(234);
      END_STATE();
    case 183:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 184:
      if (lookahead == 'i') ADVANCE(222);
      END_STATE();
    case 185:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 186:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 187:
      if (lookahead == 'k') ADVANCE(436);
      END_STATE();
    case 188:
      if (lookahead == 'k') ADVANCE(437);
      END_STATE();
    case 189:
      if (lookahead == 'k') ADVANCE(265);
      END_STATE();
    case 190:
      if (lookahead == 'l') ADVANCE(166);
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 191:
      if (lookahead == 'l') ADVANCE(166);
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(246);
      if (lookahead == 'x') ADVANCE(796);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(335);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(334);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(336);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(333);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(387);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(558);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'F' ||
          lookahead == '_' ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(395);
      END_STATE();
    case 192:
      if (lookahead == 'l') ADVANCE(475);
      END_STATE();
    case 193:
      if (lookahead == 'l') ADVANCE(471);
      END_STATE();
    case 194:
      if (lookahead == 'l') ADVANCE(494);
      END_STATE();
    case 195:
      if (lookahead == 'l') ADVANCE(227);
      if (lookahead == 'p') ADVANCE(231);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(563);
      END_STATE();
    case 196:
      if (lookahead == 'l') ADVANCE(289);
      END_STATE();
    case 197:
      if (lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 198:
      if (lookahead == 'l') ADVANCE(180);
      if (lookahead == 'u') ADVANCE(199);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 199:
      if (lookahead == 'l') ADVANCE(273);
      END_STATE();
    case 200:
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 201:
      if (lookahead == 'l') ADVANCE(169);
      if (lookahead == 'r') ADVANCE(156);
      if (lookahead == 's') ADVANCE(254);
      END_STATE();
    case 202:
      if (lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 203:
      if (lookahead == 'l') ADVANCE(185);
      END_STATE();
    case 204:
      if (lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 205:
      if (lookahead == 'm') ADVANCE(206);
      END_STATE();
    case 206:
      if (lookahead == 'm') ADVANCE(233);
      END_STATE();
    case 207:
      if (lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 208:
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 209:
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 210:
      if (lookahead == 'n') ADVANCE(432);
      END_STATE();
    case 211:
      if (lookahead == 'n') ADVANCE(498);
      END_STATE();
    case 212:
      if (lookahead == 'n') ADVANCE(490);
      END_STATE();
    case 213:
      if (lookahead == 'n') ADVANCE(445);
      END_STATE();
    case 214:
      if (lookahead == 'n') ADVANCE(433);
      END_STATE();
    case 215:
      if (lookahead == 'n') ADVANCE(486);
      END_STATE();
    case 216:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 217:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 218:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 219:
      if (lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 220:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 221:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 222:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 223:
      if (lookahead == 'o') ADVANCE(447);
      END_STATE();
    case 224:
      if (lookahead == 'o') ADVANCE(448);
      END_STATE();
    case 225:
      if (lookahead == 'o') ADVANCE(450);
      END_STATE();
    case 226:
      if (lookahead == 'o') ADVANCE(449);
      END_STATE();
    case 227:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 228:
      if (lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 229:
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 230:
      if (lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 231:
      if (lookahead == 'o') ADVANCE(267);
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 232:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 233:
      if (lookahead == 'o') ADVANCE(211);
      END_STATE();
    case 234:
      if (lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 235:
      if (lookahead == 'o') ADVANCE(268);
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 236:
      if (lookahead == 'p') ADVANCE(467);
      END_STATE();
    case 237:
      if (lookahead == 'p') ADVANCE(467);
      if (lookahead == 's') ADVANCE(284);
      END_STATE();
    case 238:
      if (lookahead == 'p') ADVANCE(460);
      END_STATE();
    case 239:
      if (lookahead == 'p') ADVANCE(458);
      END_STATE();
    case 240:
      if (lookahead == 'r') ADVANCE(441);
      END_STATE();
    case 241:
      if (lookahead == 'r') ADVANCE(472);
      END_STATE();
    case 242:
      if (lookahead == 'r') ADVANCE(434);
      END_STATE();
    case 243:
      if (lookahead == 'r') ADVANCE(446);
      END_STATE();
    case 244:
      if (lookahead == 'r') ADVANCE(435);
      END_STATE();
    case 245:
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 246:
      if (lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 247:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 248:
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 249:
      if (lookahead == 'r') ADVANCE(212);
      END_STATE();
    case 250:
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 251:
      if (lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 252:
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 253:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 254:
      if (lookahead == 's') ADVANCE(172);
      END_STATE();
    case 255:
      if (lookahead == 's') ADVANCE(478);
      END_STATE();
    case 256:
      if (lookahead == 's') ADVANCE(442);
      END_STATE();
    case 257:
      if (lookahead == 's') ADVANCE(438);
      END_STATE();
    case 258:
      if (lookahead == 's') ADVANCE(439);
      END_STATE();
    case 259:
      if (lookahead == 's') ADVANCE(443);
      END_STATE();
    case 260:
      if (lookahead == 's') ADVANCE(440);
      END_STATE();
    case 261:
      if (lookahead == 's') ADVANCE(161);
      END_STATE();
    case 262:
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 263:
      if (lookahead == 's') ADVANCE(280);
      END_STATE();
    case 264:
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 265:
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 266:
      if (lookahead == 's') ADVANCE(181);
      END_STATE();
    case 267:
      if (lookahead == 's') ADVANCE(285);
      END_STATE();
    case 268:
      if (lookahead == 's') ADVANCE(286);
      END_STATE();
    case 269:
      if (lookahead == 's') ADVANCE(266);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(514);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(444);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(484);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(77);
      if (lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 275:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 276:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 277:
      if (lookahead == 't') ADVANCE(62);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 278:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 279:
      if (lookahead == 't') ADVANCE(242);
      END_STATE();
    case 280:
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 281:
      if (lookahead == 't') ADVANCE(244);
      END_STATE();
    case 282:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 283:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 284:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 285:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 286:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 287:
      if (lookahead == 'u') ADVANCE(512);
      END_STATE();
    case 288:
      if (lookahead == 'u') ADVANCE(177);
      END_STATE();
    case 289:
      if (lookahead == 'u') ADVANCE(111);
      END_STATE();
    case 290:
      if (lookahead == 'x') ADVANCE(500);
      END_STATE();
    case 291:
      if (lookahead == 'x') ADVANCE(502);
      END_STATE();
    case 292:
      if (lookahead == 'x') ADVANCE(504);
      END_STATE();
    case 293:
      if (lookahead == 'x') ADVANCE(506);
      END_STATE();
    case 294:
      if (lookahead == 'x') ADVANCE(508);
      END_STATE();
    case 295:
      if (lookahead == 'x') ADVANCE(510);
      END_STATE();
    case 296:
      if (lookahead == 'z') ADVANCE(124);
      END_STATE();
    case 297:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(335);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(334);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(336);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(333);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(387);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(558);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'F' ||
          lookahead == '_' ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(395);
      END_STATE();
    case 298:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(310);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(325);
      END_STATE();
    case 299:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(380);
      END_STATE();
    case 300:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(351);
      END_STATE();
    case 301:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(383);
      END_STATE();
    case 302:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(807);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(801);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(800);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(806);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(314);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(302);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(795);
      if (lookahead == 'O' ||
          lookahead == 'Q' ||
          lookahead == 'o' ||
          lookahead == 'q') ADVANCE(803);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(313);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 303:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(578);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(584);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(650);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(694);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(648);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(591);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(587);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(554);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(589);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(581);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(684);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(593);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 304:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(597);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(601);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(607);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(603);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(605);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(599);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(609);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(611);
      END_STATE();
    case 305:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(574);
      END_STATE();
    case 306:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(355);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(366);
      END_STATE();
    case 307:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(299);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(332);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(692);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(688);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(556);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(368);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(382);
      END_STATE();
    case 308:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(570);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(576);
      END_STATE();
    case 309:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(346);
      END_STATE();
    case 310:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(367);
      END_STATE();
    case 311:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(384);
      END_STATE();
    case 312:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(300);
      END_STATE();
    case 313:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(801);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(800);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(314);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(795);
      if (lookahead == 'O' ||
          lookahead == 'Q' ||
          lookahead == 'o' ||
          lookahead == 'q') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(313);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 314:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(801);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(800);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(795);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(314);
      END_STATE();
    case 315:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(567);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 316:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(533);
      END_STATE();
    case 317:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(624);
      END_STATE();
    case 318:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(626);
      END_STATE();
    case 319:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(535);
      END_STATE();
    case 320:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(632);
      END_STATE();
    case 321:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(628);
      END_STATE();
    case 322:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(630);
      END_STATE();
    case 323:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(634);
      END_STATE();
    case 324:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(636);
      END_STATE();
    case 325:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(349);
      END_STATE();
    case 326:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(622);
      END_STATE();
    case 327:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(525);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(527);
      END_STATE();
    case 328:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(529);
      END_STATE();
    case 329:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(531);
      END_STATE();
    case 330:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 331:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 332:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(845);
      END_STATE();
    case 333:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(795);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(726);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 334:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(795);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(722);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 335:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(795);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 336:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(795);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 337:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(654);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(652);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(316);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(690);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(686);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 338:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(646);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(643);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(552);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 339:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(352);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(362);
      END_STATE();
    case 340:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(758);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(748);
      END_STATE();
    case 341:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(756);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(752);
      END_STATE();
    case 342:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(354);
      END_STATE();
    case 343:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(385);
      END_STATE();
    case 344:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(311);
      END_STATE();
    case 345:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(372);
      END_STATE();
    case 346:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(517);
      END_STATE();
    case 347:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(779);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(519);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(304);
      END_STATE();
    case 348:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(572);
      END_STATE();
    case 349:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(331);
      END_STATE();
    case 350:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(343);
      END_STATE();
    case 351:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(348);
      END_STATE();
    case 352:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(330);
      END_STATE();
    case 353:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(308);
      END_STATE();
    case 354:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(613);
      END_STATE();
    case 355:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(319);
      END_STATE();
    case 356:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(309);
      END_STATE();
    case 357:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(389);
      END_STATE();
    case 358:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(306);
      END_STATE();
    case 359:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(369);
      END_STATE();
    case 360:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(371);
      END_STATE();
    case 361:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(373);
      END_STATE();
    case 362:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(374);
      END_STATE();
    case 363:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(375);
      END_STATE();
    case 364:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(376);
      END_STATE();
    case 365:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(754);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(750);
      END_STATE();
    case 366:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(350);
      END_STATE();
    case 367:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(388);
      END_STATE();
    case 368:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(344);
      END_STATE();
    case 369:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(317);
      END_STATE();
    case 370:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(318);
      END_STATE();
    case 371:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(320);
      END_STATE();
    case 372:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(328);
      END_STATE();
    case 373:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(321);
      END_STATE();
    case 374:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(322);
      END_STATE();
    case 375:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(323);
      END_STATE();
    case 376:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(324);
      END_STATE();
    case 377:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(561);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 378:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(563);
      END_STATE();
    case 379:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(781);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 380:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(305);
      END_STATE();
    case 381:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(617);
      END_STATE();
    case 382:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(312);
      END_STATE();
    case 383:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(329);
      END_STATE();
    case 384:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(620);
      END_STATE();
    case 385:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(777);
      END_STATE();
    case 386:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(326);
      END_STATE();
    case 387:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(615);
      END_STATE();
    case 388:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(345);
      END_STATE();
    case 389:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(565);
      END_STATE();
    case 390:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(361);
      END_STATE();
    case 391:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(363);
      END_STATE();
    case 392:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(364);
      END_STATE();
    case 393:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(744);
      END_STATE();
    case 394:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(746);
      END_STATE();
    case 395:
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 396:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(792);
      END_STATE();
    case 397:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(812);
      END_STATE();
    case 398:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(814);
      END_STATE();
    case 399:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(793);
      if (lookahead == '.' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1099);
      END_STATE();
    case 400:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(815);
      END_STATE();
    case 401:
      if (lookahead == '.' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1099);
      END_STATE();
    case 402:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 403:
      if (eof) ADVANCE(420);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 404:
      if (eof) ADVANCE(420);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(403)
      END_STATE();
    case 405:
      if (eof) ADVANCE(420);
      if (lookahead == '\n') SKIP(407)
      END_STATE();
    case 406:
      if (eof) ADVANCE(420);
      if (lookahead == '\n') SKIP(407)
      if (lookahead == '\r') SKIP(405)
      END_STATE();
    case 407:
      if (eof) ADVANCE(420);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(401);
      if (lookahead == '%') ADVANCE(426);
      if (lookahead == ',') ADVANCE(619);
      if (lookahead == ';') ADVANCE(849);
      if (lookahead == 'A') ADVANCE(854);
      if (lookahead == 'B') ADVANCE(1044);
      if (lookahead == 'C') ADVANCE(1072);
      if (lookahead == 'D') ADVANCE(973);
      if (lookahead == 'E') ADVANCE(1060);
      if (lookahead == 'F') ADVANCE(1074);
      if (lookahead == 'G') ADVANCE(1075);
      if (lookahead == 'L') ADVANCE(1046);
      if (lookahead == 'R') ADVANCE(1000);
      if (lookahead == 'S') ADVANCE(981);
      if (lookahead == '\\') SKIP(406)
      if (lookahead == 'a') ADVANCE(853);
      if (lookahead == 'b') ADVANCE(900);
      if (lookahead == 'c') ADVANCE(925);
      if (lookahead == 'd') ADVANCE(882);
      if (lookahead == 'e') ADVANCE(966);
      if (lookahead == 'f') ADVANCE(911);
      if (lookahead == 'g') ADVANCE(913);
      if (lookahead == 'l') ADVANCE(934);
      if (lookahead == 'p') ADVANCE(929);
      if (lookahead == 'r') ADVANCE(872);
      if (lookahead == 's') ADVANCE(883);
      if (lookahead == 'u') ADVANCE(940);
      if (lookahead == 'w') ADVANCE(873);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(407)
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1042);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1047);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1048);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(859);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1027);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(969);
      if (lookahead == '.' ||
          lookahead == '?' ||
          ('H' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(1099);
      END_STATE();
    case 408:
      if (eof) ADVANCE(420);
      if (lookahead == '\n') SKIP(416)
      END_STATE();
    case 409:
      if (eof) ADVANCE(420);
      if (lookahead == '\n') SKIP(416)
      if (lookahead == '\r') SKIP(408)
      END_STATE();
    case 410:
      if (eof) ADVANCE(420);
      if (lookahead == '\n') SKIP(417)
      END_STATE();
    case 411:
      if (eof) ADVANCE(420);
      if (lookahead == '\n') SKIP(417)
      if (lookahead == '\r') SKIP(410)
      END_STATE();
    case 412:
      if (eof) ADVANCE(420);
      if (lookahead == '\n') SKIP(418)
      END_STATE();
    case 413:
      if (eof) ADVANCE(420);
      if (lookahead == '\n') SKIP(418)
      if (lookahead == '\r') SKIP(412)
      END_STATE();
    case 414:
      if (eof) ADVANCE(420);
      if (lookahead == '\n') SKIP(419)
      END_STATE();
    case 415:
      if (eof) ADVANCE(420);
      if (lookahead == '\n') SKIP(419)
      if (lookahead == '\r') SKIP(414)
      END_STATE();
    case 416:
      if (eof) ADVANCE(420);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == '\r') ADVANCE(24);
      if (lookahead == '!') ADVANCE(843);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '$') ADVANCE(399);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '(') ADVANCE(847);
      if (lookahead == '+') ADVANCE(836);
      if (lookahead == '-') ADVANCE(837);
      if (lookahead == '0') ADVANCE(788);
      if (lookahead == '1') ADVANCE(789);
      if (lookahead == ':') ADVANCE(516);
      if (lookahead == ';') ADVANCE(849);
      if (lookahead == '[') ADVANCE(776);
      if (lookahead == '\\') SKIP(409)
      if (lookahead == '`') ADVANCE(57);
      if (lookahead == '~') ADVANCE(842);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(416)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(855);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1015);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1018);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(977);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(967);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1073);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1075);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1042);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1046);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1047);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1048);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(858);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(1091);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(856);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(980);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1026);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1049);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(969);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1093);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1094);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(790);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(791);
      if (lookahead == '.' ||
          lookahead == '?' ||
          ('H' <= lookahead && lookahead <= 'V') ||
          ('_' <= lookahead && lookahead <= 'v')) ADVANCE(1099);
      END_STATE();
    case 417:
      if (eof) ADVANCE(420);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '\r') ADVANCE(25);
      if (lookahead == '!') ADVANCE(843);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '$') ADVANCE(399);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '(') ADVANCE(847);
      if (lookahead == '+') ADVANCE(836);
      if (lookahead == '-') ADVANCE(837);
      if (lookahead == '0') ADVANCE(788);
      if (lookahead == '1') ADVANCE(789);
      if (lookahead == ';') ADVANCE(849);
      if (lookahead == '[') ADVANCE(776);
      if (lookahead == '\\') SKIP(411)
      if (lookahead == '`') ADVANCE(57);
      if (lookahead == '~') ADVANCE(842);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(417)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1014);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1016);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1019);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1020);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(968);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1098);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1089);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(1091);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(857);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1005);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1092);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1049);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1093);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1094);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(790);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(791);
      if (lookahead == '.' ||
          lookahead == '?' ||
          ('G' <= lookahead && lookahead <= 'X') ||
          ('_' <= lookahead && lookahead <= 'x')) ADVANCE(1099);
      END_STATE();
    case 418:
      if (eof) ADVANCE(420);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == '\r') ADVANCE(26);
      if (lookahead == '$') ADVANCE(401);
      if (lookahead == ';') ADVANCE(849);
      if (lookahead == '\\') SKIP(413)
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(418)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(854);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1044);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1072);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(973);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1060);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1074);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1075);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1042);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1046);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1047);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1048);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(859);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1000);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(981);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1027);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(969);
      if (lookahead == '.' ||
          lookahead == '?' ||
          ('H' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(1099);
      END_STATE();
    case 419:
      if (eof) ADVANCE(420);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == '\r') ADVANCE(27);
      if (lookahead == '!') ADVANCE(50);
      if (lookahead == '%') ADVANCE(427);
      if (lookahead == '&') ADVANCE(831);
      if (lookahead == '*') ADVANCE(838);
      if (lookahead == '+') ADVANCE(836);
      if (lookahead == ',') ADVANCE(619);
      if (lookahead == '-') ADVANCE(837);
      if (lookahead == '/') ADVANCE(839);
      if (lookahead == ';') ADVANCE(849);
      if (lookahead == '<') ADVANCE(824);
      if (lookahead == '=') ADVANCE(820);
      if (lookahead == '>') ADVANCE(826);
      if (lookahead == '?') ADVANCE(816);
      if (lookahead == '\\') SKIP(415)
      if (lookahead == '^') ADVANCE(830);
      if (lookahead == '|') ADVANCE(829);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(419)
      END_STATE();
    case 420:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == '\r') ADVANCE(24);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '\r') ADVANCE(25);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == '\r') ADVANCE(26);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == '\r') ADVANCE(27);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '%') ADVANCE(841);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_idefine);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_xdefine);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_undef);
      if (lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_assign);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_iassign);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_defstr);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_idefstr);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_deftok);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_ideftok);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_defalias);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_idefalias);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_undefalias);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_clear);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_aliases);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_ifdefalias);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_strcat);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_strlen);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_substr);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_macro);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_imacro);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_endmacro);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_unmacro);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_rotate);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == 'd') ADVANCE(134);
      if (lookahead == 'n') ADVANCE(453);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_ifn);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_elif);
      if (lookahead == 'n') ADVANCE(455);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_elifn);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_endif);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_rep);
      if (lookahead == 'l') ADVANCE(468);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_rep);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(521);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(327);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(523);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_endrep);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_pathsearch);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_depend);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_use);
      if (lookahead == '1') ADVANCE(49);
      if (lookahead == '3') ADVANCE(44);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_push);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_pop);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_repl);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_arg);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_stacksize);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_warning);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_warning);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_fatal);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_pragma);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_line);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_bits);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_bits);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_use16);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_use16);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_use32);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_use32);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_section);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_segment);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_absolute);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_extern);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_required);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_static);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_common);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_common);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_prefix);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_prefix);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_gprefix);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_gprefix);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_lprefix);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_lprefix);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_postfix);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_postfix);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_gpostfix);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_gpostfix);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_lpostfix);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_lpostfix);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_cpu);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_cpu);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token1);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token1);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(521);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(327);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(523);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(522);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1002);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(524);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token3);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token3);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token4);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token4);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token5);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token5);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token6);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token6);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token7);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token7);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token8);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token8);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token9);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token9);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token10);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token10);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token11);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token11);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1098);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token11);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token12);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token12);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1098);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token12);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token13);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token13);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1098);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token13);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token14);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token14);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token15);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token15);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token16);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token16);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token17);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token17);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token18);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token18);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token19);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token19);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token20);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(724);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(720);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token20);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(725);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(721);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token20);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token21);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token21);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token22);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_instruction_prefix_token22);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_known_instruction_token1);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_known_instruction_token1);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_known_instruction_token2);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_known_instruction_token2);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1098);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_known_instruction_token2);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_known_instruction_token3);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(342);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_known_instruction_token3);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1032);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_known_instruction_token4);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_known_instruction_token4);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_known_instruction_token5);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_known_instruction_token5);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_known_instruction_token6);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_known_instruction_token6);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token1);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token1);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1098);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token1);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(370);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1066);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token2);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token3);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token3);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1098);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token3);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token4);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token4);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token5);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token5);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token6);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token6);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token7);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token7);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token8);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token8);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token9);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token9);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token10);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token10);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token11);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token11);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token12);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token12);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token13);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token13);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token14);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token14);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token15);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token15);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token16);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token16);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token17);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token17);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token18);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token18);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token19);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_pseudo_instruction_token19);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token1);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token1);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token2);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token2);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token3);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token3);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token4);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token4);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token5);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token5);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token6);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token6);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token7);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token7);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token8);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token8);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token9);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_operand_prefix_token9);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_register_token1);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_register_token1);
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_register_token1);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_register_token2);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_register_token2);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_register_token3);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_register_token3);
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_register_token3);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_register_token4);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_register_token4);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_register_token5);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_register_token5);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_register_token6);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_register_token6);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_register_token7);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_register_token7);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_register_token8);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_register_token8);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_register_token9);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_register_token9);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_register_token10);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_register_token10);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_register_token11);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_register_token11);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_register_token12);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_register_token12);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_register_token13);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_register_token13);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_register_token14);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_register_token14);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_register_token15);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_register_token15);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_register_token16);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_register_token16);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_register_token17);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_register_token17);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_register_token18);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_register_token18);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_register_token19);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_register_token19);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_register_token20);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_register_token20);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_register_token21);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_register_token21);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_register_token22);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_register_token22);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_register_token23);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_register_token23);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_register_token24);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_register_token24);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_register_token25);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(656);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_register_token25);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(657);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_register_token26);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(658);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_register_token26);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(659);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_register_token27);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(660);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_register_token27);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(661);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_register_token28);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(662);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_register_token28);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(663);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_register_token29);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_register_token29);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_register_token30);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_register_token30);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_register_token31);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_register_token31);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_register_token32);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_register_token32);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_register_token33);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_register_token33);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_register_token34);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_register_token34);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_register_token35);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_register_token35);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_register_token36);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_register_token36);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_register_token37);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_register_token37);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_register_token38);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_register_token38);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_register_token39);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_register_token39);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_register_token40);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_register_token40);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_register_token41);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_register_token41);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_register_token42);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_register_token42);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_register_token43);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_register_token43);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_register_token44);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_register_token44);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_register_token45);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_register_token45);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_register_token46);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_register_token46);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_register_token47);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_register_token47);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_register_token48);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_register_token48);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_register_token49);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_register_token49);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_register_token50);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_register_token50);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_register_token51);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_register_token51);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_register_token52);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_register_token52);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_register_token53);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_register_token53);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_register_token54);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_register_token54);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_register_token55);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_register_token55);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_register_token56);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_register_token56);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_register_token57);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_register_token57);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_register_token58);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_register_token58);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_register_token59);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_register_token59);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_register_token60);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_register_token60);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_register_token61);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(664);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(728);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(696);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_register_token61);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(665);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(729);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(697);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_register_token62);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(666);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(730);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(698);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_register_token62);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(667);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(731);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(699);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_register_token63);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(668);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(732);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(700);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_register_token63);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(669);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(733);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(701);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_register_token64);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(670);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(734);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(702);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_register_token64);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(671);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(735);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(703);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_register_token65);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(672);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(736);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(704);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_register_token65);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(673);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(737);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(705);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_register_token66);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(674);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(738);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(706);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_register_token66);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(675);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(739);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(707);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_register_token67);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(676);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(740);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(708);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_register_token67);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(677);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(741);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(709);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_register_token68);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(678);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(742);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(710);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_register_token68);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(679);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(743);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(711);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_effective_address_token1);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_effective_address_token1);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_effective_address_token2);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_effective_address_token2);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_effective_address_token3);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_effective_address_token3);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token1);
      if (lookahead == '.') ADVANCE(811);
      if (lookahead == '_') ADVANCE(302);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(804);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(798);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(799);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(805);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(785);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(786);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(794);
      if (lookahead == 'O' ||
          lookahead == 'Q' ||
          lookahead == 'o' ||
          lookahead == 'q') ADVANCE(802);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(787);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token1);
      if (lookahead == '.') ADVANCE(811);
      if (lookahead == '_') ADVANCE(302);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(807);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(801);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(800);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(806);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(785);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(786);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(795);
      if (lookahead == 'O' ||
          lookahead == 'Q' ||
          lookahead == 'o' ||
          lookahead == 'q') ADVANCE(803);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(787);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token1);
      if (lookahead == '.') ADVANCE(811);
      if (lookahead == '_') ADVANCE(314);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(801);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(800);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(795);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(786);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token1);
      if (lookahead == '.') ADVANCE(811);
      if (lookahead == '_') ADVANCE(313);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(801);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(800);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(786);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(795);
      if (lookahead == 'O' ||
          lookahead == 'Q' ||
          lookahead == 'o' ||
          lookahead == 'q') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(787);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token1);
      if (lookahead == '_') ADVANCE(302);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(804);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(798);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(799);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(805);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(789);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(790);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(794);
      if (lookahead == 'O' ||
          lookahead == 'Q' ||
          lookahead == 'o' ||
          lookahead == 'q') ADVANCE(802);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(791);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token1);
      if (lookahead == '_') ADVANCE(302);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(807);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(801);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(800);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(806);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(789);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(790);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(795);
      if (lookahead == 'O' ||
          lookahead == 'Q' ||
          lookahead == 'o' ||
          lookahead == 'q') ADVANCE(803);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(791);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token1);
      if (lookahead == '_') ADVANCE(314);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(801);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(800);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(795);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(790);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token1);
      if (lookahead == '_') ADVANCE(313);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(801);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(800);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(790);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(795);
      if (lookahead == 'O' ||
          lookahead == 'Q' ||
          lookahead == 'o' ||
          lookahead == 'q') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(791);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token2);
      if (lookahead == '.') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(792);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(793);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(794);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token4);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token4);
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token4);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token5);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(798);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(799);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token6);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token6);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token7);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(802);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token8);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token9);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(804);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(795);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token9);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(805);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token10);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_constant_numeric_token10);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_constant_charstr_token1);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_constant_charstr_token2);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_constant_charstr_token3);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_constant_floatpt_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(811);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_constant_floatpt_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(812);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_constant_floatpt_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(400);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(813);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_constant_floatpt_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(814);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_constant_floatpt_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(815);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_CARET_CARET);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(821);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(832);
      if (lookahead == '=') ADVANCE(825);
      if (lookahead == '>') ADVANCE(823);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '>') ADVANCE(828);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(827);
      if (lookahead == '>') ADVANCE(833);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(817);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '^') ADVANCE(818);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(819);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '<') ADVANCE(834);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '>') ADVANCE(835);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(840);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(822);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_unary_expression_token1);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_unary_expression_token1);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(849);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(849);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '\\') ADVANCE(850);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(849);
      if (lookahead == '\\') ADVANCE(850);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '0') ADVANCE(765);
      if (lookahead == '1') ADVANCE(767);
      if (lookahead == '2') ADVANCE(769);
      if (lookahead == '3') ADVANCE(771);
      if (lookahead == '4') ADVANCE(773);
      if (lookahead == '5') ADVANCE(775);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('6' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '1') ADVANCE(868);
      if (lookahead == '3') ADVANCE(861);
      if (lookahead == '6') ADVANCE(865);
      if (lookahead == 'b') ADVANCE(942);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(989);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '1') ADVANCE(868);
      if (lookahead == '3') ADVANCE(861);
      if (lookahead == '6') ADVANCE(865);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(989);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '1') ADVANCE(871);
      if (lookahead == '3') ADVANCE(864);
      if (lookahead == '6') ADVANCE(867);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(992);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(642);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(640);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1098);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '1') ADVANCE(852);
      if (lookahead == '8') ADVANCE(761);
      if (lookahead == '9') ADVANCE(763);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1095);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1058);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1096);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1030);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1057);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1031);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '7') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '1') ADVANCE(852);
      if (lookahead == '8') ADVANCE(761);
      if (lookahead == '9') ADVANCE(763);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1095);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1058);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1096);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1030);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1031);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '7') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '1') ADVANCE(869);
      if (lookahead == '3') ADVANCE(862);
      if (lookahead == '6') ADVANCE(866);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1052);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '1') ADVANCE(869);
      if (lookahead == '3') ADVANCE(862);
      if (lookahead == '6') ADVANCE(866);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '1') ADVANCE(870);
      if (lookahead == '3') ADVANCE(863);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '2') ADVANCE(542);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '2') ADVANCE(549);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '2') ADVANCE(483);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '2') ADVANCE(541);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1098);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '4') ADVANCE(545);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '4') ADVANCE(551);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '4') ADVANCE(544);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1098);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '6') ADVANCE(539);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '6') ADVANCE(547);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '6') ADVANCE(481);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '6') ADVANCE(538);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1098);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E') ADVANCE(1057);
      if (lookahead == 'e') ADVANCE(935);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'a') ADVANCE(936);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'a') ADVANCE(957);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'a') ADVANCE(912);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'a') ADVANCE(951);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'a') ADVANCE(945);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'b') ADVANCE(875);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'c') ADVANCE(497);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'c') ADVANCE(949);
      if (lookahead == 'g') ADVANCE(918);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'd') ADVANCE(493);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(893);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(580);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(586);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(592);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(588);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(555);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(590);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(583);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(594);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(596);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'X') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(880);
      if (lookahead == 't') ADVANCE(876);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(971);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(557);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1081);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(860);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(881);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(489);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(892);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(924);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(937);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(894);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(895);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'f') ADVANCE(901);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'f') ADVANCE(874);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'f') ADVANCE(904);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'f') ADVANCE(905);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'f') ADVANCE(906);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'f') ADVANCE(909);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'f') ADVANCE(910);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'g') ADVANCE(474);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'i') ADVANCE(950);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(990);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'i') ADVANCE(960);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'i') ADVANCE(879);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'i') ADVANCE(938);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'i') ADVANCE(961);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'i') ADVANCE(962);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'i') ADVANCE(963);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'i') ADVANCE(930);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'i') ADVANCE(921);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'i') ADVANCE(964);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'i') ADVANCE(965);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'l') ADVANCE(931);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(562);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'l') ADVANCE(495);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'l') ADVANCE(926);
      if (lookahead == 'p') ADVANCE(932);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(564);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'l') ADVANCE(959);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'l') ADVANCE(946);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'm') ADVANCE(917);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'm') ADVANCE(928);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'm') ADVANCE(888);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'n') ADVANCE(499);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'n') ADVANCE(491);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'n') ADVANCE(899);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'n') ADVANCE(487);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'n') ADVANCE(908);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'n') ADVANCE(947);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'o') ADVANCE(916);
      if (lookahead == 'p') ADVANCE(956);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(553);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'o') ADVANCE(878);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'o') ADVANCE(914);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'o') ADVANCE(919);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'o') ADVANCE(941);
      if (lookahead == 'r') ADVANCE(887);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'o') ADVANCE(922);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'o') ADVANCE(877);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'o') ADVANCE(943);
      if (lookahead == 'r') ADVANCE(890);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'o') ADVANCE(944);
      if (lookahead == 'r') ADVANCE(891);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'p') ADVANCE(933);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(983);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'q') ADVANCE(958);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(520);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(975);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'r') ADVANCE(923);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'r') ADVANCE(920);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'r') ADVANCE(885);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 's') ADVANCE(479);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 's') ADVANCE(884);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 's') ADVANCE(953);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 's') ADVANCE(927);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 's') ADVANCE(954);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 's') ADVANCE(955);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(515);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(485);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(488);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(889);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(907);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(939);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(902);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(886);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(896);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(897);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(898);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'u') ADVANCE(513);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'u') ADVANCE(915);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'u') ADVANCE(903);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'u') ADVANCE(952);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'x') ADVANCE(501);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'x') ADVANCE(503);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'x') ADVANCE(505);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'x') ADVANCE(507);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'x') ADVANCE(509);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'x') ADVANCE(511);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'x') ADVANCE(948);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(1086);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(560);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1024);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1023);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1025);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1022);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(1086);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(559);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'F' ||
          lookahead == '_' ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(1098);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1024);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1023);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1025);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1022);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1029);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'F' ||
          lookahead == '_' ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(1098);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(985);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1001);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1038);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1080);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1082);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(580);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(586);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(592);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(588);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(555);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(590);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(583);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(594);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(596);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'X') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(580);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(586);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(592);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(588);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(590);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(583);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(594);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(596);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'X') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(598);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(602);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(608);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(604);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(606);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(600);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(610);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(612);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'X') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(575);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(579);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(585);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(651);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(695);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(649);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(592);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(588);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(555);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(590);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(582);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(685);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(594);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1098);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'V') ||
          ('g' <= lookahead && lookahead <= 'v') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1078);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1098);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1045);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(971);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1013);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(693);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(689);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(557);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1063);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1081);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(971);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(557);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1081);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(971);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1081);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1035);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(571);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(577);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1062);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(970);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1083);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(989);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(569);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(534);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(536);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(568);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1098);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(625);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(627);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(633);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(629);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(631);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(635);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(637);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1057);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1039);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(526);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(528);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1003:
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
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(532);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1013);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(693);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(689);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1063);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1013);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(693);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1013);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(623);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1037);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1077);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1076);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(972);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(846);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(642);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(640);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1098);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(655);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(653);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(990);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(691);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(687);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1085);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1098);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(655);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(653);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(691);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(687);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1085);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1098);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(655);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(653);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(691);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1098);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(647);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(645);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(553);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1098);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(647);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(645);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1098);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(651);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(695);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(649);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1051);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1098);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(651);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(695);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(649);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1098);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(797);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(727);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1098);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(797);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(723);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1098);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(797);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1098);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(797);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1098);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1041);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1054);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1041);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1065);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(725);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(721);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(759);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(749);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(757);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(753);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1043);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1084);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(987);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(518);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(573);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(780);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1036);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1012);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1033);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1010);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(984);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(614);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(990);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(991);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(983);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1088);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(979);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1064);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1079);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1066);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1067);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1068);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1069);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1070);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1071);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(520);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(975);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(755);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(751);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1040);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(1086);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(560);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(1086);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(1087);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1034);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(993);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1003);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(994);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(995);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(996);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(997);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(998);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(999);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(553);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(562);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1098);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(562);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(564);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(975);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(618);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(782);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1098);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1059);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(976);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(986);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1004);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(621);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(778);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1008);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(616);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1028);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(566);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1052);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1051);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1098);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1053);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1054);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1055);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1056);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(745);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(747);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1085);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1098);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'H' ||
          lookahead == 'X' ||
          lookahead == 'h' ||
          lookahead == 'x') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1098);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1099);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 407},
  [2] = {.lex_state = 416},
  [3] = {.lex_state = 416},
  [4] = {.lex_state = 416},
  [5] = {.lex_state = 416},
  [6] = {.lex_state = 417},
  [7] = {.lex_state = 417},
  [8] = {.lex_state = 417},
  [9] = {.lex_state = 417},
  [10] = {.lex_state = 28},
  [11] = {.lex_state = 28},
  [12] = {.lex_state = 417},
  [13] = {.lex_state = 417},
  [14] = {.lex_state = 29},
  [15] = {.lex_state = 417},
  [16] = {.lex_state = 417},
  [17] = {.lex_state = 29},
  [18] = {.lex_state = 417},
  [19] = {.lex_state = 417},
  [20] = {.lex_state = 417},
  [21] = {.lex_state = 417},
  [22] = {.lex_state = 29},
  [23] = {.lex_state = 29},
  [24] = {.lex_state = 407},
  [25] = {.lex_state = 407},
  [26] = {.lex_state = 407},
  [27] = {.lex_state = 418},
  [28] = {.lex_state = 418},
  [29] = {.lex_state = 418},
  [30] = {.lex_state = 418},
  [31] = {.lex_state = 32},
  [32] = {.lex_state = 32},
  [33] = {.lex_state = 30},
  [34] = {.lex_state = 30},
  [35] = {.lex_state = 419},
  [36] = {.lex_state = 419},
  [37] = {.lex_state = 419},
  [38] = {.lex_state = 34},
  [39] = {.lex_state = 32},
  [40] = {.lex_state = 32},
  [41] = {.lex_state = 32},
  [42] = {.lex_state = 32},
  [43] = {.lex_state = 419},
  [44] = {.lex_state = 419},
  [45] = {.lex_state = 419},
  [46] = {.lex_state = 419},
  [47] = {.lex_state = 32},
  [48] = {.lex_state = 32},
  [49] = {.lex_state = 32},
  [50] = {.lex_state = 32},
  [51] = {.lex_state = 419},
  [52] = {.lex_state = 32},
  [53] = {.lex_state = 32},
  [54] = {.lex_state = 32},
  [55] = {.lex_state = 419},
  [56] = {.lex_state = 419},
  [57] = {.lex_state = 32},
  [58] = {.lex_state = 32},
  [59] = {.lex_state = 32},
  [60] = {.lex_state = 32},
  [61] = {.lex_state = 32},
  [62] = {.lex_state = 32},
  [63] = {.lex_state = 32},
  [64] = {.lex_state = 34},
  [65] = {.lex_state = 419},
  [66] = {.lex_state = 419},
  [67] = {.lex_state = 419},
  [68] = {.lex_state = 419},
  [69] = {.lex_state = 419},
  [70] = {.lex_state = 419},
  [71] = {.lex_state = 419},
  [72] = {.lex_state = 419},
  [73] = {.lex_state = 419},
  [74] = {.lex_state = 419},
  [75] = {.lex_state = 419},
  [76] = {.lex_state = 419},
  [77] = {.lex_state = 419},
  [78] = {.lex_state = 31},
  [79] = {.lex_state = 31},
  [80] = {.lex_state = 31},
  [81] = {.lex_state = 419},
  [82] = {.lex_state = 419},
  [83] = {.lex_state = 419},
  [84] = {.lex_state = 419},
  [85] = {.lex_state = 419},
  [86] = {.lex_state = 419},
  [87] = {.lex_state = 31},
  [88] = {.lex_state = 419},
  [89] = {.lex_state = 419},
  [90] = {.lex_state = 31},
  [91] = {.lex_state = 419},
  [92] = {.lex_state = 419},
  [93] = {.lex_state = 419},
  [94] = {.lex_state = 31},
  [95] = {.lex_state = 31},
  [96] = {.lex_state = 31},
  [97] = {.lex_state = 31},
  [98] = {.lex_state = 31},
  [99] = {.lex_state = 31},
  [100] = {.lex_state = 31},
  [101] = {.lex_state = 31},
  [102] = {.lex_state = 31},
  [103] = {.lex_state = 419},
  [104] = {.lex_state = 31},
  [105] = {.lex_state = 419},
  [106] = {.lex_state = 31},
  [107] = {.lex_state = 31},
  [108] = {.lex_state = 31},
  [109] = {.lex_state = 31},
  [110] = {.lex_state = 31},
  [111] = {.lex_state = 31},
  [112] = {.lex_state = 419},
  [113] = {.lex_state = 419},
  [114] = {.lex_state = 419},
  [115] = {.lex_state = 31},
  [116] = {.lex_state = 31},
  [117] = {.lex_state = 31},
  [118] = {.lex_state = 31},
  [119] = {.lex_state = 31},
  [120] = {.lex_state = 31},
  [121] = {.lex_state = 31},
  [122] = {.lex_state = 31},
  [123] = {.lex_state = 31},
  [124] = {.lex_state = 31},
  [125] = {.lex_state = 31},
  [126] = {.lex_state = 31},
  [127] = {.lex_state = 31},
  [128] = {.lex_state = 31},
  [129] = {.lex_state = 419},
  [130] = {.lex_state = 419},
  [131] = {.lex_state = 31},
  [132] = {.lex_state = 31},
  [133] = {.lex_state = 31},
  [134] = {.lex_state = 31},
  [135] = {.lex_state = 31},
  [136] = {.lex_state = 31},
  [137] = {.lex_state = 31},
  [138] = {.lex_state = 31},
  [139] = {.lex_state = 419},
  [140] = {.lex_state = 419},
  [141] = {.lex_state = 31},
  [142] = {.lex_state = 419},
  [143] = {.lex_state = 32},
  [144] = {.lex_state = 32},
  [145] = {.lex_state = 32},
  [146] = {.lex_state = 32},
  [147] = {.lex_state = 32},
  [148] = {.lex_state = 32},
  [149] = {.lex_state = 32},
  [150] = {.lex_state = 32},
  [151] = {.lex_state = 32},
  [152] = {.lex_state = 32},
  [153] = {.lex_state = 34},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 407},
  [156] = {.lex_state = 407},
  [157] = {.lex_state = 407},
  [158] = {.lex_state = 407},
  [159] = {.lex_state = 407},
  [160] = {.lex_state = 407},
  [161] = {.lex_state = 407},
  [162] = {.lex_state = 407},
  [163] = {.lex_state = 407},
  [164] = {.lex_state = 407},
  [165] = {.lex_state = 407},
  [166] = {.lex_state = 407},
  [167] = {.lex_state = 407},
  [168] = {.lex_state = 407},
  [169] = {.lex_state = 407},
  [170] = {.lex_state = 407},
  [171] = {.lex_state = 407},
  [172] = {.lex_state = 407},
  [173] = {.lex_state = 407},
  [174] = {.lex_state = 407},
  [175] = {.lex_state = 407},
  [176] = {.lex_state = 407},
  [177] = {.lex_state = 407},
  [178] = {.lex_state = 407},
  [179] = {.lex_state = 407},
  [180] = {.lex_state = 407},
  [181] = {.lex_state = 407},
  [182] = {.lex_state = 407},
  [183] = {.lex_state = 407},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 407},
  [186] = {.lex_state = 407},
  [187] = {.lex_state = 407},
  [188] = {.lex_state = 407},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_idefine] = ACTIONS(1),
    [anon_sym_xdefine] = ACTIONS(1),
    [anon_sym_undef] = ACTIONS(1),
    [anon_sym_assign] = ACTIONS(1),
    [anon_sym_iassign] = ACTIONS(1),
    [anon_sym_defstr] = ACTIONS(1),
    [anon_sym_idefstr] = ACTIONS(1),
    [anon_sym_deftok] = ACTIONS(1),
    [anon_sym_ideftok] = ACTIONS(1),
    [anon_sym_defalias] = ACTIONS(1),
    [anon_sym_idefalias] = ACTIONS(1),
    [anon_sym_undefalias] = ACTIONS(1),
    [anon_sym_clear] = ACTIONS(1),
    [anon_sym_aliases] = ACTIONS(1),
    [anon_sym_ifdefalias] = ACTIONS(1),
    [anon_sym_strcat] = ACTIONS(1),
    [anon_sym_strlen] = ACTIONS(1),
    [anon_sym_substr] = ACTIONS(1),
    [anon_sym_macro] = ACTIONS(1),
    [anon_sym_imacro] = ACTIONS(1),
    [anon_sym_endmacro] = ACTIONS(1),
    [anon_sym_unmacro] = ACTIONS(1),
    [anon_sym_rotate] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_ifn] = ACTIONS(1),
    [anon_sym_elif] = ACTIONS(1),
    [anon_sym_elifn] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_endif] = ACTIONS(1),
    [anon_sym_rep] = ACTIONS(1),
    [anon_sym_endrep] = ACTIONS(1),
    [anon_sym_pathsearch] = ACTIONS(1),
    [anon_sym_depend] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_push] = ACTIONS(1),
    [anon_sym_pop] = ACTIONS(1),
    [anon_sym_arg] = ACTIONS(1),
    [anon_sym_stacksize] = ACTIONS(1),
    [anon_sym_local] = ACTIONS(1),
    [anon_sym_error] = ACTIONS(1),
    [anon_sym_warning] = ACTIONS(1),
    [anon_sym_fatal] = ACTIONS(1),
    [anon_sym_pragma] = ACTIONS(1),
    [anon_sym_line] = ACTIONS(1),
    [anon_sym_bits] = ACTIONS(1),
    [anon_sym_use16] = ACTIONS(1),
    [anon_sym_use32] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_section] = ACTIONS(1),
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
    [aux_sym_known_instruction_token1] = ACTIONS(1),
    [aux_sym_known_instruction_token2] = ACTIONS(1),
    [aux_sym_known_instruction_token3] = ACTIONS(1),
    [aux_sym_known_instruction_token4] = ACTIONS(1),
    [aux_sym_known_instruction_token5] = ACTIONS(1),
    [aux_sym_known_instruction_token6] = ACTIONS(1),
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
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_operand_prefix_token1] = ACTIONS(1),
    [aux_sym_operand_prefix_token2] = ACTIONS(1),
    [aux_sym_operand_prefix_token3] = ACTIONS(1),
    [aux_sym_operand_prefix_token4] = ACTIONS(1),
    [aux_sym_operand_prefix_token5] = ACTIONS(1),
    [aux_sym_operand_prefix_token6] = ACTIONS(1),
    [aux_sym_operand_prefix_token7] = ACTIONS(1),
    [aux_sym_operand_prefix_token8] = ACTIONS(1),
    [aux_sym_operand_prefix_token9] = ACTIONS(1),
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
    [aux_sym_constant_floatpt_token1] = ACTIONS(1),
    [aux_sym_constant_floatpt_token2] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_CARET_CARET] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ_GT] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_LT_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT_GT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [aux_sym_unary_expression_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(184),
    [sym_source_line] = STATE(174),
    [sym_preproc_directive] = STATE(174),
    [sym_assembl_directive] = STATE(174),
    [sym_label] = STATE(27),
    [sym_instruction] = STATE(173),
    [sym_instruction_prefix] = STATE(38),
    [sym_known_instruction] = STATE(7),
    [sym_pseudo_instruction] = STATE(7),
    [sym_unknown_instruction] = STATE(7),
    [sym_word] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_source_file_token1] = ACTIONS(7),
    [anon_sym_PERCENT] = ACTIONS(9),
    [anon_sym_warning] = ACTIONS(11),
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
    [aux_sym_known_instruction_token6] = ACTIONS(15),
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
    [aux_sym_known_instruction_token1] = ACTIONS(27),
    [aux_sym_known_instruction_token2] = ACTIONS(27),
    [aux_sym_known_instruction_token3] = ACTIONS(27),
    [aux_sym_known_instruction_token4] = ACTIONS(27),
    [aux_sym_known_instruction_token5] = ACTIONS(27),
    [aux_sym_known_instruction_token6] = ACTIONS(27),
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
    [aux_sym_operand_prefix_token1] = ACTIONS(29),
    [aux_sym_operand_prefix_token2] = ACTIONS(29),
    [aux_sym_operand_prefix_token3] = ACTIONS(29),
    [aux_sym_operand_prefix_token4] = ACTIONS(29),
    [aux_sym_operand_prefix_token5] = ACTIONS(29),
    [aux_sym_operand_prefix_token6] = ACTIONS(29),
    [aux_sym_operand_prefix_token7] = ACTIONS(29),
    [aux_sym_operand_prefix_token8] = ACTIONS(29),
    [aux_sym_operand_prefix_token9] = ACTIONS(29),
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
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(29),
    [aux_sym_unary_expression_token1] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_comment] = ACTIONS(19),
    [aux_sym_word_token1] = ACTIONS(27),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(31),
    [aux_sym_source_file_token1] = ACTIONS(31),
    [anon_sym_COLON] = ACTIONS(33),
    [aux_sym_instruction_prefix_token1] = ACTIONS(33),
    [aux_sym_instruction_prefix_token2] = ACTIONS(33),
    [aux_sym_instruction_prefix_token3] = ACTIONS(33),
    [aux_sym_instruction_prefix_token4] = ACTIONS(33),
    [aux_sym_instruction_prefix_token5] = ACTIONS(33),
    [aux_sym_instruction_prefix_token6] = ACTIONS(33),
    [aux_sym_instruction_prefix_token7] = ACTIONS(33),
    [aux_sym_instruction_prefix_token8] = ACTIONS(33),
    [aux_sym_instruction_prefix_token9] = ACTIONS(33),
    [aux_sym_instruction_prefix_token10] = ACTIONS(33),
    [aux_sym_instruction_prefix_token11] = ACTIONS(33),
    [aux_sym_instruction_prefix_token12] = ACTIONS(33),
    [aux_sym_instruction_prefix_token13] = ACTIONS(33),
    [aux_sym_instruction_prefix_token14] = ACTIONS(33),
    [aux_sym_instruction_prefix_token15] = ACTIONS(33),
    [aux_sym_instruction_prefix_token16] = ACTIONS(33),
    [aux_sym_instruction_prefix_token17] = ACTIONS(33),
    [aux_sym_instruction_prefix_token18] = ACTIONS(33),
    [aux_sym_instruction_prefix_token19] = ACTIONS(33),
    [aux_sym_instruction_prefix_token20] = ACTIONS(33),
    [aux_sym_instruction_prefix_token21] = ACTIONS(33),
    [aux_sym_instruction_prefix_token22] = ACTIONS(33),
    [aux_sym_known_instruction_token1] = ACTIONS(33),
    [aux_sym_known_instruction_token2] = ACTIONS(33),
    [aux_sym_known_instruction_token3] = ACTIONS(33),
    [aux_sym_known_instruction_token4] = ACTIONS(33),
    [aux_sym_known_instruction_token5] = ACTIONS(33),
    [aux_sym_known_instruction_token6] = ACTIONS(33),
    [aux_sym_pseudo_instruction_token1] = ACTIONS(33),
    [aux_sym_pseudo_instruction_token2] = ACTIONS(33),
    [aux_sym_pseudo_instruction_token3] = ACTIONS(33),
    [aux_sym_pseudo_instruction_token4] = ACTIONS(33),
    [aux_sym_pseudo_instruction_token5] = ACTIONS(33),
    [aux_sym_pseudo_instruction_token6] = ACTIONS(33),
    [aux_sym_pseudo_instruction_token7] = ACTIONS(33),
    [aux_sym_pseudo_instruction_token8] = ACTIONS(33),
    [aux_sym_pseudo_instruction_token9] = ACTIONS(33),
    [aux_sym_pseudo_instruction_token10] = ACTIONS(33),
    [aux_sym_pseudo_instruction_token11] = ACTIONS(33),
    [aux_sym_pseudo_instruction_token12] = ACTIONS(33),
    [aux_sym_pseudo_instruction_token13] = ACTIONS(33),
    [aux_sym_pseudo_instruction_token14] = ACTIONS(33),
    [aux_sym_pseudo_instruction_token15] = ACTIONS(33),
    [aux_sym_pseudo_instruction_token16] = ACTIONS(33),
    [aux_sym_pseudo_instruction_token17] = ACTIONS(33),
    [aux_sym_pseudo_instruction_token18] = ACTIONS(33),
    [aux_sym_pseudo_instruction_token19] = ACTIONS(33),
    [aux_sym_operand_prefix_token1] = ACTIONS(33),
    [aux_sym_operand_prefix_token2] = ACTIONS(33),
    [aux_sym_operand_prefix_token3] = ACTIONS(33),
    [aux_sym_operand_prefix_token4] = ACTIONS(33),
    [aux_sym_operand_prefix_token5] = ACTIONS(33),
    [aux_sym_operand_prefix_token6] = ACTIONS(33),
    [aux_sym_operand_prefix_token7] = ACTIONS(33),
    [aux_sym_operand_prefix_token8] = ACTIONS(33),
    [aux_sym_operand_prefix_token9] = ACTIONS(33),
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
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_TILDE] = ACTIONS(33),
    [anon_sym_BANG] = ACTIONS(33),
    [aux_sym_unary_expression_token1] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(33),
    [sym_comment] = ACTIONS(19),
    [aux_sym_word_token1] = ACTIONS(33),
  },
  [4] = {
    [aux_sym_source_file_token1] = ACTIONS(31),
    [anon_sym_COLON] = ACTIONS(33),
    [aux_sym_instruction_prefix_token1] = ACTIONS(33),
    [aux_sym_instruction_prefix_token2] = ACTIONS(33),
    [aux_sym_instruction_prefix_token3] = ACTIONS(33),
    [aux_sym_instruction_prefix_token4] = ACTIONS(33),
    [aux_sym_instruction_prefix_token5] = ACTIONS(33),
    [aux_sym_instruction_prefix_token6] = ACTIONS(33),
    [aux_sym_instruction_prefix_token7] = ACTIONS(33),
    [aux_sym_instruction_prefix_token8] = ACTIONS(33),
    [aux_sym_instruction_prefix_token9] = ACTIONS(33),
    [aux_sym_instruction_prefix_token10] = ACTIONS(33),
    [aux_sym_instruction_prefix_token11] = ACTIONS(33),
    [aux_sym_instruction_prefix_token12] = ACTIONS(33),
    [aux_sym_instruction_prefix_token13] = ACTIONS(33),
    [aux_sym_instruction_prefix_token14] = ACTIONS(33),
    [aux_sym_instruction_prefix_token15] = ACTIONS(33),
    [aux_sym_instruction_prefix_token16] = ACTIONS(33),
    [aux_sym_instruction_prefix_token17] = ACTIONS(33),
    [aux_sym_instruction_prefix_token18] = ACTIONS(33),
    [aux_sym_instruction_prefix_token19] = ACTIONS(33),
    [aux_sym_instruction_prefix_token20] = ACTIONS(33),
    [aux_sym_instruction_prefix_token21] = ACTIONS(33),
    [aux_sym_instruction_prefix_token22] = ACTIONS(33),
    [aux_sym_known_instruction_token1] = ACTIONS(33),
    [aux_sym_known_instruction_token2] = ACTIONS(33),
    [aux_sym_known_instruction_token3] = ACTIONS(33),
    [aux_sym_known_instruction_token4] = ACTIONS(33),
    [aux_sym_known_instruction_token5] = ACTIONS(33),
    [aux_sym_known_instruction_token6] = ACTIONS(33),
    [aux_sym_pseudo_instruction_token1] = ACTIONS(33),
    [aux_sym_pseudo_instruction_token2] = ACTIONS(33),
    [aux_sym_pseudo_instruction_token3] = ACTIONS(33),
    [aux_sym_pseudo_instruction_token4] = ACTIONS(33),
    [aux_sym_pseudo_instruction_token5] = ACTIONS(33),
    [aux_sym_pseudo_instruction_token6] = ACTIONS(33),
    [aux_sym_pseudo_instruction_token7] = ACTIONS(33),
    [aux_sym_pseudo_instruction_token8] = ACTIONS(33),
    [aux_sym_pseudo_instruction_token9] = ACTIONS(33),
    [aux_sym_pseudo_instruction_token10] = ACTIONS(33),
    [aux_sym_pseudo_instruction_token11] = ACTIONS(33),
    [aux_sym_pseudo_instruction_token12] = ACTIONS(33),
    [aux_sym_pseudo_instruction_token13] = ACTIONS(33),
    [aux_sym_pseudo_instruction_token14] = ACTIONS(33),
    [aux_sym_pseudo_instruction_token15] = ACTIONS(33),
    [aux_sym_pseudo_instruction_token16] = ACTIONS(33),
    [aux_sym_pseudo_instruction_token17] = ACTIONS(33),
    [aux_sym_pseudo_instruction_token18] = ACTIONS(33),
    [aux_sym_pseudo_instruction_token19] = ACTIONS(33),
    [aux_sym_operand_prefix_token1] = ACTIONS(33),
    [aux_sym_operand_prefix_token2] = ACTIONS(33),
    [aux_sym_operand_prefix_token3] = ACTIONS(33),
    [aux_sym_operand_prefix_token4] = ACTIONS(33),
    [aux_sym_operand_prefix_token5] = ACTIONS(33),
    [aux_sym_operand_prefix_token6] = ACTIONS(33),
    [aux_sym_operand_prefix_token7] = ACTIONS(33),
    [aux_sym_operand_prefix_token8] = ACTIONS(33),
    [aux_sym_operand_prefix_token9] = ACTIONS(33),
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
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_TILDE] = ACTIONS(33),
    [anon_sym_BANG] = ACTIONS(33),
    [aux_sym_unary_expression_token1] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(33),
    [sym_comment] = ACTIONS(19),
    [aux_sym_word_token1] = ACTIONS(33),
  },
  [5] = {
    [aux_sym_source_file_token1] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(35),
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
    [aux_sym_known_instruction_token1] = ACTIONS(27),
    [aux_sym_known_instruction_token2] = ACTIONS(27),
    [aux_sym_known_instruction_token3] = ACTIONS(27),
    [aux_sym_known_instruction_token4] = ACTIONS(27),
    [aux_sym_known_instruction_token5] = ACTIONS(27),
    [aux_sym_known_instruction_token6] = ACTIONS(27),
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
    [aux_sym_operand_prefix_token1] = ACTIONS(29),
    [aux_sym_operand_prefix_token2] = ACTIONS(29),
    [aux_sym_operand_prefix_token3] = ACTIONS(29),
    [aux_sym_operand_prefix_token4] = ACTIONS(29),
    [aux_sym_operand_prefix_token5] = ACTIONS(29),
    [aux_sym_operand_prefix_token6] = ACTIONS(29),
    [aux_sym_operand_prefix_token7] = ACTIONS(29),
    [aux_sym_operand_prefix_token8] = ACTIONS(29),
    [aux_sym_operand_prefix_token9] = ACTIONS(29),
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
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(29),
    [aux_sym_unary_expression_token1] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_comment] = ACTIONS(19),
    [aux_sym_word_token1] = ACTIONS(27),
  },
  [6] = {
    [sym_operands] = STATE(172),
    [sym_operand] = STATE(155),
    [sym_operand_prefix] = STATE(17),
    [sym_register] = STATE(160),
    [sym_effective_address] = STATE(160),
    [sym_constant] = STATE(43),
    [sym_constant_numeric] = STATE(44),
    [sym_constant_charstr] = STATE(44),
    [sym_expression] = STATE(45),
    [sym_conditional_expression] = STATE(46),
    [sym_binary_expression] = STATE(46),
    [sym_unary_expression] = STATE(46),
    [sym_parenthesized_expression] = STATE(46),
    [sym_word] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(37),
    [aux_sym_source_file_token1] = ACTIONS(37),
    [aux_sym_operand_prefix_token1] = ACTIONS(39),
    [aux_sym_operand_prefix_token2] = ACTIONS(41),
    [aux_sym_operand_prefix_token3] = ACTIONS(41),
    [aux_sym_operand_prefix_token4] = ACTIONS(41),
    [aux_sym_operand_prefix_token5] = ACTIONS(41),
    [aux_sym_operand_prefix_token6] = ACTIONS(41),
    [aux_sym_operand_prefix_token7] = ACTIONS(41),
    [aux_sym_operand_prefix_token8] = ACTIONS(41),
    [aux_sym_operand_prefix_token9] = ACTIONS(41),
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
    [anon_sym_PLUS] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [aux_sym_unary_expression_token1] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
    [sym_comment] = ACTIONS(19),
    [aux_sym_word_token1] = ACTIONS(55),
  },
  [7] = {
    [sym_operands] = STATE(178),
    [sym_operand] = STATE(155),
    [sym_operand_prefix] = STATE(17),
    [sym_register] = STATE(160),
    [sym_effective_address] = STATE(160),
    [sym_constant] = STATE(43),
    [sym_constant_numeric] = STATE(44),
    [sym_constant_charstr] = STATE(44),
    [sym_expression] = STATE(45),
    [sym_conditional_expression] = STATE(46),
    [sym_binary_expression] = STATE(46),
    [sym_unary_expression] = STATE(46),
    [sym_parenthesized_expression] = STATE(46),
    [sym_word] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(57),
    [aux_sym_source_file_token1] = ACTIONS(57),
    [aux_sym_operand_prefix_token1] = ACTIONS(39),
    [aux_sym_operand_prefix_token2] = ACTIONS(41),
    [aux_sym_operand_prefix_token3] = ACTIONS(41),
    [aux_sym_operand_prefix_token4] = ACTIONS(41),
    [aux_sym_operand_prefix_token5] = ACTIONS(41),
    [aux_sym_operand_prefix_token6] = ACTIONS(41),
    [aux_sym_operand_prefix_token7] = ACTIONS(41),
    [aux_sym_operand_prefix_token8] = ACTIONS(41),
    [aux_sym_operand_prefix_token9] = ACTIONS(41),
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
    [anon_sym_PLUS] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [aux_sym_unary_expression_token1] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
    [sym_comment] = ACTIONS(19),
    [aux_sym_word_token1] = ACTIONS(55),
  },
  [8] = {
    [sym_operands] = STATE(182),
    [sym_operand] = STATE(159),
    [sym_operand_prefix] = STATE(14),
    [sym_register] = STATE(175),
    [sym_effective_address] = STATE(175),
    [sym_constant] = STATE(103),
    [sym_constant_numeric] = STATE(142),
    [sym_constant_charstr] = STATE(142),
    [sym_expression] = STATE(105),
    [sym_conditional_expression] = STATE(88),
    [sym_binary_expression] = STATE(88),
    [sym_unary_expression] = STATE(88),
    [sym_parenthesized_expression] = STATE(88),
    [sym_word] = STATE(88),
    [aux_sym_source_file_token1] = ACTIONS(37),
    [aux_sym_operand_prefix_token1] = ACTIONS(39),
    [aux_sym_operand_prefix_token2] = ACTIONS(41),
    [aux_sym_operand_prefix_token3] = ACTIONS(41),
    [aux_sym_operand_prefix_token4] = ACTIONS(41),
    [aux_sym_operand_prefix_token5] = ACTIONS(41),
    [aux_sym_operand_prefix_token6] = ACTIONS(41),
    [aux_sym_operand_prefix_token7] = ACTIONS(41),
    [aux_sym_operand_prefix_token8] = ACTIONS(41),
    [aux_sym_operand_prefix_token9] = ACTIONS(41),
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
    [anon_sym_LBRACK] = ACTIONS(61),
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
    [aux_sym_constant_charstr_token1] = ACTIONS(65),
    [aux_sym_constant_charstr_token2] = ACTIONS(65),
    [aux_sym_constant_charstr_token3] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(67),
    [aux_sym_unary_expression_token1] = ACTIONS(67),
    [anon_sym_LPAREN] = ACTIONS(69),
    [sym_comment] = ACTIONS(19),
    [aux_sym_word_token1] = ACTIONS(71),
  },
  [9] = {
    [sym_operands] = STATE(181),
    [sym_operand] = STATE(159),
    [sym_operand_prefix] = STATE(14),
    [sym_register] = STATE(175),
    [sym_effective_address] = STATE(175),
    [sym_constant] = STATE(103),
    [sym_constant_numeric] = STATE(142),
    [sym_constant_charstr] = STATE(142),
    [sym_expression] = STATE(105),
    [sym_conditional_expression] = STATE(88),
    [sym_binary_expression] = STATE(88),
    [sym_unary_expression] = STATE(88),
    [sym_parenthesized_expression] = STATE(88),
    [sym_word] = STATE(88),
    [aux_sym_source_file_token1] = ACTIONS(57),
    [aux_sym_operand_prefix_token1] = ACTIONS(39),
    [aux_sym_operand_prefix_token2] = ACTIONS(41),
    [aux_sym_operand_prefix_token3] = ACTIONS(41),
    [aux_sym_operand_prefix_token4] = ACTIONS(41),
    [aux_sym_operand_prefix_token5] = ACTIONS(41),
    [aux_sym_operand_prefix_token6] = ACTIONS(41),
    [aux_sym_operand_prefix_token7] = ACTIONS(41),
    [aux_sym_operand_prefix_token8] = ACTIONS(41),
    [aux_sym_operand_prefix_token9] = ACTIONS(41),
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
    [anon_sym_LBRACK] = ACTIONS(61),
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
    [aux_sym_constant_charstr_token1] = ACTIONS(65),
    [aux_sym_constant_charstr_token2] = ACTIONS(65),
    [aux_sym_constant_charstr_token3] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(67),
    [aux_sym_unary_expression_token1] = ACTIONS(67),
    [anon_sym_LPAREN] = ACTIONS(69),
    [sym_comment] = ACTIONS(19),
    [aux_sym_word_token1] = ACTIONS(71),
  },
  [10] = {
    [sym_operand] = STATE(179),
    [sym_operand_prefix] = STATE(14),
    [sym_register] = STATE(175),
    [sym_effective_address] = STATE(175),
    [sym_constant] = STATE(103),
    [sym_constant_numeric] = STATE(142),
    [sym_constant_charstr] = STATE(142),
    [sym_expression] = STATE(105),
    [sym_conditional_expression] = STATE(88),
    [sym_binary_expression] = STATE(88),
    [sym_unary_expression] = STATE(88),
    [sym_parenthesized_expression] = STATE(88),
    [sym_word] = STATE(88),
    [aux_sym_operand_prefix_token1] = ACTIONS(39),
    [aux_sym_operand_prefix_token2] = ACTIONS(41),
    [aux_sym_operand_prefix_token3] = ACTIONS(41),
    [aux_sym_operand_prefix_token4] = ACTIONS(41),
    [aux_sym_operand_prefix_token5] = ACTIONS(41),
    [aux_sym_operand_prefix_token6] = ACTIONS(41),
    [aux_sym_operand_prefix_token7] = ACTIONS(41),
    [aux_sym_operand_prefix_token8] = ACTIONS(41),
    [aux_sym_operand_prefix_token9] = ACTIONS(41),
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
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_constant_numeric_token1] = ACTIONS(63),
    [aux_sym_constant_numeric_token2] = ACTIONS(75),
    [aux_sym_constant_numeric_token3] = ACTIONS(75),
    [aux_sym_constant_numeric_token4] = ACTIONS(63),
    [aux_sym_constant_numeric_token5] = ACTIONS(63),
    [aux_sym_constant_numeric_token6] = ACTIONS(63),
    [aux_sym_constant_numeric_token7] = ACTIONS(75),
    [aux_sym_constant_numeric_token8] = ACTIONS(63),
    [aux_sym_constant_numeric_token9] = ACTIONS(63),
    [aux_sym_constant_numeric_token10] = ACTIONS(63),
    [aux_sym_constant_charstr_token1] = ACTIONS(77),
    [aux_sym_constant_charstr_token2] = ACTIONS(77),
    [aux_sym_constant_charstr_token3] = ACTIONS(77),
    [anon_sym_PLUS] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(79),
    [anon_sym_BANG] = ACTIONS(79),
    [aux_sym_unary_expression_token1] = ACTIONS(67),
    [anon_sym_LPAREN] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
    [aux_sym_word_token1] = ACTIONS(71),
  },
  [11] = {
    [sym_operand] = STATE(158),
    [sym_operand_prefix] = STATE(17),
    [sym_register] = STATE(160),
    [sym_effective_address] = STATE(160),
    [sym_constant] = STATE(43),
    [sym_constant_numeric] = STATE(44),
    [sym_constant_charstr] = STATE(44),
    [sym_expression] = STATE(45),
    [sym_conditional_expression] = STATE(46),
    [sym_binary_expression] = STATE(46),
    [sym_unary_expression] = STATE(46),
    [sym_parenthesized_expression] = STATE(46),
    [sym_word] = STATE(46),
    [aux_sym_operand_prefix_token1] = ACTIONS(39),
    [aux_sym_operand_prefix_token2] = ACTIONS(41),
    [aux_sym_operand_prefix_token3] = ACTIONS(41),
    [aux_sym_operand_prefix_token4] = ACTIONS(41),
    [aux_sym_operand_prefix_token5] = ACTIONS(41),
    [aux_sym_operand_prefix_token6] = ACTIONS(41),
    [aux_sym_operand_prefix_token7] = ACTIONS(41),
    [aux_sym_operand_prefix_token8] = ACTIONS(41),
    [aux_sym_operand_prefix_token9] = ACTIONS(41),
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
    [anon_sym_LBRACK] = ACTIONS(83),
    [aux_sym_constant_numeric_token1] = ACTIONS(47),
    [aux_sym_constant_numeric_token2] = ACTIONS(85),
    [aux_sym_constant_numeric_token3] = ACTIONS(85),
    [aux_sym_constant_numeric_token4] = ACTIONS(47),
    [aux_sym_constant_numeric_token5] = ACTIONS(47),
    [aux_sym_constant_numeric_token6] = ACTIONS(47),
    [aux_sym_constant_numeric_token7] = ACTIONS(85),
    [aux_sym_constant_numeric_token8] = ACTIONS(47),
    [aux_sym_constant_numeric_token9] = ACTIONS(47),
    [aux_sym_constant_numeric_token10] = ACTIONS(47),
    [aux_sym_constant_charstr_token1] = ACTIONS(87),
    [aux_sym_constant_charstr_token2] = ACTIONS(87),
    [aux_sym_constant_charstr_token3] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_TILDE] = ACTIONS(89),
    [anon_sym_BANG] = ACTIONS(89),
    [aux_sym_unary_expression_token1] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(91),
    [sym_comment] = ACTIONS(3),
    [aux_sym_word_token1] = ACTIONS(55),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(93),
    [aux_sym_source_file_token1] = ACTIONS(93),
    [aux_sym_operand_prefix_token1] = ACTIONS(29),
    [aux_sym_operand_prefix_token2] = ACTIONS(29),
    [aux_sym_operand_prefix_token3] = ACTIONS(29),
    [aux_sym_operand_prefix_token4] = ACTIONS(29),
    [aux_sym_operand_prefix_token5] = ACTIONS(29),
    [aux_sym_operand_prefix_token6] = ACTIONS(29),
    [aux_sym_operand_prefix_token7] = ACTIONS(29),
    [aux_sym_operand_prefix_token8] = ACTIONS(29),
    [aux_sym_operand_prefix_token9] = ACTIONS(29),
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
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(29),
    [aux_sym_unary_expression_token1] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_comment] = ACTIONS(19),
    [aux_sym_word_token1] = ACTIONS(29),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(31),
    [aux_sym_source_file_token1] = ACTIONS(31),
    [aux_sym_operand_prefix_token1] = ACTIONS(33),
    [aux_sym_operand_prefix_token2] = ACTIONS(33),
    [aux_sym_operand_prefix_token3] = ACTIONS(33),
    [aux_sym_operand_prefix_token4] = ACTIONS(33),
    [aux_sym_operand_prefix_token5] = ACTIONS(33),
    [aux_sym_operand_prefix_token6] = ACTIONS(33),
    [aux_sym_operand_prefix_token7] = ACTIONS(33),
    [aux_sym_operand_prefix_token8] = ACTIONS(33),
    [aux_sym_operand_prefix_token9] = ACTIONS(33),
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
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_TILDE] = ACTIONS(33),
    [anon_sym_BANG] = ACTIONS(33),
    [aux_sym_unary_expression_token1] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(33),
    [sym_comment] = ACTIONS(19),
    [aux_sym_word_token1] = ACTIONS(33),
  },
  [14] = {
    [sym_register] = STATE(180),
    [sym_effective_address] = STATE(180),
    [sym_constant] = STATE(113),
    [sym_constant_numeric] = STATE(142),
    [sym_constant_charstr] = STATE(142),
    [sym_expression] = STATE(114),
    [sym_conditional_expression] = STATE(88),
    [sym_binary_expression] = STATE(88),
    [sym_unary_expression] = STATE(88),
    [sym_parenthesized_expression] = STATE(88),
    [sym_word] = STATE(88),
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
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_constant_numeric_token1] = ACTIONS(63),
    [aux_sym_constant_numeric_token2] = ACTIONS(75),
    [aux_sym_constant_numeric_token3] = ACTIONS(75),
    [aux_sym_constant_numeric_token4] = ACTIONS(63),
    [aux_sym_constant_numeric_token5] = ACTIONS(63),
    [aux_sym_constant_numeric_token6] = ACTIONS(63),
    [aux_sym_constant_numeric_token7] = ACTIONS(75),
    [aux_sym_constant_numeric_token8] = ACTIONS(63),
    [aux_sym_constant_numeric_token9] = ACTIONS(63),
    [aux_sym_constant_numeric_token10] = ACTIONS(63),
    [aux_sym_constant_charstr_token1] = ACTIONS(77),
    [aux_sym_constant_charstr_token2] = ACTIONS(77),
    [aux_sym_constant_charstr_token3] = ACTIONS(77),
    [anon_sym_PLUS] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(79),
    [anon_sym_BANG] = ACTIONS(79),
    [aux_sym_unary_expression_token1] = ACTIONS(67),
    [anon_sym_LPAREN] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
    [aux_sym_word_token1] = ACTIONS(71),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [aux_sym_source_file_token1] = ACTIONS(95),
    [aux_sym_operand_prefix_token1] = ACTIONS(97),
    [aux_sym_operand_prefix_token2] = ACTIONS(97),
    [aux_sym_operand_prefix_token3] = ACTIONS(97),
    [aux_sym_operand_prefix_token4] = ACTIONS(97),
    [aux_sym_operand_prefix_token5] = ACTIONS(97),
    [aux_sym_operand_prefix_token6] = ACTIONS(97),
    [aux_sym_operand_prefix_token7] = ACTIONS(97),
    [aux_sym_operand_prefix_token8] = ACTIONS(97),
    [aux_sym_operand_prefix_token9] = ACTIONS(97),
    [aux_sym_register_token1] = ACTIONS(97),
    [aux_sym_register_token2] = ACTIONS(97),
    [aux_sym_register_token3] = ACTIONS(97),
    [aux_sym_register_token4] = ACTIONS(97),
    [aux_sym_register_token5] = ACTIONS(97),
    [aux_sym_register_token6] = ACTIONS(97),
    [aux_sym_register_token7] = ACTIONS(97),
    [aux_sym_register_token8] = ACTIONS(97),
    [aux_sym_register_token9] = ACTIONS(97),
    [aux_sym_register_token10] = ACTIONS(97),
    [aux_sym_register_token11] = ACTIONS(97),
    [aux_sym_register_token12] = ACTIONS(97),
    [aux_sym_register_token13] = ACTIONS(97),
    [aux_sym_register_token14] = ACTIONS(97),
    [aux_sym_register_token15] = ACTIONS(97),
    [aux_sym_register_token16] = ACTIONS(97),
    [aux_sym_register_token17] = ACTIONS(97),
    [aux_sym_register_token18] = ACTIONS(97),
    [aux_sym_register_token19] = ACTIONS(97),
    [aux_sym_register_token20] = ACTIONS(97),
    [aux_sym_register_token21] = ACTIONS(97),
    [aux_sym_register_token22] = ACTIONS(97),
    [aux_sym_register_token23] = ACTIONS(97),
    [aux_sym_register_token24] = ACTIONS(97),
    [aux_sym_register_token25] = ACTIONS(97),
    [aux_sym_register_token26] = ACTIONS(97),
    [aux_sym_register_token27] = ACTIONS(97),
    [aux_sym_register_token28] = ACTIONS(97),
    [aux_sym_register_token29] = ACTIONS(97),
    [aux_sym_register_token30] = ACTIONS(97),
    [aux_sym_register_token31] = ACTIONS(97),
    [aux_sym_register_token32] = ACTIONS(97),
    [aux_sym_register_token33] = ACTIONS(97),
    [aux_sym_register_token34] = ACTIONS(97),
    [aux_sym_register_token35] = ACTIONS(97),
    [aux_sym_register_token36] = ACTIONS(97),
    [aux_sym_register_token37] = ACTIONS(97),
    [aux_sym_register_token38] = ACTIONS(97),
    [aux_sym_register_token39] = ACTIONS(97),
    [aux_sym_register_token40] = ACTIONS(97),
    [aux_sym_register_token41] = ACTIONS(97),
    [aux_sym_register_token42] = ACTIONS(97),
    [aux_sym_register_token43] = ACTIONS(97),
    [aux_sym_register_token44] = ACTIONS(97),
    [aux_sym_register_token45] = ACTIONS(97),
    [aux_sym_register_token46] = ACTIONS(97),
    [aux_sym_register_token47] = ACTIONS(97),
    [aux_sym_register_token48] = ACTIONS(97),
    [aux_sym_register_token49] = ACTIONS(97),
    [aux_sym_register_token50] = ACTIONS(97),
    [aux_sym_register_token51] = ACTIONS(97),
    [aux_sym_register_token52] = ACTIONS(97),
    [aux_sym_register_token53] = ACTIONS(97),
    [aux_sym_register_token54] = ACTIONS(97),
    [aux_sym_register_token55] = ACTIONS(97),
    [aux_sym_register_token56] = ACTIONS(97),
    [aux_sym_register_token57] = ACTIONS(97),
    [aux_sym_register_token58] = ACTIONS(97),
    [aux_sym_register_token59] = ACTIONS(97),
    [aux_sym_register_token60] = ACTIONS(97),
    [aux_sym_register_token61] = ACTIONS(97),
    [aux_sym_register_token62] = ACTIONS(97),
    [aux_sym_register_token63] = ACTIONS(97),
    [aux_sym_register_token64] = ACTIONS(97),
    [aux_sym_register_token65] = ACTIONS(97),
    [aux_sym_register_token66] = ACTIONS(97),
    [aux_sym_register_token67] = ACTIONS(97),
    [aux_sym_register_token68] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(97),
    [aux_sym_constant_numeric_token1] = ACTIONS(97),
    [aux_sym_constant_numeric_token2] = ACTIONS(97),
    [aux_sym_constant_numeric_token3] = ACTIONS(97),
    [aux_sym_constant_numeric_token4] = ACTIONS(97),
    [aux_sym_constant_numeric_token5] = ACTIONS(97),
    [aux_sym_constant_numeric_token6] = ACTIONS(97),
    [aux_sym_constant_numeric_token7] = ACTIONS(97),
    [aux_sym_constant_numeric_token8] = ACTIONS(97),
    [aux_sym_constant_numeric_token9] = ACTIONS(97),
    [aux_sym_constant_numeric_token10] = ACTIONS(97),
    [aux_sym_constant_charstr_token1] = ACTIONS(97),
    [aux_sym_constant_charstr_token2] = ACTIONS(97),
    [aux_sym_constant_charstr_token3] = ACTIONS(97),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(97),
    [anon_sym_TILDE] = ACTIONS(97),
    [anon_sym_BANG] = ACTIONS(97),
    [aux_sym_unary_expression_token1] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(97),
    [sym_comment] = ACTIONS(19),
    [aux_sym_word_token1] = ACTIONS(97),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [aux_sym_source_file_token1] = ACTIONS(99),
    [aux_sym_operand_prefix_token1] = ACTIONS(101),
    [aux_sym_operand_prefix_token2] = ACTIONS(101),
    [aux_sym_operand_prefix_token3] = ACTIONS(101),
    [aux_sym_operand_prefix_token4] = ACTIONS(101),
    [aux_sym_operand_prefix_token5] = ACTIONS(101),
    [aux_sym_operand_prefix_token6] = ACTIONS(101),
    [aux_sym_operand_prefix_token7] = ACTIONS(101),
    [aux_sym_operand_prefix_token8] = ACTIONS(101),
    [aux_sym_operand_prefix_token9] = ACTIONS(101),
    [aux_sym_register_token1] = ACTIONS(101),
    [aux_sym_register_token2] = ACTIONS(101),
    [aux_sym_register_token3] = ACTIONS(101),
    [aux_sym_register_token4] = ACTIONS(101),
    [aux_sym_register_token5] = ACTIONS(101),
    [aux_sym_register_token6] = ACTIONS(101),
    [aux_sym_register_token7] = ACTIONS(101),
    [aux_sym_register_token8] = ACTIONS(101),
    [aux_sym_register_token9] = ACTIONS(101),
    [aux_sym_register_token10] = ACTIONS(101),
    [aux_sym_register_token11] = ACTIONS(101),
    [aux_sym_register_token12] = ACTIONS(101),
    [aux_sym_register_token13] = ACTIONS(101),
    [aux_sym_register_token14] = ACTIONS(101),
    [aux_sym_register_token15] = ACTIONS(101),
    [aux_sym_register_token16] = ACTIONS(101),
    [aux_sym_register_token17] = ACTIONS(101),
    [aux_sym_register_token18] = ACTIONS(101),
    [aux_sym_register_token19] = ACTIONS(101),
    [aux_sym_register_token20] = ACTIONS(101),
    [aux_sym_register_token21] = ACTIONS(101),
    [aux_sym_register_token22] = ACTIONS(101),
    [aux_sym_register_token23] = ACTIONS(101),
    [aux_sym_register_token24] = ACTIONS(101),
    [aux_sym_register_token25] = ACTIONS(101),
    [aux_sym_register_token26] = ACTIONS(101),
    [aux_sym_register_token27] = ACTIONS(101),
    [aux_sym_register_token28] = ACTIONS(101),
    [aux_sym_register_token29] = ACTIONS(101),
    [aux_sym_register_token30] = ACTIONS(101),
    [aux_sym_register_token31] = ACTIONS(101),
    [aux_sym_register_token32] = ACTIONS(101),
    [aux_sym_register_token33] = ACTIONS(101),
    [aux_sym_register_token34] = ACTIONS(101),
    [aux_sym_register_token35] = ACTIONS(101),
    [aux_sym_register_token36] = ACTIONS(101),
    [aux_sym_register_token37] = ACTIONS(101),
    [aux_sym_register_token38] = ACTIONS(101),
    [aux_sym_register_token39] = ACTIONS(101),
    [aux_sym_register_token40] = ACTIONS(101),
    [aux_sym_register_token41] = ACTIONS(101),
    [aux_sym_register_token42] = ACTIONS(101),
    [aux_sym_register_token43] = ACTIONS(101),
    [aux_sym_register_token44] = ACTIONS(101),
    [aux_sym_register_token45] = ACTIONS(101),
    [aux_sym_register_token46] = ACTIONS(101),
    [aux_sym_register_token47] = ACTIONS(101),
    [aux_sym_register_token48] = ACTIONS(101),
    [aux_sym_register_token49] = ACTIONS(101),
    [aux_sym_register_token50] = ACTIONS(101),
    [aux_sym_register_token51] = ACTIONS(101),
    [aux_sym_register_token52] = ACTIONS(101),
    [aux_sym_register_token53] = ACTIONS(101),
    [aux_sym_register_token54] = ACTIONS(101),
    [aux_sym_register_token55] = ACTIONS(101),
    [aux_sym_register_token56] = ACTIONS(101),
    [aux_sym_register_token57] = ACTIONS(101),
    [aux_sym_register_token58] = ACTIONS(101),
    [aux_sym_register_token59] = ACTIONS(101),
    [aux_sym_register_token60] = ACTIONS(101),
    [aux_sym_register_token61] = ACTIONS(101),
    [aux_sym_register_token62] = ACTIONS(101),
    [aux_sym_register_token63] = ACTIONS(101),
    [aux_sym_register_token64] = ACTIONS(101),
    [aux_sym_register_token65] = ACTIONS(101),
    [aux_sym_register_token66] = ACTIONS(101),
    [aux_sym_register_token67] = ACTIONS(101),
    [aux_sym_register_token68] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(101),
    [aux_sym_constant_numeric_token1] = ACTIONS(101),
    [aux_sym_constant_numeric_token2] = ACTIONS(101),
    [aux_sym_constant_numeric_token3] = ACTIONS(101),
    [aux_sym_constant_numeric_token4] = ACTIONS(101),
    [aux_sym_constant_numeric_token5] = ACTIONS(101),
    [aux_sym_constant_numeric_token6] = ACTIONS(101),
    [aux_sym_constant_numeric_token7] = ACTIONS(101),
    [aux_sym_constant_numeric_token8] = ACTIONS(101),
    [aux_sym_constant_numeric_token9] = ACTIONS(101),
    [aux_sym_constant_numeric_token10] = ACTIONS(101),
    [aux_sym_constant_charstr_token1] = ACTIONS(101),
    [aux_sym_constant_charstr_token2] = ACTIONS(101),
    [aux_sym_constant_charstr_token3] = ACTIONS(101),
    [anon_sym_PLUS] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(101),
    [anon_sym_TILDE] = ACTIONS(101),
    [anon_sym_BANG] = ACTIONS(101),
    [aux_sym_unary_expression_token1] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(101),
    [sym_comment] = ACTIONS(19),
    [aux_sym_word_token1] = ACTIONS(101),
  },
  [17] = {
    [sym_register] = STATE(165),
    [sym_effective_address] = STATE(165),
    [sym_constant] = STATE(55),
    [sym_constant_numeric] = STATE(44),
    [sym_constant_charstr] = STATE(44),
    [sym_expression] = STATE(56),
    [sym_conditional_expression] = STATE(46),
    [sym_binary_expression] = STATE(46),
    [sym_unary_expression] = STATE(46),
    [sym_parenthesized_expression] = STATE(46),
    [sym_word] = STATE(46),
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
    [anon_sym_LBRACK] = ACTIONS(83),
    [aux_sym_constant_numeric_token1] = ACTIONS(47),
    [aux_sym_constant_numeric_token2] = ACTIONS(85),
    [aux_sym_constant_numeric_token3] = ACTIONS(85),
    [aux_sym_constant_numeric_token4] = ACTIONS(47),
    [aux_sym_constant_numeric_token5] = ACTIONS(47),
    [aux_sym_constant_numeric_token6] = ACTIONS(47),
    [aux_sym_constant_numeric_token7] = ACTIONS(85),
    [aux_sym_constant_numeric_token8] = ACTIONS(47),
    [aux_sym_constant_numeric_token9] = ACTIONS(47),
    [aux_sym_constant_numeric_token10] = ACTIONS(47),
    [aux_sym_constant_charstr_token1] = ACTIONS(87),
    [aux_sym_constant_charstr_token2] = ACTIONS(87),
    [aux_sym_constant_charstr_token3] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_TILDE] = ACTIONS(89),
    [anon_sym_BANG] = ACTIONS(89),
    [aux_sym_unary_expression_token1] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(91),
    [sym_comment] = ACTIONS(3),
    [aux_sym_word_token1] = ACTIONS(55),
  },
  [18] = {
    [aux_sym_source_file_token1] = ACTIONS(31),
    [aux_sym_operand_prefix_token1] = ACTIONS(33),
    [aux_sym_operand_prefix_token2] = ACTIONS(33),
    [aux_sym_operand_prefix_token3] = ACTIONS(33),
    [aux_sym_operand_prefix_token4] = ACTIONS(33),
    [aux_sym_operand_prefix_token5] = ACTIONS(33),
    [aux_sym_operand_prefix_token6] = ACTIONS(33),
    [aux_sym_operand_prefix_token7] = ACTIONS(33),
    [aux_sym_operand_prefix_token8] = ACTIONS(33),
    [aux_sym_operand_prefix_token9] = ACTIONS(33),
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
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_TILDE] = ACTIONS(33),
    [anon_sym_BANG] = ACTIONS(33),
    [aux_sym_unary_expression_token1] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(33),
    [sym_comment] = ACTIONS(19),
    [aux_sym_word_token1] = ACTIONS(33),
  },
  [19] = {
    [aux_sym_source_file_token1] = ACTIONS(93),
    [aux_sym_operand_prefix_token1] = ACTIONS(29),
    [aux_sym_operand_prefix_token2] = ACTIONS(29),
    [aux_sym_operand_prefix_token3] = ACTIONS(29),
    [aux_sym_operand_prefix_token4] = ACTIONS(29),
    [aux_sym_operand_prefix_token5] = ACTIONS(29),
    [aux_sym_operand_prefix_token6] = ACTIONS(29),
    [aux_sym_operand_prefix_token7] = ACTIONS(29),
    [aux_sym_operand_prefix_token8] = ACTIONS(29),
    [aux_sym_operand_prefix_token9] = ACTIONS(29),
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
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(29),
    [aux_sym_unary_expression_token1] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_comment] = ACTIONS(19),
    [aux_sym_word_token1] = ACTIONS(29),
  },
  [20] = {
    [aux_sym_source_file_token1] = ACTIONS(99),
    [aux_sym_operand_prefix_token1] = ACTIONS(101),
    [aux_sym_operand_prefix_token2] = ACTIONS(101),
    [aux_sym_operand_prefix_token3] = ACTIONS(101),
    [aux_sym_operand_prefix_token4] = ACTIONS(101),
    [aux_sym_operand_prefix_token5] = ACTIONS(101),
    [aux_sym_operand_prefix_token6] = ACTIONS(101),
    [aux_sym_operand_prefix_token7] = ACTIONS(101),
    [aux_sym_operand_prefix_token8] = ACTIONS(101),
    [aux_sym_operand_prefix_token9] = ACTIONS(101),
    [aux_sym_register_token1] = ACTIONS(101),
    [aux_sym_register_token2] = ACTIONS(101),
    [aux_sym_register_token3] = ACTIONS(101),
    [aux_sym_register_token4] = ACTIONS(101),
    [aux_sym_register_token5] = ACTIONS(101),
    [aux_sym_register_token6] = ACTIONS(101),
    [aux_sym_register_token7] = ACTIONS(101),
    [aux_sym_register_token8] = ACTIONS(101),
    [aux_sym_register_token9] = ACTIONS(101),
    [aux_sym_register_token10] = ACTIONS(101),
    [aux_sym_register_token11] = ACTIONS(101),
    [aux_sym_register_token12] = ACTIONS(101),
    [aux_sym_register_token13] = ACTIONS(101),
    [aux_sym_register_token14] = ACTIONS(101),
    [aux_sym_register_token15] = ACTIONS(101),
    [aux_sym_register_token16] = ACTIONS(101),
    [aux_sym_register_token17] = ACTIONS(101),
    [aux_sym_register_token18] = ACTIONS(101),
    [aux_sym_register_token19] = ACTIONS(101),
    [aux_sym_register_token20] = ACTIONS(101),
    [aux_sym_register_token21] = ACTIONS(101),
    [aux_sym_register_token22] = ACTIONS(101),
    [aux_sym_register_token23] = ACTIONS(101),
    [aux_sym_register_token24] = ACTIONS(101),
    [aux_sym_register_token25] = ACTIONS(101),
    [aux_sym_register_token26] = ACTIONS(101),
    [aux_sym_register_token27] = ACTIONS(101),
    [aux_sym_register_token28] = ACTIONS(101),
    [aux_sym_register_token29] = ACTIONS(101),
    [aux_sym_register_token30] = ACTIONS(101),
    [aux_sym_register_token31] = ACTIONS(101),
    [aux_sym_register_token32] = ACTIONS(101),
    [aux_sym_register_token33] = ACTIONS(101),
    [aux_sym_register_token34] = ACTIONS(101),
    [aux_sym_register_token35] = ACTIONS(101),
    [aux_sym_register_token36] = ACTIONS(101),
    [aux_sym_register_token37] = ACTIONS(101),
    [aux_sym_register_token38] = ACTIONS(101),
    [aux_sym_register_token39] = ACTIONS(101),
    [aux_sym_register_token40] = ACTIONS(101),
    [aux_sym_register_token41] = ACTIONS(101),
    [aux_sym_register_token42] = ACTIONS(101),
    [aux_sym_register_token43] = ACTIONS(101),
    [aux_sym_register_token44] = ACTIONS(101),
    [aux_sym_register_token45] = ACTIONS(101),
    [aux_sym_register_token46] = ACTIONS(101),
    [aux_sym_register_token47] = ACTIONS(101),
    [aux_sym_register_token48] = ACTIONS(101),
    [aux_sym_register_token49] = ACTIONS(101),
    [aux_sym_register_token50] = ACTIONS(101),
    [aux_sym_register_token51] = ACTIONS(101),
    [aux_sym_register_token52] = ACTIONS(101),
    [aux_sym_register_token53] = ACTIONS(101),
    [aux_sym_register_token54] = ACTIONS(101),
    [aux_sym_register_token55] = ACTIONS(101),
    [aux_sym_register_token56] = ACTIONS(101),
    [aux_sym_register_token57] = ACTIONS(101),
    [aux_sym_register_token58] = ACTIONS(101),
    [aux_sym_register_token59] = ACTIONS(101),
    [aux_sym_register_token60] = ACTIONS(101),
    [aux_sym_register_token61] = ACTIONS(101),
    [aux_sym_register_token62] = ACTIONS(101),
    [aux_sym_register_token63] = ACTIONS(101),
    [aux_sym_register_token64] = ACTIONS(101),
    [aux_sym_register_token65] = ACTIONS(101),
    [aux_sym_register_token66] = ACTIONS(101),
    [aux_sym_register_token67] = ACTIONS(101),
    [aux_sym_register_token68] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(101),
    [aux_sym_constant_numeric_token1] = ACTIONS(101),
    [aux_sym_constant_numeric_token2] = ACTIONS(101),
    [aux_sym_constant_numeric_token3] = ACTIONS(101),
    [aux_sym_constant_numeric_token4] = ACTIONS(101),
    [aux_sym_constant_numeric_token5] = ACTIONS(101),
    [aux_sym_constant_numeric_token6] = ACTIONS(101),
    [aux_sym_constant_numeric_token7] = ACTIONS(101),
    [aux_sym_constant_numeric_token8] = ACTIONS(101),
    [aux_sym_constant_numeric_token9] = ACTIONS(101),
    [aux_sym_constant_numeric_token10] = ACTIONS(101),
    [aux_sym_constant_charstr_token1] = ACTIONS(101),
    [aux_sym_constant_charstr_token2] = ACTIONS(101),
    [aux_sym_constant_charstr_token3] = ACTIONS(101),
    [anon_sym_PLUS] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(101),
    [anon_sym_TILDE] = ACTIONS(101),
    [anon_sym_BANG] = ACTIONS(101),
    [aux_sym_unary_expression_token1] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(101),
    [sym_comment] = ACTIONS(19),
    [aux_sym_word_token1] = ACTIONS(101),
  },
  [21] = {
    [aux_sym_source_file_token1] = ACTIONS(95),
    [aux_sym_operand_prefix_token1] = ACTIONS(97),
    [aux_sym_operand_prefix_token2] = ACTIONS(97),
    [aux_sym_operand_prefix_token3] = ACTIONS(97),
    [aux_sym_operand_prefix_token4] = ACTIONS(97),
    [aux_sym_operand_prefix_token5] = ACTIONS(97),
    [aux_sym_operand_prefix_token6] = ACTIONS(97),
    [aux_sym_operand_prefix_token7] = ACTIONS(97),
    [aux_sym_operand_prefix_token8] = ACTIONS(97),
    [aux_sym_operand_prefix_token9] = ACTIONS(97),
    [aux_sym_register_token1] = ACTIONS(97),
    [aux_sym_register_token2] = ACTIONS(97),
    [aux_sym_register_token3] = ACTIONS(97),
    [aux_sym_register_token4] = ACTIONS(97),
    [aux_sym_register_token5] = ACTIONS(97),
    [aux_sym_register_token6] = ACTIONS(97),
    [aux_sym_register_token7] = ACTIONS(97),
    [aux_sym_register_token8] = ACTIONS(97),
    [aux_sym_register_token9] = ACTIONS(97),
    [aux_sym_register_token10] = ACTIONS(97),
    [aux_sym_register_token11] = ACTIONS(97),
    [aux_sym_register_token12] = ACTIONS(97),
    [aux_sym_register_token13] = ACTIONS(97),
    [aux_sym_register_token14] = ACTIONS(97),
    [aux_sym_register_token15] = ACTIONS(97),
    [aux_sym_register_token16] = ACTIONS(97),
    [aux_sym_register_token17] = ACTIONS(97),
    [aux_sym_register_token18] = ACTIONS(97),
    [aux_sym_register_token19] = ACTIONS(97),
    [aux_sym_register_token20] = ACTIONS(97),
    [aux_sym_register_token21] = ACTIONS(97),
    [aux_sym_register_token22] = ACTIONS(97),
    [aux_sym_register_token23] = ACTIONS(97),
    [aux_sym_register_token24] = ACTIONS(97),
    [aux_sym_register_token25] = ACTIONS(97),
    [aux_sym_register_token26] = ACTIONS(97),
    [aux_sym_register_token27] = ACTIONS(97),
    [aux_sym_register_token28] = ACTIONS(97),
    [aux_sym_register_token29] = ACTIONS(97),
    [aux_sym_register_token30] = ACTIONS(97),
    [aux_sym_register_token31] = ACTIONS(97),
    [aux_sym_register_token32] = ACTIONS(97),
    [aux_sym_register_token33] = ACTIONS(97),
    [aux_sym_register_token34] = ACTIONS(97),
    [aux_sym_register_token35] = ACTIONS(97),
    [aux_sym_register_token36] = ACTIONS(97),
    [aux_sym_register_token37] = ACTIONS(97),
    [aux_sym_register_token38] = ACTIONS(97),
    [aux_sym_register_token39] = ACTIONS(97),
    [aux_sym_register_token40] = ACTIONS(97),
    [aux_sym_register_token41] = ACTIONS(97),
    [aux_sym_register_token42] = ACTIONS(97),
    [aux_sym_register_token43] = ACTIONS(97),
    [aux_sym_register_token44] = ACTIONS(97),
    [aux_sym_register_token45] = ACTIONS(97),
    [aux_sym_register_token46] = ACTIONS(97),
    [aux_sym_register_token47] = ACTIONS(97),
    [aux_sym_register_token48] = ACTIONS(97),
    [aux_sym_register_token49] = ACTIONS(97),
    [aux_sym_register_token50] = ACTIONS(97),
    [aux_sym_register_token51] = ACTIONS(97),
    [aux_sym_register_token52] = ACTIONS(97),
    [aux_sym_register_token53] = ACTIONS(97),
    [aux_sym_register_token54] = ACTIONS(97),
    [aux_sym_register_token55] = ACTIONS(97),
    [aux_sym_register_token56] = ACTIONS(97),
    [aux_sym_register_token57] = ACTIONS(97),
    [aux_sym_register_token58] = ACTIONS(97),
    [aux_sym_register_token59] = ACTIONS(97),
    [aux_sym_register_token60] = ACTIONS(97),
    [aux_sym_register_token61] = ACTIONS(97),
    [aux_sym_register_token62] = ACTIONS(97),
    [aux_sym_register_token63] = ACTIONS(97),
    [aux_sym_register_token64] = ACTIONS(97),
    [aux_sym_register_token65] = ACTIONS(97),
    [aux_sym_register_token66] = ACTIONS(97),
    [aux_sym_register_token67] = ACTIONS(97),
    [aux_sym_register_token68] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(97),
    [aux_sym_constant_numeric_token1] = ACTIONS(97),
    [aux_sym_constant_numeric_token2] = ACTIONS(97),
    [aux_sym_constant_numeric_token3] = ACTIONS(97),
    [aux_sym_constant_numeric_token4] = ACTIONS(97),
    [aux_sym_constant_numeric_token5] = ACTIONS(97),
    [aux_sym_constant_numeric_token6] = ACTIONS(97),
    [aux_sym_constant_numeric_token7] = ACTIONS(97),
    [aux_sym_constant_numeric_token8] = ACTIONS(97),
    [aux_sym_constant_numeric_token9] = ACTIONS(97),
    [aux_sym_constant_numeric_token10] = ACTIONS(97),
    [aux_sym_constant_charstr_token1] = ACTIONS(97),
    [aux_sym_constant_charstr_token2] = ACTIONS(97),
    [aux_sym_constant_charstr_token3] = ACTIONS(97),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(97),
    [anon_sym_TILDE] = ACTIONS(97),
    [anon_sym_BANG] = ACTIONS(97),
    [aux_sym_unary_expression_token1] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(97),
    [sym_comment] = ACTIONS(19),
    [aux_sym_word_token1] = ACTIONS(97),
  },
  [22] = {
    [aux_sym_register_token1] = ACTIONS(103),
    [aux_sym_register_token2] = ACTIONS(103),
    [aux_sym_register_token3] = ACTIONS(103),
    [aux_sym_register_token4] = ACTIONS(103),
    [aux_sym_register_token5] = ACTIONS(103),
    [aux_sym_register_token6] = ACTIONS(103),
    [aux_sym_register_token7] = ACTIONS(103),
    [aux_sym_register_token8] = ACTIONS(103),
    [aux_sym_register_token9] = ACTIONS(103),
    [aux_sym_register_token10] = ACTIONS(103),
    [aux_sym_register_token11] = ACTIONS(103),
    [aux_sym_register_token12] = ACTIONS(103),
    [aux_sym_register_token13] = ACTIONS(103),
    [aux_sym_register_token14] = ACTIONS(103),
    [aux_sym_register_token15] = ACTIONS(103),
    [aux_sym_register_token16] = ACTIONS(103),
    [aux_sym_register_token17] = ACTIONS(103),
    [aux_sym_register_token18] = ACTIONS(103),
    [aux_sym_register_token19] = ACTIONS(103),
    [aux_sym_register_token20] = ACTIONS(103),
    [aux_sym_register_token21] = ACTIONS(103),
    [aux_sym_register_token22] = ACTIONS(103),
    [aux_sym_register_token23] = ACTIONS(103),
    [aux_sym_register_token24] = ACTIONS(103),
    [aux_sym_register_token25] = ACTIONS(103),
    [aux_sym_register_token26] = ACTIONS(103),
    [aux_sym_register_token27] = ACTIONS(103),
    [aux_sym_register_token28] = ACTIONS(103),
    [aux_sym_register_token29] = ACTIONS(103),
    [aux_sym_register_token30] = ACTIONS(103),
    [aux_sym_register_token31] = ACTIONS(103),
    [aux_sym_register_token32] = ACTIONS(103),
    [aux_sym_register_token33] = ACTIONS(103),
    [aux_sym_register_token34] = ACTIONS(103),
    [aux_sym_register_token35] = ACTIONS(103),
    [aux_sym_register_token36] = ACTIONS(103),
    [aux_sym_register_token37] = ACTIONS(103),
    [aux_sym_register_token38] = ACTIONS(103),
    [aux_sym_register_token39] = ACTIONS(103),
    [aux_sym_register_token40] = ACTIONS(103),
    [aux_sym_register_token41] = ACTIONS(103),
    [aux_sym_register_token42] = ACTIONS(103),
    [aux_sym_register_token43] = ACTIONS(103),
    [aux_sym_register_token44] = ACTIONS(103),
    [aux_sym_register_token45] = ACTIONS(103),
    [aux_sym_register_token46] = ACTIONS(103),
    [aux_sym_register_token47] = ACTIONS(103),
    [aux_sym_register_token48] = ACTIONS(103),
    [aux_sym_register_token49] = ACTIONS(103),
    [aux_sym_register_token50] = ACTIONS(103),
    [aux_sym_register_token51] = ACTIONS(103),
    [aux_sym_register_token52] = ACTIONS(103),
    [aux_sym_register_token53] = ACTIONS(103),
    [aux_sym_register_token54] = ACTIONS(103),
    [aux_sym_register_token55] = ACTIONS(103),
    [aux_sym_register_token56] = ACTIONS(103),
    [aux_sym_register_token57] = ACTIONS(103),
    [aux_sym_register_token58] = ACTIONS(103),
    [aux_sym_register_token59] = ACTIONS(103),
    [aux_sym_register_token60] = ACTIONS(103),
    [aux_sym_register_token61] = ACTIONS(103),
    [aux_sym_register_token62] = ACTIONS(103),
    [aux_sym_register_token63] = ACTIONS(103),
    [aux_sym_register_token64] = ACTIONS(103),
    [aux_sym_register_token65] = ACTIONS(103),
    [aux_sym_register_token66] = ACTIONS(103),
    [aux_sym_register_token67] = ACTIONS(103),
    [aux_sym_register_token68] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(105),
    [aux_sym_constant_numeric_token1] = ACTIONS(103),
    [aux_sym_constant_numeric_token2] = ACTIONS(105),
    [aux_sym_constant_numeric_token3] = ACTIONS(105),
    [aux_sym_constant_numeric_token4] = ACTIONS(103),
    [aux_sym_constant_numeric_token5] = ACTIONS(103),
    [aux_sym_constant_numeric_token6] = ACTIONS(103),
    [aux_sym_constant_numeric_token7] = ACTIONS(105),
    [aux_sym_constant_numeric_token8] = ACTIONS(103),
    [aux_sym_constant_numeric_token9] = ACTIONS(103),
    [aux_sym_constant_numeric_token10] = ACTIONS(103),
    [aux_sym_constant_charstr_token1] = ACTIONS(105),
    [aux_sym_constant_charstr_token2] = ACTIONS(105),
    [aux_sym_constant_charstr_token3] = ACTIONS(105),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_TILDE] = ACTIONS(105),
    [anon_sym_BANG] = ACTIONS(105),
    [aux_sym_unary_expression_token1] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
    [aux_sym_word_token1] = ACTIONS(103),
  },
  [23] = {
    [aux_sym_register_token1] = ACTIONS(107),
    [aux_sym_register_token2] = ACTIONS(107),
    [aux_sym_register_token3] = ACTIONS(107),
    [aux_sym_register_token4] = ACTIONS(107),
    [aux_sym_register_token5] = ACTIONS(107),
    [aux_sym_register_token6] = ACTIONS(107),
    [aux_sym_register_token7] = ACTIONS(107),
    [aux_sym_register_token8] = ACTIONS(107),
    [aux_sym_register_token9] = ACTIONS(107),
    [aux_sym_register_token10] = ACTIONS(107),
    [aux_sym_register_token11] = ACTIONS(107),
    [aux_sym_register_token12] = ACTIONS(107),
    [aux_sym_register_token13] = ACTIONS(107),
    [aux_sym_register_token14] = ACTIONS(107),
    [aux_sym_register_token15] = ACTIONS(107),
    [aux_sym_register_token16] = ACTIONS(107),
    [aux_sym_register_token17] = ACTIONS(107),
    [aux_sym_register_token18] = ACTIONS(107),
    [aux_sym_register_token19] = ACTIONS(107),
    [aux_sym_register_token20] = ACTIONS(107),
    [aux_sym_register_token21] = ACTIONS(107),
    [aux_sym_register_token22] = ACTIONS(107),
    [aux_sym_register_token23] = ACTIONS(107),
    [aux_sym_register_token24] = ACTIONS(107),
    [aux_sym_register_token25] = ACTIONS(107),
    [aux_sym_register_token26] = ACTIONS(107),
    [aux_sym_register_token27] = ACTIONS(107),
    [aux_sym_register_token28] = ACTIONS(107),
    [aux_sym_register_token29] = ACTIONS(107),
    [aux_sym_register_token30] = ACTIONS(107),
    [aux_sym_register_token31] = ACTIONS(107),
    [aux_sym_register_token32] = ACTIONS(107),
    [aux_sym_register_token33] = ACTIONS(107),
    [aux_sym_register_token34] = ACTIONS(107),
    [aux_sym_register_token35] = ACTIONS(107),
    [aux_sym_register_token36] = ACTIONS(107),
    [aux_sym_register_token37] = ACTIONS(107),
    [aux_sym_register_token38] = ACTIONS(107),
    [aux_sym_register_token39] = ACTIONS(107),
    [aux_sym_register_token40] = ACTIONS(107),
    [aux_sym_register_token41] = ACTIONS(107),
    [aux_sym_register_token42] = ACTIONS(107),
    [aux_sym_register_token43] = ACTIONS(107),
    [aux_sym_register_token44] = ACTIONS(107),
    [aux_sym_register_token45] = ACTIONS(107),
    [aux_sym_register_token46] = ACTIONS(107),
    [aux_sym_register_token47] = ACTIONS(107),
    [aux_sym_register_token48] = ACTIONS(107),
    [aux_sym_register_token49] = ACTIONS(107),
    [aux_sym_register_token50] = ACTIONS(107),
    [aux_sym_register_token51] = ACTIONS(107),
    [aux_sym_register_token52] = ACTIONS(107),
    [aux_sym_register_token53] = ACTIONS(107),
    [aux_sym_register_token54] = ACTIONS(107),
    [aux_sym_register_token55] = ACTIONS(107),
    [aux_sym_register_token56] = ACTIONS(107),
    [aux_sym_register_token57] = ACTIONS(107),
    [aux_sym_register_token58] = ACTIONS(107),
    [aux_sym_register_token59] = ACTIONS(107),
    [aux_sym_register_token60] = ACTIONS(107),
    [aux_sym_register_token61] = ACTIONS(107),
    [aux_sym_register_token62] = ACTIONS(107),
    [aux_sym_register_token63] = ACTIONS(107),
    [aux_sym_register_token64] = ACTIONS(107),
    [aux_sym_register_token65] = ACTIONS(107),
    [aux_sym_register_token66] = ACTIONS(107),
    [aux_sym_register_token67] = ACTIONS(107),
    [aux_sym_register_token68] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(109),
    [aux_sym_constant_numeric_token1] = ACTIONS(107),
    [aux_sym_constant_numeric_token2] = ACTIONS(109),
    [aux_sym_constant_numeric_token3] = ACTIONS(109),
    [aux_sym_constant_numeric_token4] = ACTIONS(107),
    [aux_sym_constant_numeric_token5] = ACTIONS(107),
    [aux_sym_constant_numeric_token6] = ACTIONS(107),
    [aux_sym_constant_numeric_token7] = ACTIONS(109),
    [aux_sym_constant_numeric_token8] = ACTIONS(107),
    [aux_sym_constant_numeric_token9] = ACTIONS(107),
    [aux_sym_constant_numeric_token10] = ACTIONS(107),
    [aux_sym_constant_charstr_token1] = ACTIONS(109),
    [aux_sym_constant_charstr_token2] = ACTIONS(109),
    [aux_sym_constant_charstr_token3] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_TILDE] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(109),
    [aux_sym_unary_expression_token1] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(109),
    [sym_comment] = ACTIONS(3),
    [aux_sym_word_token1] = ACTIONS(107),
  },
  [24] = {
    [sym_source_line] = STATE(171),
    [sym_preproc_directive] = STATE(171),
    [sym_assembl_directive] = STATE(171),
    [sym_label] = STATE(27),
    [sym_instruction] = STATE(173),
    [sym_instruction_prefix] = STATE(38),
    [sym_known_instruction] = STATE(7),
    [sym_pseudo_instruction] = STATE(7),
    [sym_unknown_instruction] = STATE(7),
    [sym_word] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(111),
    [aux_sym_source_file_token1] = ACTIONS(113),
    [anon_sym_PERCENT] = ACTIONS(9),
    [anon_sym_warning] = ACTIONS(11),
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
    [aux_sym_known_instruction_token6] = ACTIONS(15),
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
    [sym_source_line] = STATE(185),
    [sym_preproc_directive] = STATE(185),
    [sym_assembl_directive] = STATE(185),
    [sym_label] = STATE(28),
    [sym_instruction] = STATE(187),
    [sym_instruction_prefix] = STATE(64),
    [sym_known_instruction] = STATE(9),
    [sym_pseudo_instruction] = STATE(9),
    [sym_unknown_instruction] = STATE(9),
    [sym_word] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(115),
    [aux_sym_source_file_token1] = ACTIONS(117),
    [anon_sym_PERCENT] = ACTIONS(120),
    [anon_sym_warning] = ACTIONS(123),
    [anon_sym_bits] = ACTIONS(123),
    [anon_sym_use16] = ACTIONS(123),
    [anon_sym_use32] = ACTIONS(123),
    [anon_sym_default] = ACTIONS(123),
    [anon_sym_section] = ACTIONS(123),
    [anon_sym_segment] = ACTIONS(123),
    [anon_sym_absolute] = ACTIONS(123),
    [anon_sym_extern] = ACTIONS(123),
    [anon_sym_required] = ACTIONS(123),
    [anon_sym_global] = ACTIONS(123),
    [anon_sym_static] = ACTIONS(123),
    [anon_sym_common] = ACTIONS(123),
    [anon_sym_prefix] = ACTIONS(123),
    [anon_sym_gprefix] = ACTIONS(123),
    [anon_sym_lprefix] = ACTIONS(123),
    [anon_sym_postfix] = ACTIONS(123),
    [anon_sym_gpostfix] = ACTIONS(123),
    [anon_sym_lpostfix] = ACTIONS(123),
    [anon_sym_cpu] = ACTIONS(123),
    [anon_sym_float] = ACTIONS(123),
    [aux_sym_instruction_prefix_token1] = ACTIONS(126),
    [aux_sym_instruction_prefix_token2] = ACTIONS(126),
    [aux_sym_instruction_prefix_token3] = ACTIONS(126),
    [aux_sym_instruction_prefix_token4] = ACTIONS(126),
    [aux_sym_instruction_prefix_token5] = ACTIONS(126),
    [aux_sym_instruction_prefix_token6] = ACTIONS(126),
    [aux_sym_instruction_prefix_token7] = ACTIONS(126),
    [aux_sym_instruction_prefix_token8] = ACTIONS(126),
    [aux_sym_instruction_prefix_token9] = ACTIONS(126),
    [aux_sym_instruction_prefix_token10] = ACTIONS(126),
    [aux_sym_instruction_prefix_token11] = ACTIONS(126),
    [aux_sym_instruction_prefix_token12] = ACTIONS(126),
    [aux_sym_instruction_prefix_token13] = ACTIONS(126),
    [aux_sym_instruction_prefix_token14] = ACTIONS(126),
    [aux_sym_instruction_prefix_token15] = ACTIONS(126),
    [aux_sym_instruction_prefix_token16] = ACTIONS(126),
    [aux_sym_instruction_prefix_token17] = ACTIONS(126),
    [aux_sym_instruction_prefix_token18] = ACTIONS(126),
    [aux_sym_instruction_prefix_token19] = ACTIONS(126),
    [aux_sym_instruction_prefix_token20] = ACTIONS(126),
    [aux_sym_instruction_prefix_token21] = ACTIONS(126),
    [aux_sym_instruction_prefix_token22] = ACTIONS(126),
    [aux_sym_known_instruction_token1] = ACTIONS(129),
    [aux_sym_known_instruction_token2] = ACTIONS(129),
    [aux_sym_known_instruction_token3] = ACTIONS(129),
    [aux_sym_known_instruction_token4] = ACTIONS(129),
    [aux_sym_known_instruction_token5] = ACTIONS(129),
    [aux_sym_known_instruction_token6] = ACTIONS(129),
    [aux_sym_pseudo_instruction_token1] = ACTIONS(132),
    [aux_sym_pseudo_instruction_token2] = ACTIONS(132),
    [aux_sym_pseudo_instruction_token3] = ACTIONS(132),
    [aux_sym_pseudo_instruction_token4] = ACTIONS(132),
    [aux_sym_pseudo_instruction_token5] = ACTIONS(132),
    [aux_sym_pseudo_instruction_token6] = ACTIONS(132),
    [aux_sym_pseudo_instruction_token7] = ACTIONS(132),
    [aux_sym_pseudo_instruction_token8] = ACTIONS(132),
    [aux_sym_pseudo_instruction_token9] = ACTIONS(132),
    [aux_sym_pseudo_instruction_token10] = ACTIONS(132),
    [aux_sym_pseudo_instruction_token11] = ACTIONS(132),
    [aux_sym_pseudo_instruction_token12] = ACTIONS(132),
    [aux_sym_pseudo_instruction_token13] = ACTIONS(132),
    [aux_sym_pseudo_instruction_token14] = ACTIONS(132),
    [aux_sym_pseudo_instruction_token15] = ACTIONS(132),
    [aux_sym_pseudo_instruction_token16] = ACTIONS(132),
    [aux_sym_pseudo_instruction_token17] = ACTIONS(132),
    [aux_sym_pseudo_instruction_token18] = ACTIONS(132),
    [aux_sym_pseudo_instruction_token19] = ACTIONS(132),
    [sym_comment] = ACTIONS(19),
    [aux_sym_word_token1] = ACTIONS(135),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(115),
    [aux_sym_source_file_token1] = ACTIONS(115),
    [anon_sym_PERCENT] = ACTIONS(138),
    [anon_sym_warning] = ACTIONS(138),
    [anon_sym_bits] = ACTIONS(138),
    [anon_sym_use16] = ACTIONS(138),
    [anon_sym_use32] = ACTIONS(138),
    [anon_sym_default] = ACTIONS(138),
    [anon_sym_section] = ACTIONS(138),
    [anon_sym_segment] = ACTIONS(138),
    [anon_sym_absolute] = ACTIONS(138),
    [anon_sym_extern] = ACTIONS(138),
    [anon_sym_required] = ACTIONS(138),
    [anon_sym_global] = ACTIONS(138),
    [anon_sym_static] = ACTIONS(138),
    [anon_sym_common] = ACTIONS(138),
    [anon_sym_prefix] = ACTIONS(138),
    [anon_sym_gprefix] = ACTIONS(138),
    [anon_sym_lprefix] = ACTIONS(138),
    [anon_sym_postfix] = ACTIONS(138),
    [anon_sym_gpostfix] = ACTIONS(138),
    [anon_sym_lpostfix] = ACTIONS(138),
    [anon_sym_cpu] = ACTIONS(138),
    [anon_sym_float] = ACTIONS(138),
    [aux_sym_instruction_prefix_token1] = ACTIONS(138),
    [aux_sym_instruction_prefix_token2] = ACTIONS(138),
    [aux_sym_instruction_prefix_token3] = ACTIONS(138),
    [aux_sym_instruction_prefix_token4] = ACTIONS(138),
    [aux_sym_instruction_prefix_token5] = ACTIONS(138),
    [aux_sym_instruction_prefix_token6] = ACTIONS(138),
    [aux_sym_instruction_prefix_token7] = ACTIONS(138),
    [aux_sym_instruction_prefix_token8] = ACTIONS(138),
    [aux_sym_instruction_prefix_token9] = ACTIONS(138),
    [aux_sym_instruction_prefix_token10] = ACTIONS(138),
    [aux_sym_instruction_prefix_token11] = ACTIONS(138),
    [aux_sym_instruction_prefix_token12] = ACTIONS(138),
    [aux_sym_instruction_prefix_token13] = ACTIONS(138),
    [aux_sym_instruction_prefix_token14] = ACTIONS(138),
    [aux_sym_instruction_prefix_token15] = ACTIONS(138),
    [aux_sym_instruction_prefix_token16] = ACTIONS(138),
    [aux_sym_instruction_prefix_token17] = ACTIONS(138),
    [aux_sym_instruction_prefix_token18] = ACTIONS(138),
    [aux_sym_instruction_prefix_token19] = ACTIONS(138),
    [aux_sym_instruction_prefix_token20] = ACTIONS(138),
    [aux_sym_instruction_prefix_token21] = ACTIONS(138),
    [aux_sym_instruction_prefix_token22] = ACTIONS(138),
    [aux_sym_known_instruction_token1] = ACTIONS(138),
    [aux_sym_known_instruction_token2] = ACTIONS(138),
    [aux_sym_known_instruction_token3] = ACTIONS(138),
    [aux_sym_known_instruction_token4] = ACTIONS(138),
    [aux_sym_known_instruction_token5] = ACTIONS(138),
    [aux_sym_known_instruction_token6] = ACTIONS(138),
    [aux_sym_pseudo_instruction_token1] = ACTIONS(138),
    [aux_sym_pseudo_instruction_token2] = ACTIONS(138),
    [aux_sym_pseudo_instruction_token3] = ACTIONS(138),
    [aux_sym_pseudo_instruction_token4] = ACTIONS(138),
    [aux_sym_pseudo_instruction_token5] = ACTIONS(138),
    [aux_sym_pseudo_instruction_token6] = ACTIONS(138),
    [aux_sym_pseudo_instruction_token7] = ACTIONS(138),
    [aux_sym_pseudo_instruction_token8] = ACTIONS(138),
    [aux_sym_pseudo_instruction_token9] = ACTIONS(138),
    [aux_sym_pseudo_instruction_token10] = ACTIONS(138),
    [aux_sym_pseudo_instruction_token11] = ACTIONS(138),
    [aux_sym_pseudo_instruction_token12] = ACTIONS(138),
    [aux_sym_pseudo_instruction_token13] = ACTIONS(138),
    [aux_sym_pseudo_instruction_token14] = ACTIONS(138),
    [aux_sym_pseudo_instruction_token15] = ACTIONS(138),
    [aux_sym_pseudo_instruction_token16] = ACTIONS(138),
    [aux_sym_pseudo_instruction_token17] = ACTIONS(138),
    [aux_sym_pseudo_instruction_token18] = ACTIONS(138),
    [aux_sym_pseudo_instruction_token19] = ACTIONS(138),
    [sym_comment] = ACTIONS(19),
    [aux_sym_word_token1] = ACTIONS(138),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(142), 1,
      aux_sym_word_token1,
    STATE(12), 1,
      sym_word,
    STATE(38), 1,
      sym_instruction_prefix,
    STATE(177), 1,
      sym_instruction,
    ACTIONS(140), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    STATE(7), 3,
      sym_known_instruction,
      sym_pseudo_instruction,
      sym_unknown_instruction,
    ACTIONS(15), 6,
      aux_sym_known_instruction_token1,
      aux_sym_known_instruction_token2,
      aux_sym_known_instruction_token3,
      aux_sym_known_instruction_token4,
      aux_sym_known_instruction_token5,
      aux_sym_known_instruction_token6,
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
  [78] = 10,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(140), 1,
      aux_sym_source_file_token1,
    ACTIONS(148), 1,
      aux_sym_word_token1,
    STATE(19), 1,
      sym_word,
    STATE(64), 1,
      sym_instruction_prefix,
    STATE(183), 1,
      sym_instruction,
    STATE(9), 3,
      sym_known_instruction,
      sym_pseudo_instruction,
      sym_unknown_instruction,
    ACTIONS(144), 6,
      aux_sym_known_instruction_token1,
      aux_sym_known_instruction_token2,
      aux_sym_known_instruction_token3,
      aux_sym_known_instruction_token4,
      aux_sym_known_instruction_token5,
      aux_sym_known_instruction_token6,
    ACTIONS(146), 19,
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
  [155] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(152), 48,
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
      aux_sym_known_instruction_token6,
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
  [213] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(150), 1,
      aux_sym_source_file_token1,
    ACTIONS(152), 48,
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
      aux_sym_known_instruction_token6,
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
  [270] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 4,
      anon_sym_undef,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_rep,
    ACTIONS(154), 43,
      anon_sym_define,
      anon_sym_idefine,
      anon_sym_xdefine,
      anon_sym_assign,
      anon_sym_iassign,
      anon_sym_defstr,
      anon_sym_idefstr,
      anon_sym_deftok,
      anon_sym_ideftok,
      anon_sym_defalias,
      anon_sym_idefalias,
      anon_sym_undefalias,
      anon_sym_clear,
      anon_sym_aliases,
      anon_sym_ifdefalias,
      anon_sym_strcat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_macro,
      anon_sym_imacro,
      anon_sym_endmacro,
      anon_sym_unmacro,
      anon_sym_rotate,
      anon_sym_ifn,
      anon_sym_elifn,
      anon_sym_else,
      anon_sym_endif,
      anon_sym_endrep,
      anon_sym_include,
      anon_sym_pathsearch,
      anon_sym_depend,
      anon_sym_use,
      anon_sym_push,
      anon_sym_pop,
      anon_sym_repl,
      anon_sym_arg,
      anon_sym_stacksize,
      anon_sym_local,
      anon_sym_error,
      anon_sym_warning,
      anon_sym_fatal,
      anon_sym_pragma,
      anon_sym_line,
  [325] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 4,
      anon_sym_undef,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_rep,
    ACTIONS(158), 43,
      anon_sym_define,
      anon_sym_idefine,
      anon_sym_xdefine,
      anon_sym_assign,
      anon_sym_iassign,
      anon_sym_defstr,
      anon_sym_idefstr,
      anon_sym_deftok,
      anon_sym_ideftok,
      anon_sym_defalias,
      anon_sym_idefalias,
      anon_sym_undefalias,
      anon_sym_clear,
      anon_sym_aliases,
      anon_sym_ifdefalias,
      anon_sym_strcat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_macro,
      anon_sym_imacro,
      anon_sym_endmacro,
      anon_sym_unmacro,
      anon_sym_rotate,
      anon_sym_ifn,
      anon_sym_elifn,
      anon_sym_else,
      anon_sym_endif,
      anon_sym_endrep,
      anon_sym_include,
      anon_sym_pathsearch,
      anon_sym_depend,
      anon_sym_use,
      anon_sym_push,
      anon_sym_pop,
      anon_sym_repl,
      anon_sym_arg,
      anon_sym_stacksize,
      anon_sym_local,
      anon_sym_error,
      anon_sym_warning,
      anon_sym_fatal,
      anon_sym_pragma,
      anon_sym_line,
  [380] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      aux_sym_word_token1,
    STATE(145), 1,
      sym_expression,
    STATE(61), 2,
      sym_constant_numeric,
      sym_constant_charstr,
    ACTIONS(166), 3,
      aux_sym_constant_numeric_token2,
      aux_sym_constant_numeric_token3,
      aux_sym_constant_numeric_token7,
    ACTIONS(168), 3,
      aux_sym_constant_charstr_token1,
      aux_sym_constant_charstr_token2,
      aux_sym_constant_charstr_token3,
    ACTIONS(170), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(162), 6,
      aux_sym_operand_prefix_token2,
      aux_sym_operand_prefix_token3,
      aux_sym_operand_prefix_token4,
      aux_sym_effective_address_token1,
      aux_sym_effective_address_token2,
      aux_sym_effective_address_token3,
    STATE(60), 6,
      sym_constant,
      sym_conditional_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
      sym_word,
    ACTIONS(164), 7,
      aux_sym_constant_numeric_token1,
      aux_sym_constant_numeric_token4,
      aux_sym_constant_numeric_token5,
      aux_sym_constant_numeric_token6,
      aux_sym_constant_numeric_token8,
      aux_sym_constant_numeric_token9,
      aux_sym_constant_numeric_token10,
  [441] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      aux_sym_word_token1,
    STATE(151), 1,
      sym_expression,
    STATE(61), 2,
      sym_constant_numeric,
      sym_constant_charstr,
    ACTIONS(166), 3,
      aux_sym_constant_numeric_token2,
      aux_sym_constant_numeric_token3,
      aux_sym_constant_numeric_token7,
    ACTIONS(168), 3,
      aux_sym_constant_charstr_token1,
      aux_sym_constant_charstr_token2,
      aux_sym_constant_charstr_token3,
    ACTIONS(170), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(178), 6,
      aux_sym_operand_prefix_token2,
      aux_sym_operand_prefix_token3,
      aux_sym_operand_prefix_token4,
      aux_sym_effective_address_token1,
      aux_sym_effective_address_token2,
      aux_sym_effective_address_token3,
    STATE(60), 6,
      sym_constant,
      sym_conditional_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
      sym_word,
    ACTIONS(164), 7,
      aux_sym_constant_numeric_token1,
      aux_sym_constant_numeric_token4,
      aux_sym_constant_numeric_token5,
      aux_sym_constant_numeric_token6,
      aux_sym_constant_numeric_token8,
      aux_sym_constant_numeric_token9,
      aux_sym_constant_numeric_token10,
  [502] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(33), 28,
      anon_sym_PERCENT,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
  [540] = 11,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_AMP_AMP,
    ACTIONS(190), 1,
      anon_sym_PIPE,
    ACTIONS(192), 1,
      anon_sym_CARET,
    ACTIONS(194), 1,
      anon_sym_AMP,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(198), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(184), 4,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
    ACTIONS(196), 4,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(182), 5,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(188), 9,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [594] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(200), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(202), 28,
      anon_sym_PERCENT,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
  [632] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      aux_sym_word_token1,
    STATE(12), 1,
      sym_word,
    STATE(6), 3,
      sym_known_instruction,
      sym_pseudo_instruction,
      sym_unknown_instruction,
    ACTIONS(15), 6,
      aux_sym_known_instruction_token1,
      aux_sym_known_instruction_token2,
      aux_sym_known_instruction_token3,
      aux_sym_known_instruction_token4,
      aux_sym_known_instruction_token5,
      aux_sym_known_instruction_token6,
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
  [676] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_QMARK,
    ACTIONS(210), 1,
      anon_sym_CARET_CARET,
    ACTIONS(212), 1,
      anon_sym_AMP_AMP,
    ACTIONS(218), 1,
      anon_sym_PIPE,
    ACTIONS(220), 1,
      anon_sym_CARET,
    ACTIONS(222), 1,
      anon_sym_AMP,
    ACTIONS(204), 2,
      anon_sym_PERCENT,
      anon_sym_SLASH,
    ACTIONS(224), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(226), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(228), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(230), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(206), 4,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
    ACTIONS(214), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(216), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [738] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 2,
      anon_sym_PERCENT,
      anon_sym_SLASH,
    ACTIONS(230), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(184), 9,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(180), 16,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
  [780] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 2,
      anon_sym_PERCENT,
      anon_sym_SLASH,
    ACTIONS(228), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(230), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(184), 9,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(180), 14,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_RPAREN,
  [824] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 2,
      anon_sym_PERCENT,
      anon_sym_SLASH,
    ACTIONS(224), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(226), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(228), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(230), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(184), 7,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
    ACTIONS(180), 12,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_RPAREN,
  [872] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    ACTIONS(232), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(235), 27,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
  [912] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(240), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(242), 28,
      anon_sym_PERCENT,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
  [950] = 14,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_AMP_AMP,
    ACTIONS(190), 1,
      anon_sym_PIPE,
    ACTIONS(192), 1,
      anon_sym_CARET,
    ACTIONS(194), 1,
      anon_sym_AMP,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    ACTIONS(248), 1,
      anon_sym_QMARK,
    ACTIONS(250), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(252), 1,
      anon_sym_CARET_CARET,
    ACTIONS(198), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(244), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(196), 4,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(182), 5,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(188), 9,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [1010] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(254), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(235), 28,
      anon_sym_PERCENT,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
  [1048] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_AMP,
    ACTIONS(204), 2,
      anon_sym_PERCENT,
      anon_sym_SLASH,
    ACTIONS(224), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(226), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(228), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(230), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(184), 6,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(180), 12,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_RPAREN,
  [1098] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_CARET,
    ACTIONS(222), 1,
      anon_sym_AMP,
    ACTIONS(204), 2,
      anon_sym_PERCENT,
      anon_sym_SLASH,
    ACTIONS(224), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(226), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(228), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(230), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(184), 5,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(180), 12,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_RPAREN,
  [1150] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_PIPE,
    ACTIONS(220), 1,
      anon_sym_CARET,
    ACTIONS(222), 1,
      anon_sym_AMP,
    ACTIONS(204), 2,
      anon_sym_PERCENT,
      anon_sym_SLASH,
    ACTIONS(224), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(226), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(228), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(230), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(184), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(180), 12,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_RPAREN,
  [1204] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_PIPE,
    ACTIONS(220), 1,
      anon_sym_CARET,
    ACTIONS(222), 1,
      anon_sym_AMP,
    ACTIONS(204), 2,
      anon_sym_PERCENT,
      anon_sym_SLASH,
    ACTIONS(224), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(226), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(228), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(230), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(214), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(216), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
    ACTIONS(180), 7,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
  [1260] = 9,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_PIPE,
    ACTIONS(192), 1,
      anon_sym_CARET,
    ACTIONS(194), 1,
      anon_sym_AMP,
    ACTIONS(198), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(256), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(196), 4,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(182), 5,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(258), 14,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [1310] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 11,
      anon_sym_PERCENT,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
    ACTIONS(31), 19,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_RPAREN,
  [1348] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_AMP_AMP,
    ACTIONS(218), 1,
      anon_sym_PIPE,
    ACTIONS(220), 1,
      anon_sym_CARET,
    ACTIONS(222), 1,
      anon_sym_AMP,
    ACTIONS(204), 2,
      anon_sym_PERCENT,
      anon_sym_SLASH,
    ACTIONS(224), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(226), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(228), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(230), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(214), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(216), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
    ACTIONS(180), 6,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_RPAREN,
  [1406] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_QMARK,
    ACTIONS(210), 1,
      anon_sym_CARET_CARET,
    ACTIONS(212), 1,
      anon_sym_AMP_AMP,
    ACTIONS(218), 1,
      anon_sym_PIPE,
    ACTIONS(220), 1,
      anon_sym_CARET,
    ACTIONS(222), 1,
      anon_sym_AMP,
    ACTIONS(204), 2,
      anon_sym_PERCENT,
      anon_sym_SLASH,
    ACTIONS(224), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(226), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(228), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(230), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(180), 4,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
    ACTIONS(214), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(216), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [1468] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_COMMA,
    ACTIONS(260), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(235), 27,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
  [1508] = 14,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_AMP_AMP,
    ACTIONS(190), 1,
      anon_sym_PIPE,
    ACTIONS(192), 1,
      anon_sym_CARET,
    ACTIONS(194), 1,
      anon_sym_AMP,
    ACTIONS(248), 1,
      anon_sym_QMARK,
    ACTIONS(250), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(252), 1,
      anon_sym_CARET_CARET,
    ACTIONS(268), 1,
      anon_sym_COMMA,
    ACTIONS(198), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(266), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(196), 4,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(182), 5,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(188), 9,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [1568] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 11,
      anon_sym_PERCENT,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
    ACTIONS(180), 19,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_RPAREN,
  [1606] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 11,
      anon_sym_PERCENT,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
    ACTIONS(272), 19,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_RPAREN,
  [1644] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_PIPE,
    ACTIONS(220), 1,
      anon_sym_CARET,
    ACTIONS(222), 1,
      anon_sym_AMP,
    ACTIONS(204), 2,
      anon_sym_PERCENT,
      anon_sym_SLASH,
    ACTIONS(224), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(226), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(228), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(230), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(258), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(256), 12,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_RPAREN,
  [1698] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 11,
      anon_sym_PERCENT,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
    ACTIONS(254), 19,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_RPAREN,
  [1736] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 11,
      anon_sym_PERCENT,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
    ACTIONS(240), 19,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_RPAREN,
  [1774] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 11,
      anon_sym_PERCENT,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
    ACTIONS(200), 19,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_RPAREN,
  [1812] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 11,
      anon_sym_PERCENT,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
    ACTIONS(276), 19,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_RPAREN,
  [1850] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      aux_sym_word_token1,
    STATE(19), 1,
      sym_word,
    STATE(8), 3,
      sym_known_instruction,
      sym_pseudo_instruction,
      sym_unknown_instruction,
    ACTIONS(144), 6,
      aux_sym_known_instruction_token1,
      aux_sym_known_instruction_token2,
      aux_sym_known_instruction_token3,
      aux_sym_known_instruction_token4,
      aux_sym_known_instruction_token5,
      aux_sym_known_instruction_token6,
    ACTIONS(146), 19,
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
  [1894] = 10,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_PIPE,
    ACTIONS(192), 1,
      anon_sym_CARET,
    ACTIONS(194), 1,
      anon_sym_AMP,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(198), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(196), 4,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(182), 5,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(184), 5,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
    ACTIONS(188), 9,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [1946] = 9,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_PIPE,
    ACTIONS(192), 1,
      anon_sym_CARET,
    ACTIONS(194), 1,
      anon_sym_AMP,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(198), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(196), 4,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(182), 5,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(184), 14,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [1996] = 8,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_CARET,
    ACTIONS(194), 1,
      anon_sym_AMP,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(198), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(196), 4,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(182), 5,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(184), 15,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE,
  [2044] = 7,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_AMP,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(198), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(196), 4,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(182), 5,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(184), 16,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
  [2090] = 6,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(198), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(196), 4,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(182), 5,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(184), 17,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
  [2134] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(198), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(182), 5,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(184), 21,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
  [2176] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(272), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(270), 28,
      anon_sym_PERCENT,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
  [2214] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(182), 5,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(184), 23,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2254] = 13,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_AMP_AMP,
    ACTIONS(190), 1,
      anon_sym_PIPE,
    ACTIONS(192), 1,
      anon_sym_CARET,
    ACTIONS(194), 1,
      anon_sym_AMP,
    ACTIONS(248), 1,
      anon_sym_QMARK,
    ACTIONS(252), 1,
      anon_sym_CARET_CARET,
    ACTIONS(198), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(206), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(278), 2,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
    ACTIONS(196), 4,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(182), 5,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(188), 9,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [2312] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(184), 28,
      anon_sym_PERCENT,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
  [2350] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(276), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(274), 28,
      anon_sym_PERCENT,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
  [2388] = 13,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_AMP_AMP,
    ACTIONS(190), 1,
      anon_sym_PIPE,
    ACTIONS(192), 1,
      anon_sym_CARET,
    ACTIONS(194), 1,
      anon_sym_AMP,
    ACTIONS(248), 1,
      anon_sym_QMARK,
    ACTIONS(252), 1,
      anon_sym_CARET_CARET,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
    ACTIONS(184), 2,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
    ACTIONS(198), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(196), 4,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(182), 5,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(188), 9,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [2446] = 10,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(180), 1,
      aux_sym_source_file_token1,
    ACTIONS(284), 1,
      anon_sym_PIPE,
    ACTIONS(286), 1,
      anon_sym_CARET,
    ACTIONS(288), 1,
      anon_sym_AMP,
    ACTIONS(292), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(290), 4,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(184), 5,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
    ACTIONS(280), 5,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(282), 9,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [2497] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(71), 1,
      aux_sym_word_token1,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    STATE(91), 1,
      sym_expression,
    STATE(142), 2,
      sym_constant_numeric,
      sym_constant_charstr,
    ACTIONS(75), 3,
      aux_sym_constant_numeric_token2,
      aux_sym_constant_numeric_token3,
      aux_sym_constant_numeric_token7,
    ACTIONS(77), 3,
      aux_sym_constant_charstr_token1,
      aux_sym_constant_charstr_token2,
      aux_sym_constant_charstr_token3,
    ACTIONS(79), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(88), 6,
      sym_constant,
      sym_conditional_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
      sym_word,
    ACTIONS(63), 7,
      aux_sym_constant_numeric_token1,
      aux_sym_constant_numeric_token4,
      aux_sym_constant_numeric_token5,
      aux_sym_constant_numeric_token6,
      aux_sym_constant_numeric_token8,
      aux_sym_constant_numeric_token9,
      aux_sym_constant_numeric_token10,
  [2550] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(55), 1,
      aux_sym_word_token1,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    STATE(70), 1,
      sym_expression,
    STATE(44), 2,
      sym_constant_numeric,
      sym_constant_charstr,
    ACTIONS(85), 3,
      aux_sym_constant_numeric_token2,
      aux_sym_constant_numeric_token3,
      aux_sym_constant_numeric_token7,
    ACTIONS(87), 3,
      aux_sym_constant_charstr_token1,
      aux_sym_constant_charstr_token2,
      aux_sym_constant_charstr_token3,
    ACTIONS(89), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(46), 6,
      sym_constant,
      sym_conditional_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
      sym_word,
    ACTIONS(47), 7,
      aux_sym_constant_numeric_token1,
      aux_sym_constant_numeric_token4,
      aux_sym_constant_numeric_token5,
      aux_sym_constant_numeric_token6,
      aux_sym_constant_numeric_token8,
      aux_sym_constant_numeric_token9,
      aux_sym_constant_numeric_token10,
  [2603] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(55), 1,
      aux_sym_word_token1,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    STATE(72), 1,
      sym_expression,
    STATE(44), 2,
      sym_constant_numeric,
      sym_constant_charstr,
    ACTIONS(85), 3,
      aux_sym_constant_numeric_token2,
      aux_sym_constant_numeric_token3,
      aux_sym_constant_numeric_token7,
    ACTIONS(87), 3,
      aux_sym_constant_charstr_token1,
      aux_sym_constant_charstr_token2,
      aux_sym_constant_charstr_token3,
    ACTIONS(89), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(46), 6,
      sym_constant,
      sym_conditional_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
      sym_word,
    ACTIONS(47), 7,
      aux_sym_constant_numeric_token1,
      aux_sym_constant_numeric_token4,
      aux_sym_constant_numeric_token5,
      aux_sym_constant_numeric_token6,
      aux_sym_constant_numeric_token8,
      aux_sym_constant_numeric_token9,
      aux_sym_constant_numeric_token10,
  [2656] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(180), 1,
      aux_sym_source_file_token1,
    ACTIONS(280), 5,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(184), 23,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2695] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(180), 1,
      aux_sym_source_file_token1,
    ACTIONS(292), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(280), 5,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(184), 21,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
  [2736] = 6,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(180), 1,
      aux_sym_source_file_token1,
    ACTIONS(292), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(290), 4,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(280), 5,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(184), 17,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
  [2779] = 7,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(180), 1,
      aux_sym_source_file_token1,
    ACTIONS(288), 1,
      anon_sym_AMP,
    ACTIONS(292), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(290), 4,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(280), 5,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(184), 16,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
  [2824] = 8,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(180), 1,
      aux_sym_source_file_token1,
    ACTIONS(286), 1,
      anon_sym_CARET,
    ACTIONS(288), 1,
      anon_sym_AMP,
    ACTIONS(292), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(290), 4,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(280), 5,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(184), 15,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE,
  [2871] = 9,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(180), 1,
      aux_sym_source_file_token1,
    ACTIONS(284), 1,
      anon_sym_PIPE,
    ACTIONS(286), 1,
      anon_sym_CARET,
    ACTIONS(288), 1,
      anon_sym_AMP,
    ACTIONS(292), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(290), 4,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(280), 5,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(184), 14,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [2920] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(55), 1,
      aux_sym_word_token1,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    STATE(73), 1,
      sym_expression,
    STATE(44), 2,
      sym_constant_numeric,
      sym_constant_charstr,
    ACTIONS(85), 3,
      aux_sym_constant_numeric_token2,
      aux_sym_constant_numeric_token3,
      aux_sym_constant_numeric_token7,
    ACTIONS(87), 3,
      aux_sym_constant_charstr_token1,
      aux_sym_constant_charstr_token2,
      aux_sym_constant_charstr_token3,
    ACTIONS(89), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(46), 6,
      sym_constant,
      sym_conditional_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
      sym_word,
    ACTIONS(47), 7,
      aux_sym_constant_numeric_token1,
      aux_sym_constant_numeric_token4,
      aux_sym_constant_numeric_token5,
      aux_sym_constant_numeric_token6,
      aux_sym_constant_numeric_token8,
      aux_sym_constant_numeric_token9,
      aux_sym_constant_numeric_token10,
  [2973] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(254), 1,
      aux_sym_source_file_token1,
    ACTIONS(235), 28,
      anon_sym_PERCENT,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
  [3010] = 11,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(180), 1,
      aux_sym_source_file_token1,
    ACTIONS(284), 1,
      anon_sym_PIPE,
    ACTIONS(286), 1,
      anon_sym_CARET,
    ACTIONS(288), 1,
      anon_sym_AMP,
    ACTIONS(294), 1,
      anon_sym_AMP_AMP,
    ACTIONS(292), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(184), 4,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
    ACTIONS(290), 4,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(280), 5,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(282), 9,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [3063] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(55), 1,
      aux_sym_word_token1,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    STATE(51), 1,
      sym_expression,
    STATE(44), 2,
      sym_constant_numeric,
      sym_constant_charstr,
    ACTIONS(85), 3,
      aux_sym_constant_numeric_token2,
      aux_sym_constant_numeric_token3,
      aux_sym_constant_numeric_token7,
    ACTIONS(87), 3,
      aux_sym_constant_charstr_token1,
      aux_sym_constant_charstr_token2,
      aux_sym_constant_charstr_token3,
    ACTIONS(89), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(46), 6,
      sym_constant,
      sym_conditional_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
      sym_word,
    ACTIONS(47), 7,
      aux_sym_constant_numeric_token1,
      aux_sym_constant_numeric_token4,
      aux_sym_constant_numeric_token5,
      aux_sym_constant_numeric_token6,
      aux_sym_constant_numeric_token8,
      aux_sym_constant_numeric_token9,
      aux_sym_constant_numeric_token10,
  [3116] = 13,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(180), 1,
      aux_sym_source_file_token1,
    ACTIONS(284), 1,
      anon_sym_PIPE,
    ACTIONS(286), 1,
      anon_sym_CARET,
    ACTIONS(288), 1,
      anon_sym_AMP,
    ACTIONS(294), 1,
      anon_sym_AMP_AMP,
    ACTIONS(296), 1,
      anon_sym_QMARK,
    ACTIONS(298), 1,
      anon_sym_CARET_CARET,
    ACTIONS(184), 2,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
    ACTIONS(292), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(290), 4,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(280), 5,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(282), 9,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [3173] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(180), 1,
      aux_sym_source_file_token1,
    ACTIONS(184), 28,
      anon_sym_PERCENT,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
  [3210] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(272), 1,
      aux_sym_source_file_token1,
    ACTIONS(270), 28,
      anon_sym_PERCENT,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
  [3247] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(71), 1,
      aux_sym_word_token1,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    STATE(81), 1,
      sym_expression,
    STATE(142), 2,
      sym_constant_numeric,
      sym_constant_charstr,
    ACTIONS(75), 3,
      aux_sym_constant_numeric_token2,
      aux_sym_constant_numeric_token3,
      aux_sym_constant_numeric_token7,
    ACTIONS(77), 3,
      aux_sym_constant_charstr_token1,
      aux_sym_constant_charstr_token2,
      aux_sym_constant_charstr_token3,
    ACTIONS(79), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(88), 6,
      sym_constant,
      sym_conditional_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
      sym_word,
    ACTIONS(63), 7,
      aux_sym_constant_numeric_token1,
      aux_sym_constant_numeric_token4,
      aux_sym_constant_numeric_token5,
      aux_sym_constant_numeric_token6,
      aux_sym_constant_numeric_token8,
      aux_sym_constant_numeric_token9,
      aux_sym_constant_numeric_token10,
  [3300] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(71), 1,
      aux_sym_word_token1,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    STATE(82), 1,
      sym_expression,
    STATE(142), 2,
      sym_constant_numeric,
      sym_constant_charstr,
    ACTIONS(75), 3,
      aux_sym_constant_numeric_token2,
      aux_sym_constant_numeric_token3,
      aux_sym_constant_numeric_token7,
    ACTIONS(77), 3,
      aux_sym_constant_charstr_token1,
      aux_sym_constant_charstr_token2,
      aux_sym_constant_charstr_token3,
    ACTIONS(79), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(88), 6,
      sym_constant,
      sym_conditional_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
      sym_word,
    ACTIONS(63), 7,
      aux_sym_constant_numeric_token1,
      aux_sym_constant_numeric_token4,
      aux_sym_constant_numeric_token5,
      aux_sym_constant_numeric_token6,
      aux_sym_constant_numeric_token8,
      aux_sym_constant_numeric_token9,
      aux_sym_constant_numeric_token10,
  [3353] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(55), 1,
      aux_sym_word_token1,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_expression,
    STATE(44), 2,
      sym_constant_numeric,
      sym_constant_charstr,
    ACTIONS(85), 3,
      aux_sym_constant_numeric_token2,
      aux_sym_constant_numeric_token3,
      aux_sym_constant_numeric_token7,
    ACTIONS(87), 3,
      aux_sym_constant_charstr_token1,
      aux_sym_constant_charstr_token2,
      aux_sym_constant_charstr_token3,
    ACTIONS(89), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(46), 6,
      sym_constant,
      sym_conditional_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
      sym_word,
    ACTIONS(47), 7,
      aux_sym_constant_numeric_token1,
      aux_sym_constant_numeric_token4,
      aux_sym_constant_numeric_token5,
      aux_sym_constant_numeric_token6,
      aux_sym_constant_numeric_token8,
      aux_sym_constant_numeric_token9,
      aux_sym_constant_numeric_token10,
  [3406] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(55), 1,
      aux_sym_word_token1,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    STATE(67), 1,
      sym_expression,
    STATE(44), 2,
      sym_constant_numeric,
      sym_constant_charstr,
    ACTIONS(85), 3,
      aux_sym_constant_numeric_token2,
      aux_sym_constant_numeric_token3,
      aux_sym_constant_numeric_token7,
    ACTIONS(87), 3,
      aux_sym_constant_charstr_token1,
      aux_sym_constant_charstr_token2,
      aux_sym_constant_charstr_token3,
    ACTIONS(89), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(46), 6,
      sym_constant,
      sym_conditional_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
      sym_word,
    ACTIONS(47), 7,
      aux_sym_constant_numeric_token1,
      aux_sym_constant_numeric_token4,
      aux_sym_constant_numeric_token5,
      aux_sym_constant_numeric_token6,
      aux_sym_constant_numeric_token8,
      aux_sym_constant_numeric_token9,
      aux_sym_constant_numeric_token10,
  [3459] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      aux_sym_word_token1,
    STATE(59), 1,
      sym_expression,
    STATE(61), 2,
      sym_constant_numeric,
      sym_constant_charstr,
    ACTIONS(166), 3,
      aux_sym_constant_numeric_token2,
      aux_sym_constant_numeric_token3,
      aux_sym_constant_numeric_token7,
    ACTIONS(168), 3,
      aux_sym_constant_charstr_token1,
      aux_sym_constant_charstr_token2,
      aux_sym_constant_charstr_token3,
    ACTIONS(170), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(60), 6,
      sym_constant,
      sym_conditional_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
      sym_word,
    ACTIONS(164), 7,
      aux_sym_constant_numeric_token1,
      aux_sym_constant_numeric_token4,
      aux_sym_constant_numeric_token5,
      aux_sym_constant_numeric_token6,
      aux_sym_constant_numeric_token8,
      aux_sym_constant_numeric_token9,
      aux_sym_constant_numeric_token10,
  [3512] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(71), 1,
      aux_sym_word_token1,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    STATE(83), 1,
      sym_expression,
    STATE(142), 2,
      sym_constant_numeric,
      sym_constant_charstr,
    ACTIONS(75), 3,
      aux_sym_constant_numeric_token2,
      aux_sym_constant_numeric_token3,
      aux_sym_constant_numeric_token7,
    ACTIONS(77), 3,
      aux_sym_constant_charstr_token1,
      aux_sym_constant_charstr_token2,
      aux_sym_constant_charstr_token3,
    ACTIONS(79), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(88), 6,
      sym_constant,
      sym_conditional_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
      sym_word,
    ACTIONS(63), 7,
      aux_sym_constant_numeric_token1,
      aux_sym_constant_numeric_token4,
      aux_sym_constant_numeric_token5,
      aux_sym_constant_numeric_token6,
      aux_sym_constant_numeric_token8,
      aux_sym_constant_numeric_token9,
      aux_sym_constant_numeric_token10,
  [3565] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(71), 1,
      aux_sym_word_token1,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    STATE(84), 1,
      sym_expression,
    STATE(142), 2,
      sym_constant_numeric,
      sym_constant_charstr,
    ACTIONS(75), 3,
      aux_sym_constant_numeric_token2,
      aux_sym_constant_numeric_token3,
      aux_sym_constant_numeric_token7,
    ACTIONS(77), 3,
      aux_sym_constant_charstr_token1,
      aux_sym_constant_charstr_token2,
      aux_sym_constant_charstr_token3,
    ACTIONS(79), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(88), 6,
      sym_constant,
      sym_conditional_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
      sym_word,
    ACTIONS(63), 7,
      aux_sym_constant_numeric_token1,
      aux_sym_constant_numeric_token4,
      aux_sym_constant_numeric_token5,
      aux_sym_constant_numeric_token6,
      aux_sym_constant_numeric_token8,
      aux_sym_constant_numeric_token9,
      aux_sym_constant_numeric_token10,
  [3618] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(71), 1,
      aux_sym_word_token1,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    STATE(85), 1,
      sym_expression,
    STATE(142), 2,
      sym_constant_numeric,
      sym_constant_charstr,
    ACTIONS(75), 3,
      aux_sym_constant_numeric_token2,
      aux_sym_constant_numeric_token3,
      aux_sym_constant_numeric_token7,
    ACTIONS(77), 3,
      aux_sym_constant_charstr_token1,
      aux_sym_constant_charstr_token2,
      aux_sym_constant_charstr_token3,
    ACTIONS(79), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(88), 6,
      sym_constant,
      sym_conditional_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
      sym_word,
    ACTIONS(63), 7,
      aux_sym_constant_numeric_token1,
      aux_sym_constant_numeric_token4,
      aux_sym_constant_numeric_token5,
      aux_sym_constant_numeric_token6,
      aux_sym_constant_numeric_token8,
      aux_sym_constant_numeric_token9,
      aux_sym_constant_numeric_token10,
  [3671] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(71), 1,
      aux_sym_word_token1,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    STATE(86), 1,
      sym_expression,
    STATE(142), 2,
      sym_constant_numeric,
      sym_constant_charstr,
    ACTIONS(75), 3,
      aux_sym_constant_numeric_token2,
      aux_sym_constant_numeric_token3,
      aux_sym_constant_numeric_token7,
    ACTIONS(77), 3,
      aux_sym_constant_charstr_token1,
      aux_sym_constant_charstr_token2,
      aux_sym_constant_charstr_token3,
    ACTIONS(79), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(88), 6,
      sym_constant,
      sym_conditional_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
      sym_word,
    ACTIONS(63), 7,
      aux_sym_constant_numeric_token1,
      aux_sym_constant_numeric_token4,
      aux_sym_constant_numeric_token5,
      aux_sym_constant_numeric_token6,
      aux_sym_constant_numeric_token8,
      aux_sym_constant_numeric_token9,
      aux_sym_constant_numeric_token10,
  [3724] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(232), 1,
      aux_sym_source_file_token1,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    ACTIONS(235), 27,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
  [3763] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(55), 1,
      aux_sym_word_token1,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    STATE(66), 1,
      sym_expression,
    STATE(44), 2,
      sym_constant_numeric,
      sym_constant_charstr,
    ACTIONS(85), 3,
      aux_sym_constant_numeric_token2,
      aux_sym_constant_numeric_token3,
      aux_sym_constant_numeric_token7,
    ACTIONS(87), 3,
      aux_sym_constant_charstr_token1,
      aux_sym_constant_charstr_token2,
      aux_sym_constant_charstr_token3,
    ACTIONS(89), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(46), 6,
      sym_constant,
      sym_conditional_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
      sym_word,
    ACTIONS(47), 7,
      aux_sym_constant_numeric_token1,
      aux_sym_constant_numeric_token4,
      aux_sym_constant_numeric_token5,
      aux_sym_constant_numeric_token6,
      aux_sym_constant_numeric_token8,
      aux_sym_constant_numeric_token9,
      aux_sym_constant_numeric_token10,
  [3816] = 14,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(244), 1,
      aux_sym_source_file_token1,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    ACTIONS(284), 1,
      anon_sym_PIPE,
    ACTIONS(286), 1,
      anon_sym_CARET,
    ACTIONS(288), 1,
      anon_sym_AMP,
    ACTIONS(294), 1,
      anon_sym_AMP_AMP,
    ACTIONS(296), 1,
      anon_sym_QMARK,
    ACTIONS(298), 1,
      anon_sym_CARET_CARET,
    ACTIONS(300), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(292), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(290), 4,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(280), 5,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(282), 9,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [3875] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(55), 1,
      aux_sym_word_token1,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    STATE(65), 1,
      sym_expression,
    STATE(44), 2,
      sym_constant_numeric,
      sym_constant_charstr,
    ACTIONS(85), 3,
      aux_sym_constant_numeric_token2,
      aux_sym_constant_numeric_token3,
      aux_sym_constant_numeric_token7,
    ACTIONS(87), 3,
      aux_sym_constant_charstr_token1,
      aux_sym_constant_charstr_token2,
      aux_sym_constant_charstr_token3,
    ACTIONS(89), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(46), 6,
      sym_constant,
      sym_conditional_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
      sym_word,
    ACTIONS(47), 7,
      aux_sym_constant_numeric_token1,
      aux_sym_constant_numeric_token4,
      aux_sym_constant_numeric_token5,
      aux_sym_constant_numeric_token6,
      aux_sym_constant_numeric_token8,
      aux_sym_constant_numeric_token9,
      aux_sym_constant_numeric_token10,
  [3928] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(71), 1,
      aux_sym_word_token1,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    STATE(77), 1,
      sym_expression,
    STATE(142), 2,
      sym_constant_numeric,
      sym_constant_charstr,
    ACTIONS(75), 3,
      aux_sym_constant_numeric_token2,
      aux_sym_constant_numeric_token3,
      aux_sym_constant_numeric_token7,
    ACTIONS(77), 3,
      aux_sym_constant_charstr_token1,
      aux_sym_constant_charstr_token2,
      aux_sym_constant_charstr_token3,
    ACTIONS(79), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(88), 6,
      sym_constant,
      sym_conditional_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
      sym_word,
    ACTIONS(63), 7,
      aux_sym_constant_numeric_token1,
      aux_sym_constant_numeric_token4,
      aux_sym_constant_numeric_token5,
      aux_sym_constant_numeric_token6,
      aux_sym_constant_numeric_token8,
      aux_sym_constant_numeric_token9,
      aux_sym_constant_numeric_token10,
  [3981] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(71), 1,
      aux_sym_word_token1,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    STATE(89), 1,
      sym_expression,
    STATE(142), 2,
      sym_constant_numeric,
      sym_constant_charstr,
    ACTIONS(75), 3,
      aux_sym_constant_numeric_token2,
      aux_sym_constant_numeric_token3,
      aux_sym_constant_numeric_token7,
    ACTIONS(77), 3,
      aux_sym_constant_charstr_token1,
      aux_sym_constant_charstr_token2,
      aux_sym_constant_charstr_token3,
    ACTIONS(79), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(88), 6,
      sym_constant,
      sym_conditional_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
      sym_word,
    ACTIONS(63), 7,
      aux_sym_constant_numeric_token1,
      aux_sym_constant_numeric_token4,
      aux_sym_constant_numeric_token5,
      aux_sym_constant_numeric_token6,
      aux_sym_constant_numeric_token8,
      aux_sym_constant_numeric_token9,
      aux_sym_constant_numeric_token10,
  [4034] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(55), 1,
      aux_sym_word_token1,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_expression,
    STATE(44), 2,
      sym_constant_numeric,
      sym_constant_charstr,
    ACTIONS(85), 3,
      aux_sym_constant_numeric_token2,
      aux_sym_constant_numeric_token3,
      aux_sym_constant_numeric_token7,
    ACTIONS(87), 3,
      aux_sym_constant_charstr_token1,
      aux_sym_constant_charstr_token2,
      aux_sym_constant_charstr_token3,
    ACTIONS(89), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(46), 6,
      sym_constant,
      sym_conditional_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
      sym_word,
    ACTIONS(47), 7,
      aux_sym_constant_numeric_token1,
      aux_sym_constant_numeric_token4,
      aux_sym_constant_numeric_token5,
      aux_sym_constant_numeric_token6,
      aux_sym_constant_numeric_token8,
      aux_sym_constant_numeric_token9,
      aux_sym_constant_numeric_token10,
  [4087] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(55), 1,
      aux_sym_word_token1,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    STATE(69), 1,
      sym_expression,
    STATE(44), 2,
      sym_constant_numeric,
      sym_constant_charstr,
    ACTIONS(85), 3,
      aux_sym_constant_numeric_token2,
      aux_sym_constant_numeric_token3,
      aux_sym_constant_numeric_token7,
    ACTIONS(87), 3,
      aux_sym_constant_charstr_token1,
      aux_sym_constant_charstr_token2,
      aux_sym_constant_charstr_token3,
    ACTIONS(89), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(46), 6,
      sym_constant,
      sym_conditional_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
      sym_word,
    ACTIONS(47), 7,
      aux_sym_constant_numeric_token1,
      aux_sym_constant_numeric_token4,
      aux_sym_constant_numeric_token5,
      aux_sym_constant_numeric_token6,
      aux_sym_constant_numeric_token8,
      aux_sym_constant_numeric_token9,
      aux_sym_constant_numeric_token10,
  [4140] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(71), 1,
      aux_sym_word_token1,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    STATE(92), 1,
      sym_expression,
    STATE(142), 2,
      sym_constant_numeric,
      sym_constant_charstr,
    ACTIONS(75), 3,
      aux_sym_constant_numeric_token2,
      aux_sym_constant_numeric_token3,
      aux_sym_constant_numeric_token7,
    ACTIONS(77), 3,
      aux_sym_constant_charstr_token1,
      aux_sym_constant_charstr_token2,
      aux_sym_constant_charstr_token3,
    ACTIONS(79), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(88), 6,
      sym_constant,
      sym_conditional_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
      sym_word,
    ACTIONS(63), 7,
      aux_sym_constant_numeric_token1,
      aux_sym_constant_numeric_token4,
      aux_sym_constant_numeric_token5,
      aux_sym_constant_numeric_token6,
      aux_sym_constant_numeric_token8,
      aux_sym_constant_numeric_token9,
      aux_sym_constant_numeric_token10,
  [4193] = 9,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(256), 1,
      aux_sym_source_file_token1,
    ACTIONS(284), 1,
      anon_sym_PIPE,
    ACTIONS(286), 1,
      anon_sym_CARET,
    ACTIONS(288), 1,
      anon_sym_AMP,
    ACTIONS(292), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(290), 4,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(280), 5,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(258), 14,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [4242] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(260), 1,
      aux_sym_source_file_token1,
    ACTIONS(263), 1,
      anon_sym_COMMA,
    ACTIONS(235), 27,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
  [4281] = 14,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(266), 1,
      aux_sym_source_file_token1,
    ACTIONS(268), 1,
      anon_sym_COMMA,
    ACTIONS(284), 1,
      anon_sym_PIPE,
    ACTIONS(286), 1,
      anon_sym_CARET,
    ACTIONS(288), 1,
      anon_sym_AMP,
    ACTIONS(294), 1,
      anon_sym_AMP_AMP,
    ACTIONS(296), 1,
      anon_sym_QMARK,
    ACTIONS(298), 1,
      anon_sym_CARET_CARET,
    ACTIONS(300), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(292), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(290), 4,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(280), 5,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(282), 9,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [4340] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      aux_sym_word_token1,
    STATE(57), 1,
      sym_expression,
    STATE(61), 2,
      sym_constant_numeric,
      sym_constant_charstr,
    ACTIONS(166), 3,
      aux_sym_constant_numeric_token2,
      aux_sym_constant_numeric_token3,
      aux_sym_constant_numeric_token7,
    ACTIONS(168), 3,
      aux_sym_constant_charstr_token1,
      aux_sym_constant_charstr_token2,
      aux_sym_constant_charstr_token3,
    ACTIONS(170), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(60), 6,
      sym_constant,
      sym_conditional_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
      sym_word,
    ACTIONS(164), 7,
      aux_sym_constant_numeric_token1,
      aux_sym_constant_numeric_token4,
      aux_sym_constant_numeric_token5,
      aux_sym_constant_numeric_token6,
      aux_sym_constant_numeric_token8,
      aux_sym_constant_numeric_token9,
      aux_sym_constant_numeric_token10,
  [4393] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      aux_sym_word_token1,
    STATE(54), 1,
      sym_expression,
    STATE(61), 2,
      sym_constant_numeric,
      sym_constant_charstr,
    ACTIONS(166), 3,
      aux_sym_constant_numeric_token2,
      aux_sym_constant_numeric_token3,
      aux_sym_constant_numeric_token7,
    ACTIONS(168), 3,
      aux_sym_constant_charstr_token1,
      aux_sym_constant_charstr_token2,
      aux_sym_constant_charstr_token3,
    ACTIONS(170), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(60), 6,
      sym_constant,
      sym_conditional_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
      sym_word,
    ACTIONS(164), 7,
      aux_sym_constant_numeric_token1,
      aux_sym_constant_numeric_token4,
      aux_sym_constant_numeric_token5,
      aux_sym_constant_numeric_token6,
      aux_sym_constant_numeric_token8,
      aux_sym_constant_numeric_token9,
      aux_sym_constant_numeric_token10,
  [4446] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      aux_sym_word_token1,
    STATE(53), 1,
      sym_expression,
    STATE(61), 2,
      sym_constant_numeric,
      sym_constant_charstr,
    ACTIONS(166), 3,
      aux_sym_constant_numeric_token2,
      aux_sym_constant_numeric_token3,
      aux_sym_constant_numeric_token7,
    ACTIONS(168), 3,
      aux_sym_constant_charstr_token1,
      aux_sym_constant_charstr_token2,
      aux_sym_constant_charstr_token3,
    ACTIONS(170), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(60), 6,
      sym_constant,
      sym_conditional_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
      sym_word,
    ACTIONS(164), 7,
      aux_sym_constant_numeric_token1,
      aux_sym_constant_numeric_token4,
      aux_sym_constant_numeric_token5,
      aux_sym_constant_numeric_token6,
      aux_sym_constant_numeric_token8,
      aux_sym_constant_numeric_token9,
      aux_sym_constant_numeric_token10,
  [4499] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      aux_sym_word_token1,
    STATE(50), 1,
      sym_expression,
    STATE(61), 2,
      sym_constant_numeric,
      sym_constant_charstr,
    ACTIONS(166), 3,
      aux_sym_constant_numeric_token2,
      aux_sym_constant_numeric_token3,
      aux_sym_constant_numeric_token7,
    ACTIONS(168), 3,
      aux_sym_constant_charstr_token1,
      aux_sym_constant_charstr_token2,
      aux_sym_constant_charstr_token3,
    ACTIONS(170), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(60), 6,
      sym_constant,
      sym_conditional_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
      sym_word,
    ACTIONS(164), 7,
      aux_sym_constant_numeric_token1,
      aux_sym_constant_numeric_token4,
      aux_sym_constant_numeric_token5,
      aux_sym_constant_numeric_token6,
      aux_sym_constant_numeric_token8,
      aux_sym_constant_numeric_token9,
      aux_sym_constant_numeric_token10,
  [4552] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      aux_sym_word_token1,
    STATE(49), 1,
      sym_expression,
    STATE(61), 2,
      sym_constant_numeric,
      sym_constant_charstr,
    ACTIONS(166), 3,
      aux_sym_constant_numeric_token2,
      aux_sym_constant_numeric_token3,
      aux_sym_constant_numeric_token7,
    ACTIONS(168), 3,
      aux_sym_constant_charstr_token1,
      aux_sym_constant_charstr_token2,
      aux_sym_constant_charstr_token3,
    ACTIONS(170), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(60), 6,
      sym_constant,
      sym_conditional_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
      sym_word,
    ACTIONS(164), 7,
      aux_sym_constant_numeric_token1,
      aux_sym_constant_numeric_token4,
      aux_sym_constant_numeric_token5,
      aux_sym_constant_numeric_token6,
      aux_sym_constant_numeric_token8,
      aux_sym_constant_numeric_token9,
      aux_sym_constant_numeric_token10,
  [4605] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      aux_sym_word_token1,
    STATE(48), 1,
      sym_expression,
    STATE(61), 2,
      sym_constant_numeric,
      sym_constant_charstr,
    ACTIONS(166), 3,
      aux_sym_constant_numeric_token2,
      aux_sym_constant_numeric_token3,
      aux_sym_constant_numeric_token7,
    ACTIONS(168), 3,
      aux_sym_constant_charstr_token1,
      aux_sym_constant_charstr_token2,
      aux_sym_constant_charstr_token3,
    ACTIONS(170), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(60), 6,
      sym_constant,
      sym_conditional_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
      sym_word,
    ACTIONS(164), 7,
      aux_sym_constant_numeric_token1,
      aux_sym_constant_numeric_token4,
      aux_sym_constant_numeric_token5,
      aux_sym_constant_numeric_token6,
      aux_sym_constant_numeric_token8,
      aux_sym_constant_numeric_token9,
      aux_sym_constant_numeric_token10,
  [4658] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      aux_sym_word_token1,
    STATE(47), 1,
      sym_expression,
    STATE(61), 2,
      sym_constant_numeric,
      sym_constant_charstr,
    ACTIONS(166), 3,
      aux_sym_constant_numeric_token2,
      aux_sym_constant_numeric_token3,
      aux_sym_constant_numeric_token7,
    ACTIONS(168), 3,
      aux_sym_constant_charstr_token1,
      aux_sym_constant_charstr_token2,
      aux_sym_constant_charstr_token3,
    ACTIONS(170), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(60), 6,
      sym_constant,
      sym_conditional_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
      sym_word,
    ACTIONS(164), 7,
      aux_sym_constant_numeric_token1,
      aux_sym_constant_numeric_token4,
      aux_sym_constant_numeric_token5,
      aux_sym_constant_numeric_token6,
      aux_sym_constant_numeric_token8,
      aux_sym_constant_numeric_token9,
      aux_sym_constant_numeric_token10,
  [4711] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      aux_sym_word_token1,
    STATE(42), 1,
      sym_expression,
    STATE(61), 2,
      sym_constant_numeric,
      sym_constant_charstr,
    ACTIONS(166), 3,
      aux_sym_constant_numeric_token2,
      aux_sym_constant_numeric_token3,
      aux_sym_constant_numeric_token7,
    ACTIONS(168), 3,
      aux_sym_constant_charstr_token1,
      aux_sym_constant_charstr_token2,
      aux_sym_constant_charstr_token3,
    ACTIONS(170), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(60), 6,
      sym_constant,
      sym_conditional_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
      sym_word,
    ACTIONS(164), 7,
      aux_sym_constant_numeric_token1,
      aux_sym_constant_numeric_token4,
      aux_sym_constant_numeric_token5,
      aux_sym_constant_numeric_token6,
      aux_sym_constant_numeric_token8,
      aux_sym_constant_numeric_token9,
      aux_sym_constant_numeric_token10,
  [4764] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      aux_sym_word_token1,
    STATE(41), 1,
      sym_expression,
    STATE(61), 2,
      sym_constant_numeric,
      sym_constant_charstr,
    ACTIONS(166), 3,
      aux_sym_constant_numeric_token2,
      aux_sym_constant_numeric_token3,
      aux_sym_constant_numeric_token7,
    ACTIONS(168), 3,
      aux_sym_constant_charstr_token1,
      aux_sym_constant_charstr_token2,
      aux_sym_constant_charstr_token3,
    ACTIONS(170), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(60), 6,
      sym_constant,
      sym_conditional_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
      sym_word,
    ACTIONS(164), 7,
      aux_sym_constant_numeric_token1,
      aux_sym_constant_numeric_token4,
      aux_sym_constant_numeric_token5,
      aux_sym_constant_numeric_token6,
      aux_sym_constant_numeric_token8,
      aux_sym_constant_numeric_token9,
      aux_sym_constant_numeric_token10,
  [4817] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      aux_sym_word_token1,
    STATE(40), 1,
      sym_expression,
    STATE(61), 2,
      sym_constant_numeric,
      sym_constant_charstr,
    ACTIONS(166), 3,
      aux_sym_constant_numeric_token2,
      aux_sym_constant_numeric_token3,
      aux_sym_constant_numeric_token7,
    ACTIONS(168), 3,
      aux_sym_constant_charstr_token1,
      aux_sym_constant_charstr_token2,
      aux_sym_constant_charstr_token3,
    ACTIONS(170), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(60), 6,
      sym_constant,
      sym_conditional_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
      sym_word,
    ACTIONS(164), 7,
      aux_sym_constant_numeric_token1,
      aux_sym_constant_numeric_token4,
      aux_sym_constant_numeric_token5,
      aux_sym_constant_numeric_token6,
      aux_sym_constant_numeric_token8,
      aux_sym_constant_numeric_token9,
      aux_sym_constant_numeric_token10,
  [4870] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(55), 1,
      aux_sym_word_token1,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    STATE(76), 1,
      sym_expression,
    STATE(44), 2,
      sym_constant_numeric,
      sym_constant_charstr,
    ACTIONS(85), 3,
      aux_sym_constant_numeric_token2,
      aux_sym_constant_numeric_token3,
      aux_sym_constant_numeric_token7,
    ACTIONS(87), 3,
      aux_sym_constant_charstr_token1,
      aux_sym_constant_charstr_token2,
      aux_sym_constant_charstr_token3,
    ACTIONS(89), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(46), 6,
      sym_constant,
      sym_conditional_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
      sym_word,
    ACTIONS(47), 7,
      aux_sym_constant_numeric_token1,
      aux_sym_constant_numeric_token4,
      aux_sym_constant_numeric_token5,
      aux_sym_constant_numeric_token6,
      aux_sym_constant_numeric_token8,
      aux_sym_constant_numeric_token9,
      aux_sym_constant_numeric_token10,
  [4923] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      aux_sym_word_token1,
    STATE(143), 1,
      sym_expression,
    STATE(61), 2,
      sym_constant_numeric,
      sym_constant_charstr,
    ACTIONS(166), 3,
      aux_sym_constant_numeric_token2,
      aux_sym_constant_numeric_token3,
      aux_sym_constant_numeric_token7,
    ACTIONS(168), 3,
      aux_sym_constant_charstr_token1,
      aux_sym_constant_charstr_token2,
      aux_sym_constant_charstr_token3,
    ACTIONS(170), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(60), 6,
      sym_constant,
      sym_conditional_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
      sym_word,
    ACTIONS(164), 7,
      aux_sym_constant_numeric_token1,
      aux_sym_constant_numeric_token4,
      aux_sym_constant_numeric_token5,
      aux_sym_constant_numeric_token6,
      aux_sym_constant_numeric_token8,
      aux_sym_constant_numeric_token9,
      aux_sym_constant_numeric_token10,
  [4976] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(55), 1,
      aux_sym_word_token1,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    STATE(74), 1,
      sym_expression,
    STATE(44), 2,
      sym_constant_numeric,
      sym_constant_charstr,
    ACTIONS(85), 3,
      aux_sym_constant_numeric_token2,
      aux_sym_constant_numeric_token3,
      aux_sym_constant_numeric_token7,
    ACTIONS(87), 3,
      aux_sym_constant_charstr_token1,
      aux_sym_constant_charstr_token2,
      aux_sym_constant_charstr_token3,
    ACTIONS(89), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(46), 6,
      sym_constant,
      sym_conditional_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
      sym_word,
    ACTIONS(47), 7,
      aux_sym_constant_numeric_token1,
      aux_sym_constant_numeric_token4,
      aux_sym_constant_numeric_token5,
      aux_sym_constant_numeric_token6,
      aux_sym_constant_numeric_token8,
      aux_sym_constant_numeric_token9,
      aux_sym_constant_numeric_token10,
  [5029] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(71), 1,
      aux_sym_word_token1,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    STATE(129), 1,
      sym_expression,
    STATE(142), 2,
      sym_constant_numeric,
      sym_constant_charstr,
    ACTIONS(75), 3,
      aux_sym_constant_numeric_token2,
      aux_sym_constant_numeric_token3,
      aux_sym_constant_numeric_token7,
    ACTIONS(77), 3,
      aux_sym_constant_charstr_token1,
      aux_sym_constant_charstr_token2,
      aux_sym_constant_charstr_token3,
    ACTIONS(79), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(88), 6,
      sym_constant,
      sym_conditional_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
      sym_word,
    ACTIONS(63), 7,
      aux_sym_constant_numeric_token1,
      aux_sym_constant_numeric_token4,
      aux_sym_constant_numeric_token5,
      aux_sym_constant_numeric_token6,
      aux_sym_constant_numeric_token8,
      aux_sym_constant_numeric_token9,
      aux_sym_constant_numeric_token10,
  [5082] = 13,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(206), 1,
      aux_sym_source_file_token1,
    ACTIONS(284), 1,
      anon_sym_PIPE,
    ACTIONS(286), 1,
      anon_sym_CARET,
    ACTIONS(288), 1,
      anon_sym_AMP,
    ACTIONS(294), 1,
      anon_sym_AMP_AMP,
    ACTIONS(296), 1,
      anon_sym_QMARK,
    ACTIONS(298), 1,
      anon_sym_CARET_CARET,
    ACTIONS(278), 2,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
    ACTIONS(292), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(290), 4,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(280), 5,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(282), 9,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [5139] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(31), 1,
      aux_sym_source_file_token1,
    ACTIONS(33), 28,
      anon_sym_PERCENT,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
  [5176] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      aux_sym_word_token1,
    STATE(144), 1,
      sym_expression,
    STATE(61), 2,
      sym_constant_numeric,
      sym_constant_charstr,
    ACTIONS(166), 3,
      aux_sym_constant_numeric_token2,
      aux_sym_constant_numeric_token3,
      aux_sym_constant_numeric_token7,
    ACTIONS(168), 3,
      aux_sym_constant_charstr_token1,
      aux_sym_constant_charstr_token2,
      aux_sym_constant_charstr_token3,
    ACTIONS(170), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(60), 6,
      sym_constant,
      sym_conditional_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
      sym_word,
    ACTIONS(164), 7,
      aux_sym_constant_numeric_token1,
      aux_sym_constant_numeric_token4,
      aux_sym_constant_numeric_token5,
      aux_sym_constant_numeric_token6,
      aux_sym_constant_numeric_token8,
      aux_sym_constant_numeric_token9,
      aux_sym_constant_numeric_token10,
  [5229] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      aux_sym_word_token1,
    STATE(150), 1,
      sym_expression,
    STATE(61), 2,
      sym_constant_numeric,
      sym_constant_charstr,
    ACTIONS(166), 3,
      aux_sym_constant_numeric_token2,
      aux_sym_constant_numeric_token3,
      aux_sym_constant_numeric_token7,
    ACTIONS(168), 3,
      aux_sym_constant_charstr_token1,
      aux_sym_constant_charstr_token2,
      aux_sym_constant_charstr_token3,
    ACTIONS(170), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(60), 6,
      sym_constant,
      sym_conditional_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
      sym_word,
    ACTIONS(164), 7,
      aux_sym_constant_numeric_token1,
      aux_sym_constant_numeric_token4,
      aux_sym_constant_numeric_token5,
      aux_sym_constant_numeric_token6,
      aux_sym_constant_numeric_token8,
      aux_sym_constant_numeric_token9,
      aux_sym_constant_numeric_token10,
  [5282] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      aux_sym_word_token1,
    STATE(149), 1,
      sym_expression,
    STATE(61), 2,
      sym_constant_numeric,
      sym_constant_charstr,
    ACTIONS(166), 3,
      aux_sym_constant_numeric_token2,
      aux_sym_constant_numeric_token3,
      aux_sym_constant_numeric_token7,
    ACTIONS(168), 3,
      aux_sym_constant_charstr_token1,
      aux_sym_constant_charstr_token2,
      aux_sym_constant_charstr_token3,
    ACTIONS(170), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(60), 6,
      sym_constant,
      sym_conditional_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
      sym_word,
    ACTIONS(164), 7,
      aux_sym_constant_numeric_token1,
      aux_sym_constant_numeric_token4,
      aux_sym_constant_numeric_token5,
      aux_sym_constant_numeric_token6,
      aux_sym_constant_numeric_token8,
      aux_sym_constant_numeric_token9,
      aux_sym_constant_numeric_token10,
  [5335] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      aux_sym_word_token1,
    STATE(148), 1,
      sym_expression,
    STATE(61), 2,
      sym_constant_numeric,
      sym_constant_charstr,
    ACTIONS(166), 3,
      aux_sym_constant_numeric_token2,
      aux_sym_constant_numeric_token3,
      aux_sym_constant_numeric_token7,
    ACTIONS(168), 3,
      aux_sym_constant_charstr_token1,
      aux_sym_constant_charstr_token2,
      aux_sym_constant_charstr_token3,
    ACTIONS(170), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(60), 6,
      sym_constant,
      sym_conditional_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
      sym_word,
    ACTIONS(164), 7,
      aux_sym_constant_numeric_token1,
      aux_sym_constant_numeric_token4,
      aux_sym_constant_numeric_token5,
      aux_sym_constant_numeric_token6,
      aux_sym_constant_numeric_token8,
      aux_sym_constant_numeric_token9,
      aux_sym_constant_numeric_token10,
  [5388] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      aux_sym_word_token1,
    STATE(147), 1,
      sym_expression,
    STATE(61), 2,
      sym_constant_numeric,
      sym_constant_charstr,
    ACTIONS(166), 3,
      aux_sym_constant_numeric_token2,
      aux_sym_constant_numeric_token3,
      aux_sym_constant_numeric_token7,
    ACTIONS(168), 3,
      aux_sym_constant_charstr_token1,
      aux_sym_constant_charstr_token2,
      aux_sym_constant_charstr_token3,
    ACTIONS(170), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(60), 6,
      sym_constant,
      sym_conditional_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
      sym_word,
    ACTIONS(164), 7,
      aux_sym_constant_numeric_token1,
      aux_sym_constant_numeric_token4,
      aux_sym_constant_numeric_token5,
      aux_sym_constant_numeric_token6,
      aux_sym_constant_numeric_token8,
      aux_sym_constant_numeric_token9,
      aux_sym_constant_numeric_token10,
  [5441] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      aux_sym_word_token1,
    STATE(39), 1,
      sym_expression,
    STATE(61), 2,
      sym_constant_numeric,
      sym_constant_charstr,
    ACTIONS(166), 3,
      aux_sym_constant_numeric_token2,
      aux_sym_constant_numeric_token3,
      aux_sym_constant_numeric_token7,
    ACTIONS(168), 3,
      aux_sym_constant_charstr_token1,
      aux_sym_constant_charstr_token2,
      aux_sym_constant_charstr_token3,
    ACTIONS(170), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(60), 6,
      sym_constant,
      sym_conditional_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
      sym_word,
    ACTIONS(164), 7,
      aux_sym_constant_numeric_token1,
      aux_sym_constant_numeric_token4,
      aux_sym_constant_numeric_token5,
      aux_sym_constant_numeric_token6,
      aux_sym_constant_numeric_token8,
      aux_sym_constant_numeric_token9,
      aux_sym_constant_numeric_token10,
  [5494] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      aux_sym_word_token1,
    STATE(146), 1,
      sym_expression,
    STATE(61), 2,
      sym_constant_numeric,
      sym_constant_charstr,
    ACTIONS(166), 3,
      aux_sym_constant_numeric_token2,
      aux_sym_constant_numeric_token3,
      aux_sym_constant_numeric_token7,
    ACTIONS(168), 3,
      aux_sym_constant_charstr_token1,
      aux_sym_constant_charstr_token2,
      aux_sym_constant_charstr_token3,
    ACTIONS(170), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(60), 6,
      sym_constant,
      sym_conditional_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
      sym_word,
    ACTIONS(164), 7,
      aux_sym_constant_numeric_token1,
      aux_sym_constant_numeric_token4,
      aux_sym_constant_numeric_token5,
      aux_sym_constant_numeric_token6,
      aux_sym_constant_numeric_token8,
      aux_sym_constant_numeric_token9,
      aux_sym_constant_numeric_token10,
  [5547] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      aux_sym_word_token1,
    STATE(152), 1,
      sym_expression,
    STATE(61), 2,
      sym_constant_numeric,
      sym_constant_charstr,
    ACTIONS(166), 3,
      aux_sym_constant_numeric_token2,
      aux_sym_constant_numeric_token3,
      aux_sym_constant_numeric_token7,
    ACTIONS(168), 3,
      aux_sym_constant_charstr_token1,
      aux_sym_constant_charstr_token2,
      aux_sym_constant_charstr_token3,
    ACTIONS(170), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(60), 6,
      sym_constant,
      sym_conditional_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
      sym_word,
    ACTIONS(164), 7,
      aux_sym_constant_numeric_token1,
      aux_sym_constant_numeric_token4,
      aux_sym_constant_numeric_token5,
      aux_sym_constant_numeric_token6,
      aux_sym_constant_numeric_token8,
      aux_sym_constant_numeric_token9,
      aux_sym_constant_numeric_token10,
  [5600] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(276), 1,
      aux_sym_source_file_token1,
    ACTIONS(274), 28,
      anon_sym_PERCENT,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
  [5637] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(200), 1,
      aux_sym_source_file_token1,
    ACTIONS(202), 28,
      anon_sym_PERCENT,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
  [5674] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(71), 1,
      aux_sym_word_token1,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    STATE(112), 1,
      sym_expression,
    STATE(142), 2,
      sym_constant_numeric,
      sym_constant_charstr,
    ACTIONS(75), 3,
      aux_sym_constant_numeric_token2,
      aux_sym_constant_numeric_token3,
      aux_sym_constant_numeric_token7,
    ACTIONS(77), 3,
      aux_sym_constant_charstr_token1,
      aux_sym_constant_charstr_token2,
      aux_sym_constant_charstr_token3,
    ACTIONS(79), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(88), 6,
      sym_constant,
      sym_conditional_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
      sym_word,
    ACTIONS(63), 7,
      aux_sym_constant_numeric_token1,
      aux_sym_constant_numeric_token4,
      aux_sym_constant_numeric_token5,
      aux_sym_constant_numeric_token6,
      aux_sym_constant_numeric_token8,
      aux_sym_constant_numeric_token9,
      aux_sym_constant_numeric_token10,
  [5727] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(240), 1,
      aux_sym_source_file_token1,
    ACTIONS(242), 28,
      anon_sym_PERCENT,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
  [5764] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_QMARK,
    ACTIONS(210), 1,
      anon_sym_CARET_CARET,
    ACTIONS(212), 1,
      anon_sym_AMP_AMP,
    ACTIONS(218), 1,
      anon_sym_PIPE,
    ACTIONS(220), 1,
      anon_sym_CARET,
    ACTIONS(222), 1,
      anon_sym_AMP,
    ACTIONS(302), 1,
      anon_sym_COLON,
    ACTIONS(304), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(204), 2,
      anon_sym_PERCENT,
      anon_sym_SLASH,
    ACTIONS(224), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(226), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(228), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(230), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(214), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(216), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [5826] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_QMARK,
    ACTIONS(210), 1,
      anon_sym_CARET_CARET,
    ACTIONS(212), 1,
      anon_sym_AMP_AMP,
    ACTIONS(218), 1,
      anon_sym_PIPE,
    ACTIONS(220), 1,
      anon_sym_CARET,
    ACTIONS(222), 1,
      anon_sym_AMP,
    ACTIONS(304), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(306), 1,
      anon_sym_RBRACK,
    ACTIONS(204), 2,
      anon_sym_PERCENT,
      anon_sym_SLASH,
    ACTIONS(224), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(226), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(228), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(230), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(214), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(216), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [5888] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_QMARK,
    ACTIONS(210), 1,
      anon_sym_CARET_CARET,
    ACTIONS(212), 1,
      anon_sym_AMP_AMP,
    ACTIONS(218), 1,
      anon_sym_PIPE,
    ACTIONS(220), 1,
      anon_sym_CARET,
    ACTIONS(222), 1,
      anon_sym_AMP,
    ACTIONS(304), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(308), 1,
      anon_sym_RBRACK,
    ACTIONS(204), 2,
      anon_sym_PERCENT,
      anon_sym_SLASH,
    ACTIONS(224), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(226), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(228), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(230), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(214), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(216), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [5950] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_QMARK,
    ACTIONS(210), 1,
      anon_sym_CARET_CARET,
    ACTIONS(212), 1,
      anon_sym_AMP_AMP,
    ACTIONS(218), 1,
      anon_sym_PIPE,
    ACTIONS(220), 1,
      anon_sym_CARET,
    ACTIONS(222), 1,
      anon_sym_AMP,
    ACTIONS(304), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(310), 1,
      anon_sym_COLON,
    ACTIONS(204), 2,
      anon_sym_PERCENT,
      anon_sym_SLASH,
    ACTIONS(224), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(226), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(228), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(230), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(214), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(216), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [6012] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_QMARK,
    ACTIONS(210), 1,
      anon_sym_CARET_CARET,
    ACTIONS(212), 1,
      anon_sym_AMP_AMP,
    ACTIONS(218), 1,
      anon_sym_PIPE,
    ACTIONS(220), 1,
      anon_sym_CARET,
    ACTIONS(222), 1,
      anon_sym_AMP,
    ACTIONS(304), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(312), 1,
      anon_sym_RPAREN,
    ACTIONS(204), 2,
      anon_sym_PERCENT,
      anon_sym_SLASH,
    ACTIONS(224), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(226), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(228), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(230), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(214), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(216), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [6074] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_QMARK,
    ACTIONS(210), 1,
      anon_sym_CARET_CARET,
    ACTIONS(212), 1,
      anon_sym_AMP_AMP,
    ACTIONS(218), 1,
      anon_sym_PIPE,
    ACTIONS(220), 1,
      anon_sym_CARET,
    ACTIONS(222), 1,
      anon_sym_AMP,
    ACTIONS(304), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(314), 1,
      anon_sym_COLON,
    ACTIONS(204), 2,
      anon_sym_PERCENT,
      anon_sym_SLASH,
    ACTIONS(224), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(226), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(228), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(230), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(214), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(216), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [6136] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_QMARK,
    ACTIONS(210), 1,
      anon_sym_CARET_CARET,
    ACTIONS(212), 1,
      anon_sym_AMP_AMP,
    ACTIONS(218), 1,
      anon_sym_PIPE,
    ACTIONS(220), 1,
      anon_sym_CARET,
    ACTIONS(222), 1,
      anon_sym_AMP,
    ACTIONS(304), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(316), 1,
      anon_sym_RBRACK,
    ACTIONS(204), 2,
      anon_sym_PERCENT,
      anon_sym_SLASH,
    ACTIONS(224), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(226), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(228), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(230), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(214), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(216), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [6198] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_QMARK,
    ACTIONS(210), 1,
      anon_sym_CARET_CARET,
    ACTIONS(212), 1,
      anon_sym_AMP_AMP,
    ACTIONS(218), 1,
      anon_sym_PIPE,
    ACTIONS(220), 1,
      anon_sym_CARET,
    ACTIONS(222), 1,
      anon_sym_AMP,
    ACTIONS(304), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(318), 1,
      anon_sym_RPAREN,
    ACTIONS(204), 2,
      anon_sym_PERCENT,
      anon_sym_SLASH,
    ACTIONS(224), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(226), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(228), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(230), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(214), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(216), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [6260] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_QMARK,
    ACTIONS(210), 1,
      anon_sym_CARET_CARET,
    ACTIONS(212), 1,
      anon_sym_AMP_AMP,
    ACTIONS(218), 1,
      anon_sym_PIPE,
    ACTIONS(220), 1,
      anon_sym_CARET,
    ACTIONS(222), 1,
      anon_sym_AMP,
    ACTIONS(304), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(320), 1,
      anon_sym_RBRACK,
    ACTIONS(204), 2,
      anon_sym_PERCENT,
      anon_sym_SLASH,
    ACTIONS(224), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(226), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(228), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(230), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(214), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(216), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [6322] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_QMARK,
    ACTIONS(210), 1,
      anon_sym_CARET_CARET,
    ACTIONS(212), 1,
      anon_sym_AMP_AMP,
    ACTIONS(218), 1,
      anon_sym_PIPE,
    ACTIONS(220), 1,
      anon_sym_CARET,
    ACTIONS(222), 1,
      anon_sym_AMP,
    ACTIONS(304), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(322), 1,
      anon_sym_RPAREN,
    ACTIONS(204), 2,
      anon_sym_PERCENT,
      anon_sym_SLASH,
    ACTIONS(224), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(226), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(228), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(230), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(214), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(216), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [6384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 26,
      aux_sym_known_instruction_token1,
      aux_sym_known_instruction_token2,
      aux_sym_known_instruction_token3,
      aux_sym_known_instruction_token4,
      aux_sym_known_instruction_token5,
      aux_sym_known_instruction_token6,
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
  [6416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 8,
      aux_sym_operand_prefix_token2,
      aux_sym_operand_prefix_token3,
      aux_sym_operand_prefix_token4,
      aux_sym_operand_prefix_token5,
      aux_sym_operand_prefix_token6,
      aux_sym_operand_prefix_token7,
      aux_sym_operand_prefix_token8,
      aux_sym_operand_prefix_token9,
  [6430] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_COMMA,
    STATE(156), 1,
      aux_sym_operands_repeat1,
    ACTIONS(328), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [6444] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      aux_sym_operands_repeat1,
    ACTIONS(332), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [6458] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      aux_sym_operands_repeat1,
    ACTIONS(334), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [6472] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_COMMA,
    ACTIONS(334), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [6483] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(328), 1,
      aux_sym_source_file_token1,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    STATE(162), 1,
      aux_sym_operands_repeat1,
  [6496] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    ACTIONS(244), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [6507] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(343), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [6518] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(332), 1,
      aux_sym_source_file_token1,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    STATE(164), 1,
      aux_sym_operands_repeat1,
  [6531] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    ACTIONS(347), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [6542] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(334), 1,
      aux_sym_source_file_token1,
    ACTIONS(351), 1,
      anon_sym_COMMA,
    STATE(164), 1,
      aux_sym_operands_repeat1,
  [6555] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_COMMA,
    ACTIONS(266), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [6566] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_COMMA,
    ACTIONS(354), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [6577] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(358), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [6585] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(354), 1,
      aux_sym_source_file_token1,
    ACTIONS(356), 1,
      anon_sym_COMMA,
  [6595] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(343), 1,
      aux_sym_source_file_token1,
    ACTIONS(345), 1,
      anon_sym_COMMA,
  [6605] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(360), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [6613] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(362), 1,
      ts_builtin_sym_end,
    ACTIONS(364), 1,
      aux_sym_source_file_token1,
  [6623] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(366), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [6631] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(140), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [6639] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    ACTIONS(364), 1,
      aux_sym_source_file_token1,
  [6649] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(244), 1,
      aux_sym_source_file_token1,
    ACTIONS(246), 1,
      anon_sym_COMMA,
  [6659] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(347), 1,
      aux_sym_source_file_token1,
    ACTIONS(349), 1,
      anon_sym_COMMA,
  [6669] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(368), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [6677] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [6685] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(334), 1,
      aux_sym_source_file_token1,
    ACTIONS(339), 1,
      anon_sym_COMMA,
  [6695] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(266), 1,
      aux_sym_source_file_token1,
    ACTIONS(268), 1,
      anon_sym_COMMA,
  [6705] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(37), 1,
      aux_sym_source_file_token1,
  [6712] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(366), 1,
      aux_sym_source_file_token1,
  [6719] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(368), 1,
      aux_sym_source_file_token1,
  [6726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      ts_builtin_sym_end,
  [6733] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(364), 1,
      aux_sym_source_file_token1,
  [6740] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(360), 1,
      aux_sym_source_file_token1,
  [6747] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(140), 1,
      aux_sym_source_file_token1,
  [6754] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(358), 1,
      aux_sym_source_file_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(27)] = 0,
  [SMALL_STATE(28)] = 78,
  [SMALL_STATE(29)] = 155,
  [SMALL_STATE(30)] = 213,
  [SMALL_STATE(31)] = 270,
  [SMALL_STATE(32)] = 325,
  [SMALL_STATE(33)] = 380,
  [SMALL_STATE(34)] = 441,
  [SMALL_STATE(35)] = 502,
  [SMALL_STATE(36)] = 540,
  [SMALL_STATE(37)] = 594,
  [SMALL_STATE(38)] = 632,
  [SMALL_STATE(39)] = 676,
  [SMALL_STATE(40)] = 738,
  [SMALL_STATE(41)] = 780,
  [SMALL_STATE(42)] = 824,
  [SMALL_STATE(43)] = 872,
  [SMALL_STATE(44)] = 912,
  [SMALL_STATE(45)] = 950,
  [SMALL_STATE(46)] = 1010,
  [SMALL_STATE(47)] = 1048,
  [SMALL_STATE(48)] = 1098,
  [SMALL_STATE(49)] = 1150,
  [SMALL_STATE(50)] = 1204,
  [SMALL_STATE(51)] = 1260,
  [SMALL_STATE(52)] = 1310,
  [SMALL_STATE(53)] = 1348,
  [SMALL_STATE(54)] = 1406,
  [SMALL_STATE(55)] = 1468,
  [SMALL_STATE(56)] = 1508,
  [SMALL_STATE(57)] = 1568,
  [SMALL_STATE(58)] = 1606,
  [SMALL_STATE(59)] = 1644,
  [SMALL_STATE(60)] = 1698,
  [SMALL_STATE(61)] = 1736,
  [SMALL_STATE(62)] = 1774,
  [SMALL_STATE(63)] = 1812,
  [SMALL_STATE(64)] = 1850,
  [SMALL_STATE(65)] = 1894,
  [SMALL_STATE(66)] = 1946,
  [SMALL_STATE(67)] = 1996,
  [SMALL_STATE(68)] = 2044,
  [SMALL_STATE(69)] = 2090,
  [SMALL_STATE(70)] = 2134,
  [SMALL_STATE(71)] = 2176,
  [SMALL_STATE(72)] = 2214,
  [SMALL_STATE(73)] = 2254,
  [SMALL_STATE(74)] = 2312,
  [SMALL_STATE(75)] = 2350,
  [SMALL_STATE(76)] = 2388,
  [SMALL_STATE(77)] = 2446,
  [SMALL_STATE(78)] = 2497,
  [SMALL_STATE(79)] = 2550,
  [SMALL_STATE(80)] = 2603,
  [SMALL_STATE(81)] = 2656,
  [SMALL_STATE(82)] = 2695,
  [SMALL_STATE(83)] = 2736,
  [SMALL_STATE(84)] = 2779,
  [SMALL_STATE(85)] = 2824,
  [SMALL_STATE(86)] = 2871,
  [SMALL_STATE(87)] = 2920,
  [SMALL_STATE(88)] = 2973,
  [SMALL_STATE(89)] = 3010,
  [SMALL_STATE(90)] = 3063,
  [SMALL_STATE(91)] = 3116,
  [SMALL_STATE(92)] = 3173,
  [SMALL_STATE(93)] = 3210,
  [SMALL_STATE(94)] = 3247,
  [SMALL_STATE(95)] = 3300,
  [SMALL_STATE(96)] = 3353,
  [SMALL_STATE(97)] = 3406,
  [SMALL_STATE(98)] = 3459,
  [SMALL_STATE(99)] = 3512,
  [SMALL_STATE(100)] = 3565,
  [SMALL_STATE(101)] = 3618,
  [SMALL_STATE(102)] = 3671,
  [SMALL_STATE(103)] = 3724,
  [SMALL_STATE(104)] = 3763,
  [SMALL_STATE(105)] = 3816,
  [SMALL_STATE(106)] = 3875,
  [SMALL_STATE(107)] = 3928,
  [SMALL_STATE(108)] = 3981,
  [SMALL_STATE(109)] = 4034,
  [SMALL_STATE(110)] = 4087,
  [SMALL_STATE(111)] = 4140,
  [SMALL_STATE(112)] = 4193,
  [SMALL_STATE(113)] = 4242,
  [SMALL_STATE(114)] = 4281,
  [SMALL_STATE(115)] = 4340,
  [SMALL_STATE(116)] = 4393,
  [SMALL_STATE(117)] = 4446,
  [SMALL_STATE(118)] = 4499,
  [SMALL_STATE(119)] = 4552,
  [SMALL_STATE(120)] = 4605,
  [SMALL_STATE(121)] = 4658,
  [SMALL_STATE(122)] = 4711,
  [SMALL_STATE(123)] = 4764,
  [SMALL_STATE(124)] = 4817,
  [SMALL_STATE(125)] = 4870,
  [SMALL_STATE(126)] = 4923,
  [SMALL_STATE(127)] = 4976,
  [SMALL_STATE(128)] = 5029,
  [SMALL_STATE(129)] = 5082,
  [SMALL_STATE(130)] = 5139,
  [SMALL_STATE(131)] = 5176,
  [SMALL_STATE(132)] = 5229,
  [SMALL_STATE(133)] = 5282,
  [SMALL_STATE(134)] = 5335,
  [SMALL_STATE(135)] = 5388,
  [SMALL_STATE(136)] = 5441,
  [SMALL_STATE(137)] = 5494,
  [SMALL_STATE(138)] = 5547,
  [SMALL_STATE(139)] = 5600,
  [SMALL_STATE(140)] = 5637,
  [SMALL_STATE(141)] = 5674,
  [SMALL_STATE(142)] = 5727,
  [SMALL_STATE(143)] = 5764,
  [SMALL_STATE(144)] = 5826,
  [SMALL_STATE(145)] = 5888,
  [SMALL_STATE(146)] = 5950,
  [SMALL_STATE(147)] = 6012,
  [SMALL_STATE(148)] = 6074,
  [SMALL_STATE(149)] = 6136,
  [SMALL_STATE(150)] = 6198,
  [SMALL_STATE(151)] = 6260,
  [SMALL_STATE(152)] = 6322,
  [SMALL_STATE(153)] = 6384,
  [SMALL_STATE(154)] = 6416,
  [SMALL_STATE(155)] = 6430,
  [SMALL_STATE(156)] = 6444,
  [SMALL_STATE(157)] = 6458,
  [SMALL_STATE(158)] = 6472,
  [SMALL_STATE(159)] = 6483,
  [SMALL_STATE(160)] = 6496,
  [SMALL_STATE(161)] = 6507,
  [SMALL_STATE(162)] = 6518,
  [SMALL_STATE(163)] = 6531,
  [SMALL_STATE(164)] = 6542,
  [SMALL_STATE(165)] = 6555,
  [SMALL_STATE(166)] = 6566,
  [SMALL_STATE(167)] = 6577,
  [SMALL_STATE(168)] = 6585,
  [SMALL_STATE(169)] = 6595,
  [SMALL_STATE(170)] = 6605,
  [SMALL_STATE(171)] = 6613,
  [SMALL_STATE(172)] = 6623,
  [SMALL_STATE(173)] = 6631,
  [SMALL_STATE(174)] = 6639,
  [SMALL_STATE(175)] = 6649,
  [SMALL_STATE(176)] = 6659,
  [SMALL_STATE(177)] = 6669,
  [SMALL_STATE(178)] = 6677,
  [SMALL_STATE(179)] = 6685,
  [SMALL_STATE(180)] = 6695,
  [SMALL_STATE(181)] = 6705,
  [SMALL_STATE(182)] = 6712,
  [SMALL_STATE(183)] = 6719,
  [SMALL_STATE(184)] = 6726,
  [SMALL_STATE(185)] = 6733,
  [SMALL_STATE(186)] = 6740,
  [SMALL_STATE(187)] = 6747,
  [SMALL_STATE(188)] = 6754,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unknown_instruction, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unknown_instruction, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_instruction, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_instruction, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_known_instruction, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_known_instruction, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_prefix, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_prefix, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_prefix, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_prefix, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(186),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(153),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_line, 1),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_charstr, 1),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant_charstr, 1),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_expression, 5),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_operand, 1), REDUCE(sym_expression, 1),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_operand, 1), REDUCE(sym_expression, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 1),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 1),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression, 1), REDUCE(sym_operand, 2),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_expression, 1), REDUCE(sym_operand, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 2),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 2),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant_numeric, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_numeric, 1),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_expression, 5),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_prefix, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 1),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2), SHIFT_REPEAT(11),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 1),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register, 1),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effective_address, 3),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_effective_address, 3),
  [351] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2), SHIFT_REPEAT(10),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effective_address, 4),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_effective_address, 4),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_directive, 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assembl_directive, 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_line, 2),
  [370] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
