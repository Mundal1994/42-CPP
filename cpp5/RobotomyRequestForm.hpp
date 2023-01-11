/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:07:51 by molesen           #+#    #+#             */
/*   Updated: 2023/01/10 12:07:52 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class RobotomyRequestForm : public Form
{
private:
	std::string	target;
public:
	RobotomyRequestForm(std::string a):Form("RobotomyRequestForm", false, 72, 45)
	{
		target = a;
	}
	std::string	getTarget(void) const;
	void execute(Bureaucrat const & executor) const;
};

#endif
