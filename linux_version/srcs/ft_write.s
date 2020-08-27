
section .text
global ft_write

ft_write:
	mov rax, 1
	syscall
	jc _nullpointer
	ret

_nullpointer:
	mov rax, 3
	ret
