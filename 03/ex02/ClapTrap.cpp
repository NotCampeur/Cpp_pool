/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 16:26:18 by user42            #+#    #+#             */
/*   Updated: 2021/05/05 18:48:32 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// CONSTRUCTORS | DESTRUCTOR

			ClapTrap::ClapTrap()
	: _Name("ClapTrap"), _Lvl(0), _MaxHP(0), _HP(0), _MaxEP(0), _EP(0)
	, _MeleeDamage(0), _RangedDamage(0), _ArmorAmount(0)
{
}

			ClapTrap::ClapTrap(std::string const &name)
	: _Name(name), _Lvl(0), _MaxHP(0), _HP(0), _MaxEP(0), _EP(0)
	, _MeleeDamage(0), _RangedDamage(0), _ArmorAmount(0)
{
	std::cout << GRN "Piège à clapet " BMAGENTA << _Name << BBLUE
	<< " arrive au monde !" NRM << std::endl;
}

			ClapTrap::ClapTrap(ClapTrap const &obj)
{
	_Name = obj._Name;
	_Lvl = obj._Lvl;
	_MaxHP = obj._MaxHP;
	_HP = obj._HP;
	_MaxEP = obj._MaxEP;
	_EP = obj._EP;
	_MeleeDamage = obj._MeleeDamage;
	_RangedDamage = obj._RangedDamage;
	_ArmorAmount = obj._ArmorAmount;
	std::cout << BLUE << "Un copycat à clapet de " << BMAGENTA << obj._Name << BBLUE
	<< " est né" << NRM << std::endl;
}

			ClapTrap::~ClapTrap()
{
	std::cout << GRN << "Piège à clapet " << BMAGENTA << _Name << BBLUE
	<< " est désintégré" << NRM << std::endl;
	//Don't forget to delete your allocated attributes here
}

// METHODS

bool		ClapTrap::rangedAttack(std::string const &target)
{
	if (_HP == 0)
	{
		std::cout << GRN << "Piège à clapet " << BMAGENTA << _Name << BLUE
		<< " n'est pas en mesure de faire ça!!" NRM << std::endl;
		return false;
	}
	else
	{
		std::cout << GRN << "Piège à clapet " << BMAGENTA << _Name << BLUE
		<< " attaque " << BMAGENTA << target << BLUE << " pas au corp à corp, infligeant "
		<< BYELLOW << _RangedDamage << BLUE << " points de dégats !" << NRM << std::endl;
	}
	return true;
}

bool		ClapTrap::meleeAttack(std::string const &target)
{
	if (_HP == 0)
	{
		std::cout << GRN "Piège à clapet " BMAGENTA << _Name << BLUE
		<< " n'est pas en mesure de faire ça!!" NRM << std::endl;
		return false;
	}
	else
	{
		std::cout << GRN "Piège à clapet " BMAGENTA << _Name << BLUE
		<< " agresse " BMAGENTA << target << BLUE " en combat non distant, infligeant "
		<< BYELLOW << _MeleeDamage << BLUE " points de dégats !" NRM << std::endl;
	}
	return true;
}

bool		ClapTrap::takeDamage(unsigned int amount)
{
	if (_HP == 0)
		std::cout << GRN "Piège à clapet " BMAGENTA << _Name << BLUE
		<< " est au summum de son état !!" NRM << std::endl;
	else
	{
		amount -= _ArmorAmount;
		amount = (amount < 0) ? 0 : amount;
		_HP -= amount;
		_HP = (_HP < 0) ? 0 : _HP;
		std::cout << GRN "Piège à clapet " BMAGENTA << _Name << BLUE
		<< " reçoit " BYELLOW << amount << BLUE " autant de dégats et constate que sa vie est à "
		<< BYELLOW << _HP << NRM << std::endl;
		return true;
	}
	return false;
}

bool		ClapTrap::beRepaired(unsigned int amount)
{
	if (_HP == _MaxHP)
	{
		std::cout << GRN << "Piège à clapet " << BMAGENTA << _Name << BLUE
		<< " se rend compte que c'est inutile !" << NRM << std::endl;
		return false;
	}
	else
	{
		amount = (static_cast<int>(amount) > _MaxHP - _HP) ? _MaxHP - _HP : amount;
		_HP += amount;
		_HP = (_HP > _MaxHP) ? _MaxHP : _HP;
		std::cout << BWHITE << "*Bruit de chalumeau* " << GRN << "Piège à clapet "
		<< BMAGENTA << _Name << BLUE << " reprend " << BYELLOW
		<< amount << BLUE << " points de vie et en a " << BYELLOW << _HP << BLUE
		<< " !" << NRM << std::endl;
	}
	return true;
}

// ACCESSORS
	// GETTERS

std::string	ClapTrap::Name(void) const
{
	return _Name;
}

int			ClapTrap::Lvl(void) const
{
	return _Lvl;
}

int			ClapTrap::MaxHP(void) const
{
	return _MaxHP;
}

int			ClapTrap::HP(void) const
{
	return _HP;
}

int			ClapTrap::MaxEP(void) const
{
	return _MaxEP;
}

int			ClapTrap::EP(void) const
{
	return _EP;
}

int			ClapTrap::MeleeDamage(void) const
{
	return _MeleeDamage;
}

int			ClapTrap::RangedDamage(void) const
{
	return _RangedDamage;
}

int			ClapTrap::ArmorAmount(void) const
{
	return _ArmorAmount;
}

	// SETTERS

void		ClapTrap::setName(std::string value)
{
	_Name = value;
}

void		ClapTrap::setLvl(int value)
{
	_Lvl = value;
}

void		ClapTrap::setMaxHP(int value)
{
	_MaxHP = value;
}

void		ClapTrap::setHP(int value)
{
	_HP = value;
}

void		ClapTrap::setMaxEP(int value)
{
	_MaxEP = value;
}

void		ClapTrap::setEP(int value)
{
	_EP = value;
}

void		ClapTrap::setMeleeDamage(int value)
{
	_MeleeDamage = value;
}

void		ClapTrap::setRangedDamage(int value)
{
	_RangedDamage = value;
}

void		ClapTrap::setArmorAmount(int value)
{
	_ArmorAmount = value;
}

	// PRINTERS

void		ClapTrap::printName(void) const
{
	std::cout << _Name << std::endl;
}

void		ClapTrap::printLvl(void) const
{
	std::cout << _Lvl << std::endl;
}

void		ClapTrap::printMaxHP(void) const
{
	std::cout << _MaxHP << std::endl;
}

void		ClapTrap::printHP(void) const
{
	std::cout << _HP << std::endl;
}

void		ClapTrap::printMaxEP(void) const
{
	std::cout << _MaxEP << std::endl;
}

void		ClapTrap::printEP(void) const
{
	std::cout << _EP << std::endl;
}

void		ClapTrap::printMeleeDamage(void) const
{
	std::cout << _MeleeDamage << std::endl;
}

void		ClapTrap::printRangedDamage(void) const
{
	std::cout << _RangedDamage << std::endl;
}

void		ClapTrap::printArmorAmount(void) const
{
	std::cout << _ArmorAmount << std::endl;
}

	// OPERATORS

ClapTrap     &ClapTrap::operator=(ClapTrap const &obj)
{
	_Name = obj._Name;
	_Lvl = obj._Lvl;
	_MaxHP = obj._MaxHP;
	_HP = obj._HP;
	_MaxEP = obj._MaxEP;
	_EP = obj._EP;
	_MeleeDamage = obj._MeleeDamage;
	_RangedDamage = obj._RangedDamage;
	_ArmorAmount = obj._ArmorAmount;
	return *this;
}

