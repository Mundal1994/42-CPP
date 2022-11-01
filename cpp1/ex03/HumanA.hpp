/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:47:14 by molesen           #+#    #+#             */
/*   Updated: 2022/11/01 14:47:16 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>

class HumanA
{
private:
	std::string	name;
	Weapon		*weapon;
public:
	HumanA(std::string str, Weapon &club)//: name(str), weapon(club)
	{
		name = str;
		weapon = &club;
	}
	void	attack(void)
	{
		std::cout << name << " attacks with their " << weapon->getType() << "\n";
	}
};

#endif
