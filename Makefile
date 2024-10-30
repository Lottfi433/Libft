# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/30 11:28:41 by yazlaigi          #+#    #+#              #
#    Updated: 2024/10/30 11:29:51 by yazlaigi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile for libft

# Variables
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = $(wildcard ft_*.c)
OBJ = $(SRC:.c=.o)

# Targets
all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
