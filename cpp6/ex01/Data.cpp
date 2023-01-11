/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <molesen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:01:03 by molesen           #+#    #+#             */
/*   Updated: 2023/01/11 17:02:55 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

/*	Default constructor	*/
Data::Data()
{
	setValue(0);
}

/*	Destructor	*/
Data::~Data()
{
	std::cout << "Destructor Data\n";
	return ;
}

/*	Copy constructor	*/
Data::Data(const Data& t)
{
	*this = t;
}

/*	Copy assignment operator	*/
Data&	Data::operator=(const Data& t)
{
	if (this != &t)
	{
	}
	return (*this);
}

int		Data::getValue(void)
{
	return ((*this).value);
}

void	Data::setValue(int a)
{
	(*this).value = a;
}
