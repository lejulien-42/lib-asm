
section .text
global _ft_write

_ft_write:
	mov rax, 0x2000004
	syscall
	jc _nullpointer
	ret

_nullpointer:
	mov rax, -1
	ret
