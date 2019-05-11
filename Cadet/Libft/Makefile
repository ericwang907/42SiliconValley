# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: erwang <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/29 17:20:48 by erwang            #+#    #+#              #
#    Updated: 2019/05/09 18:05:40 by erwang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libft.a
FLAG = -Wall -Wextra -Werror
INCLUDE = -I .
SRCS = *.c
OBJS = *.o

all: $(NAME)

$(NAME):
	@$(CC) $(FLAG) -o $(NAME)

clean:
	@rm -f ./$(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
