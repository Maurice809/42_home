# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mort0707 <maurice809@xfk48.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/20 00:00:77 by mort0707          #+#    #+#              #
#    Updated: 2022/02/19 22:41:18 by Maurice809       ###   Lausanne.ch        #
#                                                                              #
# **************************************************************************** #
#
# Dans le monde de idole le therme de "CENTER"
#
# Signifie que l'attention du single et du titre, sera particulièrement porter 
# sur elle et qu'elle augmentera sa popularité auprès des fans, de la presse 
# et les réseaux sociaux.
# 
# Ce poste est très important pour la suite de sa carrière, cela peut aboutir 
# à un rôle dans un Drama ou autre collaboration auprès dans le divertissement 
# pour adulte.  
#

NAME        =   server

NAME2		=   client

COPY		=	cp

SRC_NAME    =   minitalk.c \
				ft_printf.c

OBJ_NAME    =   $(SRC_NAME:.c=.o)

SRC         =   $(SRC_NAME)

# Choix du compilateur
CC			=	cc

# Choix des flags de compilation
CFLAGS=-Wall -Werror -Wextra 

all:    $(NAME)

$(NAME):
	$(CC) -o $(NAME) $(CFLAGS) $(SRC) 
	@$(COPY) $(NAME) $(NAME2)
 
clean:
	@rm -rf $(OBJ_NAME)

fclean: clean
	rm -f $(NAME)
	@rm -f $(NAME2)

re: fclean all

.PHONY:			all clean fclean re
