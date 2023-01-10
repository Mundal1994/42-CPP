/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <molesen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:31:39 by molesen           #+#    #+#             */
/*   Updated: 2023/01/10 12:06:56 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	Bureaucrat	jeff("jeff", 150);
	Bureaucrat	mur("muf", 1);
	ShrubberyCreationForm first("home");
	RobotomyRequestForm second("The Qrinch");
	PresidentialPardonForm third("Evil Mastermind");

	std::cout << "ShrubberyCreationForm TEST:\n";
	jeff.executeForm(first);
	mur.signForm(first);
	jeff.executeForm(first);
	mur.executeForm(first);

	std::cout << "\n\nRobotomyRequestForm TEST:\n";
	jeff.executeForm(second);
	mur.signForm(second);
	jeff.executeForm(second);
	mur.executeForm(second);

	std::cout << "\n\nPresidentialPardonForm TEST:\n";
	jeff.executeForm(third);
	mur.signForm(third);
	jeff.executeForm(third);
	mur.executeForm(third);
	return (0);
}
