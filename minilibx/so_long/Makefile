# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/05 10:38:49 by Maurice809        #+#    #+#              #
#    Updated: 2022/04/14 13:59:48 by tmoret           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= so_long
OS		= $(shell uname)

# directories
SRCDIR	= ./src/projet
INCDIR	= ./src/includes
OBJDIR	= ./src/obj

# src / obj files
SRC		= main.c \
		  $(addprefix so_long/,$(shell ls $(SRCDIR)/so_long | grep -E ".+\.c"))

OBJ		= $(addprefix $(OBJDIR)/,$(SRC:.c=.o))

# compiler
CC		= clang
CFLAGS	= -Wall -Wextra -Werror -g


# mlx library
ifeq ($(OS), Linux)
	MLX		= ./src/minilibx-linux/
	MLX_LNK	= -L $(MLX) -l mlx -lXext -lX11
else
	MLX		= ./src/minilibx/
	MLX_LNK	= -L $(MLX) -l mlx -framework OpenGL -framework AppKit
endif

MLX_INC	= -I $(MLX)
MLX_LIB	= $(addprefix $(MLX),mlx.a)

# ft library
FT		= ./src/libft/
FT_LIB	= $(addprefix $(FT),libft.a)
FT_INC	= -I ./src/libft
FT_LNK	= -L ./src/libft -l ft -l pthread

all: obj $(FT_LIB) $(MLX_LIB) $(NAME)

obj:
	mkdir -p $(OBJDIR)
	mkdir -p $(OBJDIR)/so_long

$(OBJDIR)/%.o:$(SRCDIR)/%.c
	$(CC) $(CFLAGS) $(MLX_INC) $(FT_INC) -I $(INCDIR) -o $@ -c $<

$(FT_LIB):
	@make -C $(FT)

$(MLX_LIB):
	@make -C $(MLX)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(MLX_LNK) $(FT_LNK) -lm -o $(NAME)

clean:
	rm -rf $(OBJDIR)
	make -C $(FT) clean
	make -C $(MLX) clean

fclean: clean
	rm -rf $(NAME)
	make -C $(FT) fclean

re: fclean all
