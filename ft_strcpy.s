
section .text
global _ft_strcpy

_ft_strcpy:
	mov rax, -1
loop:
	inc rax
	mov dl, byte [rsi + rax]
	mov byte [rdi + rax], dl
	cmp dl, 0
	jne loop
	mov rax, rdi
	ret
