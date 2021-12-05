# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/27 21:08:54 by hmorales          #+#    #+#              #
#    Updated: 2021/12/05 19:22:44 by hmorales         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= 	libftprintf.a

SRCS	= 	ft_printf.c \
			ft_putchar_fd.c \

OBJS	= 	${SRCS:.c=.o}

CC		= 	gcc
RM		= 	rm -f

CFLAGS	= 	-Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
		ar rcs ${NAME} ${OBJS}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

all:	${NAME} ${OBJS}

re:		fclean all

.PHONY: all clean fclean re