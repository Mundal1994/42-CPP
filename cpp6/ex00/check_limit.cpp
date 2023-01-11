#include "converter.hpp"

int	within_limit_int(char *input, int len)
{
	int	i;

	i = 0;
	if ((input[i] == '-' && len > 11) || (input[i] == '-' && \
		len == 11 && strncmp(&input[i], "-2147483648", len) > 0))
	{
		std::cout << "impossible" << std::endl;
		return (0);
	}
	else if ((input[i] != '-' && len > 10) || (input[i] != '-' && \
		len == 10 && strncmp(&input[i], "2147483647", len) > 0))
	{
		std::cout << "impossible" << std::endl;
		return (0);
	}
	return (1);
}

// static int	within_limit_float(char *input, int len)
// {
// 	int	i;
// 	int	count;

// 	count = ft_strlen_stop(input, len, '.');
// 	i = 0;
// 	if ((input[i] == '-' && len > 57) || (input[i] == '-' && \
// 		len == 57 && strncmp(input, "-340282346638528859811704183484516925440.0000000000000000", len) > 0))
// 		return (0);
// 	if (input[i] == '-' && \
// 		len == 40 && strncmp(input, "-340282346638528859811704183484516925440", count) > 0)
// 		return (0);
// 	else if ((input[i] != '-' && len > 56) || (input[i] != '-' && \
// 		len == 56 && strncmp(input, "340282346638528859811704183484516925440.0000000000000000", len) > 0))
// 		return (0);
// 	return (1);
// }

int	result_valid(char *str, int result)
{
	if (result == INT && !within_limit_int(str, strlen(str)))
		return (0);
	// if (result == FLOAT && !within_limit_float(str, strlen(str)))
	// 	return (0);
	// if (result == DOUBLE && !within_limit_double(str, strlen(str)))
	// 	return (0);
	return (1);
}