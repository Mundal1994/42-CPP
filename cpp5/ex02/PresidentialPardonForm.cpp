/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <molesen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:07:24 by molesen           #+#    #+#             */
/*   Updated: 2023/01/10 12:19:05 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

std::string	PresidentialPardonForm::getTarget(void) const
{
	return ((*this).target);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	std::cout << executor.getName() << " executed " << (*this).getName() << std::endl;
	std::cout << (*this).getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
