struc mytype2

mt_byte:
	resb	1
	alignb	2
mt_word:
	resw	1
	alignb	4
mt_long:
	resd	1
mt_str:
	resb	32

endstruc