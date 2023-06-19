CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
INC = -I./include
SRCS_DIR = ./srcs
FILES = ${SRCS_DIR}/ft_printf.c ${SRCS_DIR}/put_char.c \
			${SRCS_DIR}/put_string.c ${SRCS_DIR}/put_pointerall.c \
			${SRCS_DIR}/put_integer.c ${SRCS_DIR}/put_unsigint.c \
			${SRCS_DIR}/put_hex.c
OBJS = ${FILES:.c=.o}
NAME = libftprintf.a

all: ${NAME}

%.o: %.c
	${CC} ${CFLAGS} ${INC} -c $< -o $@

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

bonus: all

clean:
	@${RM} ${OBJS}

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re