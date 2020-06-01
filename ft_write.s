
section .text
global _ft_write

_ft_write:
	cmp rsi, byte 0x0
	jz _nullpointer
	mov rsi, 0x0
	mov rax, 0x20000BD
	syscall
	cmp rax, 9
	jz _nullpointer
	mov rax, 0x2000004
	ret

_nullpointer:
	mov rax, -1
	ret
