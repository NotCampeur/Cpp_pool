/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 13:57:11 by user42            #+#    #+#             */
/*   Updated: 2021/05/07 18:31:31 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

			PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
}

			PlasmaRifle::PlasmaRifle(PlasmaRifle const &obj)
{
	*this = obj;
}

			PlasmaRifle::~PlasmaRifle()
{
}

void			PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle		&PlasmaRifle::operator=(PlasmaRifle const &obj)
{
	_Name = obj._Name;
	_ApCost = obj._ApCost;
	_Damage = obj._Damage;

	return *this;
}
