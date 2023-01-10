/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <molesen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 11:12:17 by molesen           #+#    #+#             */
/*   Updated: 2023/01/10 11:53:39 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include "Form.hpp"

class Form;

class ShrubberyCreationForm : public Form
{
private:
	std::string	target;
public:
	ShrubberyCreationForm(std::string a):Form("ShrubberyCreationForm", false, 145, 137)
	{
		target = a;
	}
	std::string	getTarget(void) const;
	void execute(Bureaucrat const & executor) const;
};

//std::ostream &  operator  << (std::ostream &ostr, Bureaucrat &a);

#endif
