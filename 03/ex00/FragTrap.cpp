/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 16:26:18 by user42            #+#    #+#             */
/*   Updated: 2021/05/03 18:14:36 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// CONSTRUCTORS | DESTRUCTOR

			FragTrap::FragTrap() : _Name("FragTrap")
{
	_Lvl = 1;
	_MaxHP = 100;
	_HP = 100;
	_MaxEP = 100;
	_EP = 100;
	_MeleeDamage = 30;
	_RangedDamage = 20;
	_ArmorAmount = 5;
}

			FragTrap::FragTrap(std::string const &name)
{
	_Name = name;
	_Lvl = 1;
	_MaxHP = 100;
	_HP = 100;
	_MaxEP = 100;
	_EP = 100;
	_MeleeDamage = 30;
	_RangedDamage = 20;
	_ArmorAmount = 5;
	std::cout << GRN << "Piège à Frag " << BMAGENTA << _Name << BBLUE
	<< " sort tout droit de l'usine" << NRM << std::endl;
}

			FragTrap::FragTrap(FragTrap const &obj)
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
	std::cout << BLUE << "Un copycat de " << BMAGENTA << obj._Name << BBLUE
	<< " est né" << NRM << std::endl;
}

			FragTrap::~FragTrap()
{
	std::cout << GRN << "Piège à Frag " << BMAGENTA << _Name << BBLUE
	<< " a fait griller sa carte mère" << NRM << std::endl;
	//Don't forget to delete your allocated attributes here
}

// METHODS

bool		FragTrap::rangedAttack(std::string const &target)
{
	if (_HP == 0)
	{
		std::cout << GRN << "Piège à Frag " << BMAGENTA << _Name << BLUE
		<< " ne peut rien faire!!" << NRM << std::endl;
		return false;
	}
	else
	{
		std::cout << GRN << "Piège à Frag " << BMAGENTA << _Name << BLUE
		<< " attaque " << BMAGENTA << target << BLUE << " de loin, infligeant "
		<< BYELLOW << _RangedDamage << BLUE << " points de dégats !" << NRM << std::endl;
	}
	return true;
}

bool		FragTrap::meleeAttack(std::string const &target)
{
	if (_HP == 0)
	{
		std::cout << GRN << "Piège à Frag " << BMAGENTA << _Name << BLUE
		<< " ne peut rien faire!!" << NRM << std::endl;
		return false;
	}
	else
	{
		std::cout << GRN << "Piège à Frag " << BMAGENTA << _Name << BLUE
		<< " attaque " << BMAGENTA << target << BLUE << " au corp à corp, infligeant "
		<< BYELLOW << _MeleeDamage << BLUE << " points de dégats !" << NRM << std::endl;
	}
	return true;
}

bool		FragTrap::takeDamage(unsigned int amount)
{
	if (_HP == 0)
		std::cout << GRN << "Piège à Frag " << BMAGENTA << _Name << BLUE
		<< " est déjà HS !!" << NRM << std::endl;
	else
	{
		amount -= _ArmorAmount;
		amount = (amount < 0) ? 0 : amount;
		_HP -= amount;
		_HP = (_HP < 0) ? 0 : _HP;
		std::cout << GRN << "Piège à Frag " << BMAGENTA << _Name << BLUE
		<< " reçoit " << BYELLOW << amount << BLUE << " points de dégats et se retrouve à "
		<< BYELLOW << _HP << BLUE << " points de vie!" << NRM << std::endl;
		return true;
	}
	return false;
}

bool		FragTrap::beRepaired(unsigned int amount)
{
	if (_HP == _MaxHP)
	{
		std::cout << GRN << "Piège à Frag " << BMAGENTA << _Name << BLUE
		<< " se rend compte qu'il est au meilleur de sa forme !" << NRM << std::endl;
		return false;
	}
	else
	{
		amount = (static_cast<int>(amount) > _MaxHP - _HP) ? _MaxHP - _HP : amount;
		_HP += amount;
		_HP = (_HP > _MaxHP) ? _MaxHP : _HP;
		std::cout << BWHITE << "*Bruit de chalumeau* " << GRN << "Piège à Frag "
		<< BMAGENTA << _Name << BLUE << " restaure " << BYELLOW
		<< amount << BLUE << " points de vie et en a " << BYELLOW << _HP << BLUE
		<< " !" << NRM << std::endl;
	}
	return true;
}

bool		FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	std::string		attackset[5] = { "un sandwich triangle", "une batte en mousse"
									, "une frappe orbitale", "\"autodestruction\"", "sa défense ultime"};
	std::string		attack;

	if (this->_EP < 25)
		std::cout << BLUE << "Rien ne se passe... " << BMAGENTA << _Name << BLUE
		<< " est gêné." << NRM << std::endl;
	else
	{
		this->_EP -= 25;
		attack = attackset[rand() % 5];
		std::cout << GRN << "Piège à Frag " << BMAGENTA << this->_Name << BLUE
		<< " se prépare a utiliser " << BRED << attack << " !";
		if (attack == "un sandwich triangle")
			std::cout << BMAGENTA << " " << target << BLUE
			<< " est perplexe mais heureux car il avait faim." << NRM << std::endl;
		else if (attack == "une batte en mousse")
			std::cout << BMAGENTA << " " << target << BLUE << " se moque de "
			<< BMAGENTA << _Name << BLUE << " et part." << NRM << std::endl;
		else if (attack == "une frappe orbitale")
			std::cout << BMAGENTA << " " << target << BLUE
			<< " se fait annihiler avec la planète... " << _Name
			<< " a peut-être abusé" << NRM << std::endl;
		else if (attack == "\"autodestruction\"")
			std::cout << BMAGENTA << " " << _Name << BLUE
			<< " bip de façon menacante " << BMAGENTA << target << BLUE
			<< " s'enfuit !" << NRM << std::endl;
		else if (attack == "sa défense ultime")
			std::cout << BMAGENTA << " " << _Name << BLUE
			<< " se met en boule..." << NRM << std::endl;
		return true;
	}
	return false;
}
// ACCESSORS
	// GETTERS

std::string	FragTrap::Name(void) const
{
	return _Name;
}

int			FragTrap::Lvl(void) const
{
	return _Lvl;
}

int			FragTrap::MaxHP(void) const
{
	return _MaxHP;
}

int			FragTrap::HP(void) const
{
	return _HP;
}

int			FragTrap::MaxEP(void) const
{
	return _MaxEP;
}

int			FragTrap::EP(void) const
{
	return _EP;
}

int			FragTrap::MeleeDamage(void) const
{
	return _MeleeDamage;
}

int			FragTrap::RangedDamage(void) const
{
	return _RangedDamage;
}

int			FragTrap::ArmorAmount(void) const
{
	return _ArmorAmount;
}

	// SETTERS

void		FragTrap::setName(std::string value)
{
	_Name = value;
}

void		FragTrap::setLvl(int value)
{
	_Lvl = value;
}

void		FragTrap::setMaxHP(int value)
{
	_MaxHP = value;
}

void		FragTrap::setHP(int value)
{
	_HP = value;
}

void		FragTrap::setMaxEP(int value)
{
	_MaxEP = value;
}

void		FragTrap::setEP(int value)
{
	_EP = value;
}

void		FragTrap::setMeleeDamage(int value)
{
	_MeleeDamage = value;
}

void		FragTrap::setRangedDamage(int value)
{
	_RangedDamage = value;
}

void		FragTrap::setArmorAmount(int value)
{
	_ArmorAmount = value;
}

	// PRINTERS

void		FragTrap::printName(void) const
{
	std::cout << _Name << std::endl;
}

void		FragTrap::printLvl(void) const
{
	std::cout << _Lvl << std::endl;
}

void		FragTrap::printMaxHP(void) const
{
	std::cout << _MaxHP << std::endl;
}

void		FragTrap::printHP(void) const
{
	std::cout << _HP << std::endl;
}

void		FragTrap::printMaxEP(void) const
{
	std::cout << _MaxEP << std::endl;
}

void		FragTrap::printEP(void) const
{
	std::cout << _EP << std::endl;
}

void		FragTrap::printMeleeDamage(void) const
{
	std::cout << _MeleeDamage << std::endl;
}

void		FragTrap::printRangedDamage(void) const
{
	std::cout << _RangedDamage << std::endl;
}

void		FragTrap::printArmorAmount(void) const
{
	std::cout << _ArmorAmount << std::endl;
}

	// OPERATORS

FragTrap     &FragTrap::operator=(FragTrap const &obj)
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

