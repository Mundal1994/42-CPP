# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: molesen <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 15:21:08 by molesen           #+#    #+#              #
#    Updated: 2022/10/31 15:21:11 by molesen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

CC = c++ -Wall -Wextra -Werror -std=c++98

SRC = main.cpp
SRC += zombieHorde.cpp

all: $(NAME)
$(NAME): $(SRC)
	$(CC) $(SRC) -o $(NAME)

clean:
	/bin/rm -f $(NAME)

re: clean all

.PHONY: all clean re
