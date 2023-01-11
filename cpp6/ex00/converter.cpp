
#include "converter.hpp"
/*
./convert 0
char: Non displayable
int: 0
float: 0.0f
double: 0.0

./convert nan
char: impossible
int: impossible
float: nanf
double: nan

./convert 42.0f
char: '*'
int: 42
float: 42.0f
double: 42.0
*/


/*
convert string to int
int num = stoi(str)

can also use stream
#include <sstream>
stringstream ss;
ss << str;
ss >> num;


string to char

string to float
#include <string>
std::stof() convert string to float

string to double
std::stod() convert string to double
*/
#include <string>
static int non_valid_arg(void)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: nanf" << std::endl;
	std::cout << "double: nan" << std::endl;
	return (0);
}

int	ft_strlen_stop(char* input, int len, char c)
{
	int	count;

	count = 0;
	while (count < len)
	{
		if (input[count] == c)
			break ;
		++count;
	}
	return (count);
}

// static int	within_limit_float(char *input, int len)
// {
// 	int	i;

// 	i = 0;
// 	if ((input[i] == '-' && len > 57) || (input[i] == '-' && \
// 		len == 57 && strncmp(&input[i], "-340282346638528859811704183484516925440.0000000000000000", len) > 0))
// 		return (0);
// 	else if ((input[i] != '-' && len > 56) || (input[i] != '-' && \
// 		len == 56 && strncmp(&input[i], "340282346638528859811704183484516925440.0000000000000000", len) > 0))
// 		return (0);
// 	return (1);
// }

// static int	within_limit_float(char *input, int len)
// {
// 	int	i;

// 	i = 0;
// 	if ((input[i] == '-' && len > 57) || (input[i] == '-' && \
// 		len == 57 && strncmp(&input[i], "-340282346638528859811704183484516925440.0000000000000000", len) > 0))
// 		return (0);
// 	else if ((input[i] != '-' && len > 56) || (input[i] != '-' && \
// 		len == 56 && strncmp(&input[i], "340282346638528859811704183484516925440.0000000000000000", len) > 0))
// 		return (0);
// 	return (1);
// }
static void	print_double(double nbr, int orig)
{
	std::cout << "double: ";
	if (nbr == orig)
		std::cout << nbr << ".0" << std::endl;
	else
		std::cout << nbr << std::endl;
}


int main(int argc, char** argv)
{
	int type;

	if (argc == 2)
	{
		type = analyse_arg(argv[1]);//add struct also to store the 4 values...
		if (type == ERROR)
			return (non_valid_arg());
		std::cout << "TYPE: " << type << std::endl;
		analyse_char(argv[1], type);
		analyse_int(argv[1], type);
		analyse_float(argv[1], type);

		print_double((double)type, type);
	}
	else
		std::cout << "Usage: ./converter 5" << std::endl;
	return (0);
}
