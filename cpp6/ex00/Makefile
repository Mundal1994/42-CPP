
NAME = converter

CC = c++ -Wall -Wextra -Werror -std=c++98

SRC = converter.cpp
SRC += analyse_arg.cpp
SRC += print_char.cpp

all: $(NAME)
$(NAME): $(SRC)
	$(CC) $(SRC) -o $(NAME)

clean:
	/bin/rm -f $(NAME)

re: clean all

.PHONY: all clean re
