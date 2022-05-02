/// <reference path="node_modules/tree-sitter-cli/dsl.d.ts" />
// line ::= [label[:]] [prefix] [instr [opr{',' opr}]] '\n'

module.exports = grammar({

  name: 'test',

  extras: $ => [
    $.comment,
    /\s/,
  ],

  rules: {

    source: $ => repeat(choice(
      $.line,
      '\n',
    )),

    comment: $ => seq(';', /.*\n/),
    word: $ => /[a-z]+/,

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
      $.word,
      optional($.operands),
    ),

    prefix: $ => $.word,

    operands: $ => seq($.operand, repeat(seq(',', $.operand))),
    operand: $ => $.word,

  },

});
