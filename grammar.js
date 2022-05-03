/// <reference path="node_modules/tree-sitter-cli/dsl.d.ts" />
// source_line ::= [label[':']] [prefix] [instr [opr{',' opr}]] '\n'
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

    // source_file ::= {[source|preproc|assembl] '\n'} [source|preproc|assembl]
    source_file: $ => seq(
      repeat(
        seq(
          optional(choice(
            $.source_line,
            //$.preproc_directive,
            //$.assembl_directive,
          )),
          /\r?\n/,
        ),
      ),
      optional(choice(
        $.source_line,
        //$.preproc_directive,
        //$.assembl_directive,
      )),
    ),

    source_line: $ => choice(
      $.label,
      $.instruction,
      seq($.label, $.instruction),
    ),

    label: $ => prec(5, seq($.word, optional(':'))), // precedence over unknown_operation

    instruction: $ => seq(
      optional($.instruction_prefix),
      choice(
        $.known_instruction,
        $.pseudo_instruction,
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
      //$.constant_floatpt, // XXX: not everywhere
    ),

    constant_numeric: $ => {
      /**
       * the same characters can be used in prefix or suffix notation:
       *  - 0xFF
       *  - FFx
       *  - eax   that's a register!
       * 
       * '_'s can be used almost anywhere:
       *  - 0x_FF
       *  - FF_x
       *  - _FFx  is not a number but a word!
       *  - $FF   also a word!
       *  - $_FF  same!
       * 
       * when dubious, precedence is probably along:
       *  register > word > constant_numeric
       */
      function _make_num(fixes, digits) {
        return [
          RegExp(`0[${fixes}][${digits}]*`), // yes, '*' and not '+'
          RegExp(`[${digits}][${digits}]*[${fixes}]`),
        ];
      }
      return choice(
        /[0-9]+/,
        /\$[0-9][0-9A-Fa-f]*/,
        ..._make_num('HXhx', '0123456789ABCDEFabcdef'),
        ..._make_num('DTdt', '0123456789'),
        ..._make_num('OQoq', '01234567'),
        ..._make_num('BYby', '01'),
      );
    },
    constant_charstr: $ => choice(
      /'[^']*'/,
      /"[^"]*"/,
      /`(\\.|[^\\`])*`/,
      // YYY: it never complains about erroneous escapes..:
      //      << All other escape sequences are reserved. >>
      //      .. otherwise below may be more accurate
      /*seq(
        '`',
        repeat(choice(
          seq('\\', choice(
            /['"`\\?abtnvfre0]/,
            /\d{1,3}/, // octal up to 3
            /x[0-9A-Fa-f]{,2}/, // hexadecimal up to 2
            /u[0-9A-Fa-f]{4}/, // hexadecimal unicode 4
            /U[0-9A-Fa-f]{8}/, // hexadecimal unicode 8
          )),
          /[^`\\]/,
        )),
        '`',
      ),*/
    ),
    constant_floatpt: $ => /[0-9]+\.[0-9]*/,

    known_instruction: $ => choice(...['MOV', 'ADD', 'INC', 'SYSCALL', 'SCASB'].map(ci)), // XXX: incomplete
    pseudo_instruction: $ => choice(...[
      'db', 'dw', 'dd', 'dq', 'dt', 'do', 'dy', 'dz',
      'resb', 'resw', 'resd', 'resq', 'rest', 'reso', 'resy', 'resz',
      'incbin', // XXX: not exactly syntax, but expects filename [offset [count]]
      'equ', // XXX: technically requires a label before it
      'times', // XXX/FIXME: expects TIMES <number> <instruction> (NOTE: kinda like a prefix, no?)
    ].map(ci)),
    unknown_instruction: $ => $.word,

    comment: $ => /;(\\\r?\n|.)*/,
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
