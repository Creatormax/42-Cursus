# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/15 16:09:33 by hmorales          #+#    #+#              #
#    Updated: 2022/01/17 17:41:28 by hmorales         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

SRCS =	so_long.c \

FLAGS = -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)

LIBFT= ./libft/libft.a

MLX= ./minilibx/libmlx.a

CC = gcc

all: $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -Imlx -c $< -o $@

$(NAME): $(OBJS) $(INCL) $(MLX)
	$(CC) $(FLAGS) $(SRCS) -Iincludes $(LIBFT) -Lmlx -lmlx -framework OpenGL -framework AppKit -o $(NAME)

$(LIBFT):
	@make bonus -C ./libft/
	
$(MLX):
	@make -C ./minilibx/

clean:
	@rm -rf $(OBJS)
	@echo "cleaning .o files"

fclean: clean
	@rm -rf $(NAME)

lclean:
	@make fclean -C ./libft/
	@make clean -C ./minilibx/

re: fclean all

.PHONY: all clean fclean re bonus