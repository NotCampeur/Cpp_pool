/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 12:10:59 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/10 15:37:49 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

					Cure::Cure() : AMateria("cure")
{
	_xp = 0;
	_Type = "cure";
}

					
					Cure::Cure(Cure const &obj)
{
	*this = obj;
}

					Cure::~Cure()
{
}

Cure				*Cure::clone() const
{
	return (new Cure);
}

void				Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "s wounds *" << std::endl;
}

Cure			&Cure::operator=(Cure const &obj)
{
	_xp = obj._xp;
	_Type = "cure";
	return *this;
}
