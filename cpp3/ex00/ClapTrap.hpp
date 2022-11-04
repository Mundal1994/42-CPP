/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <molesen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:49:18 by molesen           #+#    #+#             */
/*   Updated: 2022/11/04 15:36:12 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
	std::string	name;
	int			hit;
	int			energy;
	int			damage;
public:
	ClapTrap();
	ClapTrap(std::string str);
	~ClapTrap();
	ClapTrap(const ClapTrap& t);
	ClapTrap&	operator=(const ClapTrap& t);
	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
};

#endif
