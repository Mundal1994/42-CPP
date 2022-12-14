/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <molesen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:12:10 by molesen           #+#    #+#             */
/*   Updated: 2023/01/12 13:14:10 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap (T& a, T& b) {
	T c;

	c = b;
	b = a;
	a = c;
}

template <typename T>
T min (T a, T b) {
	return ((a < b) ? a : b);
}

template <typename T>
T max (T a, T b) {
	return ((a > b) ? a : b);
}

#endif
