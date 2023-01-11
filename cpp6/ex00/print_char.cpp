#include "converter.hpp"

static void	print_char(char c)
{
	if (is_visible_ASCII(c))
		std::cout << c;
	else
		std::cout << "Non displayable";
}

void	analyse_char(char* input, int type)
{
	int	digit_int;

	std::cout << "char: ";
	switch (type)
	{
		case CHAR:
			std::cout << "'" << input << "'" << std::endl;
			break;
		case INT:
			digit_int = atoi(input);
			if (digit_int <= 128 && digit_int >= 0)
			{
				std::cout << "'";
				print_char((char)digit_int);
				std::cout << "'" << std::endl;
			}
			else
				std::cout << "impossible" << std::endl;
			break;
		case FLOAT:
			break;
		case DOUBLE:
			break;
		default:
			std::cout << "impossible" << std::endl;
			break;
	}
}