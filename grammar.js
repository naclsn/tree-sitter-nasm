/// <reference path="node_modules/tree-sitter-cli/dsl.d.ts" />
module.exports = grammar({

  name: 'nasm',

  extras: $ => [
    $.comment,
    /\s|\\\r?\n/,
  ],

  conflicts: $ => [
    [$.actual_instruction, $.label],
    [$.operand, $.expression],
    [$.__pseudo_instruction_dx_atom, $.constant],
    [$.__pseudo_instruction_dx_list],
    [$.__pseudo_instruction_dx_atom, $.parenthesized_expression],
  ],

  rules: {

    source_file: $ => source_lines($),

//#region struc
    struc_declaration: $ => seq(
      ci('STRUC'),
      $.word,
      /\r?\n/,
      repeatSep1(
        seq(
          optional($.label),
          optional(choice(
            $._pseudo_instruction_resx,
            $._pseudo_instruction_alignx_macro,
          )),
        ),
        /\r?\n/,
      ),
      ci('ENDSTRUC'),
    ),

    struc_instance: $ => seq(
      ci('ISTRUC'),
      $.word,
      /\r?\n/,
      repeatSep1(
        seq(
          optional($.label),
          optional(
            seq(
              ci('AT'), $.word,
              optional(seq(',', $._pseudo_instruction_dx)),
            ),
          ),
        ),
        /\r?\n/,
      ),
      ci('IEND'),
    ),
//#endregion struc

    source_line: $ => choice(
      $.label,
      $.instruction,
      seq($.label, $.instruction),
    ),

//#region preproc_directive
    preproc_directive: $ => seq(
      '%',
      choice(
        $.preproc_def,
        $.preproc_function_def,
        $.preproc_undef,
        $.preproc_alias,
        $.preproc_multiline_macro,
        $.preproc_multiline_unmacro,
        $.preproc_if,
        $.preproc_rotate,
        $.preproc_rep_loop,
        $.preproc_include,
        $.preproc_pathsearch,
        $.preproc_depend,
        $.preproc_use,
        $.preproc_push,
        $.preproc_pop,
        $.preproc_repl,
        $.preproc_arg,
        $.preproc_stacksize,
        $.preproc_local,
        $.preproc_reporting,
        $.preproc_pragma,
        $.preproc_line,
        $.preproc_clear,
        //.*/, // YYY: sink?
      ),
      //.*/, // YYY: sink?
    ),

    preproc_def: $ => seq(
      token.immediate(...[
        'DEFINE', 'IDEFINE', 'XDEFINE',
        'DEFSTR', 'IDEFSTR',
        'DEFTOK', 'IDEFTOK',
        'DEFALIAS', 'IDEFALIAS',
        'STRCAT', 'STRLEN', 'SUBSTR',
      ].map(ci)),
      $.word,
      /.*/, // expression
    ),
    preproc_function_def: $ => seq(
      token.immediate(...['DEFINE', 'IDEFINE', 'XDEFINE'].map(ci)),
      $.word,
      token.immediate('('),
      repeatSep(
        seq(
          optional(/[=&+!]/),
          $.word,
        ),
        ',',
      ),
      optional(','),
      ')',
      /.*/, // expression
    ),
    preproc_undef: $ => seq(
      token.immediate(ci('UNDEF', 'UNDEFALIAS')),
      $.word,
    ),
    preproc_alias: $ => seq(
      choice(...['ALIASES', 'IFDEFALIAS'].map(ci)),
      $.word,
      $.word,
    ),
    _preproc_multiline_macro_arg_spec: $ => /[0-9]+(-[*0-9])?\+?(.nolist)?/,
    preproc_multiline_macro: $ => seq(
      token.immediate(...['MACRO', 'IMACRO'].map(ci)),
      $.word,
      $._preproc_multiline_macro_arg_spec,
      repeatSep($.expression, ','),
      /\r?\n/,
      source_lines($),
      ci('%ENDMACRO'),
    ),
    preproc_multiline_unmacro: $ => seq(
      token.immediate(ci('UNMACRO')),
      $._preproc_multiline_macro_arg_spec,
    ),
    preproc_if: $ => {
      function _make_n(base) { return 'N' + base; }
      function _make_if(base) { return 'IF' + base; }
      function _make_elif(base) { return 'ELIF' + base; }
      const bases = ['', 'CTX', 'DEF', 'EMPTY', 'ENV', 'ID', 'IDN', 'IDNI', 'MACRO', 'NUM', 'STR', 'TOKEN'];
      const ifs = [...bases.map(_make_if), ...bases.map(_make_n).map(_make_if)];
      const elifs = [...bases.map(_make_elif), ...bases.map(_make_n).map(_make_elif)]; // ifs.map(it => 'EL'+it);
      return seq(
        token.immediate(choice(...ifs.map(ci))),
        $.expression, // preproc_expression? (critical_expression?)
        /\r?\n/,
        source_lines($),
        repeat(seq(
          choice(...elifs.map(ci)),
          $.expression, // preproc_expression? (critical_expression?)
          /\r?\n/,
          source_lines($),
        )),
        optional(seq(
          choice(ci('%ELSE')),
          /\r?\n/,
          source_lines($),
        )),
        ci('%ENDIF'),
      );
    },
    preproc_rotate: $ => seq(
      token.immediate(ci('ROTATE')),
      $.expression, // preproc_expression? (critical_expression?)
    ),
    preproc_rep_loop: $ => seq(
      token.immediate(ci('REP')),
      $.expression, // preproc_expression? (critical_expression?)
      /\r?\n/,
      source_lines($),
      ci('%ENDREP'),
    ),
    preproc_include: $ => seq(
      token.immediate(ci('INCLUDE')),
      /.*/, // YYY: constant_charstr
    ),
    preproc_pathsearch: $ => seq(
      token.immediate(ci('PATHSEARCH')),
      $.word,
      /.*/, // YYY: constant_charstr
    ),
    preproc_depend: $ => seq(
      token.immediate(ci('DEPEND')),
      /.*/, // YYY: constant_charstr
    ),
    preproc_use: $ => seq(
      token.immediate(ci('USE')),
      /.*/, // YYY: constant_charstr
    ),
    preproc_push: $ => seq(
      token.immediate(ci('PUSH')),
      optional($.word),
    ),
    preproc_pop: $ => seq(
      token.immediate(ci('POP')),
      optional($.word),
    ),
    preproc_repl: $ => seq(
      token.immediate(ci('REPL')),
      optional($.word),
    ),
    preproc_arg: $ => seq(
      token.immediate(ci('ARG')),
      repeatSep1(
        seq($.word, ':', choice(...['BYTE', 'WORD', 'DWORD', 'QWORD', 'TWORD', 'OWORD', 'YWORD', 'ZWORD'].map(ci))),
        ',',
      ),
    ),
    preproc_stacksize: $ => seq(
      token.immediate(ci('STACKSIZE')),
      choice(...['FLAT', 'FLAT64', 'LARGE', 'SMALL'].map(ci)),
    ),
    preproc_local: $ => seq(
      token.immediate(ci('LOCAL')),
      repeatSep1(
        seq($.word, ':', choice(...['BYTE', 'WORD', 'DWORD', 'QWORD', 'TWORD', 'OWORD', 'YWORD', 'ZWORD'].map(ci))),
        ',',
      ),
    ),
    preproc_reporting: $ => seq(
      token.immediate(choice(...['ERROR', 'WARNING', 'FATAL'].map(ci))),
      /.*/, // YYY: constant_charstr (not quite)
    ),
    preproc_pragma: $ => seq(
      token.immediate(ci('PRAGMA')),
      $.word, // <namespace>
      $.word, // <directive>
      optional(/.*/), // [<argument>]
    ),
    preproc_line: $ => seq(
      token.immediate(ci('LINE')),
      /[0-9]+/,
      optional(seq('+', /[0-9]+/)),
      optional(/.*/), // YYY: constant_charstr
    ),
    preproc_clear: $ => seq(
      token.immediate(ci('CLEAR')),
      optional(choice(...['GLOBAL', 'CONTEXT'].map(ci))),
      repeat(choice(...['DEFINE', 'DEFALIAS', 'ALLDEFINE', 'MACRO', 'ALL'].map(ci))),
    ),
//#endregion preproc_directive

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
        $._assembl_directive_symbols, // YYY: << like EXTERN and GLOBAL, the primitive form of COMMON differs from the
        $._assembl_directive_common,  //         user-level form only in that it can take only one argument at a time >>
        $._assembl_directive_symbolfixes,
        $._assembl_directive_cpu,
        $._assembl_directive_floathandling,
        $._assembl_directive_org, // YYY: not presented as an assembler directive..? does it have a primitive form again?
        $._assembl_directive_sectalign, // YYY: 'ON' and 'OFF' in primitive form? probably not
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
              /\w[-\w]+/, // 'all', 'bad-pragma', 'bnd', 'environment', 'float', 'float-denorm', 'float-overflow', 'float-toolong', 'float-underflow', 'hle', 'label', 'label-orphan', 'label-redef', 'label-redef-late', 'lock', 'macro', 'macro-defaults', 'macro-params', 'macro-params-legacy'
            ),
            ci('PUSH'),
            ci('POP'),
          ),
        )),
        _prim_from_user(seq( // no user form for [MAP]
          ci('MAP'),
          optional(/[A-Za-z]/), //'ALL', 'BRIEF', 'SECTIONS', 'SEGMENTS', 'SYMBOLS'
          $.word, // YYY: filename?
        )),
      );
    },

    _assembl_directive_target: $ => choice(
      seq(ci('BITS'), /[0-9]+/), // '16', '32', '64'
      ci('USE16'),
      ci('USE32'),
    ),
    _assembl_directive_defaults: $ => seq(
      ci('DEFAULT'),
      choice(...['REL', 'ABS', 'BND', 'NOBND'].map(ci))
    ),
    _assembl_directive_sections: $ => seq(
      choice(...['SECTION', 'SEGMENT'].map(ci)),
      $.word,
      repeat(seq(
        /[A-Za-z]+/,
        optional(seq('=', $.expression)),
      )), // 'PROGBITS', 'NOBITS', 'ALIGN='critical_expression, 'START='critical_expression, 'VSTART='critical_expression, 'FOLLOWS='word, 'VFOLLOWS='word
    ),
    _assembl_directive_absolute: $ => seq(
      ci('ABSOLUTE'),
      $.expression, // critical_expression
    ),
    _assembl_directive_symbols: $ => seq(
      // YYY: grouping all 4 is a bit hacky as they do not have the exact same syntax apparently (e.g. see 7.9)
      choice(...['EXTERN', 'REQUIRED', 'GLOBAL', 'STATIC'].map(ci)),
      repeatSep1(
        seq(
          $.word,
          optional(seq(':', /[^,]+/)), // YYY: "object-format specific text"?
        ),
        ',',
      ),
    ),
    _assembl_directive_common: $ => seq(
      ci('COMMON'),
      $.word,
      $.expression, // critical_expression
      optional(seq(':', /[^,]+/)), // YYY: "object-format specific extensions"?
    ),
    _assembl_directive_symbolfixes: $ => seq(
      choice(...[
        'PREFIX', 'GPREFIX', 'LPREFIX',
        'POSTFIX', 'GPOSTFIX', 'LPOSTFIX',
      ].map(ci)),
      $.word,
    ),
    _assembl_directive_cpu: $ => seq(
      ci('CPU'),
      /[-0-9A-Z_a-z]+/, // '8086', '186', '286', '386', '486', '586', 'PENTIUM', '686', 'PPRO', 'P2', 'P3', 'KATMAI', 'P4', 'WILLAMETTE', 'PRESCOTT', 'X64', 'IA64' [... 16 more]
    ),
    _assembl_directive_floathandling: $ => seq(
      ci('FLOAT'),
      choice(...['DAZ', 'NODAZ', 'NEAR', 'UP', 'DOWN', 'ZERO', 'DEFAULT'].map(ci)),
    ),
    _assembl_directive_org: $ => seq(
      ci('ORG'),
      $.expression, // critical_expression
    ),
    _assembl_directive_sectalign: $ => seq(
      ci('SECTALIGN'),
      choice(
        ci('ON'),
        ci('OFF'),
        /[0-9]+/,
      ),
    ),
