/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <molesen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 17:01:07 by molesen           #+#    #+#             */
/*   Updated: 2023/01/06 18:53:03 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*	Default constructor	*/
Form::Form(const std::string &str, int valSign, int valExec) : name(str), gradeSign(valSign), gradeExecute(valExec)
{
	try
	{
		if (valSign < 1 || valExec < 1)
			throw Form::GradeTooHighException();
		else if (valSign > 150 || valExec > 150)
			throw Form::GradeTooLowException();
	}
	catch (std::exception &a)
	{
		std::cout << a.what() << std::endl;
	}
	status = false;
}

/*	Destructor	*/
Form::~Form()
{
	std::cout << "Destructor Form\n";
	return ;
}

/*	Copy constructor	*/
Form::Form(const Form& t) : name(t.getName()), gradeSign(t.getGradeSign()), gradeExecute(t.getGradeExecute())
{
	status = false;
}

/*	Copy assignment operator	*/
Form&	Form::operator=(const Form& t)
{
	if (this != &t)
	{
		//(*this).gradeSign = t.gradeSign;
	}
	return (*this);
}

/*	getName	*/
const std::string Form::getName(void) const
{
	return ((*this).name);
}

/*	getSign	*/
std::string	Form::getStatus(void) const
{
	if ((*this).status == false)
		return ("false");
	return ("true");
}

/*	getGradeSign	*/
int	Form::getGradeSign(void) const
{
	return ((*this).gradeSign);
}

/*	getGradeExecute	*/
int	Form::getGradeExecute(void) const
{
	return ((*this).gradeExecute);
}

void	Form::beSigned(Bureaucrat & t)
{
	//try
	//{
		if ((*this).getGradeSign() >= t.getGrade())
			(*this).status = true;
		else
			throw Form::GradeTooLowException();
	//}
	//catch(const std::exception& a)
	//{
	//	std::cerr << a.what() << '\n';
	//}
}

std::ostream &  operator  << (std::ostream &ostr, Form &a)
{
	ostr << a.getName() << ", Form signed(" << a.getStatus() << ") gradeSign(" << a.getGradeSign() << ") gradeExecute(" << a.getGradeExecute() << ")\n";
	return ostr;
}
