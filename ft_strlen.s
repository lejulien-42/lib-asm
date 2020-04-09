# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strlen.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lejulien <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/08 13:54:16 by lejulien          #+#    #+#              #
#    Updated: 2020/04/08 17:06:43 by lejulien         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
global _ft_strlen

_ft_strlen:
	mov rax, -1
loop:
	inc rax
	cmp byte [rdi + rax], 0
	jne loop
	ret

