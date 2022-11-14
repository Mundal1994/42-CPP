/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <molesen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:07:04 by molesen           #+#    #+#             */
/*   Updated: 2022/11/14 12:44:29 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(const std::string str);
	~Animal();
	Animal(const Animal& t);
	Animal&	operator=(const Animal& t);
	void	setType(const std::string str);
	std::string	getType(void) const;
	void	makeSound(void) const;
};

#endif
