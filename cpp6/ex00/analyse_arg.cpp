/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   analyse_arg.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <molesen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:59:40 by molesen           #+#    #+#             */
/*   Updated: 2023/01/11 16:03:33 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "converter.hpp"

int	within_limit_int(char *input, int len)
{
	int	i;

	i = 0;
	if ((input[i] == '-' && len > 11) || (input[i] == '-' && \
		len == 11 && strncmp(&input[i], "-2147483648", len) > 0))
	{
		std::cout << "impossible" << std::endl;
		return (0);
	}
	else if ((input[i] != '-' && len > 10) || (input[i] != '-' && \
		len == 10 && strncmp(&input[i], "2147483647", len) > 0))
	{
		std::cout << "impossible" << std::endl;
		return (0);
	}
	return (1);
}

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
	if (result == INT && !within_limit_int(str, strlen(str)))
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
