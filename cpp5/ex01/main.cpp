/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <molesen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:31:39 by molesen           #+#    #+#             */
/*   Updated: 2023/01/06 18:55:37 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	/*	Declare Bureaucrat	*/
	Bureaucrat	bur("helle", 0);
	Bureaucrat	jeff("jeff", 150);
	Bureaucrat	mur("muf", 1);

	std::cout << "init: " << jeff << std::endl;
	jeff.decrementGrade();
	std::cout << "decrement: " << jeff << std::endl;
	jeff.incrementGrade();
	std::cout << "increment: " << jeff << std::endl << std::endl;

	std::cout << "init: " << mur << std::endl;
	mur.incrementGrade();
	std::cout << "increment: " << mur << std::endl;
	mur.decrementGrade();
	std::cout << "decrement: " << mur << std::endl;

	/*	Declare Form	*/
	Form first("importantForm1", 2, 5);
	Form second("importantForm2", 0, 5);
	Form third("importantForm3", 2, 0);
	Form fire("importantForm4", 160, 50);
	Form fem("importantForm5", 50, 160);
	Form seks("importantForm6", 150, 150);

	std::cout << std::endl << "status: " << jeff << std::endl;
	std::cout << first << std::endl;
	jeff.signForm(first);
	std::cout << first << std::endl;
	mur.signForm(first);
	std::cout << first << std::endl;

	std::cout << std::endl << seks << std::endl;
	jeff.signForm(seks);
	std::cout << seks << std::endl;
	return (0);
}
