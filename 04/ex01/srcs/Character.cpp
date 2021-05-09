/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 16:50:39 by user42            #+#    #+#             */
/*   Updated: 2021/05/07 19:02:05 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

				Character::Character()
{
}

				Character::Character(std::string const &name)
{
	_Name = name;
	_AP = 40;
	_Current_Weapon = NULL;
}

				Character::Character(Character const &obj)
{
	*this = obj;
}

				Character::~Character()
{
}

void			Character::recoverAP()
{
	_AP += 10;
	_AP = (_AP > 40) ? 40 : _AP;
}

void			Character::equip(AWeapon *weapon)
{
	_Current_Weapon = weapon;
}

void			Character::attack(Enemy *enemy)
{
	if (_Current_Weapon != NULL && enemy != NULL)
	{
		std::cout << _Name << " attacks " << enemy->getType()
		<< " with a " << _Current_Weapon->getName() << std::endl;
		_AP -= _Current_Weapon->getApCost();
		if (_AP >= 0)
		{
			_Current_Weapon->attack();
			enemy->takeDamage(_Current_Weapon->getDamage());
			if (enemy->getHP() == 0)
				delete enemy;
		}
		else
		{
			_AP += _Current_Weapon->getApCost();
		}
	}
}

std::string		Character::getName() const
{
	return _Name;
}

int				Character::getAP() const
{
	return _AP;
}

AWeapon			*Character::getCurrentWeapon() const
{
	return _Current_Weapon;
}

Character		&Character::operator=(Character const &obj)
{
	_Name = obj._Name;
	_AP = obj._AP;
	_Current_Weapon = obj._Current_Weapon;
	return *this;
}

std::ostream			&operator<<(std::ostream &os, Character const &obj)
{
	if (obj.getCurrentWeapon() != NULL)
	{
		os << obj.getName() << " has " << obj.getAP()
		<< " AP and wields a " << obj.getCurrentWeapon()->getName()
		<< std::endl;
	}
	else
	{
		os << obj.getName() << " has " << obj.getAP()
		<< " AP and is unarmed" << std::endl;
	}
	return os;
}
