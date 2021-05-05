/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 16:26:18 by user42            #+#    #+#             */
/*   Updated: 2021/05/05 21:08:21 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// CONSTRUCTORS | DESTRUCTOR

			FragTrap::FragTrap() : ClapTrap()
{
	_Name = "FragTrap";
	_Lvl = 1;
	_MaxHP = 100;
	_HP = 100;
	_MaxEP = 100;
	_EP = 100;
	_MeleeDamage = 30;
	_RangedDamage = 20;
	_ArmorAmount = 5;
}

			FragTrap::FragTrap(std::string const &name) : ClapTrap(name)
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

	if (_EP < 25)
		std::cout << BLUE << "Rien ne se passe... " << BMAGENTA << _Name << BLUE
		<< " est gêné." << NRM << std::endl;
	else
	{
		_EP -= 25;
		attack = attackset[rand() % 5];
		std::cout << GRN << "Piège à Frag " << BMAGENTA << _Name << BLUE
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
