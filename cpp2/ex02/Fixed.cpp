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
	(*this).setRawBits(0);
}

/*	Constructor that takes in int value	*/
Fixed::Fixed(const int nbr)
{
	(*this).setRawBits(nbr);
	this->value = nbr << this->frac;
}

/*	Constructor that takes in float value	*/
Fixed::Fixed(const float nbr)
{
	int	power = pow(2, this->frac);

	this->value = roundf(nbr * power);
}

/*	Destructor	*/
Fixed::~Fixed()
{
	return ;
}

/*	Copy constructor	*/
Fixed::Fixed(const Fixed& t)
{
	*this = t;
}

/*	Copy assignment operator	*/
Fixed&	Fixed::operator=(const Fixed& t)
{
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

/*	converts value from int to float	*/
float	Fixed::toFloat(void) const
{
	int	power = pow(2, this->frac);
	return ((float)this->value / power);
}

/*	converts value to int	*/
int		Fixed::toInt(void) const
{
	return (this->value >> this->frac);
}

/*	prints value to ostream	*/
std::ostream& operator<<(std::ostream &out, const Fixed& t)
{
	out << t.toFloat();
	return (out);
}

/*	6 comparison operators	*/

bool	operator==(const Fixed& a, const Fixed& b)
{
	return (a.getRawBits() == b.getRawBits());
}

bool	operator!=(const Fixed& a, const Fixed& b)
{
	return (a.getRawBits() != b.getRawBits());
}

bool	operator>(const Fixed& a, const Fixed& b)
{
	return (a.getRawBits() > b.getRawBits());
}

bool	operator<(const Fixed& a, const Fixed& b)
{
	return (a.getRawBits() < b.getRawBits());
}

bool	operator>=(const Fixed& a, const Fixed& b)
{
	return (a.getRawBits() >= b.getRawBits());
}

bool	operator<=(const Fixed& a, const Fixed& b)
{
	return (a.getRawBits() <= b.getRawBits());
}

/*	4 arithmetic operators	*/

/*	4 increment/decrement (pre-increment and post-increment, pre-decrement
and post-decrement) operators	*/
