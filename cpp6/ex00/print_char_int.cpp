/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char_int.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <molesen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:00:09 by molesen           #+#    #+#             */
/*   Updated: 2023/01/11 16:06:36 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "converter.hpp"

static void	print_char(int digit_int)
{
	if (is_visible_ASCII((char)digit_int))
		std::cout << "'" << (char)digit_int << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
}

static int	within_limit_char(char *input, int len)
{
	int	i;

	i = 0;
	if (input[i] == '-')
	{
		std::cout << "impossible" << std::endl;
		return (0);
	}
	else if (len > 3 || (len == 3 && strncmp(input, "127", len) > 0))
	{
		std::cout << "impossible" << std::endl;
		return (0);
	}
	return (1);
}

void	analyse_char(char* input, int type)
{
	std::cout << "char: ";
	switch (type)
	{
		case CHAR:
			std::cout << "'" << input << "'" << std::endl;
			break;
		case INT:
			if (!within_limit_char(input, strlen(input)))
				break;
			print_char(atoi(input));
			break;
		case FLOAT:
		case DOUBLE:
			if (!within_limit_char(input, ft_strlen_stop(input, strlen(input), '.')))
				break;
			print_char((int)atof(input));
			break;
		default:
			std::cout << "impossible" << std::endl;
			break;
	}
}

void	analyse_int(char* input, int type)
{
	std::cout << "int: ";
	switch (type)
	{
		case CHAR:
			std::cout << (int)input[0] << std::endl;
			break;
		case INT:
			std::cout << atoi(input) << std::endl;
			break;
		case FLOAT:
		case DOUBLE:
			if (!within_limit_int(input, ft_strlen_stop(input, strlen(input), '.')))
				break;
			std::cout << ((int)atof(input)) << std::endl;
			break;
		default:
			std::cout << "impossible" << std::endl;
			break;
	}
}
