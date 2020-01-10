 NAME	=	libftprintf.a

SRCS	=	ft_convert_to_char.c \
			ft_print_finalstring.c \
			ft_print_hexadecimals.c \
			ft_print_numbers.c \
			ft_printf_char.c \
			libft/ft_putchar_fd.c \
			libft/ft_atoi.c \
			libft/ft_itoa.c \
			libft/ft_isdigit.c \
			libft/ft_strdup.c \
			libft/ft_substr.c \
			libft/ft_strlen.c \
			libft/ft_strjoin.c \
			ft_printf.c

OBJS	:= ${SRCS:.c=.o}

CC		= gcc
CFLAGS	= -Wall -Werror -Wextra -I.
RM		= rm -f

all:	${NAME}

%.o: %.c
		${CC} ${CFLAGS} -c $< -o $@

%.o: libft/%.c
	${CC} ${CFLAGS} -c $< -o $@

${NAME}:${OBJS}
		ar rcs ${NAME} libft/*.o ${OBJS}

debug:
		$(CC) $(CFLAGS) -g $(SRCS) libft/ft_*.c -I libft

clean:
		${RM} ${OBJS}

fclean:	clean
		$(MAKE) -C libft fclean
		${RM} ${NAME} libft/*.o *.o

re:		fclean all
.PHONY: all ${NAME} clean fclean re
