# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rwang <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/13 22:09:46 by rwang             #+#    #+#              #
#    Updated: 2017/07/13 22:36:05 by rwang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail

SRC = convert.c io.c ft_tail.c io2.c

OBJ = convert.o io.o ft_tail.o io2.o

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
