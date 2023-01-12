/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <molesen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:12:04 by molesen           #+#    #+#             */
/*   Updated: 2023/01/12 16:07:00 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	int a[] = {1, 2, 4, 8, 16};
	std::string b[] = {"hello", "my", "name", "is", "jefjef"};
	
	::iter( a, 5, ::print_element);
	::iter(b, 5, ::print_element);
	return (0);
}
