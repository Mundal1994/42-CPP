/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:07:12 by molesen           #+#    #+#             */
/*   Updated: 2023/01/18 12:35:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>

template <typename T>
void	easyfind(T& a, int nbr)
{
	bool	found;

	found = false;
	for (const auto elem : a)
	{	
		if (elem == nbr)
		{
			std::cout << elem << std::endl;
			found = true;
			break ;
		}
	}
	if (found == false)
		std::cout << "error\n";
}

#endif
