/// <reference path="node_modules/tree-sitter-cli/dsl.d.ts" />
module.exports = grammar({

  name: 'nasm',

  extras: $ => [
    $.comment,
    /\s|\\\r?\n/,
  ],

  conflicts: $ => [
    [$.label, $.unknown_instruction],
    [$.operand, $.expression],
    [$.__pseudo_instruction_dx_atom, $.constant],
    [$.__pseudo_instruction_dx_list],
    [$.__pseudo_instruction_dx_atom, $.parenthesized_expression],
  ],

  rules: {

    // source_file ::= {[source|preproc|assembl] '\n'} [source|preproc|assembl]
    source_file: $ => seq(
      repeat(
        seq(
          optional(choice(
            $.source_line,
            $.preproc_directive,
            $.assembl_directive,
          )),
          /\r?\n/,
        ),
      ),
      optional(choice(
        $.source_line,
        $.preproc_directive,
        $.assembl_directive,
      )),
    ),

    // source_line ::= [label[':']] [prefix] [instr [opr{',' opr}]] '\n'
    source_line: $ => choice(
      $.label,
      $.instruction,
      seq($.label, $.instruction),
    ),

    // XXX: question: can you have a macro over multiple files?
    // TODO: preproc_expression accepting eg. %+
    // XXX: %+ %? %?? %!<env> %, %%<label> %{..} %0 %n %00 %[..] .....
    preproc_directive: $ => seq('%', choice(
      'define', 'idefine', 'xdefine', // <ident> immediat!['(' [('='|'&'|'+'|'!')<name> {',' (...)<name>} [',']] ')'] <value>
      'undef', // <name>
      'assign', 'iassign', // similar to the define family
      'defstr', 'idefstr', // 
      'deftok', 'ideftok', // 
      'defalias', 'idefalias', 'undefalias', 'clear', 'aliases', 'ifdefalias',
      'strcat', 'strlen', 'substr',
      'macro', 'imacro', 'endmacro', 'unmacro',
      'rotate',
      'if', 'ifn', 'elif', 'elifn', 'else', 'endif', // .. and variants 'ifdef', 'ifmacro', 'ifctx', 'ifidn', 'ifidni', 'ifid', 'ifnum', 'ifstr', 'iftoken', 'ifempty', 'ifenv'
      'rep', 'endrep',
      'include',
      'pathsearch',
      'depend',
      'use',
      'push', 'pop',
      'repl',
      'arg', 'stacksize', 'local',
      'error', 'warning', 'fatal',
      'pragma', // 'ignore', 'preproc', 'limit', 'asm', 'list', 'file', 'input', 'output', 'debug', but also << output or debug format, and sometimes groups thereof >>
      'line',
      'clear', // [global|context] type ('define', 'defalias', 'alldefine', 'macro', 'all')
    )),

//#region assembl_directive
    assembl_directive: $ => {
      /**
       * the ones described in the `rules` property of the
       * grammar are user forms
       * 
       * primitive forms are crafted from them here
       */
      function _prim_from_user(rule) {
        return seq('[', rule, ']');
      }
      const user = [
        $._assembl_directive_target,
        $._assembl_directive_defaults,
        $._assembl_directive_sections,
        $._assembl_directive_absolute,
        $._assembl_directive_symbols,
        $._assembl_directive_common,
        $._assembl_directive_symbolfixes,
        $._assembl_directive_cpu,
        $._assembl_directive_floathandling,
      ];
      const primitive = user.map(_prim_from_user);
      return choice(
        ...user,
        ...primitive,
        _prim_from_user(seq( // no user form for [WARNING]
          ci('WARNING'),
          choice(
            seq(
              choice('+', '-', '*'),
              choice('all', 'bad-pragma', 'bnd', 'environment', 'float', 'float-denorm', 'float-overflow', 'float-toolong', 'float-underflow', 'hle', 'label', 'label-orphan', 'label-redef', 'label-redef-late', 'lock', 'macro', 'macro-defaults', 'macro-params', 'macro-params-legacy'),
            ),
            ci('PUSH'),
            ci('POP'),
          ),
        )),
      );
    },

    _assembl_directive_target: $ => choice(
      seq(ci('BITS'), choice('16', '32', '64')),
      ci('USE16'),
      ci('USE32'),
    ),
    _assembl_directive_defaults: $ => seq(
      ci('DEFAULT'),
      choice(...['REL', 'ABS', 'BND', 'NOBND'].map(ci))
    ),
    _assembl_directive_sections: $ => seq( // XXX/TODO: there is more, see 8.1.2 and 8.1.3
      choice(...['SECTION', 'SEGMENT'].map(ci)),
      $.word, // YYY: not sure, but hey
    ),
    _assembl_directive_absolute: $ => seq(
      ci('ABSOLUTE'),
      $.critical_expression,
    ),
    _assembl_directive_symbols: $ => seq(
      choice(...['EXTERN', 'REQUIRED', 'GLOBAL', 'STATIC'].map(ci)),
      seq( // YYY: not sure, but hey
        $.word, optional(seq(':', $.word)),
        repeat(seq(',', $.word, optional(seq(':', $.word)))),
      ),
    ),
    _assembl_directive_common: $ => seq(
      ci('COMMON'),
      $.word, // YYY: not sure for any of the 3, but hey
      $.critical_expression,
      optional(seq(
        ':',
        choice(
          ci('NEAR'),
          ci('FAR'),
          $.critical_expression,
        ),
      )),
    ),
    _assembl_directive_symbolfixes: $ => seq(
      choice(...[
        'PREFIX', 'GPREFIX', 'LPREFIX',
        'POSTFIX', 'GPOSTFIX', 'LPOSTFIX',
      ].map(ci)),
      $.word, // YYY: not sure, probably
    ),
    _assembl_directive_cpu: $ => seq(
      ci('CPU'),
      choice(...['8086', '186', '286', '386', '486', '586', 'PENTIUM', '686', 'PPRO', 'P2', 'P3', 'KATMAI', 'P4', 'WILLAMETTE', 'PRESCOTT', 'X64', 'IA64'].map(ci)),
    ),
    _assembl_directive_floathandling: $ => seq(
      ci('FLOAT'),
      choice(...['DAZ', 'NODAZ', 'NEAR', 'UP', 'DOWN', 'ZERO', 'DEFAULT'].map(ci)),
    ),
//#endregion assembl_directive

//#region source_line
    label: $ => prec(5, seq($.word, optional(':'))), // precedence over unknown_operation

// #region instruction
    instruction: $ => seq(
      repeat($.instruction_prefix),
      choice(
        $.known_instruction,
        $.pseudo_instruction,
        $.unknown_instruction,
      ),
    ),

    instruction_prefix: $ => choice(...[
      'LOCK', 'REP', 'REPE', 'REPZ', 'REPNE', 'REPNZ', 'XACQUIRE', 'XRELEASE', 'BND', 'NOBND',
      /*_address_size:*/ 'A16', 'A32', 'A64',
      /*_operand_size:*/ 'O16', 'O32', 'O64',
      /*_segment_register:*/ 'CS', 'DS', 'SS', 'ES', 'FS', 'GS',
    ].map(ci)),

    known_instruction: $ => seq(
      /*choice(...require('fs')
        .readFileSync('./supported-instructions.txt')
        .toString()
        .split('\n')
        .map(ci)
      ),*/
      choice(...['MOV', 'ADD', 'INC', 'SYSCALL', 'SCASB', 'INT'].map(ci)),
      optional($.operands),
    ),
    pseudo_instruction: $ => choice(
      $._pseudo_instruction_dx,
      $._pseudo_instruction_resbx,
      $._pseudo_instruction_incbin_command,
      $._pseudo_instruction_equ_command,
      $._pseudo_instruction_times_prefix,
    ),
    unknown_instruction: $ => seq(
      $.word,
      optional($.operands),
    ),

//  #region pseudo instruction
    _pseudo_instruction_dx: $ => seq( // XXX: << DT, DO, DY and DZ do not accept numeric constants as operands. >>
      choice(...['DB', 'DW', 'DD', 'DQ', 'DT', 'DO', 'DY', 'DZ'].map(ci)),
      $.__pseudo_instruction_dx_value,
      repeat(seq(',', $.__pseudo_instruction_dx_value)),
    ),
    _pseudo_instruction_resbx: $ => seq(
      choice(...['RESB', 'RESW', 'RESD', 'RESQ', 'REST', 'RESO', 'RESY', 'RESZ'].map(ci)),
      $.critical_expression,
    ),
    _pseudo_instruction_incbin_command: $ => seq(
      ci('INCBIN'),
      choice(
        $.constant_charstr,
        $.word,
      ),
      optional(seq(
        $.expression,
        optional($.expression),
      )),
    ),
    _pseudo_instruction_equ_command: $ => seq(
      ci('EQU'), // XXX/FIXME: requires a label before it
      $.expression,
    ),
    _pseudo_instruction_times_prefix: $ => seq(
      ci('TIMES'),
      $.critical_expression,
      $.instruction,
    ),

    __pseudo_instruction_dx_type: $ => choice(...[
      'BYTE', 'WORD', 'DWORD', 'QWORD', 'TWORD', 'OWORD', 'YWORD', 'ZWORD'
    ].map(ci)),
    __pseudo_instruction_dx_atom: $ => choice(
      $.expression,
      $.constant_charstr, // YYY: already in $.expression
      $.constant_floatpt,
      '?',
    ),
    __pseudo_instruction_dx_parlist: $ => seq(
      '(',
      $.__pseudo_instruction_dx_value,
      repeat(seq(',', $.__pseudo_instruction_dx_value)),
      ')',
    ),
    __pseudo_instruction_dx_duplist: $ => seq(
      $.expression,
      ci('DUP'),
      optional($.__pseudo_instruction_dx_type),
      optional('%'),
      $.__pseudo_instruction_dx_parlist,
    ),
    __pseudo_instruction_dx_list: $ => choice(
      $.__pseudo_instruction_dx_duplist,
      seq(
        '%',
        $.__pseudo_instruction_dx_parlist,
      ),
      seq(
        $.__pseudo_instruction_dx_type,
        optional('%'),
        $.__pseudo_instruction_dx_parlist,
      ),
    ),
    __pseudo_instruction_dx_value: $ => choice(
      $.__pseudo_instruction_dx_atom,
      seq($.__pseudo_instruction_dx_type, $.__pseudo_instruction_dx_value),
      $.__pseudo_instruction_dx_list,
    ),
//  #endregion pseudo instruction
// #endregion instruction

// #region operand
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
      optional(ci('STRICT')),
      choice(...['BYTE', 'WORD', 'DWORD', 'QWORD', 'TWORD', 'OWORD', 'YWORD', 'ZWORD'].map(ci)),
    ),

    register: $ => choice(...[ // XXX: stX and weird syntax `fadd    to st1  ; this sets st1 := st1 + st0`
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

//  #region constant
    constant: $ => choice(
      $.constant_numeric, // XXX: no test
      $.constant_charstr, // XXX: no test
      //$.constant_floatpt, // XXX: not everywhere (not where again? not as instruction operands that was?)
      // TODO: packed BCD constants
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
          RegExp(`0[${fixes}][${digits}_]*`), // yes, '*' and not '+'
          RegExp(`[${digits}][${digits}_]*[${fixes}]`),
        ];
      }
      return choice(
        // no prefix decimal
        /[0-9]+/,
        // $-prefix hexadecimal
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
    constant_floatpt: $ => {
      /**
       * has common points with parsing constant_numeric,
       * becomes a floating point when has dot or exponent
       * (and no suffix notation for obvious reasons)
       * 
       * XXX/FIXME/CLEANME or something
       * 
       * this is probably not always accurate with eg.:
       *  - 0xB1AB1Ae-0BA ; should be invalid
       *  - 0d1.5e ; should be valid
       * 
       * this first one can actually introduce quite the erroneous
       * parsing (constant_floatpt instead of a binary_expression)
       */
      function _make_flt(fixes, digits, expo, expd) {
        const frac = `[${digits}_]*`;
        const expn = `[${expo}][-+]?[${expd}]+`;
        return [
          RegExp(`0[${fixes}][${digits}_]*\\.(${frac})?(${expn})?`), // try with a period
          RegExp(`0[${fixes}][${digits}_]*(${expn})`), // no period, try with an exponent
        ];
      }
      const O9 = '0123456789';
      const OF = O9+'ABCDEFabcdef';
      return choice(
        // no prefix decimal (with and without period)
        RegExp(`[${O9}]+\\.([${O9}])([Ee][${O9}]+)?`),
        RegExp(`[${O9}]+[Ee][${O9}]+`),
        // $-prefix hexadecimal (with and without period)
        RegExp(`\\$[${O9}]+\\.([${OF}])([Ee][${OF}]+|[Pp][${O9}]+)?`),
        RegExp(`\\$[${O9}]+([Ee][${OF}]+|[Pp][${O9}]+)`),
        ..._make_flt('HXhx', OF, 'Ee', OF),
        ..._make_flt('HXhx', OF, 'Pp', O9),
        ..._make_flt('DTdt', O9, 'Ee', O9),
        ..._make_flt('OQoq', '01234567', 'Pp', O9),
        ..._make_flt('BYby', '01', 'Pp', O9),
      );
    },
//  #endregion constant

//  #region expression
    // NOTE/TODO: WRT as binary? : as binary?
    // XXX/TODO: $ and $$ are considered special tokens (not available in critical_expression)
    // TODO: special operators, special tokens, standard macros (__?xyz?__)
    expression: $ => choice(
      $.conditional_expression,
      $.binary_expression,
      $.unary_expression,
      $.parenthesized_expression,
      $.word, // ie. identifier
      $.constant,
    ),

    critical_expression: $ => $.expression, // XXX
    conditional_expression: $ => prec.right(1, seq( // YYY: right?
      $.expression, '?', $.expression, ':', $.expression,
    )),
    binary_expression: $ => {
      const ops = [
        ['||'],
        ['^^'],
        ['&&'],
        ['=', '==', '!=', '<>', '<', '<=', '>', '>=', '<=>'],
        ['|'],
        ['^'],
        ['&'],
        ['<<', '>>', '<<<', '>>>'],
        ['+', '-'],
        ['*', '/', '//', '%', '%%'],
      ];
      // no `flatMap`, use `reduce`
      return prec(2, choice(...ops.reduce((acc, ls, k) => acc.concat(
        ls.map(op =>
          prec.left(k, seq(
            $.expression, op, $.expression,
          )),
        ),
      ), []))); // [] is reduce's `initialValue`
    },
    unary_expression: $ => prec.left(3, seq(
      choice('-', '+', '~', '!', ci('SEG')), $.expression,
    )),
    parenthesized_expression: $ => seq(
      '(', $.expression, ')',
    ),
//  #endregion expression
// #endregion operand
//#endregion source_line

    comment: $ => /;(\\\r?\n|.)*/,
    // YYY: `@bidoof` sould not be valid as per the doc (same with `$@bidoof`)
    word: $ => prec(-5, /\$?[A-Za-z._?][A-Za-z0-9_$#@~.?]*/),

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
