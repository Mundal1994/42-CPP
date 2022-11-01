/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:37:19 by molesen           #+#    #+#             */
/*   Updated: 2022/11/01 12:37:21 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*
this program contains the following:
- String: "HI THIS IS BRAIN"
- StringPTR: A pointer to the string
- StringREF: A reference to the string
*/
int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "MEMORY ADDRESS\n";
	std::cout << "str: " << &str << "\n";
	std::cout << "stringPTR: " << &(*stringPTR) << "\n";
	std::cout << "stringREF: " << &stringREF << "\n";
	std::cout << "\nVALUE\n";
	std::cout << "str: " << str << "\n";
	std::cout << "stringPTR: " << *stringPTR << "\n";
	std::cout << "stringREF: " << stringREF << "\n";
}
