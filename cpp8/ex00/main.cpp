/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:12:04 by molesen           #+#    #+#             */
/*   Updated: 2023/01/19 12:09:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

void	print(int i)
{
	std::cout << i << std::endl;
}

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
	
	try
	{
		std::vector<int>::iterator it_vector = easyfind(vd, 2);
		std::cout << "Vector starting at :" << std::endl;
		for_each(it_vector, vd.end(), print);

		std::cout << "error check" << std::endl;
		it_vector = easyfind(vd, 7);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\nList int: " << std::endl;
	std::list<int> vlist = {0, 1, 2, 3, 4, 5};

	try
	{
		std::list<int>::iterator it_list = easyfind(vlist, 5);
		std::cout << "List starting at :" << std::endl;
		for_each(it_list, vlist.end(), print);

		std::cout << "error check" << std::endl;
		it_list = easyfind(vlist, 7);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
