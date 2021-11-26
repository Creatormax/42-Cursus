NAME = libft.a

SRCS =	ft_isdigit.c \
		ft_memset.c \
		ft_isprint.c \
		ft_strlcat.c \
		ft_atoi.c \
		ft_strlcpy.c \
		ft_tolower.c \
		ft_bzero.c \
		ft_strlen.c \
		ft_toupper.c \
		ft_calloc.c \
		ft_memchr.c \
		ft_isalnum.c \
		ft_memcmp.c \
		ft_strncmp.c \
		ft_isalpha.c \
		ft_memcpy.c \
		ft_strchr.c \
		ft_strnstr.c \
		ft_isascii.c \
		ft_memmove.c \
		ft_strdup.c \
		ft_strrchr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_striteri.c \
		ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c \
		

BONUS = 	ft_lstnew_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstsize_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c \
			ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c \
			ft_lstiter_bonus.c \
			ft_lstmap_bonus.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_strlen.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strnstr.c \
			ft_atoi.c \
			ft_calloc.c \
			ft_itoa.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_split.c \
			ft_strdup.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_strmapi.c \
			ft_strtrim.c \
			ft_substr.c \
		
OBJS = ${SRCS:.c=.o}

BONUS_OBJS = ${BONUS:.c=.o}

CC		= gcc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}

bonus: ${BONUS_OBJS}
		@make OBJS="$(BONUS_OBJS)" all

clean:
		${RM} ${OBJS} ${BONUS_OBJS}

fclean:	clean
		${RM} ${NAME}

all: 	${NAME} ${OBJS} ${BONUS_OBJS}

re:		fclean all

.PHONY:	all clean fclean re bonus	