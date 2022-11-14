/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <molesen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:48:23 by molesen           #+#    #+#             */
/*   Updated: 2022/11/14 10:56:26 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	warrior("Bob");
	FragTrap	knight("Tim");

	warrior.attack(knight.getClapTrap_name());
	knight.takeDamage(warrior.getClapTrap_damage());
	knight.beRepaired(5);
	knight.highFivesGuys();
	return (0);
}
