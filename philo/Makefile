# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/01 17:40:26 by Maurice809        #+#    #+#              #
#    Updated: 2022/12/02 16:22:28 by Maurice809       ###   Lausanne.ch        #
#                                                                              #
# **************************************************************************** #

SRCS		= 	main.c \
				philo.c \
				philo_check.c \
				philo_utils.c
			 
OBJS		= 	${SRCS:.c=.o}

NAME		= 	philo

CC			= 	gcc

RM			= 	rm -rf

CFLAGS		= 	-g -Wall -Wextra -Werror # -fsanitize=address #-Weverything

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}
norm:	
			norminette ${SRCS} philo.h
clean:	
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re	
