
section .text
global ft_read

ft_read:
	cmp rdx, 0
	je count_null
	mov rax, 0
	syscall
	ret

count_null:
	mov rax, 0
	ret
