/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 13:35:49 by user42            #+#    #+#             */
/*   Updated: 2021/05/07 18:34:48 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

			RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

			RadScorpion::RadScorpion(RadScorpion const &obj)
{
	*this = obj;
}

			RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

void		RadScorpion::takeDamage(int amount)
{
	Enemy::takeDamage(amount);
}

RadScorpion		&RadScorpion::operator=(RadScorpion const &obj)
{
	_Type = obj._Type;
	_HP = obj._HP;

	return *this;
}
