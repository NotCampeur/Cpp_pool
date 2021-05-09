/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 13:35:49 by user42            #+#    #+#             */
/*   Updated: 2021/05/07 13:48:18 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

			AWeapon::AWeapon()
{
}

			AWeapon::AWeapon(std::string const &name, int apcost, int damage)
			: _Name(name), _ApCost(apcost), _Damage(damage)
{
}

			AWeapon::AWeapon(AWeapon const &obj)
{
	*this = obj;
}

			AWeapon::~AWeapon()
{
}

std::string	AWeapon::getName() const
{
	return _Name;
}

int			AWeapon::getApCost() const
{
	return _ApCost;
}

int			AWeapon::getDamage() const
{
	return _Damage;
}

AWeapon		&AWeapon::operator=(AWeapon const &obj)
{
	_Name = obj._Name;
	_ApCost = obj._ApCost;
	_Damage = obj._Damage;

	return *this;
}
