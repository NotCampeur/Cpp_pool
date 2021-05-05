/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 16:25:17 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/04 19:46:28 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

			Weapon::Weapon()
{
	_type = "fist";
}

			Weapon::Weapon(std::string type)
{
	_type = type;
}

			Weapon::~Weapon()
{

}

std::string	const &Weapon::getType() const
{
	return _type;
}

void		Weapon::setType(std::string const &type)
{
	_type = type;
}