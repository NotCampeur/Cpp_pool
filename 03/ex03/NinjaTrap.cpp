/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 16:26:18 by user42            #+#    #+#             */
/*   Updated: 2021/05/05 19:56:36 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

// CONSTRUCTORS | DESTRUCTOR

			NinjaTrap::NinjaTrap() : ClapTrap()
{
	_Name = "NinjaTrap";
	_Lvl = 1;
	_MaxHP = 60;
	_HP = 60;
	_MaxEP = 120;
	_EP = 120;
	_MeleeDamage = 60;
	_RangedDamage = 5;
	_ArmorAmount = 0;
}

			NinjaTrap::NinjaTrap(std::string const &name) : ClapTrap(name)
{
	_Name = name;
	_Lvl = 1;
	_MaxHP = 60;
	_HP = 60;
	_MaxEP = 120;
	_EP = 120;
	_MeleeDamage = 60;
	_RangedDamage = 5;
	_ArmorAmount = 0;
	std::cout << GRN << "Piège à Ninja " << BMAGENTA << _Name << BBLUE
	<< " sort tout droit de l'ombre" << NRM << std::endl;
}

			NinjaTrap::NinjaTrap(NinjaTrap const &obj) : ClapTrap(obj)
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
	std::cout << BLUE << "Un copycat ninja de " << BMAGENTA << obj._Name << BBLUE
	<< " est né" << NRM << std::endl;
}

			NinjaTrap::~NinjaTrap()
{
	std::cout << GRN << "Piège à Ninja " << BMAGENTA << _Name << BBLUE
	<< " n'est plus" << NRM << std::endl;
	//Don't forget to delete your allocated attributes here
}

// METHODS

bool		NinjaTrap::rangedAttack(std::string const &target)
{
	if (_HP == 0)
	{
		std::cout << GRN << "Piège à Ninja " << BMAGENTA << _Name << BLUE
		<< " est incapable de faire ça!!" << NRM << std::endl;
		return false;
	}
	else
	{
		std::cout << GRN << "Piège à Ninja " << BMAGENTA << _Name << BLUE
		<< " attaque " << BMAGENTA << target << BLUE << " avec une étoile de ninja, infligeant "
		<< BYELLOW << _RangedDamage << BLUE << " points de dégats !" << NRM << std::endl;
	}
	return true;
}

bool		NinjaTrap::meleeAttack(std::string const &target)
{
	if (_HP == 0)
	{
		std::cout << GRN << "Piège à Ninja " << BMAGENTA << _Name << BLUE
		<< " est incapable de faire ça!!" << NRM << std::endl;
		return false;
	}
	else
	{
		std::cout << GRN << "Piège à Ninja " << BMAGENTA << _Name << BLUE
		<< " attaque " << BMAGENTA << target << BLUE << " avec un katana, infligeant "
		<< BYELLOW << _MeleeDamage << BLUE << " points de dégats !" << NRM << std::endl;
	}
	return true;
}

bool		NinjaTrap::takeDamage(unsigned int amount)
{
	if (_HP == 0)
		std::cout << GRN << "Piège à Ninja " << BMAGENTA << _Name << BLUE
		<< " est au pire de sa forme !!" << NRM << std::endl;
	else
	{
		amount -= _ArmorAmount;
		amount = (amount < 0) ? 0 : amount;
		_HP -= amount;
		_HP = (_HP < 0) ? 0 : _HP;
		std::cout << GRN << "Piège à Ninja " << BMAGENTA << _Name << BLUE
		<< " encaisse " << BYELLOW << amount << BLUE << " points de dégats et se retrouve donc à "
		<< BYELLOW << _HP << BLUE << " points de vie!" << NRM << std::endl;
		return true;
	}
	return false;
}

bool		NinjaTrap::beRepaired(unsigned int amount)
{
	if (_HP == _MaxHP)
	{
		std::cout << GRN << "Piège à Ninja " << BMAGENTA << _Name << BLUE
		<< " se sent déjà incroyablement bien !" << NRM << std::endl;
		return false;
	}
	else
	{
		amount = (static_cast<int>(amount) > _MaxHP - _HP) ? _MaxHP - _HP : amount;
		_HP += amount;
		_HP = (_HP > _MaxHP) ? _MaxHP : _HP;
		std::cout << BWHITE << "*Bruit de chalumeau* " << GRN << "Piège à Ninja "
		<< BMAGENTA << _Name << BLUE << " ramène " << BYELLOW
		<< amount << BLUE << " points de vie et en a " << BYELLOW << _HP << BLUE
		<< " !" << NRM << std::endl;
	}
	return true;
}

bool			NinjaTrap::ninjaShoebox(ClapTrap const &target)
{
	if (_EP < 25)
		std::cout << BMAGENTA << _Name << BLUE
		<< " est completement à plat." NRM << std::endl;
	else
	{
		_EP -= 25;
		std::cout << GRN "Piège à Ninja " BMAGENTA << _Name << BLUE
		<< " ne fait rien car il respecte ses ascendants ! " BMAGENTA
		<< target.Name() <<  BLUE " est fier" NRM << std::endl;
		return true;
	}
	return false;
}

bool			NinjaTrap::ninjaShoebox(ScavTrap const &target)
{
	if (_EP < 25)
		std::cout << BMAGENTA << _Name << BLUE
		<< " est completement à plat." NRM << std::endl;
	else
	{
		_EP -= 25;
		std::cout << GRN "Piège à Ninja " BMAGENTA << _Name << BLUE
		<< " fait un croche pied à " BMAGENTA
		<< target.Name() <<  BLUE ", le ScavTrap est furieux" NRM << std::endl;
		return true;
	}
	return false;
}

bool			NinjaTrap::ninjaShoebox(FragTrap const &target)
{
	if (_EP < 25)
		std::cout << BMAGENTA << _Name << BLUE
		<< " est completement à plat." NRM << std::endl;
	else
	{
		_EP -= 25;
		std::cout << GRN "Piège à Ninja " BMAGENTA << _Name << BLUE
		<< " fait une clé de bra à " BMAGENTA
		<< target.Name() <<  BLUE ", le bras du FragTrap se détache, il s'enfuit" NRM << std::endl;
		return true;
	}
	return false;
}

bool			NinjaTrap::ninjaShoebox(NinjaTrap const &target)
{
	if (_EP < 25)
		std::cout << BMAGENTA << _Name << BLUE
		<< " est completement à plat." NRM << std::endl;
	else
	{
		_EP -= 25;
		std::cout << GRN "Piège à Ninja " BMAGENTA << _Name << BLUE
		<< " pirate " BMAGENTA
		<< target.Name() <<  BLUE ", le Ninja est forcé de danser" NRM << std::endl;
		return true;
	}
	return false;
}

NinjaTrap     &NinjaTrap::operator=(NinjaTrap const &obj)
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
