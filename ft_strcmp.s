
section .text
global _ft_strcmp

_ft_strcmp:
	mov rax, -1
loop:
	inc rax
	cmp byte [rsi + rax], 0
	je return
	cmp byte [rdi + rax], 0
	je return
	mov dl, byte [rsi + rax]
	cmp byte dl, byte [rdi + rax]
	je loop

return:
	mov dl, byte [rsi + rax]
	sub dl, byte [rdi + rax]
	mov rax, dl
	ret
