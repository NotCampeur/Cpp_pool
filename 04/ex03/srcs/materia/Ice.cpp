/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 12:10:59 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/11 13:50:54 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

					Ice::Ice() : AMateria("ice")
{
	_xp = 0;
	_Type = "ice";
}

					
					Ice::Ice(Ice const &obj)
{
	*this = obj;
}

					Ice::~Ice()
{
}

Ice					*Ice::clone() const
{
	return (new Ice(*this));
}

void				Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice			&Ice::operator=(Ice const &obj)
{
	_xp = obj._xp;
	_Type = "ice";
	return *this;
}
