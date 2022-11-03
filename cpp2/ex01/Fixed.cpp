/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:16:45 by molesen           #+#    #+#             */
/*   Updated: 2022/11/02 17:16:47 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*	Default constructor	*/
Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	(*this).setRawBits(0);
}


Fixed::Fixed(const int nbr)
{
	std::cout << "Int constructor called\n";
	(*this).setRawBits(static_cast<float>(nbr));
}

Fixed::Fixed(const float nbr)
{
	std::cout << "Float constructor called\n";
	(*this).setRawBits(nbr);
}

/*	Destructor	*/
Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
	return ;
}

/*	Copy constructor	*/
Fixed::Fixed(const Fixed& t)
{
	std::cout << "Copy constructor called\n";
	value = t.getRawBits();
}

/*	Copy assignment operator	*/
Fixed&	Fixed::operator=(const Fixed& t)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &t)
	{
		(*this).setRawBits(t.getRawBits());
	}
	return (*this);
}

/*	returns the raw value of the fixed-point value	*/
float	Fixed::getRawBits(void) const
{
	return (value);
}

/*	sets the raw value of the fixed-point number	*/
void	Fixed::setRawBits(float const raw)
{
	value = raw;
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(value));
}

int		Fixed::toInt(void) const
{
	return (static_cast<int>(value));
}

std::ostream& operator<<(std::ostream &out, const Fixed& t)
{
	out << t.value;
	return (out);
}
