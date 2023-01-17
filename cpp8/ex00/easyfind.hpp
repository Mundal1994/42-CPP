/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <molesen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:07:12 by molesen           #+#    #+#             */
/*   Updated: 2023/01/17 17:10:04 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>

template <typename T>
T	easyfind(std::array<T,int>* a, int nbr)
{
	unsigned int	i;

	i = 0;
	while (a[i])
	{
		if (a[i] == nbr)
		{
			return (a[i]);
		}
		++i;
	}
	//throw error();
	std::cout << "error\n";
	return (-1);
}

#endif
