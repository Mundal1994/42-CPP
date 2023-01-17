# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: molesen <molesen@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/17 16:46:17 by molesen           #+#    #+#              #
#    Updated: 2023/01/17 16:46:21 by molesen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

CC = c++ -Wall -Wextra -Werror -std=c++98

SRC = main.cpp

all: $(NAME)
$(NAME): $(SRC)
	$(CC) $(SRC) -o $(NAME)

clean:
	/bin/rm -f $(NAME)

re: clean all

.PHONY: all clean re
