/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <molesen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:48:23 by molesen           #+#    #+#             */
/*   Updated: 2022/11/04 16:47:50 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	warrior("Bob");
	ScavTrap	knight("Tim");

	warrior.attack(knight.getClapTrap_name());
	knight.takeDamage(warrior.getClapTrap_damage());
	knight.beRepaired(5);
	knight.guardGate();
	return (0);
}
