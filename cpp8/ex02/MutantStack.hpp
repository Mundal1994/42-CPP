
#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<class T, class C = std::deque<T>>
class MutantStack : public std::stack<T, C>
{
public:
	typedef typename C::iterator iterator;

	iterator begin()
	{
		return ((*this).c.begin());
	};
	iterator end()
	{
		return ((*this).c.end());
	};
};

#endif
