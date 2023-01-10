/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <molesen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:07:46 by molesen           #+#    #+#             */
/*   Updated: 2023/01/10 12:18:04 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

std::string	RobotomyRequestForm::getTarget(void) const
{
	return ((*this).target);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	std::cout << executor.getName() << " executed " << (*this).getName() << std::endl;
	std::cout << "*drilling noise*\n";
	std::srand(time(0));
	if ((std::rand() % 10) + 1 <= 5)
		std::cout << (*this).getTarget() << " has been robotomized successfully" << std::endl;
	else
		std::cout << (*this).getTarget() << "'s robotomy failed" << std::endl;
}
