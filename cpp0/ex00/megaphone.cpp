#include <stdio.h>
/*
argc: number of strings in array argv
argv: array of command-line argument stringgs

can add following to argument: char *envp[]
envp: array of environment variable strings
*/
int main(int argc, char *argv[])
{
	//int count;

	// Display each command-line argument.
	if (argc and argv)
		puts("this is a string with puts function");
	// std::cout << "\nCommand-line arguments:\n";
	// for( count = 0; count < argc; count++ )
	// 	std::cout << "  argv[" << count << "]   "
	// 			<< argv[count] << "\n";
}