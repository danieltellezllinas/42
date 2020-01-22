# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dtellez- <dtellez-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/11 15:11:07 by dtellez-          #+#    #+#              #
#    Updated: 2020/01/22 12:34:05 by dtellez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRCS	=	ft_printf.c \
			ft_search.c \
			ft_printf_char.c \
			ft_printf_finalstring.c \
			ft_printf_int.c \
			ft_printf_string.c \
			ft_printf_number_hexadecimal.c \
			ft_printf_unsigned.c \
			ft_printf_memory_direction.c \
			ft_utils.c \

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
		make -C libft
		ar rc ${NAME} libft/*.o ${OBJS}
debug:
		$(CC) $(CFLAGS) -g $(SRCS) libft/ft_*.c -I libft

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME} libft/*.o *.o

re:		fclean all
.PHONY: all clean fclean re
