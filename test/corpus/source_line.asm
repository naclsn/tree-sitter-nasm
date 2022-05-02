===
label: instuction operands
===
label:	mov	rax, 60

---
(source_file
  (source_line
    (label
      (word))
    (instruction
      (known_instruction)
      (operands
        (operand
          (register))
        (operand
          (constant
            (constant_numeric)))))))

===
label instuctions operand
===
label	add	rax, rbx

---
(source_file
  (source_line
    (label
      (word))
    (instruction
      (known_instruction)
      (operands
        (operand
          (register))
        (operand
          (register))))))

===
instuction operand
===
	inc	rax

---
(source_file
  (source_line
    (instruction
      (known_instruction)
      (operands
        (operand
          (register))))))

===
instuction
===
	syscall

---
(source_file
  (source_line
    (instruction
      (known_instruction))))

===
label:
===
label:

---
(source_file
  (source_line
    (label
      (word))))
