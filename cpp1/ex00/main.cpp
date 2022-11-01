/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:29:51 by molesen           #+#    #+#             */
/*   Updated: 2022/11/01 10:29:53 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*	calling randomChump function to create and announce a zombie	*/
int main(void)
{
	randomChump("Bob the builder");
	randomChump("Foo");
	randomChump("Cookie Monster");
	randomChump("ZomZom");
	return (0);
}
