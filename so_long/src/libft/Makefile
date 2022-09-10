# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mort0707 <maurice809@xfk48.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/20 00:00:48 by mort0707          #+#    #+#              #
#    Updated: 2022/06/16 20:44:43 by Maurice809       ###   Lausanne.ch        #
#                                                                              #
# **************************************************************************** #

# "Yak Cha Dai Phop Thoe" en Thai: อยากจะได้พบเธอ
# 
#  Et le premier single du groupe BNK48
#  Sortie le 2 juin 2017
# 
#  Center : Praewa Suthamphong (Music)

SRC_NAME	=	ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_strlen.c \
				ft_strdup.c \
				ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strncmp.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_strnstr.c \
				ft_atoi.c \
				ft_calloc.c \
				ft_substr.c \
                ft_strjoin.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putnbr_fd.c \
				ft_putendl_fd.c \
				ft_strtrim.c \
				ft_strmapi.c \
				ft_striteri.c \
				ft_itoa.c \
				ft_split.c\
				ft_printf.c \
                ft_args.c \
                ft_putchar.c \
                ft_putnbr.c \
                ft_putstr.c \
                ft_putptr.c 

BONUS		=	ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c 

OBJ_NAME	=	$(SRC_NAME:.c=.o)
SRC			=	$(SRC_NAME)

OBJ_BONUS	= 	$(BONUS:.c=.o)
SRC_BONUS	=   $(BONUS)

CC			=   gcc
CFLAGS		=	-Wall -Wextra -Werror -I.
NAME		=	libft.a

all:	$(NAME)

$(NAME):
	$(CC) -c $(CFLAGS) $(SRC) 
	ar rcs $(NAME) $(OBJ_NAME)

bonus:
	$(CC) -c $(CFLAGS) $(SRC) $(SRC_BONUS)
	ar rcs $(NAME) $(OBJ_NAME) $(OBJ_BONUS)

clean:
	rm -rf $(OBJ_NAME) $(OBJ_BONUS)

fclean:	clean
	rm -f $(NAME) $(OBJ_BONUS)

re: fclean all 

.PHONY:			all clean fclean re bonus
