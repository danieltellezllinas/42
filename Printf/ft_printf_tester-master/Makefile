# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dtellez- <dtellez-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/11 23:40:46 by edramire          #+#    #+#              #
#    Updated: 2020/01/27 18:13:36 by dtellez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FTPRINT := ../
NAME = main
CREATE = create_main
FLAGS = -Wall -Wextra -Werror
CC = gcc $(FLAGS)
LIBS := -I $(FTPRINT) -L $(FTPRINT) -l ftprintf
#RUN := -D D -D I -D C -D X -D XX -D U -D P -D S
RUN := -D P -D S -D D -D I -D C -D X -D XX -D U

all: $(NAME)

$(NAME):
	gcc $(CREATE).c -o $(CREATE) $(RUN)
	./$(CREATE) > $(NAME).c
	$(MAKE) -C $(FTPRINT)
	cp $(NAME).c ft_$(NAME).c
	sed -i '' 's/printf(/ft_printf(/g' ft_$(NAME).c
	$(CC) $(NAME).c -o $(NAME) $(LIBS) $(BSD)
	$(CC) ft_$(NAME).c -o ft_$(NAME) $(LIBS) $(BSD)
	./$(NAME) > src.txt
	./ft_$(NAME) > dst.txt

bonus:
	gcc $(CREATE).c -o $(CREATE) -D BONUS $(RUN)
	./$(CREATE) > $(NAME).c
	$(MAKE) -C $(FTPRINT) bonus
	cp $(NAME).c ft_$(NAME).c
	sed -i $(SED) 's/printf(/ft_printf(/g' ft_$(NAME).c
	$(CC) $(NAME).c -o $(NAME) $(LIBS) $(BSD)
	$(CC) ft_$(NAME).c -o ft_$(NAME) $(LIBS) $(BSD)
	./$(NAME) > src.txt
	./ft_$(NAME) > dst.txt

clean:
	rm -rf *.txt
	rm -rf *.out
	rm -rf *.dSYM
	rm -rf ft_*.o

fclean: clean
	$(MAKE) -C $(FTPRINT) $@
	rm -rf $(NAME) ft_$(NAME)
	rm -rf $(NAME).c ft_$(NAME).c
	rm -rf $(CREATE)

re: fclean all
