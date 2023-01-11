#include "converter.hpp"

static int	within_limit(char *input, int len)
{
	int	i;
	int	count;

	count = ft_strlen_stop(input, len, '.');
	i = 0;
	if (!within_limit_int(input, count))
		return (0);
	return (1);
}

void	analyse_int(char* input, int type)
{
	std::cout << "int: ";
	switch (type)
	{
		case CHAR:
			std::cout << (int)input[0] << std::endl;
			break;
		case INT:
			std::cout << atoi(input) << std::endl;
			break;
		case FLOAT:
		case DOUBLE:
			if (!within_limit(input, strlen(input)))
				break;
			std::cout << ((int)atof(input)) << std::endl;
			break;
		default:
			std::cout << "impossible" << std::endl;
			break;
	}
}
