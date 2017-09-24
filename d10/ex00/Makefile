# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rwang <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/10 16:12:50 by rwang             #+#    #+#              #
#    Updated: 2017/07/11 11:46:32 by rwang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

OBJECTS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

SRC = src/ft_putchar.c src/ft_putstr.c src/ft_strcmp.c src/ft_strlen.c \
	  src/ft_swap.c

HEADER = includes/

vpath %.c src
vpath %.h includes

.PHONY : all clean fclean re

all : $(NAME)

$(NAME) :
	gcc -I $(HEADER) -Wall -Wextra -Werror -c $(SRC)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean :
	rm -f $(OBJECTS)

fclean : clean
	rm -f $(NAME)

re : fclean all
