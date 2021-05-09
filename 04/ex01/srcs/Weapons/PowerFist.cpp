/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 13:57:11 by user42            #+#    #+#             */
/*   Updated: 2021/05/07 18:36:10 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

			PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
}

			PowerFist::PowerFist(PowerFist const &obj)
{
	*this = obj;
}

			PowerFist::~PowerFist()
{
}

void			PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist		&PowerFist::operator=(PowerFist const &obj)
{
	_Name = obj._Name;
	_ApCost = obj._ApCost;
	_Damage = obj._Damage;

	return *this;
}
