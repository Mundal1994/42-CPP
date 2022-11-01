/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:00:44 by molesen           #+#    #+#             */
/*   Updated: 2022/11/01 12:00:45 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
allocates N amount of zombies in a single allocation
function returns a pointer to the first zombie.
*/
Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*horde;
	int		i;

	horde = new Zombie[N];
	i = 0;
	while (i < N)
	{
		horde[i].setZombie(name);
		++i;
	}
	return (horde);
}
