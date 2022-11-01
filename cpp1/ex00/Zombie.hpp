/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:30:01 by molesen           #+#    #+#             */
/*   Updated: 2022/11/01 10:30:03 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string name;
public:
	Zombie()
	{
		name = "";
	}
	Zombie(std::string str)
	{
		name = str;
	}
	void announce(void)
	{
		std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
	}
};

#endif
