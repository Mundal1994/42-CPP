/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <molesen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:05:56 by molesen           #+#    #+#             */
/*   Updated: 2022/11/14 13:58:05 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	const	Animal* j = new Dog();
	const	Animal* i = new Cat();
	//const	Animal* testDog[3] = {new Dog(), new Dog(), new Dog()};

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	delete j;//should not create a leak
	delete i;
	//delete[] testDog;
	return 0;
}
