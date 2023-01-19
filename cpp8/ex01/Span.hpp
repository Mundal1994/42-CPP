
#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>

class Span
{
private:
	unsigned int N;
	std::vector<int> vec;
public:
	Span(unsigned int var);
	~Span();
	Span(const Span& t);
	Span&	operator=(const Span& t);
	void	addNumber(int nbr);
	void	print(void);
	unsigned int	shortestSpan(void);
	unsigned int	longestSpan(void);
	class outOfRangeException : public std::exception
	{
		public:
		virtual const char * what() const throw()
		{
			return "Out of range of vector";
		}
	};
	class vectorTooSmallException : public std::exception
	{
		public:
		virtual const char * what() const throw()
		{
			return "Vector too small";
		}
	};
};

#endif
