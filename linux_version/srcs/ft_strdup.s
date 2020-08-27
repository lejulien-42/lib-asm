
section .text
global ft_strdup
extern malloc

ft_strdup:
	cmp rdi, 0
	jz null_str

strlen:
	mov rcx, -1

strlen_loop:
	inc rcx
	cmp byte [rdi + rcx], 0
	jne strlen_loop

allocating:
	push rdi
	mov rdi, rcx
	call malloc
	pop rdi
	cmp rax, 0
	jz null_str

copy:
	mov rcx, -1
	mov rdx, 0

copy_loop:
	inc rcx
	mov dl, byte [rdi + rcx]
	mov byte [rax, rcx], dl
	cmp dl, 0
	jnz copy_loop
	ret

null_str:
	mov rax, 0
	ret
