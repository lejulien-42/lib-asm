# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_read.s                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lejulien <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/28 03:50:49 by lejulien          #+#    #+#              #
#    Updated: 2020/06/28 04:08:17 by lejulien         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
global _ft_read

_ft_read:
	cmp rdx, 0
	je count_null
	mov rax, 0x000003
	syscall
	ret

count_null:
	mov rax, 0
	ret
