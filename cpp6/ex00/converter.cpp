/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:00:00 by molesen           #+#    #+#             */
/*   Updated: 2023/01/11 16:00:02 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "converter.hpp"

static int non_valid_arg(void)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: nanf" << std::endl;
	std::cout << "double: nan" << std::endl;
	return (0);
}

int	ft_strlen_stop(char* input, int len, char c)
{
	int	count;

	count = 0;
	while (count < len)
	{
		if (input[count] == c)
			break ;
		++count;
	}
	return (count);
}

int main(int argc, char** argv)
{
	int type;

	if (argc == 2)
	{
		type = analyse_arg(argv[1]);
		if (type == ERROR)
			return (non_valid_arg());
		analyse_char(argv[1], type);
		analyse_int(argv[1], type);
		analyse_float_double(argv[1], type, FLOAT);
		analyse_float_double(argv[1], type, DOUBLE);
	}
	else
		std::cout << "Usage: ./converter 5" << std::endl;
	return (0);
}
