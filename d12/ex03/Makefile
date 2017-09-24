# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rwang <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/13 19:40:40 by rwang             #+#    #+#              #
#    Updated: 2017/07/13 21:52:00 by rwang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_hexdump

OBJ = convert.o ft_hexdump.o ft_print_memory.o io.o g_addr.o

SRC = convert.c ft_hexdump.c ft_print_memory.c io.c g_addr.c

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
