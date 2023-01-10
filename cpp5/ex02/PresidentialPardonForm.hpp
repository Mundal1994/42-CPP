/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:07:32 by molesen           #+#    #+#             */
/*   Updated: 2023/01/10 12:07:33 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class PresidentialPardonForm : public Form
{
private:
	std::string	target;
public:
	PresidentialPardonForm(std::string a):Form("PresidentialPardonForm", false, 25, 5)
	{
		target = a;
	}
	std::string	getTarget(void) const;
	void execute(Bureaucrat const & executor) const;
};

#endif
