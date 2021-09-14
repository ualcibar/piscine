# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ualcibar <ualcibar@student.42urduliz.      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/27 22:20:19 by ualcibar          #+#    #+#              #
#    Updated: 2021/06/27 22:25:33 by ualcibar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

CC = gcc

SRC = ft_captura.c count.c ft_dict.c ft_functions.c ft_leerdic.c ft_loops.c ft_print.c ft_validate.c 

CFLAGS += -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):
	$(CC) $(CFLAGS)  -o $(NAME) $(SRC)

clean:
	rm -f *.o

fclean:
	rm -f $(NAME)

re: fclean all
