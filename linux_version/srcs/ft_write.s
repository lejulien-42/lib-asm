
section .text
global ft_write

ft_write:
	mov rax, 4
	syscall
	jc _nullpointer
	ret

_nullpointer:
	mov rax, -1
	ret
