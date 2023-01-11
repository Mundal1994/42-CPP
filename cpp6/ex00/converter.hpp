
#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <iostream>

enum params
{
    CHAR,
    INT,
    FLOAT,
    DOUBLE,
    ERROR = -1,
};

bool	is_visible_ASCII(char c);
int		analyse_arg(char* arg);
void	analyse_char(char* input, int type);

#endif
