/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:08:59 by molesen           #+#    #+#             */
/*   Updated: 2022/11/03 16:09:00 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*	checks if the value in the two classes are the same or not	*/
static void	equal_to_operator()
{
	Fixed c;
	Fixed d;

	std::cout << "c : 0 , d : 0\nFirst check: ";
	if (c == d)
		std::cout << "c and d are the same\n";
	if (c != d)
		std::cout << "c and d are not the same\n";
	d.setRawBits(45);
	std::cout << "c : 0 , d : 45\nSecond check: ";
	if (c == d)
		std::cout << "c and d are the same\n";
	if (c != d)
		std::cout << "c and d are not the same\n";
}

/*	checks if the value in the two classes are bigger than the other	*/
static void	bigger_or_less_operator()
{
	Fixed c;
	Fixed d;

	std::cout << "\nc : 0 , d : 0\nFirst check: ";
	if (c > d)
		std::cout << "c is bigger than d\n";
	if (c >= d)
		std::cout << "c is bigger or equal d\n";
	if (c < d)
		std::cout << "c is smaller than d\n";
	if (c <= d)
		std::cout << "c is smaller or equal d\n";
	d.setRawBits(45);
	std::cout << "c : 0 , d : 45\nSecond check: ";
	if (c > d)
		std::cout << "c is bigger than d\n";
	if (c >= d)
		std::cout << "c is bigger or equal d\n";
	if (c < d)
		std::cout << "c is smaller than d\n";
	if (c <= d)
		std::cout << "c is smaller or equal d\n";
}

int	main(void)
{
	Fixed a;
	Fixed b (45);
	//Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;
	// std::cout << b << std::endl;
	// std::cout << Fixed::max( a, b ) << std::endl;

	// std::cout << a << std::endl;
	// std::cout << --a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a-- << std::endl;
	// std::cout << a << std::endl;

	// std::cout << a << std::endl;
	// std::cout << *a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a* << std::endl;
	// std::cout << a << std::endl;


	// std::cout << a << std::endl;
	// std::cout << /a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a/ << std::endl;
	// std::cout << a << std::endl;

	/*	6 comparison operators: >, <, >=, <=, == and !=	*/
	equal_to_operator();
	bigger_or_less_operator();
	
	return 0;
}
