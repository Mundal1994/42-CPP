/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <molesen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:01:33 by molesen           #+#    #+#             */
/*   Updated: 2023/01/11 17:03:54 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

static uintptr_t serialize(Data* ptr)
{
	return ((uintptr_t)ptr);
}

static Data*	deserialize(uintptr_t raw)
{
	return ((Data*)raw);
}

int	main(void)
{
	Data		obj(5);
	Data		hello;
	uintptr_t	pnt;
	uintptr_t	pnt2;

	printf("%p\n", &obj);
	pnt = serialize(&obj);
	Data* newe = deserialize(pnt);
	printf("%p\n", newe);
	printf("value: %d\n", newe->getValue());

	printf("%p\n", &hello);
	pnt2 = serialize(&hello);
	Data* temp = deserialize(pnt2);
	printf("%p (old: %p)\n", temp, &hello);
	printf("value: %d\n", temp->getValue());
	return (0);
}
