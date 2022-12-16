/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <molesen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:32:17 by molesen           #+#    #+#             */
/*   Updated: 2022/11/14 16:11:27 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*	Default constructor	*/
Bureaucrat::Bureaucrat()
{
	(*this).name = "";
}

/*	Default constructor	*/
Bureaucrat::Bureaucrat(const std::string str)
{
	(*this).name = str;
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
		(*this).name = t.name;
		(*this).grade = t.grade;
	}
	return (*this);
}
