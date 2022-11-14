/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <molesen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:12:14 by molesen           #+#    #+#             */
/*   Updated: 2022/11/14 12:50:38 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*	Default constructor	*/
Dog::Dog()
{
	(*this).setType("Dog");
	(*this).brainy = new Brain();
}

/*	Destructor	*/
Dog::~Dog()
{
	std::cout << "Destroy Dog's brain\n";
	delete (*this).brainy;
	std::cout << "Destroy Dog\n";
}
