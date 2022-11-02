/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:07:37 by molesen           #+#    #+#             */
/*   Updated: 2022/11/02 12:07:38 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING]" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
}

typedef void	(*functionPointer)(void);

void	Harl::complain(std::string level)
{
	void		(Harl::*func_array[])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	std::string	array[4] = {"debug", "info", "warning", "error"};
	int			i;

	i = 0;
	while (i < 4)
	{
		if (level == array[i])
		{
			void (Harl::*select)(void) = func_array[i];
			(this->*select)();
		}
		++i;
	}
}
