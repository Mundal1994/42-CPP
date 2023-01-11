/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <molesen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:01:09 by molesen           #+#    #+#             */
/*   Updated: 2023/01/11 17:05:42 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>
#include <stdint.h>

class Data
{
private:
	int	value;
public:
	Data();
	Data(int a) : value(a) {}
	~Data();
	Data(const Data& t);
	Data&	operator=(const Data& t);
	void	setValue(int a);
	int		getValue(void);
};

#endif
