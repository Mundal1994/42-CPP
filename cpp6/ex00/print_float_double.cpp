/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_float_double.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <molesen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:00:26 by molesen           #+#    #+#             */
/*   Updated: 2023/01/12 16:04:07 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "converter.hpp"

static int	calc_float_precision(char* input, int type)
{
	int	i;
	int	count;

	if (type == INT || type == CHAR)
		return (1);
	i = ft_strlen_stop(input, strlen(input), '.') + 1;
	count = 0;
	while (input[i] != '\0' && input[i] != 'f')
	{
		++i;
		++count;
	}
	return (count);
}

static void	print_label(int f)
{
	if (f == FLOAT)
		std::cout << "float: " << std::fixed;
	else
		std::cout << "double: " << std::fixed;
}

void	analyse_float_double(char* input, int type, int f)
{
	std::cout.precision(calc_float_precision(input, type));
	print_label(f);
	switch (type)
	{
		case CHAR:
			std::cout << (float)input[0];
			if (f == FLOAT)
				std::cout << "f";
			std::cout << std::endl;
			break;
		case INT:
			std::cout << atoi(input) << ".0";
			if (f == FLOAT)
				std::cout << "f";
			std::cout << std::endl;
			break;
		case FLOAT:
		case DOUBLE:
			within_limit(input, f);
			break;
		default:
			if (f == FLOAT)
				std::cout << "nanf" << std::endl;
			else
				std::cout << "nan" << std::endl;
			break;
	}
}
