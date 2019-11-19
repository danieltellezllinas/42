# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vtouffet <vtouffet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/18 16:30:59 by vtouffet          #+#    #+#              #
#    Updated: 2019/11/19 11:56:29 by dtellez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

SRCS=ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c\
	 ft_memcmp.c ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c\
	 ft_isprint.c ft_tolower.c ft_toupper.c ft_strchr.c ft_strrchr.c ft_strncmp.c\
	 ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_substr.c\
	 ft_strjoin.c ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\
	 ft_putnbr_fd.c ft_itoa.c ft_strdup.c ft_strtrim.c ft_strmapi.c ft_split.c

OBJECTS=ft_memset.o ft_bzero.o ft_memcpy.o ft_memccpy.o ft_memmove.o ft_memchr.o\
		ft_memcmp.o ft_strlen.o ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o\
		ft_isprint.o ft_tolower.o ft_toupper.o ft_strchr.o ft_strrchr.o ft_strncmp.o\
		ft_strlcpy.o ft_strlcat.o ft_strnstr.o ft_atoi.o ft_calloc.o ft_substr.o\
		ft_strjoin.o ft_strtrim.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o\
		ft_putnbr_fd.o ft_itoa.o ft_strdup.o ft_strtrim.o ft_strmapi.o ft_split.o

INCLUDES=./

all: $(NAME)

$(NAME): $(SRCS) libft.h
	@gcc -Wall -Wextra -Werror -I$(INCLUDES) -c $(SRCS)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(OBJECTS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
