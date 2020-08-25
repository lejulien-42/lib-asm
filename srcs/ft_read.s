
section .text
global _ft_read

_ft_read:
	cmp rdx, 0
	je count_null
	mov rax, 0x2000003
	syscall
	ret

count_null:
	mov rax, 0
	ret
