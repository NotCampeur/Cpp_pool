/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 16:26:18 by user42            #+#    #+#             */
/*   Updated: 2021/05/05 19:20:37 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// CONSTRUCTORS | DESTRUCTOR

			ScavTrap::ScavTrap() : ClapTrap()
{
	_Name = "ScavTrap";
	_Lvl = 1;
	_MaxHP = 100;
	_HP = 100;
	_MaxEP = 50;
	_EP = 50;
	_MeleeDamage = 20;
	_RangedDamage = 15;
	_ArmorAmount = 0;
}

			ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name)
{
	_Name = name;
	_Lvl = 1;
	_MaxHP = 100;
	_HP = 100;
	_MaxEP = 50;
	_EP = 50;
	_MeleeDamage = 20;
	_RangedDamage = 15;
	_ArmorAmount = 0;
	std::cout << GRN "Piège de Charognard " BMAGENTA << _Name << BBLUE
	<< " pointe le bout de sa carte mère !" NRM << std::endl;
}

			ScavTrap::ScavTrap(ScavTrap const &obj) : ClapTrap(obj)
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
	std::cout << BLUE << "Un copycat charognard de " << BMAGENTA << obj._Name << BBLUE
	<< " est né" << NRM << std::endl;
}

			ScavTrap::~ScavTrap()
{
	std::cout << GRN << "Piège de Charognard " << BMAGENTA << _Name << BBLUE
	<< " quitte ce monde dans d'atroces souffrances" << NRM << std::endl;
	//Don't forget to delete your allocated attributes here
}

// METHODS

bool		ScavTrap::rangedAttack(std::string const &target)
{
	if (_HP == 0)
	{
		std::cout << GRN << "Piège de Charognard " << BMAGENTA << _Name << BLUE
		<< " est KO!!" << NRM << std::endl;
		return false;
	}
	else
	{
		std::cout << GRN << "Piège de Charognard " << BMAGENTA << _Name << BLUE
		<< " attaque " << BMAGENTA << target << BLUE << " à distance, infligeant "
		<< BYELLOW << _RangedDamage << BLUE << " points de dégats !" << NRM << std::endl;
	}
	return true;
}

bool		ScavTrap::meleeAttack(std::string const &target)
{
	if (_HP == 0)
	{
		std::cout << GRN "Piège de Charognard " BMAGENTA << _Name << BLUE
		<< " est KO!!" NRM << std::endl;
		return false;
	}
	else
	{
		std::cout << GRN "Piège de Charognard " BMAGENTA << _Name << BLUE
		<< " agresse " BMAGENTA << target << BLUE " en combat rapproché, infligeant "
		<< BYELLOW << _MeleeDamage << BLUE " points de dégats !" NRM << std::endl;
	}
	return true;
}

bool		ScavTrap::takeDamage(unsigned int amount)
{
	if (_HP == 0)
		std::cout << GRN "Piège de Charognard " BMAGENTA << _Name << BLUE
		<< " est déjà au plus bas de sa forme !!" NRM << std::endl;
	else
	{
		amount -= _ArmorAmount;
		amount = (amount < 0) ? 0 : amount;
		_HP -= amount;
		_HP = (_HP < 0) ? 0 : _HP;
		std::cout << GRN "Piège de Charognard " BMAGENTA << _Name << BLUE
		<< " reçoit " BYELLOW << amount << BLUE " points de dégats et constate que sa vie est descendu à "
		<< BYELLOW << _HP << NRM << std::endl;
		return true;
	}
	return false;
}

bool		ScavTrap::beRepaired(unsigned int amount)
{
	if (_HP == _MaxHP)
	{
		std::cout << GRN << "Piège de Charognard " << BMAGENTA << _Name << BLUE
		<< " se rend compte qu'il pète le feu !" << NRM << std::endl;
		return false;
	}
	else
	{
		amount = (static_cast<int>(amount) > _MaxHP - _HP) ? _MaxHP - _HP : amount;
		_HP += amount;
		_HP = (_HP > _MaxHP) ? _MaxHP : _HP;
		std::cout << BWHITE << "*Bruit de chalumeau* " << GRN << "Piège de Charognard "
		<< BMAGENTA << _Name << BLUE << " récupère " << BYELLOW
		<< amount << BLUE << " points de vie et en a maintenant " << BYELLOW << _HP << BLUE
		<< " !" << NRM << std::endl;
	}
	return true;
}

bool			ScavTrap::challengeNewcomer(std::string const &target)
{
	std::string		challSet[5] = { "combat de regard", "battle de danse"
									, "roi du silence", "bowling", "pierre feuille ciseaux"};
	std::string		challenge;

	if (this->_EP < 25)
		std::cout << BMAGENTA << _Name << BLUE
		<< " n'a plus la force de défier aujourd'hui." << NRM << std::endl;
	else
	{
		this->_EP -= 25;
		challenge = challSet[rand() % 5];
		std::cout << GRN << "Piège de Charognard " << BMAGENTA << _Name << BLUE
		<< " va défier " BMAGENTA << target << BLUE " au " BRED << challenge << " !";
		if (challenge == "combat de regard")
			std::cout << BMAGENTA " " << target << BLUE
			<< " flanche après " BWHITE << rand() << " siècles." NRM << std::endl;
		else if (challenge == "battle de danse")
			std::cout << BMAGENTA " " << target << BLUE " n'a pas chargé son logiciel de danse "
			<< BMAGENTA << _Name << BLUE " est triste." NRM << std::endl;
		else if (challenge == "roi du silence")
			std::cout << BMAGENTA " " << target << BLUE " et " BMAGENTA << _Name
			<< BLUE " ne parleront certainement plus jamais" << NRM << std::endl;
		else if (challenge == "bowling")
			std::cout << BMAGENTA " " << _Name << BLUE " et " BMAGENTA << target
			<< BLUE " sont devenu amis" NRM << std::endl;
		else if (challenge == "pierre feuille ciseaux")
			std::cout << BMAGENTA " " << _Name << BLUE
			<< " est drolement chanceux et gagne dix fois d'affilée." NRM << std::endl;
		return true;
	}
	return false;
}

	// OPERATORS

ScavTrap     &ScavTrap::operator=(ScavTrap const &obj)
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

