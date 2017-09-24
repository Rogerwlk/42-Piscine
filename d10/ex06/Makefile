# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rwang <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/10 20:19:23 by rwang             #+#    #+#              #
#    Updated: 2017/07/11 12:46:14 by rwang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRC = calculate.c io.c main.c valid.c

.PHONY : all clean fclean re

all : $(NAME)

$(NAME):
	gcc -o $(NAME) -Wall -Wextra -Werror $(SRC)

io.o : io.h
main.o : main.h io.h calculate.h
valid.o : io.h valid.h
calculate.o : calculate.h

clean :
	rm -f *.o
fclean : clean
	rm -f $(NAME)
re : fclean all
