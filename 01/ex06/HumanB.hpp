/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 16:25:11 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/04 19:58:13 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include "Weapon.hpp"

class HumanB
{
	private:
				Weapon		*_weapon;
				std::string	_name;

	public:

// CREATORS | DESTRUCTOR

						HumanB(std::string name);
						~HumanB();

// ACCESSORS

	void				setWeapon(Weapon &weapon);
	void				setName(std::string const &name);

	Weapon const		&getWeapon(void) const;
	std::string	const	&getName(void) const;

// METHOD

	void				attack() const;
};

#endif
