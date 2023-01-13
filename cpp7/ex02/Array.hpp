/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <molesen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:07:12 by molesen           #+#    #+#             */
/*   Updated: 2023/01/13 13:08:47 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template< typename T>
class	Array
{
private:
	unsigned int size;
	T* array;
public:
	Array() { array = new T[1]; };
	Array(unsigned int n) {
		size = n;
		array = new T[n];
	};
	~Array() {
		std::cout << "destructor" << std::endl;
		return ;
	};
	Array(Array<T>& t) {//removed const
		*this = t;
		
		/*
		unsigned int	i;
		unsigned int	size;

		size = t.getSize();
		(*this).array = new T(size);
		std::cout << size << t.getElem(0) << std::endl;
		i = 0;
		while (i < size)
		{
			(*this).setArray(i, t.getElem(i));
			++i;
		}*/
		//think it has to be new t (or something like that)
	};
	Array&	operator=(Array<T>& t) {//removed const
		if (this != &t)
		{
			(*this).array = t.array;
			(*this).size = t.size;
		}
		return (*this);
	};
	unsigned int	getSize(void) { return (size); }
	T	getElem(int elem) { return ((*this).array[elem]); }//removed const
	void	setArray(int elem, T value)
	{
		(*this).array[elem] = value;
	}
	void	getArray(void)
	{
		unsigned int	i;

		i = 0;
		while (i < (*this).getSize())
		{
			std::cout << (*this).array[i] << "->";
			++i;
		}
		std::cout << std::endl;
	}
};

#endif
