/// <reference path="node_modules/tree-sitter-cli/dsl.d.ts" />
module.exports = grammar({

  name: 'nasm',

  extras: $ => [
    $.comment,
    /\s|\\\r?\n/,
  ],

  conflicts: $ => [
    [$.actual_instruction, $.label],
    [$.operand, $._expression],
    [$.__pseudo_instruction_dx_atom, $._constant],
    [$.__pseudo_instruction_dx_list],
    [$.__pseudo_instruction_dx_atom, $.parenthesized_expression],
    [$.body],
    [$.struc_declaration_body],
    [$.struc_instance_body],
  ],

  rules: {

    source_file: $ => _source_lines($),
    body: $ => seq(_source_lines($), /\r?\n/),

//#region struc
    struc_declaration_body: $ => seq(
      repeatSep(
        seq(
          optional($.label),
          optional(choice(
            $.pseudo_instruction_resx,
            $.pseudo_instruction_alignx_macro,
          )),
        ),
        /\r?\n/,
      ),
      /\r?\n/,
    ),
    struc_declaration: $ => seq(
      ci('STRUC'),
      field('name', $.word),
      /\r?\n/,
      field('body', $.struc_declaration_body),
      ci('ENDSTRUC'),
    ),

    struc_instance_body: $ => seq(
      repeatSep(
        seq(
          optional($.label),
          optional(
            seq(
              ci('AT'), $.word,
              optional(seq(',', $.pseudo_instruction_dx)),
            ),
          ),
        ),
        /\r?\n/,
      ),
      /\r?\n/,
    ),
    struc_instance: $ => seq(
      ci('ISTRUC'),
      field('name', $.word),
      /\r?\n/,
      field('body', $.struc_instance_body),
      ci('IEND'),
    ),
//#endregion struc

    // using this (rather than eg. `choice(optional(..), optional(..))`) is to avoid matching empty string
    // ends up the same as `source_line` is used inside an `optional` (see `source_lines`)
    source_line: $ => choice(
      $.label,
      $.instruction,
      seq($.label, $.instruction),
    ),

//#region preproc_directive
    _preproc_directive: $ => choice(
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
    ),

    preproc_def: $ => seq(
      choice(...[
        '%DEFINE', '%IDEFINE', '%XDEFINE',
        '%DEFSTR', '%IDEFSTR',
        '%DEFTOK', '%IDEFTOK',
        '%DEFALIAS', '%IDEFALIAS',
        '%STRCAT', '%STRLEN', '%SUBSTR',
      ].map(ci)),
      field('name', $.word),
      token.immediate(/[^(]/), // hack to get preproc_function_def over preproc_def
      field('value', alias(/(\\\r?\n|.)*/, $.preproc_arg)), // expression
    ),
    preproc_function_def_parameters: $ => seq(
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
    ),
    preproc_function_def: $ => seq(
      choice(...['%DEFINE', '%IDEFINE', '%XDEFINE'].map(ci)),
      field('name', $.word),
      field('parameters', $.preproc_function_def_parameters),
      field('value', alias(/(\\\r?\n|.)*/, $.preproc_arg)), // expression
    ),
    preproc_undef: $ => seq(
      choice(...['%UNDEF', '%UNDEFALIAS'].map(ci)),
      field('name', $.word),
    ),
    preproc_alias: $ => seq(
      choice(...['%ALIASES', '%IFDEFALIAS'].map(ci)),
      field('name', $.word),
      field('value', $.word),
    ),
    preproc_multiline_macro_arg_spec: $ => /[0-9]+(-[*0-9])?\+?(.nolist)?/,
    preproc_multiline_macro: $ => seq(
      choice(...['%MACRO', '%IMACRO'].map(ci)),
      field('name', $.word),
      field('spec', $.preproc_multiline_macro_arg_spec),
      field('default', repeatSep($._expression, ',')),
      /\r?\n/,
      field('body', $.body),
      ci('%ENDMACRO'),
    ),
    preproc_multiline_unmacro: $ => seq(
      ci('%UNMACRO'),
      field('name', $.word),
      field('spec', $.preproc_multiline_macro_arg_spec),
    ),
    preproc_if: $ => {
      function _make_n(base) { return 'N' + base; }
      function _make_if(base) { return '%IF' + base; }
      function _make_elif(base) { return '%ELIF' + base; }
      const bases = ['', 'CTX', 'DEF', 'EMPTY', 'ENV', 'ID', 'IDN', 'IDNI', 'MACRO', 'NUM', 'STR', 'TOKEN'];
      const ifs = [...bases.map(_make_if), ...bases.map(_make_n).map(_make_if)];
      const elifs = [...bases.map(_make_elif), ...bases.map(_make_n).map(_make_elif)]; // ifs.map(it => 'EL'+it);
      return seq(
        choice(...ifs.map(ci)),
        field('condition', $._expression), // preproc_expression? (critical_expression?)
        /\r?\n/,
        field('consequence', $.body),
        repeat(field('alternative', seq(
          choice(...elifs.map(ci)),
          field('condition', $._expression), // preproc_expression? (critical_expression?)
          /\r?\n/,
          field('consequence', $.body),
        ))),
        optional(field('alternative', seq(
          ci('%ELSE'),
          /\r?\n/,
          field('consequence', $.body),
        ))),
        ci('%ENDIF'),
      );
    },
    preproc_rotate: $ => seq(
      ci('%ROTATE'),
      $._expression, // preproc_expression? (critical_expression?)
    ),
    preproc_rep_loop: $ => seq(
      ci('%REP'),
      field('count', $._expression), // preproc_expression? (critical_expression?)
      /\r?\n/,
      field('body', $.body),
      ci('%ENDREP'),
    ),
    preproc_include: $ => seq(
      ci('%INCLUDE'),
      field('path', $.string_literal),
    ),
    preproc_pathsearch: $ => seq(
      ci('%PATHSEARCH'),
      $.word,
      field('path', $.string_literal),
    ),
    preproc_depend: $ => seq(
      ci('%DEPEND'),
      field('path', $.string_literal),
    ),
    preproc_use: $ => seq(
      ci('%USE'),
      field('path', $.string_literal),
    ),
    preproc_push: $ => seq(
      ci('%PUSH'),
      optional(field('name', $.word)),
    ),
    preproc_pop: $ => seq(
      ci('%POP'),
      optional(field('name', $.word)),
    ),
    preproc_repl: $ => seq(
      ci('%REPL'),
      optional(field('name', $.word)),
    ),
    preproc_arg: $ => seq(
      ci('%ARG'),
      repeatSep1(
        seq(
          field('name', $.word), ':',
          field('size', $.size_hint),
        ),
        ',',
      ),
    ),
    preproc_stacksize: $ => seq(
      ci('%STACKSIZE'),
      choice(...['FLAT', 'FLAT64', 'LARGE', 'SMALL'].map(ci)),
    ),
    preproc_local: $ => seq(
      ci('%LOCAL'),
      repeatSep1(
        seq(
          field('name', $.word), ':',
          field('size', $.size_hint),
        ),
        ',',
      ),
    ),
    preproc_reporting: $ => seq(
      choice(...['%ERROR', '%WARNING', '%FATAL'].map(ci)),
      field('message', alias(/(\\\r?\n|.)*/, $.string_literal)), // constant_charstr (not quite)
    ),
    preproc_pragma: $ => seq(
      ci('%PRAGMA'),
      field('namespace', $.word),
      field('directive', $.word),
      optional(field('argument', alias(/(\\\r?\n|.)*/, $.string_literal))),
    ),
    preproc_line: $ => seq(
      ci('%LINE'),
      /[0-9]+(\+[0-9]+)?/,
      optional(field('path', alias(/(\\\r?\n|.)*/, $.string_literal))), // constant_charstr
    ),
    preproc_clear: $ => seq(
      ci('%CLEAR'),
      optional(choice(...['GLOBAL', 'CONTEXT'].map(ci))),
      repeat(choice(...['DEFINE', 'DEFALIAS', 'ALLDEFINE', 'MACRO', 'ALL'].map(ci))),
    ),
//#endregion preproc_directive

//#region assembl_directive
    _assembl_directive: $ => {
      /**
       * the ones described in the `rules` property of the
       * grammar are user forms
       * 
       * primitive forms are crafted from them here
       */
      function _prim_from_user(rule) {
        const baseName = (rule.name || rule.value).replace(
          "assembl_directive_",
          "assembl_directive_primitive_",
        );
        return alias(seq('[', rule, ']'), $[baseName]);
      }
      const user = [
        $.assembl_directive_target,
        $.assembl_directive_defaults,
        $.assembl_directive_sections,
        $.assembl_directive_absolute,
        $.assembl_directive_symbols, // YYY: << like EXTERN and GLOBAL, the primitive form of COMMON differs from the
        $.assembl_directive_common,  //         user-level form only in that it can take only one argument at a time >>
        $.assembl_directive_symbolfixes,
        $.assembl_directive_cpu,
        $.assembl_directive_floathandling,
        $.assembl_directive_org, // YYY: not presented as an assembler directive..? does it have a primitive form again?
        $.assembl_directive_sectalign, // YYY: 'ON' and 'OFF' in primitive form? probably not
      ];
      const primitive = user.map(_prim_from_user);
      return choice(
        ...user,
        ...primitive,
        _prim_from_user(alias(seq( // no user form for [WARNING]
          ci('WARNING'),
          choice(
            /[-*+]\w[-\w]+/, // 'all', 'bad-pragma', 'bnd', 'environment', 'float', 'float-denorm', 'float-overflow', 'float-toolong', 'float-underflow', 'hle', 'label', 'label-orphan', 'label-redef', 'label-redef-late', 'lock', 'macro', 'macro-defaults', 'macro-params', 'macro-params-legacy'
            ci('PUSH'),
            ci('POP'),
          ),
        ), $.assembl_directive_warning)),
        _prim_from_user(alias(seq( // no user form for [MAP]
          ci('MAP'),
          optional(choice(...['ALL', 'BRIEF', 'SECTIONS', 'SEGMENTS', 'SYMBOLS'].map(ci))),
          field('filename', $.word), // no, it is not quoted
        ), $.assembl_directive_map)),
      );
    },

    assembl_directive_target: $ => choice(
      seq(ci('BITS'), field('target', /[0-9]+/)), // '16', '32', '64'
      ci('USE16'),
      ci('USE32'),
    ),
    assembl_directive_defaults: $ => seq(
      ci('DEFAULT'),
      choice(...['REL', 'ABS', 'BND', 'NOBND'].map(ci))
    ),
    assembl_directive_sections_properties: $ => repeat1(seq(
      /[A-Za-z]+/,
      optional(seq('=', $._expression)),
    )), // 'PROGBITS', 'NOBITS', 'ALIGN='critical_expression, 'START='critical_expression, 'VSTART='critical_expression, 'FOLLOWS='word, 'VFOLLOWS='word
    assembl_directive_sections: $ => seq(
      choice(...['SECTION', 'SEGMENT'].map(ci)),
      field('name', $.word),
      optional(field('properties', $.assembl_directive_sections_properties)),
    ),
    assembl_directive_absolute: $ => seq(
      ci('ABSOLUTE'),
      $._expression, // critical_expression
    ),
    assembl_directive_symbols: $ => seq(
      // YYY: grouping all 4 is a bit hacky as they do not have the exact same syntax apparently (e.g. see 7.9)
      choice(...['EXTERN', 'REQUIRED', 'GLOBAL', 'STATIC'].map(ci)),
      repeatSep1(
        seq(
          field('name', $.word),
          optional(field('extension', alias(seq(':', /[^,]+/), $.symbol_extension))),
        ),
        ',',
      ),
    ),
    assembl_directive_common: $ => seq(
      ci('COMMON'),
      field('name', $.word),
      field('value', $._expression), // critical_expression
      optional(field('extension', alias(seq(':', /[^,]+/), $.symbol_extension))),
    ),
    assembl_directive_symbolfixes: $ => seq(
      choice(...[
        'PREFIX', 'GPREFIX', 'LPREFIX',
        'POSTFIX', 'GPOSTFIX', 'LPOSTFIX',
      ].map(ci)),
      field('name', $.word),
    ),
    assembl_directive_cpu: $ => seq(
      ci('CPU'),
      field('dependency', alias(/[-0-9A-Z_a-z]+/, $.cpu_instruction_set)), // '8086', '186', '286', '386', '486', '586', 'PENTIUM', '686', 'PPRO', 'P2', 'P3', 'KATMAI', 'P4', 'WILLAMETTE', 'PRESCOTT', 'X64', 'IA64' [... 16 more]
    ),
    assembl_directive_floathandling: $ => seq(
      ci('FLOAT'),
      choice(...['DAZ', 'NODAZ', 'NEAR', 'UP', 'DOWN', 'ZERO', 'DEFAULT'].map(ci)),
    ),
    assembl_directive_org: $ => seq(
      ci('ORG'),
      $._expression, // critical_expression
    ),
    assembl_directive_sectalign: $ => seq(
      ci('SECTALIGN'),
      choice(
        ci('ON'),
        ci('OFF'),
        /[0-9]+/,
      ),
    ),
//#endregion assembl_directive

//#region source_line
    label: $ => seq(
      field('name', choice(
        $.word,
        seq('%%', token.immediate(/[A-Za-z._?][A-Za-z0-9_$#@~.?]*/)),
      )),
      optional(':'),
    ),

// #region instruction
    instruction: $ => seq(
      repeat($.instruction_prefix),
      choice(
        $.actual_instruction,
        $._pseudo_instruction,
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
      field('instruction', $.word),
      optional(field('operands', $.operands)),
    ),
    _pseudo_instruction: $ => choice(
      $.pseudo_instruction_dx,
      $.pseudo_instruction_resx,
      $.pseudo_instruction_incbin_command,
      $.pseudo_instruction_equ_command,
      $.pseudo_instruction_times_prefix,
      $.pseudo_instruction_alignx_macro,
    ),

//  #region pseudo instruction
    pseudo_instruction_dx: $ => seq(
      choice(...['DB', 'DW', 'DD', 'DQ', 'DT', 'DO', 'DY', 'DZ'].map(ci)),
      repeatSep1($.__pseudo_instruction_dx_value, ','),
    ),
    pseudo_instruction_resx: $ => seq(
      choice(...['RESB', 'RESW', 'RESD', 'RESQ', 'REST', 'RESO', 'RESY', 'RESZ'].map(ci)),
      $._expression, // critical_expression
    ),
    pseudo_instruction_incbin_command: $ => seq(
      ci('INCBIN'),
      field('path', $._expression), // constant_charstr
      optional(seq(
        ',',
        field('offset', $._expression),
        optional(seq(
          ',',
          field('length', $._expression),
        )),
      )),
    ),
    pseudo_instruction_equ_command: $ => seq(
      ci('EQU'), // XXX/FIXME: requires a label before it
      $._expression,
    ),
    pseudo_instruction_times_prefix: $ => seq(
      ci('TIMES'),
      field('count', $._expression), // critical_expression
      $.instruction,
    ),
    pseudo_instruction_alignx_macro: $ => seq(
      choice(...['ALIGN', 'ALIGNB'].map(ci)),
      $._expression, // critical_expression
      optional(seq(',', $.instruction)),
    ),

    __pseudo_instruction_dx_type: $ => $.size_hint,
    __pseudo_instruction_dx_atom: $ => choice(
      $._expression,
      '?',
    ),
    __pseudo_instruction_dx_parlist: $ => seq(
      '(', repeatSep1($.__pseudo_instruction_dx_value, ','), ')',
    ),
    __pseudo_instruction_dx_duplist: $ => seq(
      $._expression,
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
    operands: $ => choice(
      seq(ci('TO'), $.operand), // weird NASM syntax for float instructions
      repeatSep1($.operand, ','),
    ),
    operand: $ => seq(
      optional($.operand_prefix),
      choice(
        $.register,
        $.effective_address,
        $._expression,
      ),
    ),

    operand_prefix: $ => seq(
      optional(ci('STRICT')),
      $.size_hint,
      // YYY: `optional(choice('FAR', ..))`?
    ),

    size_hint: $ => choice(...['BYTE', 'WORD', 'DWORD', 'QWORD', 'TWORD', 'OWORD', 'YWORD', 'ZWORD'].map(ci)),

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
      field('hint', repeat(choice(...['BYTE', 'WORD', 'DWORD', 'NOSPLIT', 'REL', 'ABS'].map(ci)))),
      field('segment', optional(seq(choice(...['CS', 'DS', 'SS', 'ES', 'FS', 'GS'].map(ci)), ':'))),
      $._expression,
      // YYY: could do with better mib expression handling
      optional(seq(',', $._expression)),
      ']',
    ),

//  #region constant
    _constant: $ => choice(
      $.number_literal,
      $.string_literal,
      $.float_literal,
      $.packed_bcd_literal,
    ),

    number_literal: $ => {
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
    string_literal: $ => choice(
      /'(\\\r?\n|[^'\n])*'/,
      /"(\\\r?\n|[^"\n])*"/,
      /`(\\\r?\n|\\.|[^\\`\n])*`/,
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
    float_literal: $ => {
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
          RegExp(`0[${fixes}][${digits}_]*\\.${frac}(${expn})?`), // try with a period
          RegExp(`0[${fixes}][${digits}_]*(${expn})`), // no period, try with an exponent
        ];
      }
      const O9 = '0123456789';
      const OF = O9+'ABCDEFabcdef';
      return choice(
        // no prefix decimal (with and without period)
        RegExp(`[${O9}][${O9}_]*\\.[${O9}_]*([Ee][-+]?[${O9}_]+)?`),
        RegExp(`[${O9}][${O9}_]*[Ee][-+]?[${O9}_]+`),
        // $-prefix hexadecimal (with and without period)
        RegExp(`\\$[${O9}][${OF}_]*\\.[${OF}_]*([Ee][-+]?[${OF}_]+|[Pp][-+]?[${O9}_]+)?`),
        RegExp(`\\$[${O9}][${OF}_]*([Ee][-+]?[${OF}_]+|[Pp][-+]?[${O9}_]+)`),
        ..._make_flt('HXhx', OF, 'Ee', OF),
        ..._make_flt('HXhx', OF, 'Pp', O9),
        ..._make_flt('DTdt', O9, 'Ee', O9),
        ..._make_flt('OQoq', '01234567', 'Pp', O9),
        ..._make_flt('BYby', '01', 'Pp', O9),
      );
    },
    packed_bcd_literal: $ => {
      // not covered: << can include up to 18 decimal digits >>
      return choice(
        /0[Pp][0-9_]*/, // yes, '*' and not '+'
        /[0-9][0-9_]*[Pp]/,
      );
    },
//  #endregion constant

//  #region expression
    _expression: $ => choice(
      $.conditional_expression,
      $.binary_expression,
      $.unary_expression,
      $.call_syntax_expression,
      $.parenthesized_expression,
      $.grouped_expression,
      $.preproc_expression,
      $.register,
      $.word,
      $._constant,
      alias('$', $.line_here_token),
      alias('$$', $.section_here_token),
    ),

    conditional_expression: $ => prec.right(1, seq(
      field('condition', $._expression),
      '?',
      field('consequence', $._expression),
      ':',
      field('alternative', $._expression),
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
            field('left', $._expression),
            field('operator', op),
            field('right', $._expression),
          )),
        ),
      ), []))); // [] is reduce's `initialValue`
    },
    unary_expression: $ => prec.left(3, seq(
      field('operator', choice('-', '+', '~', '!', ci('SEG'))),
      field('argument', $._expression),
    )),
    call_syntax_arguments: $ => seq('(', repeatSep($._expression, ','), ')'),
    call_syntax_expression: $ => prec(4, seq(
      field('base', $.word),
      field('arguments', $.call_syntax_arguments),
    )),
    parenthesized_expression: $ => seq(
      '(', $._expression, ')',
    ),
    grouped_expression: $ => seq(
      '{', repeatSep1($._expression, ','), '}',
    ),
    preproc_expression: $ => choice(
      // environement variables
      /%!([A-Z_a-z][0-9A-Z_a-z]+|'[^']*'|"[^"]*")/,
      // "macro indirection"
      seq('%[', $._expression, ']'),
      // macro local and context local
      /%(\$|\$\$|%)[A-Za-z._?][A-Za-z0-9_$#@~.?]*/,
      // macro context tokens
      choice('%?', '%??', '%*?', '%*??', '%0', '%00'),
      // macro parameters
      /%[-+]?[0-9]+/,
      // other expansion
      seq('%{', $._expression, optional(seq(':', $._expression)), '}'),
    ),
//  #endregion expression
// #endregion operand
//#endregion source_line

    comment: $ => /;(\\\r?\n|.)*/,
    // note: `@bidoof` sould not be valid as per the doc (same with `$@bidoof`)
    word: $ => prec(-5, /\$?[A-Za-z._?][A-Za-z0-9_$#@~.?]*/),

  },

});

/** to circumvent 'rule maches empty string' while not duplicating code */
function _source_lines($) {
  return repeatSep(
    optional(choice(
      $.struc_declaration,
      $.struc_instance,
      $.source_line,
      $._preproc_directive,
      $._assembl_directive,
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
  return RegExp(pat);
}
