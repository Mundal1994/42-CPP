/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:42:16 by molesen           #+#    #+#             */
/*   Updated: 2022/11/02 15:42:17 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*	Default constructor	*/
Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	(*this).setRawBits(0);
}

/*	Destructor	*/
Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
	return ;
}

/*	Copy constructor	*/
Fixed::Fixed(Fixed& t)
{
	std::cout << "Copy constructor called\n";
	Fixed::operator=(t);
}

/*	Copy assignment operator	*/
Fixed&	Fixed::operator=(Fixed& t)
{
	std::cout << "Copy assignment operator called\n";
	(*this).value = t.getRawBits();
	return (*this);
}

/*	returns the raw value of the fixed-point value	*/
int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (value);
}

/*	sets the raw value of the fixed-point number	*/
void	Fixed::setRawBits(int const raw)
{
	value = raw;
}
