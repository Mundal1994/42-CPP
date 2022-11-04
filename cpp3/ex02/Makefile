# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: molesen <molesen@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 12:48:16 by molesen           #+#    #+#              #
#    Updated: 2022/11/04 16:15:06 by molesen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

CC = c++ -Wall -Wextra -Werror -std=c++98

SRC = main.cpp
SRC += ClapTrap.cpp
SRC += ScavTrap.cpp

all: $(NAME)
$(NAME): $(SRC)
	$(CC) $(SRC) -o $(NAME)

clean:
	/bin/rm -f $(NAME)

re: clean all

.PHONY: all clean re
