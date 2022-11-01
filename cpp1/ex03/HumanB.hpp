/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:47:32 by molesen           #+#    #+#             */
/*   Updated: 2022/11/01 14:47:33 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>

class HumanB
{
private:
	std::string	name;
	Weapon		*weapon;
public:
	HumanB(std::string str)//: name(str)
	{
		name = str;
	}
	void	setWeapon(Weapon& club)
	{
		weapon = &club;
	}
	void	attack(void)
	{
		std::cout << name << " attacks with their " << weapon->getType() << "\n";
	}
};

#endif
