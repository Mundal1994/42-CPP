/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <molesen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:46:02 by molesen           #+#    #+#             */
/*   Updated: 2022/11/04 16:48:21 by molesen          ###   ########.fr       */
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

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << (*this).getClapTrap_name() << " is now in Gate Keeper mode\n";
}
