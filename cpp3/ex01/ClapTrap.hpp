/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <molesen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:49:18 by molesen           #+#    #+#             */
/*   Updated: 2022/11/04 16:44:47 by molesen          ###   ########.fr       */
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
	void		setClapTrap(const std::string str, unsigned int health, \
	unsigned int ene, unsigned int dam);
	std::string	getClapTrap_name(void);
	unsigned int	getClapTrap_hit(void);
	unsigned int	getClapTrap_energy(void);
	unsigned int	getClapTrap_damage(void);
};

#endif
