/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <molesen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 17:01:13 by molesen           #+#    #+#             */
/*   Updated: 2023/01/09 12:18:53 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	name;
	bool				status;
	const int			gradeSign;
	const int			gradeExecute;
public:
	Form(const std::string &str, bool stat, int valSign, int valExec);
	~Form();
	Form(const Form& t);
	Form&	operator=(const Form& t);
	const	std::string getName(void) const;
	std::string	getStatus(void) const;
	int		getGradeSign(void) const;
	int		getGradeExecute(void) const;
	void	beSigned(Bureaucrat & t);
	virtual void execute(Bureaucrat const & executor) const = 0;
	class GradeTooHighException : public std::exception
	{
		public:
		virtual const char * what() const throw()
		{
			return "grade too high";
		}
	};
	class GradeTooLowException : public std::exception
	{
		public:
		virtual const char * what() const throw()
		{
			return "grade too low";
		}
	};
};

std::ostream &  operator  << (std::ostream &ostr, Form &a);

#endif
