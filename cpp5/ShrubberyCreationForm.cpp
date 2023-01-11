/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <molesen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 11:12:23 by molesen           #+#    #+#             */
/*   Updated: 2023/01/10 11:56:45 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

std::string	ShrubberyCreationForm::getTarget(void) const
{
	return ((*this).target);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream outfile ((*this).getTarget() + "_shrubbery");

	outfile << "ASCII trees" << std::endl;
	std::cout << executor.getName() << " executed " << (*this).getName() << std::endl;
}
