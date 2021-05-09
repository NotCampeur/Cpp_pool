/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 16:40:00 by user42            #+#    #+#             */
/*   Updated: 2021/05/07 17:22:20 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	protected:
		std::string	_Name;
		int			_AP;
		AWeapon		*_Current_Weapon;
					Character();
	
	public:
					Character(std::string const &name);
					Character(Character const &obj);
		virtual		~Character();

		void		recoverAP();
		void		equip(AWeapon *weapon);
		void		attack(Enemy *enemy);
		
		std::string	getName() const;
		int			getAP() const;
		AWeapon		*getCurrentWeapon() const;


		Character		&operator=(Character const &obj);
};

std::ostream			&operator<<(std::ostream &os, Character const &obj);

#endif
