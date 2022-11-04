/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <molesen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:46:02 by molesen           #+#    #+#             */
/*   Updated: 2022/11/04 17:15:41 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string str)
{
	(*this).setClapTrap(str, 100, 50, 20);
	std::cout << "Constructs ScavTrap " << (*this).getClapTrap_name() << "\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destroy ScavTrap " << (*this).getClapTrap_name() << "\n";
}

/*	displays positive high five request	*/
void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap request for a positive high five\n";
}
