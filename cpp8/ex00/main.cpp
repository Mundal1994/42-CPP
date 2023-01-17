/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <molesen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:12:04 by molesen           #+#    #+#             */
/*   Updated: 2023/01/17 16:47:07 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <array>

int	main(void)
{
	std::array<int,6> ar = {1, 2, 3, 4, 5, 6};
	int	result;

	result = easyfind(ar, 4);

	std::cout << "easyfind call: " << result << std::endl;
	return (0);
}
