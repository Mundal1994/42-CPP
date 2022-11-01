/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:30:22 by molesen           #+#    #+#             */
/*   Updated: 2022/11/01 10:30:23 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
creates a pointer to a new zombie
uses new function to allocate memory for the zombie on the heap
it then returns a pointer to the new zombie
*/
Zombie*	newZombie(std::string name)
{
	Zombie *temp;

	temp = new Zombie;
	temp->setZombie(name);
	return (temp);
}
