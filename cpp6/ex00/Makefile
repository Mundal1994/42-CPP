
NAME = converter

CC = c++ -Wall -Wextra -Werror -std=c++98

SRC = converter.cpp
SRC += analyse_arg.cpp
SRC += check_limit.cpp
SRC += print_char.cpp
SRC += print_int.cpp
SRC += print_float.cpp

all: $(NAME)
$(NAME): $(SRC)
	$(CC) $(SRC) -o $(NAME)

clean:
	/bin/rm -f $(NAME)

re: clean all

.PHONY: all clean re
