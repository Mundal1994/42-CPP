/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <molesen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:07:12 by molesen           #+#    #+#             */
/*   Updated: 2023/01/17 15:44:33 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

#include <iostream>

template< typename T>
class	Array
{
private:
	unsigned int length;
	T* array;
public:
	Array() { array = new T[0]; };
	Array(unsigned int n);
	~Array();
	unsigned int	size(void) { return ((*this).length); }
	Array(Array<T>& t);
	Array&	operator=(Array<T>& t);
	class outOfRangeException : public std::exception
	{
		public:
		virtual const char * what() const throw()
		{
			return "Out of range of array";
		}
	};
	T	getElem(int elem) { return ((*this).array[elem]); }
	void	setArray(int elem, T value);
	void	getArray(void);
	T&	operator[](unsigned int i);
};

#endif
