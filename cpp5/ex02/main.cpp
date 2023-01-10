/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <molesen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:31:39 by molesen           #+#    #+#             */
/*   Updated: 2023/01/10 11:38:43 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	Bureaucrat	jeff("jeff", 150);
	Bureaucrat	mur("muf", 1);
	ShrubberyCreationForm first("home");
	//Form hello("form", false, 120, 5);

	jeff.executeForm(first);
	mur.signForm(first);
	jeff.executeForm(first);
	mur.executeForm(first);
	return (0);
}
