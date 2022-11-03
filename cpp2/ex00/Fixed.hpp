/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:42:09 by molesen           #+#    #+#             */
/*   Updated: 2022/11/02 15:42:11 by molesen          ###   ########.fr       */
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
	~Fixed();
	Fixed(const Fixed& t);
	Fixed&	operator=(const Fixed& t);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif
