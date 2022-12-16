/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <molesen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:32:32 by molesen           #+#    #+#             */
/*   Updated: 2022/11/14 16:22:39 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
private:
	const std::string	name;
	int		grade;
public:
	Bureaucrat();
	Bureaucrat(const std::string str);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat& t);
	Bureaucrat&	operator=(const Bureaucrat& t);
};

#endif
