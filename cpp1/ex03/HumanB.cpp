/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:32:31 by molesen           #+#    #+#             */
/*   Updated: 2022/11/02 10:32:32 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string str): name(str)
{
	return ;
}

HumanB::~HumanB()
{
	return ;
}

void	HumanB::setWeapon(Weapon& club)
{
	weapon = &club;
}

void	HumanB::attack(void)
{
	std::cout << name << " attacks with their " << weapon->getType() << "\n";
}
