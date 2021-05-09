/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 13:35:49 by user42            #+#    #+#             */
/*   Updated: 2021/05/07 16:19:08 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

			SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

			SuperMutant::SuperMutant(SuperMutant const &obj)
{
	*this = obj;
}

			SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

void		SuperMutant::takeDamage(int amount)
{
	if (amount > 0)
		amount -= 3;
	if (amount > 0)
	{
		_HP -= amount;
		_HP = (_HP < 0) ? 0 : _HP;
	}
}

SuperMutant		&SuperMutant::operator=(SuperMutant const &obj)
{
	_Type = obj._Type;
	_HP = obj._HP;

	return *this;
}
