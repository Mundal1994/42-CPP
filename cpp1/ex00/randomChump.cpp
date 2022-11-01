/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:30:33 by molesen           #+#    #+#             */
/*   Updated: 2022/11/01 10:30:34 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
gets the pointer to the new zombie and announces the zombie
it then makes sure to delete the allocated pointer and the destructor inside
the class will be called
*/
void	randomChump(std::string name)
{
	Zombie	*pnt;

	pnt = newZombie(name);
	(*pnt).announce();
	delete pnt;
}
