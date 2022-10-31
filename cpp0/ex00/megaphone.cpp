#include <iostream>
#include <cctype>
#include <cstring>

/*
argc: number of strings in array argv
argv: array of command-line argument stringgs

can add following to argument: char *envp[]
envp: array of environment variable strings
*/
int main(int argc, char *argv[])
{
	int		count;
	int		i;
	int		len;
	char	bigLetter;

	if (argc > 1)
	{
		count = 1;
		while (count < argc)
		{
			i = 0;
			len = strlen(argv[count]);
			while (i < len)
			{
				bigLetter = toupper(argv[count][i]);
				std::cout << bigLetter;
				++i;
			}
			++count;
		}
		std::cout << "\n";
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << "\n";
	return (0);
}
