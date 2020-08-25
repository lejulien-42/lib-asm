section .text
global _ft_strcmp

_ft_strcmp:
	
	mov rcx, -1

loop:
	inc rcx
	mov al, [rsi + rcx]
	mov ah, [rdi + rcx]
	cmp ah, 0
	je test_rdi
	cmp al, 0
	je test_rsi
	cmp byte ah, al
	je loop

test_rdi:
	cmp al, 0
	je retzero
	sub byte ah, al
	mov al, ah
	movsx rax, al
	ret

test_rsi:
	cmp al, 0
	je retzero
	sub byte ah, al
	mov al, ah
	movsx rax, al
	ret

retzero:
	mov rax, 0
	ret
