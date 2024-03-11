NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS =	ft_printf.c \
		read_format.c \
		hex_functions.c \
		num_functions.c \
		strchr_functions.c

OBJS = ${SRCS:.c=.o}

all : ${NAME}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} -c ${SRCS}
	ar -rc $@ $^
	
clean:
	@echo "cleaning..."
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME} 

re: fclean all

.PHONY: all clean fclean