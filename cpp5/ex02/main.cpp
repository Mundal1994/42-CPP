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
#include "Intern.hpp"

int	main(void)
{
	// ex02
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

	// Ex 03
	std::cout << "\n\nIntern TEST:\n";
	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	jeff.executeForm(*rrf);
	mur.signForm(*rrf);
	jeff.executeForm(*rrf);
	mur.executeForm(*rrf);

	std::cout << "\n\nIntern TEST 2:\n";
	Form* fourth;
	fourth = someRandomIntern.makeForm("shrubbery request", "Lender");
	jeff.executeForm(*fourth);
	mur.signForm(*fourth);
	jeff.executeForm(*fourth);
	mur.executeForm(*fourth);

	std::cout << "\n\nIntern TEST 3:\n";
	Form* fifth;
	fifth = someRandomIntern.makeForm("presidential request", "Slender");
	jeff.executeForm(*fifth);
	mur.signForm(*fifth);
	jeff.executeForm(*fifth);
	mur.executeForm(*fifth);
	return (0);
}
