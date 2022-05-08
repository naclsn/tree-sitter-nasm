	inst1	rax	; ok: instruction operand
	inst2	ray	; ko: label instruction
	inst3	raz, 1	; ko: label instruction ERROR operand
	inst3	1, raz	; ok: instruction operand operand