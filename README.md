# tree-sitter-nasm

NASM grammars with [tree-sitter](https://github.com/tree-sitter/tree-sitter).

References

* [NASM - The Netwide Assembler](https://www.nasm.us/xdoc/2.15/html/nasmdoc0.html)

---

## Notes/Remarks

* The fact that `':'` is optional after a label makes it inherently ambigus:
```
_start:
	word1	word2
	; 'word1' may be a macro but it will be assumed
	; as being a label, and 'word2' the instruction
```

* A file by itself may not be syntaxically correct.
For example a single macro may span multiple files.
This in turn means that symbols such as `%0` can be valid outside a macro definition.
Here does not account for this; `%0` is always invalid outside a macro definition.
