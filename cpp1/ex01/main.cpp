/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:00:15 by molesen           #+#    #+#             */
/*   Updated: 2022/11/01 12:00:17 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
calls the zombieHorde function and announces the zombies that have been created.
It then makes sure the allocated memory gets deleted
*/
int	main(void)
{
	Zombie	*pnt;
	int		i;
	int		N;

	i = 0;
	N = 50;
	pnt = zombieHorde(N, "Bob");
	while (i < N)
	{
		pnt[i].announce();
		++i;
	}
	delete[] pnt;
}
