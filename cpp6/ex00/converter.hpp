
#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <iostream>
#include <limits>

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
int		result_valid(char *str, int result);
void	analyse_char(char* input, int type);
void	analyse_int(char* input, int type);
void	analyse_float(char* input, int type);
int		ft_strlen_stop(char* input, int len, char c);
int		within_limit_int(char *input, int len);

#endif
