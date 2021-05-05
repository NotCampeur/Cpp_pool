/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 16:26:25 by user42            #+#    #+#             */
/*   Updated: 2021/05/05 19:22:19 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <vector>
# include "colorCode.hpp"

class ScavTrap
{
	private:
		std::string		_Name;
		int				_Lvl;
		int				_MaxHP;
		int				_HP;
		int				_MaxEP;
		int				_EP;
		int				_MeleeDamage;
		int				_RangedDamage;
		int				_ArmorAmount;

	public:
// CONSTRUCTORS | DESTRUCTOR

						ScavTrap();
						ScavTrap(std::string const &name);
						ScavTrap(ScavTrap const &obj);
						~ScavTrap();
// METHODS

		bool			rangedAttack(std::string const &target);
		bool			meleeAttack(std::string const &target);
		bool			takeDamage(unsigned int amount);
		bool			beRepaired(unsigned int amount);
		bool			challengeNewcomer(std::string const &target);
// ACCESSORS
	// GETTERS

		std::string		Name(void) const;
		int				Lvl(void) const;
		int				MaxHP(void) const;
		int				HP(void) const;
		int				MaxEP(void) const;
		int				EP(void) const;
		int				MeleeDamage(void) const;
		int				RangedDamage(void) const;
		int				ArmorAmount(void) const;
	// SETTERS

		void			setName(std::string value);
		void			setLvl(int value);
		void			setMaxHP(int value);
		void			setHP(int value);
		void			setMaxEP(int value);
		void			setEP(int value);
		void			setMeleeDamage(int value);
		void			setRangedDamage(int value);
		void			setArmorAmount(int value);
	// PRINTERS

		void			printName(void) const;
		void			printLvl(void) const;
		void			printMaxHP(void) const;
		void			printHP(void) const;
		void			printMaxEP(void) const;
		void			printEP(void) const;
		void			printMeleeDamage(void) const;
		void			printRangedDamage(void) const;
		void			printArmorAmount(void) const;
	// OPERATORS

		ScavTrap		&operator=(ScavTrap const &obj);
};

#endif
