/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:03:56 by molesen           #+#    #+#             */
/*   Updated: 2023/01/17 16:03:58 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"

template <class T>
Array<T>::Array(unsigned int n)
{
	length = n;
	array = new T[n];
};

template <class T>
Array<T>::~Array() {
	std::cout << "destructor" << std::endl;
	return ;
};

template <class T>
Array<T>::Array(Array<T>& t)
{
	unsigned int	i;

	(*this).length = t.size();
	(*this).array = new T((*this).size());
	i = 0;
	while (i < (*this).size())
	{
		(*this).setArray(i, t.getElem(i));
		++i;
	}
};

template <class T>
Array<T>&	Array<T>::operator=(Array<T>& t) {
	if (this != &t)
	{
		(*this).~Array();
		(*this).length = t.size();
		(*this).array = new T((*this).size());
		for (unsigned int i = 0; i < (*this).size(); i++)
			(*this).array[i] = t.array[i];
	}
	return (*this);
};

template <class T>
void	Array<T>::setArray(int elem, T value)
{
	(*this).array[elem] = value;
}

template <class T>
void	Array<T>::getArray(void)
{
	unsigned int	i;

	i = 0;
	while (i < (*this).size())
	{
		std::cout << (*this).array[i] << "->";
		++i;
	}
	std::cout << std::endl;
}

template <class T>
T&	Array<T>::operator[](unsigned int i)
{
	try
	{
		if (i >= (*this).size() || i < 0)
			throw outOfRangeException();
		return ((*this).array[i]);
	}
	catch (std::exception &a)
	{
		std::cout << a.what();
		std::cout << " - did you want the last element value >> ";
		return ((*this).array[(*this).size() - 1]);
	}
}
