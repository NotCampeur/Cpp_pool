/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 11:38:34 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/10 15:28:13 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

					AMateria::AMateria()
{
	_xp = 0;
	_Type = "NOTHING";
}

					AMateria::AMateria(std::string const &type)
{
	_xp = 0;
	_Type = type;
	// for (int i(0); i < _Type.size(); i++)
	// 	_Type[i] = _Type[i] + 32;
}
					
					AMateria::AMateria(AMateria const &obj)
{
	*this = obj;
}
					
					AMateria::~AMateria()
{
}
					

std::string const	&AMateria::getType() const
{
	return _Type;
}

unsigned int		AMateria::getXP() const
{
	return _xp;
}

void				AMateria::use(ICharacter &target)
{
	_xp += 10;
	target.getName();
}

AMateria			&AMateria::operator=(AMateria const &obj)
{
	_xp = obj._xp;
	_Type = obj._Type;
	return *this;
}
