#include "Span.hpp"

Span::Span(unsigned int var) : N(var) {}

Span::~Span()
{
    std::cout << "destroyed span" << std::endl;
    return ;
}

Span::Span(const Span& t)
{
    unsigned int    i;

	(*this).N = t.N;
	for (i = 0; i < t.vec.size() ; ++i)
		(*this).vec.push_back(t.vec[i]);
};

Span&	Span::operator=(const Span& t) {
	unsigned int    i;

    if (this != &t)
	{
        (*this).N = t.N;
        for (i = 0; i < t.vec.size() ; ++i)
            (*this).vec.push_back(t.vec[i]);
	}
	return (*this);
};

void	Span::addNumber(int nbr)
{
    try
    {
        if ((*this).vec.size() < N)
            (*this).vec.push_back(nbr);
        else
            throw outOfRangeException();
    }
    catch (std::exception &a)
	{
		std::cout << a.what() << std::endl;
	}
}

void    Span::print(void)
{
    unsigned int i;

    i = 0;
    while (i < (*this).N)
    {
        std::cout << vec[i] << " ";
        ++i;
    }
    std::cout << std::endl;
}

unsigned int	Span::shortestSpan(void)
{
    unsigned int    temp;
    unsigned int    diff;
    unsigned int    i;

    try
    {
        if ((*this).vec.size() <= 1)
            throw vectorTooSmallException();
        std::sort((*this).vec.begin(), (*this).vec.end(), std::greater<int>());
        i = 0;
        diff = 0;
        while ( i < (*this).N - 1)
        {
            temp = abs((*this).vec[i] - (*this).vec[i + 1]);
            if (temp < diff || diff == 0)
                diff = temp;
            ++i;
        }
        return (diff);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}

unsigned int	Span::longestSpan(void)
{
    try
    {
        if ((*this).vec.size() <= 1)
            throw vectorTooSmallException();
        return (*max_element((*this).vec.begin(), (*this).vec.end()) - *min_element((*this).vec.begin(), (*this).vec.end()));
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}
