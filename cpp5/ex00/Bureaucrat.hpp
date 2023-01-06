/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <molesen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:32:32 by molesen           #+#    #+#             */
/*   Updated: 2023/01/06 16:28:15 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

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
	const std::string getName(void) const;
	int	getGrade(void) const;
	void	incrementGrade(void);
	void	decrementGrade(void);
	void	setGrade(int x);
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

std::ostream &  operator  << (std::ostream &ostr, Bureaucrat &a);

#endif
