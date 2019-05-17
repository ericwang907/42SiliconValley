# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zzeynalo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/14 20:41:29 by zzeynalo          #+#    #+#              #
#    Updated: 2019/04/14 21:25:41 by zzeynalo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2
NAME2 = rush-04

all:
	gcc -Wall -Wextra -Werror ft_calcs.c ft_functions.c \
	main.c ft_make_square.c ft_compare.c -o $(NAME)
	gcc -Wall -Wextra -Werror mainrush.c rush04.c -o $(NAME2)

clean:
	rm -f ft_calcs.o ft_funtions.o main.o ft_make_square.o ft_compare.o mainrush.o rush04.o

fclean: clean
	rm -f $(NAME)
	rm -f $(NAME2)
re: fclean all
