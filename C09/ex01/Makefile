# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/05 11:58:28 by bepoisso          #+#    #+#              #
#    Updated: 2024/08/05 12:31:42 by bepoisso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC=./src/
HEAD=./includes/
CC=gcc
CFLAGS=-Wall -Wextra -Werror

all:
	$(CC) $(CFLAGS) 	

libft.a:
	$(CC) $(CFLAGS) $(SRC)ft_putchar.c $(SRC)ft_swap.c $(SRC)ft_putstr.c $(SRC)ft_strlen.c $(SRC)ft_strcmp.c $(HEAD)ft.h && ar rc libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
clean:

fclean:

re:
