# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: made-alm <made-alm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 19:21:41 by made-alm          #+#    #+#              #
#    Updated: 2023/10/30 20:39:31 by made-alm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror -g
RM = rm -rf
NAME = so_long
MINILIBX = ./minilibx
MLXFLAGS = -L $(MINILIBX) -lmlx -Ilmlx -lXext -lX11
LIBFTDIR = ./libft
LIBFT = ./libft/libft.a

SRCS = main.c checkargs.c check_map.c check_map2.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(MAKE) -C $(MINILIBX)
	@$(MAKE) -C $(LIBFTDIR)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -I $(MINILIBX) $(MLXFLAGS) -I $(LIBFTDIR) $(LIBFT)

clean:
	@$(RM) $(OBJS)
	@make clean -C ./libft
	@make clean -C ./minilibx

fclean : clean
	@rm $(NAME)
	@make fclean -C ./libft

re : fclean all

.PHONY: all, bonus, clean, fclean, re

.SILENT:

.DEFAULT_GOAL := all
