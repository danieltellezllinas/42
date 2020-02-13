# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dtellez- <dtellez-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/13 18:18:13 by dtellez-          #+#    #+#              #
#    Updated: 2020/02/13 18:26:15 by dtellez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS:= cub3D.c

OBJS:= 

NAME:= cub3D
CC:= gcc
CFLAGS := -Wall -Werror -Wextra
INCLUDE1:= -I /usr/local/include
INCLUDE2:= -L /usr/local/lib/
MLX:= -lmlx -framework OpenGL -framework AppKit
RM:= rm -f

all: $(NAME)

$(NAME):
			$(CC) $(INCLUDE1) $(SRCS) $(INCLUDE2) $(MLX) -o $(NAME)

clean:
		$(RM) $(NAME)