//#endregion assembl_directive

//#region source_line
    label: $ => seq($.word, optional(':')),

// #region instruction
    instruction: $ => seq(
      repeat($.instruction_prefix),
      choice(
        $.actual_instruction,
        $.pseudo_instruction,
      ),
    ),

    instruction_prefix: $ => choice(...[
      'LOCK', 'REP', 'REPE', 'REPZ', 'REPNE', 'REPNZ', 'XACQUIRE', 'XRELEASE', 'BND', 'NOBND', 'OSP', 'WAIT',
      /*_address_size:*/ 'A16', 'A32', 'A64',
      /*_operand_size:*/ 'O16', 'O32', 'O64',
      /*_segment_register:*/ 'CS', 'DS', 'SS', 'ES', 'FS', 'GS',
      '{REX}', '{EVEX}', '{VEX}', '{VEX2}', '{VEX3}'
    ].map(ci)),

    actual_instruction: $ => seq(
      $.word,
      choice(
        seq(ci('TO'), $.operand), // weird NASM syntax for float instructions
        optional(repeatSep1($.operand, ',')),
      ),
    ),
    pseudo_instruction: $ => choice(
      $._pseudo_instruction_dx,
      $._pseudo_instruction_resx,
      $._pseudo_instruction_incbin_command,
      $._pseudo_instruction_equ_command,
      $._pseudo_instruction_times_prefix,
      $._pseudo_instruction_alignx_macro,
    ),

