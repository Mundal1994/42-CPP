# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: molesen <molesen@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/14 11:05:29 by molesen           #+#    #+#              #
#    Updated: 2022/11/14 16:05:19 by molesen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

CC = c++ -Wall -Wextra -Werror -std=c++98

SRC = main.cpp
SRC += Bureaucrat.cpp

all: $(NAME)
$(NAME): $(SRC)
	$(CC) $(SRC) -o $(NAME)

clean:
	/bin/rm -f $(NAME)

re: clean all

.PHONY: all clean re
