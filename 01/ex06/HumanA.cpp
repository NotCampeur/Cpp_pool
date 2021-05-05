/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 16:25:26 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/04 20:00:33 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// CREATORS | DESTRUCTOR

					HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon)
{
	_name = name;
}

					HumanA::~HumanA()
{
}

// ACCESSORS

void				HumanA::setWeapon(Weapon &weapon)
{
	_weapon = weapon;
}

void				HumanA::setName(std::string const &name)
{
	_name = name;
}

Weapon const		&HumanA::getWeapon(void) const
{
	return _weapon;
}

std::string	const	&HumanA::getName(void) const
{
	return _name;
}

// METHOD

void				HumanA::attack() const
{
	std::cout << _name << " strike with " << _weapon.getType() << std::endl;
}