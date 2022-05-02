/// <reference path="node_modules/tree-sitter-cli/dsl.d.ts" />
// line ::= [label[':']] [prefix] [instr [opr{',' opr}]] '\n'

module.exports = grammar({

  name: 'nasm',

  extras: $ => [
    $.comment,
    /\s/,
  ],

  conflicts: $ => [
    [$.label, $.unknown_instruction],
  ],

  rules: {

    source: $ => repeat(choice(
      $.line,
      '\n',
    )),

    line: $ => prec(1, seq(
        optional(seq(
          optional($.label),
          $.instruction,
        )),
        '\n',
    )),

    label: $ => seq($.word, optional(':')),

    instruction: $ => seq(
      choice(
        // YYY: probably the precedence here has no impact...
        $.known_instruction,
        $.unknown_instruction,
      ),
      optional($.operands),
    ),

    // prefix: $ => $.word,

    operands: $ => seq($.operand, repeat(seq(',', $.operand))),
    operand: $ => choice(
      $.register,
      $.effective_address,
      $.constant,
      $.word, // XXX: $.expression
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
      $.word, // XXX: $.expression
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

    known_instruction: $ => choice(...['MOV', 'ADD', 'INC', 'SYSCALL'].map(ci)),
    unknown_instruction: $ => $.word,

    comment: $ => seq(';', /.*\n/),
    word: $ => prec(-5, /[A-Za-z]+/), // XXX: /[A-Za-z._?$][A-Za-z0-9_$#@~.?]*/

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
