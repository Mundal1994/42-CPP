/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <molesen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:32:32 by molesen           #+#    #+#             */
/*   Updated: 2023/01/10 11:39:49 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string	name;
	int					grade;
public:
	Bureaucrat(const std::string &str, int nbr);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat& t);
	Bureaucrat&	operator=(const Bureaucrat& t);
	const std::string	getName(void) const;
	int	getGrade(void) const;
	void	incrementGrade(void);
	void	decrementGrade(void);
	void	setGrade(int x);
	void	signForm(Form & form);
	void	executeForm(Form & form);
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
	class StatusFalseException : public std::exception
	{
		public:
		virtual const char * what() const throw()
		{
			return "form not signed";
		}
	};
};

std::ostream &  operator  << (std::ostream &ostr, Bureaucrat &a);

#endif
