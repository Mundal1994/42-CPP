/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <molesen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:31:39 by molesen           #+#    #+#             */
/*   Updated: 2023/01/06 16:36:57 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	bur("helle", 0);
	Bureaucrat	bur2("jeff", 150);
	Bureaucrat	bur3("muf", 1);

	std::cout << "init: " << bur2 << std::endl;
	bur2.decrementGrade();
	std::cout << "decrement: " << bur2 << std::endl;
	bur2.incrementGrade();
	std::cout << "increment: " << bur2 << std::endl << std::endl;

	std::cout << "init: " << bur3 << std::endl;
	bur3.incrementGrade();
	std::cout << "increment: " << bur3 << std::endl;
	bur3.decrementGrade();
	std::cout << "decrement: " << bur3 << std::endl;
	return (0);
}