//  #region pseudo instruction
    _pseudo_instruction_dx: $ => seq( // YYY: << DT, DO, DY and DZ do not accept numeric constants as operands. >>
      choice(...['DB', 'DW', 'DD', 'DQ', 'DT', 'DO', 'DY', 'DZ'].map(ci)),
      repeatSep1($.__pseudo_instruction_dx_value, ','),
    ),
    _pseudo_instruction_resx: $ => seq(
      choice(...['RESB', 'RESW', 'RESD', 'RESQ', 'REST', 'RESO', 'RESY', 'RESZ'].map(ci)),
      $.expression, // critical_expression
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
      $.expression, // critical_expression
      $.instruction,
    ),
    _pseudo_instruction_alignx_macro: $ => seq(
      choice(...['ALIGN', 'ALIGNB'].map(ci)),
      $.expression, // critical_expression
      optional($.instruction),
    ),

    __pseudo_instruction_dx_type: $ => choice(...[
      'BYTE', 'WORD', 'DWORD', 'QWORD', 'TWORD', 'OWORD', 'YWORD', 'ZWORD'
    ].map(ci)),
    __pseudo_instruction_dx_atom: $ => choice(
      $.expression,
      '?',
    ),
    __pseudo_instruction_dx_parlist: $ => seq(
      '(', repeatSep1($.__pseudo_instruction_dx_value, ','), ')',
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
      // YYY: `optional(choice('FAR', ..))`?
    ),

    register: $ => choice(...[
      'AL', 'AH', 'CL', 'CH', 'DL', 'DH', 'BL', 'BH', 'SPL', 'BPL', 'SIL', 'DIL', 'R8B', 'R9B', 'R10B', 'R11B', 'R12B', 'R13B', 'R14B', 'R15B',
      'AX', 'CX', 'DX', 'BX', 'SP', 'BP', 'SI', 'DI', 'R8W', 'R9W', 'R10W', 'R11W', 'R12W', 'R13W', 'R14W', 'R15W',
      'EAX', 'ECX', 'EDX', 'EBX', 'ESP', 'EBP', 'ESI', 'EDI', 'R8D', 'R9D', 'R10D', 'R11D', 'R12D', 'R13D', 'R14D', 'R15D',
      'RAX', 'RCX', 'RDX', 'RBX', 'RSP', 'RBP', 'RSI', 'RDI', 'R8', 'R9', 'R10', 'R11', 'R12', 'R13', 'R14', 'R15',
      // segment registers
      'CS', 'DS', 'SS', 'ES', 'FS', 'GS',
      // floating-point registers
      'ST0', 'ST1', 'ST2', 'ST3', 'ST4', 'ST5', 'ST6', 'ST7',
      // 64-bit MMX registers
      'MM0', 'MM1', 'MM2', 'MM3', 'MM4', 'MM5', 'MM6', 'MM7',
      // control registers
      'CR0', 'CR2', 'CR3', 'CR4',
      // debug registers
      'DR0', 'DR1', 'DR2', 'DR3', 'DR6', 'DR7',
      // test registers
      'TR3', 'TR4', 'TR5', 'TR6', 'TR7',
      // alternate register names
      'R0', 'R1', 'R2', 'R3', 'R4', 'R5', 'R6', 'R7',
      'R8L', 'R9L', 'R10L', 'R11L', 'R12L', 'R13L', 'R14L', 'R15L',
      'R0H', 'R1H', 'R2H', 'R3H',
      'R0L', 'R1L', 'R2L', 'R3L',
    ].map(ci)),

    effective_address: $ => seq(
      '[',
      // YYY: somehow, both optionals could even be moved to expression
      //      this (e.g./maybe) would enable weird macro to be still parsed
      optional(choice(...['BYTE', 'WORD', 'DWORD', 'NOSPLIT', 'REL', 'ABS'].map(ci))),
      optional(seq(choice(...['CS', 'DS', 'SS', 'ES', 'FS', 'GS'].map(ci)), ':')),
      $.expression,
      ']',
    ),

