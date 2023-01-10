
NAME = converter

CC = c++ -Wall -Wextra -Werror -std=c++98

SRC = converter.hpp
SRC += converter.cpp

all: $(NAME)
$(NAME): $(SRC)
	$(CC) $(SRC) -o $(NAME)

clean:
	/bin/rm -f $(NAME)

re: clean all

.PHONY: all clean re
