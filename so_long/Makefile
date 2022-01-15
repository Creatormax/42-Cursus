# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/15 16:09:33 by hmorales          #+#    #+#              #
#    Updated: 2022/01/15 17:58:30 by hmorales         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= 	so_long.a

SRCS	= 	so_long.c \

OBJS	= 	${SRCS:.c=.o}

CC		= 	gcc
RM		= 	rm -f

CFLAGS	= 	-Wall -Wextra -Werror

${NAME}: ${OBJS}
		ar rcs ${NAME} ${OBJS}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

all:	${NAME} ${OBJS}

re:		fclean all

.PHONY: all clean fclean re bonus