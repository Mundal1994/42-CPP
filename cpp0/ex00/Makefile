# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/12 10:09:38 by molesen           #+#    #+#              #
#    Updated: 2022/09/14 12:18:11 by jdavis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = c++ -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp

all: $(NAME)
$(NAME): $(SRC)
	$(CC) $(SRC) -o $(NAME)

clean:
	/bin/rm -f $(NAME)

re: clean all

.PHONY: all clean re
