# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/11 15:11:07 by dtellez-          #+#    #+#              #
#    Updated: 2020/01/12 01:55:48 by dtellez-         ###   ########.fr        #
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

CC			=	gcc
FLAGS		=	-c -Wall -Wextra -Werror
LIB			=	ar rc
RLIB		=	ranlib
OBJS		=	$(SRCS:.c=.o)
LIBFT_DIR	=	libft/
LIBFT		=	libft.a

all: $(NAME)

$(NAME):
	@make -C $(LIBFT_DIR)
	@cp $(LIBFT_DIR)$(LIBFT) .
	@mv $(LIBFT) $(NAME)
	@echo "Reading ft_printf sources..."
	@$(CC) $(FLAGS) $(SRCS)
	@echo "Building ft_printf objects..."
	@$(LIB) $(NAME) $(OBJS)
	@echo "Compiling ft_printf..."
	@$(RLIB) $(NAME)

.PHONY: all clean fclean

clean:
	@make -C $(LIBFT_DIR) clean
	@echo "Cleaning ft_printf objects..."
	@rm -f $(OBJS) $(OBJSB)

fclean: clean
	@make -C $(LIBFT_DIR) fclean
	@echo "Cleaning libftprintf.a"
	@rm -f $(NAME) $(NAMEB)

re: fclean all
	@clear
	gcc ft_printf.c libftprintf.a && ./a.out	
