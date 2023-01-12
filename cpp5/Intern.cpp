
#include "Intern.hpp"

Form* Intern::makeForm(std::string form, std::string str)
{
	const int	max = 3;
	int			i;
	Form*		temp;
	std::string	array[max] = {
		"robotomy request",
		"shrubbery request",
		"presidential request"
	};

	temp = NULL;
	i = 0;
	while (i < max)
	{
		if (!array[i].compare(form))
		{
			switch (i)
			{
				case 0:
					temp = new RobotomyRequestForm(str);
					break;
				case 1:
					temp = new ShrubberyCreationForm(str);
					break;
				case 2:
					temp = new PresidentialPardonForm(str);
					break;
				default:
					std::cout << "None valid form name" << std::endl;
					break;
			}
			break;
		}
		++i;
	}
	return (temp);
}
