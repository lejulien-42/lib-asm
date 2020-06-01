
section .text
global _ft_strcmp

_ft_strcmp:
	mov rcx, -1
loop:
	inc rcx
	mov dl, byte [rsi + rcx]
	cmp byte [rsi + rcx], 0
	je test_rdi
	cmp byte [rdi + rcx], 0
	je test_rsi
	cmp byte dl, byte [rdi + rcx]
	je loop

test_rdi:
	cmp byte [rdi + rcx], 0
	je retzero
	cmp byte dl, byte [rdi + rcx]
	jl retone
	jmp retminus

test_rsi:
	cmp byte [rsi + rcx], 0
	je retzero
	cmp byte dl, byte [rdi + rcx]
	jl retone
	jmp retminus

retzero:
	mov rax, 0
	ret

retone:
	mov rax, 1
	ret

retminus:
	mov rax, -1
	ret
