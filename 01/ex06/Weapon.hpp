/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 16:25:06 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/04 19:46:14 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
	private:
		std::string	_type;

	public:
// CONSTRUCTORS | DESTRUCTOR

						Weapon();
						Weapon(std::string type);
						~Weapon();

// ACCESSORS

	std::string const	&getType() const;

	void				setType(std::string const &type);
};

#endif