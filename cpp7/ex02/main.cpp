/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <molesen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:12:04 by molesen           #+#    #+#             */
/*   Updated: 2023/01/17 15:47:48 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"
#include "Array.cpp"

int	main(void)
{
	//int * a = new int();

	Array<int> here(5);
	
	here.setArray(0, 0);
	here.setArray(1, 1);
	here.setArray(2, 2);
	here.setArray(3, 3);
	here.setArray(4, 4);
	here.getArray();
	
	Array<int> newnew(here);
	here.setArray(4, 5);

	std::cout << "orig: ";
	here.getArray();
	std::cout << "new: ";
	newnew.getArray();

	std::cout << "size: " << here.size() << std::endl;
	std::cout << "newnew: " << newnew.size() << std::endl;
	std::cout << "newnew[0]: " << newnew[0] << std::endl;
	std::cout << "here[4]: " << here[4] << std::endl;
	std::cout << "here[5]: " << here[5] << std::endl;
	return (0);
}
