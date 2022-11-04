/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <molesen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:48:23 by molesen           #+#    #+#             */
/*   Updated: 2022/11/04 15:43:58 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	warrior("Bob");
	ClapTrap	knight("Tom");

	warrior.attack("Tom");
	knight.takeDamage(5);
	knight.beRepaired(5);
	return (0);
}
