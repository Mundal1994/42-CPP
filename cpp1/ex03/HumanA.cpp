/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:32:38 by molesen           #+#    #+#             */
/*   Updated: 2022/11/02 10:32:40 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &club)
{
	name = str;
	weapon = &club;
}

HumanA::~HumanA()
{
	return ;
}

void	HumanA::attack(void)
{
	std::cout << name << " attacks with their " << weapon->getType() << "\n";
}
