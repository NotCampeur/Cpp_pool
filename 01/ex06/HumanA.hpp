/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 16:24:59 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/04 19:56:33 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include "Weapon.hpp"

class HumanA
{
	private:
				Weapon		&_weapon;
				std::string	_name;

	public:

// CREATORS | DESTRUCTOR

						HumanA(std::string name, Weapon &weapon);
						~HumanA();

// ACCESSORS

	void				setWeapon(Weapon &weapon);
	void				setName(std::string const &name);

	Weapon const		&getWeapon(void) const;
	std::string const	&getName(void) const;

// METHOD

	void				attack() const;
};

#endif
