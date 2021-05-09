/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ghoul.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 13:35:49 by user42            #+#    #+#             */
/*   Updated: 2021/05/07 19:00:43 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ghoul.hpp"

			Ghoul::Ghoul() : Enemy(40, "Ghoul")
{
	std::cout << "* Ghoul sound (Something like Arrrgblarrrh)*" << std::endl;
}

			Ghoul::Ghoul(Ghoul const &obj)
{
	*this = obj;
}

			Ghoul::~Ghoul()
{
	std::cout << "Eeeeeer!" << std::endl;
}

void		Ghoul::takeDamage(int amount)
{
	Enemy::takeDamage(amount);
}

Ghoul		&Ghoul::operator=(Ghoul const &obj)
{
	_Type = obj._Type;
	_HP = obj._HP;

	return *this;
}
