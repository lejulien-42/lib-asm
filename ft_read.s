# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_read.s                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lejulien <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/18 18:46:09 by lejulien          #+#    #+#              #
#    Updated: 2020/06/18 20:08:28 by lejulien         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
global _ft_read

_ft_read:
	cmp byte [rsi + 2], 0
	je count_null
	mov rax, 0x80	
	ret

count_null:
	mov rax, 0
	ret
