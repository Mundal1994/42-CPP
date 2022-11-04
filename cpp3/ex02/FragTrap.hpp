/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <molesen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:53:56 by molesen           #+#    #+#             */
/*   Updated: 2022/11/04 16:57:44 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string str)
{
	(*this).setClapTrap(str, 100, 100, 30);
	std::cout << "Constructs FragTrap " << (*this).getClapTrap_name() << "\n";
}

FragTrap::~FragTrap()
{
	std::cout << "Destroy FragTrap " << (*this).getClapTrap_name() << "\n";
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "This is a positive HighFive request from " <<
		(*this).getClapTrap_name() << "\n";
}
