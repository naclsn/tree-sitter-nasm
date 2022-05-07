# tree-sitter-nasm

NASM grammars with [tree-sitter](https://github.com/tree-sitter/tree-sitter).

References

* [NASM - The Netwide Assembler](https://www.nasm.us/xdoc/2.15/html/nasmdoc0.html)

---

## Notes/Remarks

* does not distinguish between expressions and critical expressions
* for NASM, not all kind of expressions are valid everywhere, here they are
* macro reserved token are always allowed (e.g. `%0`) same with `$` and `$$`
* floating-points can be used event where NASM will reject them (and vice-versa for e.g. DT/DO/DY/DZ)
* the fact that `':'` is optional after a label makes it inherently ambigus:
```
_start:
	word1	word2
	; 'word1' may be a macro but it will be assumed
	; as being a label, and 'word2' the instruction
```
