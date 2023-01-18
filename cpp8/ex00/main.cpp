/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:12:04 by molesen           #+#    #+#             */
/*   Updated: 2023/01/18 12:33:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <array>
#include <vector>

int	main(void)
{
	std::vector<int> vd;

	std::cout << "Vector int: " << std::endl;	
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

	std::cout << "Vector double: " << std::endl;
	std::vector<double> vdouble;
	vdouble.push_back(0.0);
	vdouble.push_back(5.5);
	easyfind(vdouble, 0);
	easyfind(vdouble, 5);
	easyfind(vdouble, 6);

	std::cout << "Array int: " << std::endl;
	std::array<int, 6> varray = {0, 1, 2, 3, 4, 5};
	easyfind(varray, 0);
	easyfind(varray, 5);
	easyfind(varray, 6);
	return (0);
}
