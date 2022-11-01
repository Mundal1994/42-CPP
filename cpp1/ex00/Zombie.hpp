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
#include <string>

class Zombie
{
private:
	std::string name;
public:
	~Zombie()
	{
		std::cout << "The destructor destroid " << name << "\n";
	}
	void setZombie(std::string str)
	{
		name = str;
	}
	void announce(void)
	{
		std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
	}
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
