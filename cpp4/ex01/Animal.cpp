/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <molesen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:09:44 by molesen           #+#    #+#             */
/*   Updated: 2022/11/14 13:25:38 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*	Default constructor	*/
Animal::Animal()
{
	(*this).type = "";
}

/*	Destructor	*/
Animal::~Animal()
{
	std::cout << "Destructor Animal\n";
	return ;
}

/*	Copy constructor	*/
Animal::Animal(const Animal& t)
{
	*this = t;
}

/*	Copy assignment operator	*/
Animal&	Animal::operator=(const Animal& t)
{
	if (this != &t)
	{
		(*this).type = t.type;
	}
	return (*this);
}

/*	sets the type value equal to whatever is passed in	*/
void	Animal::setType(const std::string str)
{
	(*this).type = str;
}

/*	returns the type variable from animal class	*/
std::string	Animal::getType(void) const
{
	return ((*this).type);
}

void	Animal::makeSound(void) const
{
	if ((*this).type == "Dog")
		std::cout << "Bark!\n";
	else if ((*this).type == "Cat")
		std::cout << "Miav!\n";
}
