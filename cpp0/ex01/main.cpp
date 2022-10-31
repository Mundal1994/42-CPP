/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:21:30 by molesen           #+#    #+#             */
/*   Updated: 2022/10/31 15:21:31 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

/*
checks if what we have collected is digits and within range
if not error will be returned
*/
static int	is_digits(std::string str, int len)
{
	int	i;
	int	indx;

	i = 0;
	while (str[i] != '\0')
	{
		if (!isdigit(str[i]))
		{
			std::cout << "Only digits allowed" << "\n";
			return (-1);
		}
		++i;
	}
	indx = std::stoi(str);
	if (indx < 0 || indx >= len)
	{
		std::cout << "Not within limit" << "\n";
		return (-1);
	}
	return (indx);
}

/*
searches through the phonebook and prints information to standard output
gives the option of printing additional information about specific contact
*/
static void	search_phonebook(PhoneBook phonebook, int len)
{
	std::string	command;
	int			indx;

	if (len == 0)
		std::cout << "Phonebook is empty\n";
	else
	{
		phonebook.printContactAll(len);
		while (1)
		{
			std::cout << "Please select an indx between 0-" << len - 1 <<
				" to display more info about contact" << "\n";
			std::cin >> command;
			indx = is_digits(command, len);
			if (indx == -1)
			{
				std::cin.clear();
			}
			else
			{
				phonebook.printContactOne(indx);
				std::cin.clear();
				break ;
			}
		}
	}
}

/*	adds a contact to the phonebook	*/
static void	add_to_phonebook(PhoneBook *phonebook, int *i, int *len)
{
	std::string data;

	std::cout << "Firstname: ";
	std::cin >> data;
	(*phonebook).insertElem(*i, (char *)"firstname", data);
	std::cout << "Lastname: ";
	std::cin >> data;
	(*phonebook).insertElem(*i, (char *)"lastname", data);
	std::cout << "Nickname: ";
	std::cin >> data;
	(*phonebook).insertElem(*i, (char *)"nickname", data);
	std::cout << "Phonenumber: ";
	std::cin >> data;
	(*phonebook).insertElem(*i, (char *)"phonenumber", data);
	std::cout << "Darksecret: ";
	std::cin >> data;
	(*phonebook).insertElem(*i, (char *)"darksecret", data);
	if (*len < 8)
		++(*len);
	if (*i < 7)
		++(*i);
	else
		*i = 0;
}

/*
starts the function call that makes it possible for user 
to add and search through the phonebook
*/
int main(void)
{
	PhoneBook	phonebook;
	std::string	command;
	int			len;
	int			i;

	std::cout << "Hello, your phonebook has been opened" << "\n";
	len = 0;
	i = 0;
	while (1)
	{
		std::cout << "Please use one of the following commands: add, search or exit" << "\n";
		std::cin >> command;
		std::cout << "You have selected the command " << command << "\n";
		if (command == "add")
			add_to_phonebook(&phonebook, &i, &len);
		else if (command == "search")
			search_phonebook(phonebook, len);
		else if (command == "exit")
		{
			std::cout << "Goodbye\n";
			break ;
		}
		else
			std::cout << "This is not a valid command\n";
	}
	return (0);
}
