SRCS	= ft_strlen.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isprint.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_split.c ft_putstr_fd.c ft_putchar_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_strdup.c ft_strjoin.c ft_tolower.c ft_toupper.c ft_strchr.c
OBJS	= ${SRCS:.c=.o}
INCS	= libft.h
NAME	= libft.a
LIBC	= ar rc
LIBR	= ranlib
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCS}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}
	${LIBR} ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all