/// <reference path="node_modules/tree-sitter-cli/dsl.d.ts" />
// source_line ::= [label[':']] [prefix] [instr [opr{',' opr}]] '\n'
// TODO/FIXME: file-ending lines (ie. no '\n', but EOL)
// TODO/LATER: hide some node (and thus update test)

module.exports = grammar({

  name: 'nasm',

  extras: $ => [
    $.comment,
    /\s|\\\r?\n/,
  ],

  conflicts: $ => [
    [$.label, $.unknown_instruction],
  ],

  rules: {

    source_file: $ => repeat(choice(
      $.source_line,
      /\r?\n/,
    )),

    source_line: $ => prec(1, seq(
        optional(seq(
          optional($.label),
          optional($.instruction),
        )),
        /\r?\n/,
    )),

    label: $ => seq($.word, optional(':')),

    instruction: $ => seq(
      optional($.instruction_prefix),
      choice(
        $.known_instruction,
        $.unknown_instruction,
      ),
      optional($.operands),
    ),
    instruction_prefix: $ => choice(...[
      'LOCK', 'REP', 'REPE', 'REPZ', 'REPNE', 'REPNZ', 'XACQUIRE', 'XRELEASE', 'BND', 'NOBND',
      /*_address_size:*/ 'A16', 'A32', 'A64',
      /*_operand_size:*/ 'O16', 'O32', 'O64',
      /*_segment_register:*/ 'CS', 'DS', 'SS', 'ES', 'FS', 'GS',
    ].map(ci)),

    operands: $ => seq($.operand, repeat(seq(',', $.operand))),
    operand: $ => seq(
      optional($.operand_prefix),
      choice(
        $.register,
        $.effective_address,
        $.constant,
        $.expression,
      ),
    ),
    operand_prefix: $ => seq(
      optional('strict'),
      choice(...['BYTE', 'WORD', 'DWORD', 'QWORD', 'TWORD', 'OWORD', 'YWORD', 'ZWORD'].map(ci)),
    ),

    register: $ => choice(...[
      'AL', 'AH', 'CL', 'CH', 'DL', 'DH', 'BL', 'BH', 'SPL', 'BPL', 'SIL', 'DIL', 'R8B', 'R9B', 'R10B', 'R11B', 'R12B', 'R13B', 'R14B', 'R15B',
      'AX', 'CX', 'DX', 'BX', 'SP', 'BP', 'SI', 'DI', 'R8W', 'R9W', 'R10W', 'R11W', 'R12W', 'R13W', 'R14W', 'R15W',
      'EAX', 'ECX', 'EDX', 'EBX', 'ESP', 'EBP', 'ESI', 'EDI', 'R8D', 'R9D', 'R10D', 'R11D', 'R12D', 'R13D', 'R14D', 'R15D',
      'RAX', 'RCX', 'RDX', 'RBX', 'RSP', 'RBP', 'RSI', 'RDI', 'R8', 'R9', 'R10', 'R11', 'R12', 'R13', 'R14', 'R15',
    ].map(ci)),

    effective_address: $ => seq(
      '[',
      optional(choice(...['BYTE', 'WORD', 'DWORD', 'NOSPLIT', 'REL', 'ABS'].map(ci))),
      $.expression,
      ']',
    ),

    constant: $ => choice(
      $.constant_numeric,
      $.constant_charstr,
      $.constant_floatpt,
    ),

    constant_numeric: $ => /[0-9]+/,
    constant_charstr: $ => choice(
      /"[^']*"/,
      /'[^"]*'/,
      /`[^`]*`/, // TODO: C-style escapes
    ),
    constant_floatpt: $ => /[0-9]+\.[0-9]*/,

    known_instruction: $ => choice(...['MOV', 'ADD', 'INC', 'SYSCALL', 'SCASB'].map(ci)),
    unknown_instruction: $ => $.word,

    comment: $ => seq(';', /.*\r?\n/),
    word: $ => prec(-5, /[A-Za-z._?$][A-Za-z0-9_$#@~.?]*/), // YYY: not sure precedence will be ever needed here

    expression: $ => $.word, // YYY: probably not here (ie. declare earlier may be needed)

  },

});

/**
 * @param {string|RegExp} it
 * @see https://github.com/tree-sitter/tree-sitter/issues/261
 */
function ci(it) {
  const src = 'string' === typeof it
    ? it
    : it.source
    ;
  const pat = src
    .split('')
    .map(c => c.toUpperCase() === c.toLowerCase()
      ? c
      : `[${c.toLowerCase()}${c.toUpperCase()}]`
    )
    .join('')
    ;
  return RegExp(pat, (it.flags ?? '') + 'i');
}
