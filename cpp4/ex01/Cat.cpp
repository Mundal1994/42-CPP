/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <molesen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:12:16 by molesen           #+#    #+#             */
/*   Updated: 2022/11/14 13:33:55 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*	Default constructor	*/
Cat::Cat()
{
	(*this).setType("Cat");
	(*this).brainy = new Brain();
}

/*	Destructor	*/
Cat::~Cat()
{
	std::cout << "Destroy Cat's brain\n";
	delete (*this).brainy;
	std::cout << "Destroy Cat\n";
}
