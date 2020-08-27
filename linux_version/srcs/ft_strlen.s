
section .text
global ft_strlen

ft_strlen:
	push rbp
	mov rbp, rsp
	mov rcx, -1

loop:
	inc rcx
	cmp byte [rdi + rcx], 0
	jne loop
	mov rax, rcx
	mov rsp, rbp
	pop rbp
	ret
