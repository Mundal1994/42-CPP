#include "converter.hpp"

#include <stdlib.h>
#include <iomanip>
static int	within_limit_float(char* input)
{
	char*	end;
	float	nbr;
	long double	ldouble;
	std::string	str(input);

	ldouble = strtod(input, &end);
	nbr = std::stof(str);
	std::cout << nbr << std::endl;
	
	if (ldouble > std::numeric_limits<float>::max())
	{
		std::cout << "+inff" << std::endl;
		return (0);
	}
	else if (ldouble < std::numeric_limits<float>::min())
	{
		std::cout << "-inff" << std::endl;
		return (0);
	}
	return (1);
}

static int	within_limit_double(char* input)
{
	char*	end;
	double	max;
	long double	nbr;

	max = std::numeric_limits<double>::max();
	nbr = strtod(input, &end);
	if (nbr > std::numeric_limits<double>::max())
	{
		std::cout << "+inf" << std::endl;
		return (0);
	}
	else if (nbr < std::numeric_limits<double>::min())
	{
		std::cout << "-inf" << std::endl;
		return (0);
	}
	return (1);
}

void	analyse_float(char* input, int type)
{
	std::cout.precision(6);
	std::cout << "float: " << std::fixed;
	switch (type)
	{
		case CHAR:
			std::cout << (float)input[0] << ".0f" << std::endl;
			break;
		case INT:
			std::cout << atoi(input) << ".0f" << std::endl;
			break;
		case FLOAT:
			if (!within_limit_float(input))
				break;
			std::cout << (atof(input)) << std::endl;
			break;
		case DOUBLE:
			if (!within_limit_double(input))
				break;
			std::cout << (atof(input)) << std::endl;
			break;
		default:
			std::cout << "nanf" << std::endl;
			break;
	}
}
