# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/17 16:46:17 by molesen           #+#    #+#              #
#    Updated: 2023/01/18 12:00:22 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

CC = c++ -Wall -Wextra -Werror -std=c++98 -std=c++11

SRC = main.cpp

all: $(NAME)
$(NAME): $(SRC)
	$(CC) $(SRC) -o $(NAME)

clean:
	/bin/rm -f $(NAME)

re: clean all

.PHONY: all clean re
