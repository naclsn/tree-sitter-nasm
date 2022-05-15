# tree-sitter-nasm

NASM grammars with [tree-sitter](https://github.com/tree-sitter/tree-sitter).

References

* [NASM - The Netwide Assembler](https://www.nasm.us/xdoc/2.15/html/nasmdoc0.html)
* [official NASM git repository](https://github.com/netwide-assembler/nasm)

---

## Notes/Remarks

* an expression is an expression (e.g. no "critical expressions")
* macro reserved token are always allowed (e.g. `%0`) same with `$` and `$$`
* handling of e.g. struc and align standard macros (even though they are just macros)
* things like `j%-1` will fail (maybe `(instruction j (operand %+1))` or whatever)
* the fact that `':'` is optional after a label makes it inherently ambigus:
```
_start:
	word1	word2
	; 'word1' may be a macro or the label and
	; 'word2' the instruction or an operand
```
Here opts for `'word1'` as an instruction (and thus `'word2'` as its first operand).
