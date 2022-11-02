/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:39:16 by molesen           #+#    #+#             */
/*   Updated: 2022/11/02 10:39:58 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

/*
read line from a file.
it will take the length of the line and keep finding the position of the word
we want to replace. it will then copy up until that point where it will
replace the word with str2.
after it have copied str2 it will delete what has just been copied.
it will keep repeating this process until the line has been erased.
*/
static void	read_line(std::ofstream& outfile, std::string line, \
	std::string str1, std::string str2)
{
	std::size_t	curser;
	std::size_t	found;

	found = line.find(str1);
	while (line.length())
	{
		curser = 0;
		found = line.find(str1);
		if (found != std::string::npos)
		{
			while (curser < found)
			{
				outfile << line[curser];
				++curser;
			}
			outfile << str2;
			curser += str1.length();
			line.erase(0, curser);
		}
		else
		{
			outfile << line << std::endl;
			line.erase(0, line.length());
		}
	}
}

/*
takes 3 parameters in the following order: filename, two strings , str1 and str2
it will open the filename and copy its content into a new file called filename.replace
replacing every occurence of str1 with str2
*/
int	main(int argc, char *argv[])
{
	std::string	str1;
	std::string	str2;
	std::string	line;

	if (argc == 4)
	{
		std::ifstream myfile (argv[1]);
		if (myfile.is_open())
		{
			std::ofstream outfile ((std::string)argv[1] + (std::string)".replace");
			str1 = argv[2];
			str2 = argv[3];
			while (getline(myfile,line))
			{
				if (!line.length())
					outfile << std::endl;
				else
					read_line(outfile, line, str1, str2);
			}
			myfile.close();
		}
		else std::cout << "Unable to open file\n";
	}
	else
		puts("Usage: ./sed filename string1 string2");
}
