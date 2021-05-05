/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 16:26:18 by user42            #+#    #+#             */
/*   Updated: 2021/05/05 22:03:33 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

// CONSTRUCTORS | DESTRUCTOR

			SuperTrap::SuperTrap() : ClapTrap(), NinjaTrap(), FragTrap()
{
	_Name = "SuperTrap";
	_Lvl = 1;
	_MaxHP = FragTrap::_MaxHP;
	_HP = FragTrap::_HP;
	_MaxEP = SuperTrap::_MaxEP;
	_EP = SuperTrap::_EP;
	_MeleeDamage = SuperTrap::_MeleeDamage;
	_RangedDamage = FragTrap::_RangedDamage;
	_ArmorAmount = FragTrap::_ArmorAmount;
}

			SuperTrap::SuperTrap(std::string const &name)
			: ClapTrap(name), NinjaTrap(name), FragTrap(name)
{
	_Name = name;
	_Lvl = 1;
	_MaxHP = FragTrap::_MaxHP;
	_HP = FragTrap::_HP;
	_MaxEP = SuperTrap::_MaxEP;
	_EP = SuperTrap::_EP;
	_MeleeDamage = SuperTrap::_MeleeDamage;
	_RangedDamage = FragTrap::_RangedDamage;
	_ArmorAmount = FragTrap::_ArmorAmount;
	std::cout << GRN << "SUPER piège " << BMAGENTA << _Name << BBLUE
	<< " apparait" << NRM << std::endl;
}

			SuperTrap::SuperTrap(SuperTrap const &obj)
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
	std::cout << BLUE << "Un copycat SUPER de " << BMAGENTA << obj._Name << BBLUE
	<< " est né" << NRM << std::endl;
}

			SuperTrap::~SuperTrap()
{
	std::cout << GRN << "SUPER piège " << BMAGENTA << _Name << BBLUE
	<< " disparait" << NRM << std::endl;
	//Don't forget to delete your allocated attributes here
}

// METHODS

bool		SuperTrap::rangedAttack(std::string const &target)
{
	std::cout << GRN "SUPER piège " << BMAGENTA << _Name << BBLUE
	<< " usurpe l'attaque d'un FragTrap : " NRM;
	return FragTrap::rangedAttack(target);
}

bool		SuperTrap::meleeAttack(std::string const &target)
{
	std::cout << GRN "SUPER piège " << BMAGENTA << _Name << BBLUE
	<< " usurpe l'attaque d'un NinjaTrap : " NRM;
	return NinjaTrap::meleeAttack(target);
}

bool		SuperTrap::takeDamage(unsigned int amount)
{
	if (_HP == 0)
		std::cout << GRN << "SUPER piège " << BMAGENTA << _Name << BLUE
		<< " ne se sent pas SUPER bien !!" << NRM << std::endl;
	else
	{
		amount -= _ArmorAmount;
		amount = (amount < 0) ? 0 : amount;
		_HP -= amount;
		_HP = (_HP < 0) ? 0 : _HP;
		std::cout << GRN << "SUPER piège " << BMAGENTA << _Name << BLUE
		<< " essuie " << BYELLOW << amount << BLUE << " points de dégats et compte ses "
		<< BYELLOW << _HP << BLUE << " points de vie!" << NRM << std::endl;
		return true;
	}
	return false;
}

bool		SuperTrap::beRepaired(unsigned int amount)
{
	if (_HP == _MaxHP)
	{
		std::cout << GRN << "SUPER piège " << BMAGENTA << _Name << BLUE
		<< " pourrait manger un lion !" << NRM << std::endl;
		return false;
	}
	else
	{
		amount = (static_cast<int>(amount) > _MaxHP - _HP) ? _MaxHP - _HP : amount;
		_HP += amount;
		_HP = (_HP > _MaxHP) ? _MaxHP : _HP;
		std::cout << BWHITE << "*Bruit de chalumeau* " << GRN << "SUPER piège "
		<< BMAGENTA << _Name << BLUE << " annule " << BYELLOW
		<< amount << BLUE << " points de dégats et a " << BYELLOW << _HP << BLUE
		<< " HP !" NRM << std::endl;
	}
	return true;
}

bool			SuperTrap::ninjaShoebox(ScavTrap const &target)
{
	std::cout << GRN "SUPER piège " << BMAGENTA << _Name << BBLUE
	<< " usurpe l'attaque d'un NinjaTrap : " NRM;
	return NinjaTrap::ninjaShoebox(target);
}

bool			SuperTrap::ninjaShoebox(FragTrap const &target)
{
	std::cout << GRN "SUPER piège " << BMAGENTA << _Name << BBLUE
	<< " usurpe l'attaque d'un NinjaTrap : " NRM;
	return NinjaTrap::ninjaShoebox(target);
}

bool			SuperTrap::ninjaShoebox(NinjaTrap const &target)
{
	std::cout << GRN "SUPER piège " << BMAGENTA << _Name << BBLUE
	<< " usurpe l'attaque d'un NinjaTrap : " NRM;
	return NinjaTrap::ninjaShoebox(target);
}

bool			SuperTrap::ninjaShoebox(SuperTrap const &target)
{
	if (_EP < 25)
		std::cout << BMAGENTA << _Name << BLUE
		<< " est completement à plat." NRM << std::endl;
	else
	{
		_EP -= 25;
		std::cout << GRN "SUPER piège " BMAGENTA << _Name << BLUE
		<< " complimente l'autre SUPER pège " BMAGENTA
		<< target.Name() <<  BLUE ", ils se serrent la pince" NRM << std::endl;
		return true;
	}
	return false;
}

bool		SuperTrap::vaulthunter_dot_exe(std::string const &target)
{
	std::cout << GRN "SUPER piège " << BMAGENTA << _Name << BBLUE
	<< " usurpe l'attaque d'un FragTrap : " NRM;
	return FragTrap::vaulthunter_dot_exe(target);
}

SuperTrap     &SuperTrap::operator=(SuperTrap const &obj)
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
