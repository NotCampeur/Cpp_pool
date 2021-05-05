/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 16:25:30 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/04 19:56:42 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// CREATORS | DESTRUCTOR

					HumanB::HumanB(std::string name)
{
	_weapon = NULL;
	_name = name;
}

					HumanB::~HumanB()
{

}

// ACCESSORS

void				HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void				HumanB::setName(std::string const &name)
{
	_name = name;
}

Weapon const		&HumanB::getWeapon(void) const
{
	return *_weapon;
}

std::string const	&HumanB::getName(void) const
{
	return _name;
}

// METHOD

void				HumanB::attack() const
{
	if (_weapon != NULL)
		std::cout << _name << " strike with " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " strike with nothing" << std::endl;
}