//  #region constant
    constant: $ => choice(
      $.constant_numeric,
      $.constant_charstr,
      $.constant_floatpt,
      $.constant_packbcd,
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
    constant_packbcd: $ => {
      // YYY: not covered: << can include up to 18 decimal digits >>
      return choice(
        /0[Pp][0-9_]*/, // yes, '*' and not '+'
        /[0-9][0-9_]*[Pp]/,
      );
    },
//  #endregion constant

//  #region expression
    expression: $ => choice(
      $.conditional_expression,
      $.binary_expression,
      $.unary_expression,
      $.call_syntax_expression,
      $.parenthesized_expression,
      $.grouped_expression,
      $.preproc_expression,
      $.word, // ie. identifier
      $.constant,
      '$',
      '$$',
    ),

    conditional_expression: $ => prec.right(1, seq( // YYY: right?
      $.expression, '?', $.expression, ':', $.expression,
    )),
    binary_expression: $ => {
      const ops = [
        [ci('WRT')],
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
        ['%+', '%,'], // preprocessor (hence higher precedence)
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
    call_syntax_expression: $ => prec(4, seq(
      $.word, // macro
      '(', repeatSep($.expression, ','), ')',
    )),
    parenthesized_expression: $ => seq(
      '(', $.expression, ')',
    ),
    grouped_expression: $ => seq(
      '{', repeatSep1($.expression, ','), '}',
    ),
    preproc_expression: $ => seq('%', choice(
      // environement variables
      seq(token.immediate('!'), token.immediate(choice(/[A-Z_a-z][0-9A-Z_a-z]+/, /'[^']*'/, /"[^"]*"/))),
      // "macro indirection" YYY: or `$.expression`?
      seq(token.immediate('['), $.word, ']'),
      // macro local and context local
      seq(token.immediate(choice('$', '$$', '%')), token.immediate(/[A-Za-z._?][A-Za-z0-9_$#@~.?]*/)),
      // macro context tokens
      token.immediate(choice('?', '??', '*?', '*??', '0', '00')),
      // macro parameters
      token.immediate(/[-+]?[0-9]+/),
      // other expansion
      seq(token.immediate('{'), $.expression, optional(seq(':', $.expression)), '}'), 
    )),
//  #endregion expression
// #endregion operand
//#endregion source_line

    comment: $ => /;(\\\r?\n|.)*/,
    // YYY: `@bidoof` sould not be valid as per the doc (same with `$@bidoof`)
    word: $ => prec(-5, /\$?[A-Za-z._?][A-Za-z0-9_$#@~.?]*/),

  },

});

/** to circumvent 'rule maches empty string' while not duplicating code */
function source_lines($) {
  return repeatSep1(
    optional(choice(
      $.struc_declaration,
      $.struc_instance,
      $.source_line,
      $.preproc_directive,
      $.assembl_directive,
    )),
    /\r?\n/,
  );
}

function repeatSep1(rule, sep) {
  return seq(
    rule,
    repeat(seq(sep, rule)),
  );
}

function repeatSep(rule, sep) {
  return optional(repeatSep1(rule, sep));
}

/**
 * @param {string} word
 * @see https://github.com/tree-sitter/tree-sitter/issues/261
 */
function ci(word) {
  const pat = word
    .split('')
    .map(c => c.toUpperCase() === c.toLowerCase()
      ? c
      : `[${c.toLowerCase()}${c.toUpperCase()}]`
    )
    .join('')
    ;
  return RegExp(pat, 'i');
}
