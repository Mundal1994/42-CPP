
#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Form;

class Intern
{
public:
    Form* makeForm(std::string form, std::string str);

/*private:
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
	};*/
};

#endif
