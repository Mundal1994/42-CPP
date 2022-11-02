/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:32:48 by molesen           #+#    #+#             */
/*   Updated: 2022/11/02 10:32:49 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	return ;
}

Weapon::Weapon(std::string weapon)
{
	type = weapon;
	return ;
}

Weapon::~Weapon()
{
	return ;
}

void Weapon::setType(std::string weapon)
{
	type = weapon;
}

const std::string&	Weapon::getType(void)
{
	return (type);
}
