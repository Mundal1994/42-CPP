#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm(std::string a):Form(a, false, 145, 137){};
// private:
// 	const std::string	name;
// 	int					grade;
// public:
// 	Bureaucrat(const std::string &str, int nbr);
// 	~Bureaucrat();
// 	Bureaucrat(const Bureaucrat& t);
// 	Bureaucrat&	operator=(const Bureaucrat& t);
// 	const std::string	getName(void) const;
// 	int	getGrade(void) const;
// 	void	incrementGrade(void);
// 	void	decrementGrade(void);
// 	void	setGrade(int x);
// 	void	signForm(Form & form);
// 	class GradeTooHighException : public std::exception
// 	{
// 		public:
// 		virtual const char * what() const throw()
// 		{
// 			return "grade too high";
// 		}
// 	};
// 	class GradeTooLowException : public std::exception
// 	{
// 		public:
// 		virtual const char * what() const throw()
// 		{
// 			return "grade too low";
// 		}
// 	};
};

//std::ostream &  operator  << (std::ostream &ostr, Bureaucrat &a);

#endif
