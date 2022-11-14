/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <molesen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:05:56 by molesen           #+#    #+#             */
/*   Updated: 2022/11/14 16:03:19 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	const	Animal* j = new Dog();
	const	Animal* i = new Cat();
	const	Animal* testAnimal[10];
	int		indx;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	delete j;//should not create a leak
	delete i;
	indx = 0;
	std::cout << "create cats and dogs in array\n";
	while (indx < 10)
	{
		if (indx >= 5)
			testAnimal[indx++] = new Cat();
		else
			testAnimal[indx++] = new Dog();
	}
	indx = 0;
	std::cout << "destroy cats and dogs in array\n";
	while (indx < 10)
	{
		delete testAnimal[indx++];
	}
	return 0;
}
