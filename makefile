SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
HEADERS = includes
OBJES = ${SRCS:.c=.o}
NAME = libft.a
GCC = gcc
AR = ar rc
CFLAGS = -Wall -Wextra -Werror -I ${HEADERS}
RM = rm -f

%.o : %.c
	   ${GCC} ${CFLAGS} -c $< -o $@
${NAME} : ${OBJES}
		${AR} $@ ${OBJES}

all: ${NAME}

clean:
		${RM} ${OBJES}

fclean: clean
		${RM} ${OBJES}

re:	fclean all

.PHONY: all clean fclean re
