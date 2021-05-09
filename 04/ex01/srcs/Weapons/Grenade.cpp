/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Grenade.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 13:57:11 by user42            #+#    #+#             */
/*   Updated: 2021/05/07 18:43:56 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Grenade.hpp"

			Grenade::Grenade() : AWeapon("Grenade", 20, 200)
{
}

			Grenade::Grenade(Grenade const &obj)
{
	*this = obj;
}

			Grenade::~Grenade()
{
}

void			Grenade::attack() const
{
	std::cout << "* cling cling BOOOOOM *" << std::endl;
}

Grenade		&Grenade::operator=(Grenade const &obj)
{
	_Name = obj._Name;
	_ApCost = obj._ApCost;
	_Damage = obj._Damage;

	return *this;
}
