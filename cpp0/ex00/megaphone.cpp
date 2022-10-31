/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:21:48 by molesen           #+#    #+#             */
/*   Updated: 2022/10/31 15:21:49 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstring>

class PhoneBook;

int main(int argc, char *argv[])
{
	int		count;
	int		i;
	int		len;
	char	bigLetter;

	if (argc > 1)
	{
		count = 1;
		while (count < argc)
		{
			i = 0;
			len = strlen(argv[count]);
			while (i < len)
			{
				bigLetter = toupper(argv[count][i]);
				std::cout << bigLetter;
				++i;
			}
			++count;
		}
		std::cout << "\n";
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << "\n";
	return (0);
}
