/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:07:12 by molesen           #+#    #+#             */
/*   Updated: 2023/01/12 16:07:16 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void	print_element(const T &a)
{
	std::cout << a << std::endl;
}

/*
T* array == T& array
*/
template <typename T, typename U>
void	iter(T* array, U len, void (*f)(const T&)) {
	U	i;

	i = 0;
	while (i < len)
	{
		f(array[i]);
		++i;
	}
}

#endif
