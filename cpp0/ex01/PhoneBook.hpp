/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhoneBook.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:21:21 by molesen           #+#    #+#             */
/*   Updated: 2022/10/31 15:21:22 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>
#include <locale>

#define SIZE 100

class PhoneBook
{
public:
	class Contact
	{
	public:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phonenumber;
		std::string darksecret;
	};

	Contact	head[8];
	void	insertElem(int indx, char *str, std::string data)
	{
		if (!strcmp(str, "firstname"))
		{
			head[indx].firstname = data;
		}
		else if (!strcmp(str, "lastname"))
		{
			head[indx].lastname = data;
		}
		else if (!strcmp(str, "nickname"))
		{
			head[indx].nickname = data;
		}
		else if (!strcmp(str, "phonenumber"))
		{
			head[indx].phonenumber = data;
		}
		else if (!strcmp(str, "darksecret"))
		{
			head[indx].darksecret = data;
		}
	}
	void	printContactAll(int len)
	{
		int	i;

		i = 0;
		std::cout << std::setw(10) << "id";
		std::cout << "|";
		std::cout << std::setw(10) << "firstname";
		std::cout << "|";
		std::cout << std::setw(10) << "lastname";
		std::cout << "|";
		std::cout << std::setw(10) << "nickname" << "\n";
		while (i < len)
		{
			std::cout << std::setw(10) << i;
			std::cout << "|";
			std::cout << std::setw(10) << head[i].firstname;
			std::cout << "|";
			std::cout << std::setw(10) << head[i].lastname;
			std::cout << "|";
			std::cout << std::setw(10) << head[i].nickname << "\n";
			++i;
		}
	}
	void	printContactOne(int indx)
	{
		std::cout << "firstname: " << head[indx].firstname << "\n";
		std::cout << "lastname: " << head[indx].lastname << "\n";
		std::cout << "nickname: " << head[indx].nickname << "\n";
		std::cout << "phonenumber: " << head[indx].phonenumber << "\n";
		std::cout << "darksecret: " << head[indx].darksecret << "\n";
	}
};

#endif
