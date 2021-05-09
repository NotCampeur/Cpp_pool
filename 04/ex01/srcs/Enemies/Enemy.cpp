/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 13:35:49 by user42            #+#    #+#             */
/*   Updated: 2021/05/07 15:07:37 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

			Enemy::Enemy()
{
}

			Enemy::Enemy(int hp, std::string const &type)
			: _Type(type), _HP(hp)
{
}

			Enemy::Enemy(Enemy const &obj)
{
	*this = obj;
}

			Enemy::~Enemy()
{
}

std::string	Enemy::getType() const
{
	return _Type;
}

int			Enemy::getHP() const
{
	return _HP;
}

void		Enemy::takeDamage(int amount)
{
	if (amount > 0)
	{
		_HP -= amount;
		_HP = (_HP < 0) ? 0 : _HP;
	}
}

Enemy		&Enemy::operator=(Enemy const &obj)
{
	_Type = obj._Type;
	_HP = obj._HP;

	return *this;
}
