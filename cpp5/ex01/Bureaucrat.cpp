/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <molesen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:32:17 by molesen           #+#    #+#             */
/*   Updated: 2023/01/06 18:56:09 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*	Default constructor	*/
Bureaucrat::Bureaucrat(const std::string &str, int nbr) : name(str)
{
	try 
	{
		setGrade(nbr);
	}
	catch (std::exception & a)
	{
		std::cout << a.what() << std::endl;
	}
}

/*	Destructor	*/
Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor Bureaucrat\n";
	return ;
}

/*	Copy constructor	*/
Bureaucrat::Bureaucrat(const Bureaucrat& t)
{
	*this = t;
}

/*	Copy assignment operator	*/
Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& t)
{
	if (this != &t)
	{
		(*this).grade = t.grade;
	}
	return (*this);
}

/*	setGrade	*/
void	Bureaucrat::setGrade(int nbr)
{
	if (nbr < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (nbr > 150)
		throw Bureaucrat::GradeTooLowException();
	grade = nbr;
}

/*	getName	*/
const std::string Bureaucrat::getName(void) const
{
	return ((*this).name);
}

/*	getGrade	*/
int	Bureaucrat::getGrade(void) const
{
	return ((*this).grade);
}

/*	increment grade	*/
void	Bureaucrat::incrementGrade(void)
{
	try 
	{
		if ((*this).grade == 1)
			throw Bureaucrat::GradeTooHighException();
		(*this).grade -= 1;
	}
	catch (std::exception &a)
	{
		std::cout << a.what() << std::endl;
	}
}

/*	decrement grade	*/
void	Bureaucrat::decrementGrade(void)
{
	try 
	{
		if ((*this).grade == 150)
			throw Bureaucrat::GradeTooLowException();
		(*this).grade += 1;
	}
	catch (std::exception &a)
	{
		std::cout << a.what() << std::endl;
	}
}

void	Bureaucrat::signForm(Form & form)
{
	try
	{
		form.beSigned(*this);
		std::cout << (*this).getName() << " signs form " << form.getName() << std::endl;
	}
	catch (std::exception &a)
	{
		std::cout << (*this).getName() << " couldn't sign " << form.getName() << " because ";
		std::cout << a.what() << std::endl;
	}
}

std::ostream &  operator  << (std::ostream &ostr, Bureaucrat &a)
{
	ostr << a.getName() << ", bureaucrat grade " << a.getGrade();
	return ostr;
}
