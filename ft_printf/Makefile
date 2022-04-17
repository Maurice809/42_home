# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Maurice809 <maurice809@hotmail.com         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/20 00:00:48 by Maurice809        #+#    #+#              #
#    Updated: 2022/04/17 14:30:22 by Maurice809       ###   Lausanne.ch        #
#                                                                              #
# **************************************************************************** #
#
# Faire des applications pour Mobile, C'est l'avenir !
#
# Mobile
# พิมรภัส ผดุงวัฒนะโชค
# PIMRAPAT PHADUNGWATANACHOK

SRC_NAME	=	ft_printf.c \
				ft_args.c \
				ft_putchar.c \
				ft_putnbr.c \
				ft_putstr.c \
				ft_putptr.c \


OBJ_NAME	=	$(SRC_NAME:.c=.o)
SRC		=	$(SRC_NAME)

CC		=   	gcc
CFLAGS		=	-Wall -Wextra -Werror -I.
NAME		=	libftprintf.a

all:	$(NAME)

$(NAME):
	$(CC) -c $(CFLAGS) $(SRC) 
	ar rcs $(NAME) $(OBJ_NAME)

clean:
	rm -rf $(OBJ_NAME)

fclean:	clean
	rm -f $(NAME)

re: fclean all 

.PHONY:			all clean fclean re

