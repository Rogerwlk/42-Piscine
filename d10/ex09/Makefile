# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rwang <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/10 20:19:23 by rwang             #+#    #+#              #
#    Updated: 2017/07/11 12:45:37 by rwang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRC = calculate.c io.c main.c valid.c

.PHONY : all clean fclean re

all : $(NAME)

$(NAME):
	gcc -o $(NAME) -Wall -Wextra -Werror $(SRC)

main.o : main.h io.h calculate.h ft_opp.h
valid.o : io.h valid.h

clean :
	rm -f *.o
fclean : clean
	rm -f $(NAME)
re : fclean all
