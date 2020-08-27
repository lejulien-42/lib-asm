section .text
global _ft_strcpy

_ft_strcpy:
	push rbp
	mov rbp, rsp
	mov [rbp-8], rdi
	mov rcx, -1

loop:
	inc rcx
	mov al, [rsi + rcx]
	cmp al, 0
	je returning
	mov [rdi + rcx], al
	jmp loop

returning:
	mov byte [rdi + rcx], 0
	mov rax, [rbp-8]
	pop rbp
	ret
