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
#include <cmath>

/*	Default constructor	*/
Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	(*this).setRawBits(0);
}


Fixed::Fixed(const int nbr)
{
	std::cout << "Int constructor called\n";
	(*this).setRawBits(nbr);
	this->value = nbr << this->frac;
}

Fixed::Fixed(const float nbr)
{
	int	power = pow(2, this->frac);

	std::cout << "Float constructor called\n";
	this->value = roundf(nbr * power);
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
	*this = t;
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
int		Fixed::getRawBits(void) const
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
	int	power = pow(2, this->frac);
	return ((float)this->value / power);
}

int		Fixed::toInt(void) const
{
	return (this->value >> this->frac);
}

std::ostream& operator<<(std::ostream &out, const Fixed& t)
{
	out << t.toFloat();
	return (out);
}
