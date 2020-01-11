 NAME	=	libftprintf.a

SRCS	=	ft_printf.c \
			ft_search.c \
			ft_printf_char.c \
			ft_printf_finalstring.c \
			ft_printf_int.c \
			ft_printf_string.c \
			libft/ft_itoa.c \
			libft/ft_strdup.c \
			libft/ft_strlen.c \
			ft_printf_number_hexadecimal.c \
			ft_printf_unsigned.c \
			libft/ft_itoa_unsigned.c \
			libft/ft_convert_hex.c \
			libft/ft_calloc.c \
			libft/ft_bzero.c \
			ft_printf_memory_direction.c \
			libft/ft_strjoin.c \
			ft_utils.c \
			ft_atoi.c \
			ft_isdigit.c

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
