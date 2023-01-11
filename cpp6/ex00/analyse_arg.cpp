
#include "converter.hpp"

bool	is_visible_ASCII(char c)
{
	return (c > 32 && c < 127);
}

static int	check_if_nbr(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = INT;
	if (str[i] == '-')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] == '.' && str[i - 1] != '-' && result == INT)
		{
			result = DOUBLE;
		}
		else if (str[i] == 'f' && str[i - 1] != '.' && result == DOUBLE)
			result = FLOAT;
		else if (!isdigit(str[i]))
			return (ERROR);
		++i;
	}
	if (str[i - 1] != 'f' && !isdigit(str[i - 1]))
		return (ERROR);
	return (result);
}

int	analyse_arg(char* arg)
{
	int	i;

	i = 0;
	while (arg[i] != '\0')
	{
		if (!is_visible_ASCII(arg[i++]))
			return (ERROR);
	}
	if (strlen(arg) == 1)
		return (CHAR);
	return (check_if_nbr(arg));
}
