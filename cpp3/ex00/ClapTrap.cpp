/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <molesen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:50:46 by molesen           #+#    #+#             */
/*   Updated: 2022/11/04 15:44:16 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*	Default constructor	*/
ClapTrap::ClapTrap()
{
	(*this).hit = 10;
	(*this).energy = 10;
	(*this).damage = 0;
}

ClapTrap::ClapTrap(std::string str)
{
	(*this).name = str;
	(*this).hit = 10;
	(*this).energy = 10;
	(*this).damage = 0;
}

/*	Destructor	*/
ClapTrap::~ClapTrap()
{
	return ;
}

/*	Copy constructor	*/
ClapTrap::ClapTrap(const ClapTrap& t)
{
	*this = t;
}

/*	Copy assignment operator	*/
ClapTrap&	ClapTrap::operator=(const ClapTrap& t)
{
	if (this != &t)
	{
		(*this).hit = t.hit;
		(*this).energy = t.energy;
		(*this).damage = t.damage;
	}
	return (*this);
}

/*
when claptrap attacks it causes its target to lose attack damage hit points
attacking and repairing cost 1 energy point each
*/
void	ClapTrap::attack(const std::string& target)
{
	if ((*this).hit <= 0)
	{
		std::cout << "ClapTrap " << (*this).name << " is dead.\n";
	}
	else if ((*this).energy <= 0)
	{
		std::cout << "ClapTrap " << (*this).name << " don't have energy to attack.\n";
	}
	else
	{
		(*this).energy -= 1;
		std::cout << "ClapTrap " << (*this).name << " attacks " << target <<
		", causing " << (*this).damage << " points of damage!\n";
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << (*this).name << " takes " << amount <<
	" points of damage! Hit points are now at ";
	(*this).hit -= amount;
	std::cout << (*this).hit << "\n";
}

/*
when claptrap repairs itself, it gets 'amount' hit points back.
attacking and repairing cost 1 energy point each
*/
void	ClapTrap::beRepaired(unsigned int amount)
{
	if ((*this).hit <= 0)
	{
		std::cout << "ClapTrap " << (*this).name << " is dead.\n";
	}
	else if ((*this).energy <= 0)
	{
		std::cout << "ClapTrap " << (*this).name << " don't have energy to repair.\n";
	}
	else
	{
		(*this).energy -= 1;
		std::cout << "ClapTrap " << (*this).name << " repairs itself and gets " << 
		amount << " hit points back! Total hit points are now ";
		(*this).hit += amount;
		std::cout << (*this).hit << "\n";
	}
}
