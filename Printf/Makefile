# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dtellez- <dtellez-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/11 15:11:07 by dtellez-          #+#    #+#              #
#    Updated: 2020/01/22 16:21:24 by dtellez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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

OBJ = ${SRCS:.c=.o}

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I.

%.o:	%.c
		${CC} ${CFLAGS} -c $< -o $@

all:	$(NAME)

$(NAME): ${OBJ}
		make -C libft
		ar rc ${NAME} libft/*.o ${OBJ}

debug:
		$(CC) $(CFLAGS) -g $(SRCS) libft/ft_*.c -I libft

clean:
		rm -f ${OBJ}

fclean:	clean
		rm -f ${NAME} libft/*.o *.o

re:		fclean all
.PHONY:	all clean fclean re
