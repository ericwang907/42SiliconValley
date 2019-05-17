 **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aleung <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/16 07:23:03 by aleung            #+#    #+#              #
#    Updated: 2019/04/16 11:03:27 by aleung           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = bsq
FLAG = -Wall -Werror -Wextra
INCLUDE = -I ./include
SRC = $(addprefix ./srcs/, $(SRCS))
SRCS = *.c 
OUTS = *.o
OBJS = $(SRCS:.c=.c)

all: $(NAME)

$(NAME):
	@$(CC) $(FLAG) $(INCLUDE) $(SRC) -o $(NAME)

clean:
	@rm -f ./$(OUTS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
