/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <molesen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:01:33 by molesen           #+#    #+#             */
/*   Updated: 2023/01/12 11:58:59 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

static void	identify(Base* p)
{
	// typeid.name() method
	std::cout << "typeid.name method: " << typeid(*p).name()<< std::endl;

	// comparing type id method
	std::cout << "comparing typeid: ";
	if (typeid(*p) == typeid(A))
		std::cout << "A" << "\n";
	else if (typeid(*p) == typeid(B))
		std::cout << "B" << "\n";
	else
		std::cout << "C" << "\n";
}

static void	identify(Base& p)
{
	// typeid.name() method
	std::cout << "typeid.name method: " << typeid(p).name()<< std::endl;

	// comparing type id method
	std::cout << "comparing typeid: ";
	if (typeid(p) == typeid(A))
		std::cout << "A" << "\n";
	else if (typeid(p) == typeid(B))
		std::cout << "B" << "\n";
	else
		std::cout << "C" << "\n";
}

static Base * generate(void)
{
	int		random;
	Base*	temp;

	random = (std::rand() % 10) + 1;
	while (random == 10)
		random = (std::rand() % 10) + 1;
	if (random <= 3)
		temp = new A;
	else if (random <= 6)
		temp = new B;
	else
		temp = new C;
	std::cout << typeid(*temp).name()<< std::endl;
	return (temp);
}

int	main(void)
{
	Base *	one;
	Base *	two;
	Base*	tre;
	std::srand(time(0));

	std::cout << "one: ";
	one = generate();
	identify(one);
	identify(*one);

	std::cout << "\ntwo: ";
	two = generate();
	identify(two);
	identify(*two);

	std::cout << "\ntre: ";
	tre = generate();
	identify(tre);
	identify(*tre);
	return (0);
}
