
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

static int  analyse_arg(char* arg)
{
    if (arg)
        return (42);
    return (ERROR);
}

static int error(void)
{
    std::cout << "not valid argument" << std::endl;
    return (0);
}

int main(int argc, char** argv)
{
    int argument;

    if (argc == 2)
    {
        argument = analyse_arg(argv[1]);//add struct also to store the 4 values...
        if (argument == ERROR)
            return (error());
        std::cout << argument << std::endl;
        std::cout << (char)argument << std::endl;
        /*if ((float)argument % 10.0f == 0)
            std::cout << (float)argument << ".0f" << std::endl;
        else*/
        float nbr = argument * 1.0f;
        std::cout << nbr << "f" << std::endl;
        std::cout << (double)argument << ".0" << std::endl;
    }
    else
        std::cout << "Usage: ./converter 5" << std::endl;
    return (0);
}
