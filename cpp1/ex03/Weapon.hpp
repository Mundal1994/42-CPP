/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:47:03 by molesen           #+#    #+#             */
/*   Updated: 2022/11/01 14:47:04 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
private:
	std::string type;
public:
	Weapon()
	{
		return ;
	}
	Weapon(std::string weapon)
	{
		type = weapon;
		return ;
	}
	~Weapon()
	{
		return ;
	}
	void setType(std::string weapon)
	{
		type = weapon;
	}
	const std::string&	getType(void)
	{
		return (type);
	}
};

#endif
