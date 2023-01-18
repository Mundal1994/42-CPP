/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:12:04 by molesen           #+#    #+#             */
/*   Updated: 2023/01/18 12:04:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <array>
#include <vector>

int	main(void)
{
	std::vector<int> vd;
	
	vd.push_back(0);
	vd.push_back(1);
	vd.push_back(2);
	vd.push_back(3);
	vd.push_back(4);
	vd.push_back(5);
	vd.push_back(6);
	
	easyfind(vd, 1);
	easyfind(vd, 3);
	easyfind(vd, 6);
	easyfind(vd, 10);
	return (0);
}
