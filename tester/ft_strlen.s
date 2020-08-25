# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strlen.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lejulien <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/26 18:33:15 by lejulien          #+#    #+#              #
#    Updated: 2020/06/28 18:17:02 by lejulien         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
global _ft_strlen

_ft_strlen:
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
