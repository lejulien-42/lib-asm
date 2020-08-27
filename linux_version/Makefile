# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lejulien <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/29 16:01:57 by lejulien          #+#    #+#              #
#    Updated: 2020/06/29 16:17:26 by lejulien         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 	./srcs/ft_read.s \
	   	./srcs/ft_strcmp.s \
	   	./srcs/ft_strcpy.s \
	   	./srcs/ft_strdup.s \
	   	./srcs/ft_strlen.s \
	   	./srcs/ft_write.s

OBJS =	$(SRCS:.s=.o)

FLAGS =	-f elf64

.s.o:
	nasm $(FLAGS) $<

NAME =	libasm.a

all:	$(NAME)

$(NAME):	$(OBJS)
			ar rc $(NAME) $(OBJS)
			ranlib $(NAME)

clean:
			/bin/rm -f $(OBJS)

fclean: clean
			/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
