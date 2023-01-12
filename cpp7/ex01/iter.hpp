
#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void iter (T& a, T& b) {
	T c;

	c = b;
	b = a;
	a = c;
}

#endif
