/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:16:37 by molesen           #+#    #+#             */
/*   Updated: 2022/11/02 17:16:39 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int					value;
	static const int	frac = 8;
public:
	Fixed();
	Fixed(const int nbr);
	Fixed(const float nbr);
	~Fixed();
	Fixed(const Fixed& t);
	Fixed&	operator=(const Fixed& t);
	int		getRawBits(void) const;
	void	setRawBits(float const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream& operator<<(std::ostream &out, const Fixed& t);
bool	operator==(const Fixed& a, const Fixed& b);
bool	operator!=(const Fixed& a, const Fixed& b);
bool	operator>(const Fixed& a, const Fixed& b);
bool	operator<(const Fixed& a, const Fixed& b);
bool	operator>=(const Fixed& a, const Fixed& b);
bool	operator<=(const Fixed& a, const Fixed& b);


#endif
