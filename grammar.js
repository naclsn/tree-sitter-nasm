/// <reference path="node_modules/tree-sitter-cli/dsl.d.ts" />
// line ::= [label[:]] [prefix] [instr [opr{',' opr}]] '\n'

module.exports = grammar({

  name: 'test',

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
    //label: $ => seq($.word, ':'),

    instruction: $ => seq(
      choice(
        // YYY: probably the precedence here has no impact...
        prec(5, $.known_instruction),
        prec(4, $.unknown_instruction),
      ),
      optional($.operands),
    ),

    // prefix: $ => $.word,

    operands: $ => seq($.operand, repeat(seq(',', $.operand))),
    operand: $ => $.word,

    known_instruction: $ => choice(...['mov', 'add', 'inc', 'syscall'].map(ci)),
    unknown_instruction: $ => $.word,

    comment: $ => seq(';', /.*\n/),
    word: $ => prec(-5, /[a-z]+/i),

  },

});

function ci(it) {
  return 'string' === typeof it
    ? RegExp(it, 'i')
    : RegExp(it.source, (it.flags??'') + 'i')
    ;
}
