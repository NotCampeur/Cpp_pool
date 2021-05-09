/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 20:25:19 by user42            #+#    #+#             */
/*   Updated: 2021/05/08 20:40:41 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

					Character::Character() : ICharacter()
{
	
}

					Character::Character(Character const &obj)
{
	*this = obj;
}

					Character::~Character()
{
	
}

std::string const	&Character::getName() const
{}

void				Character::equip(AMateria *m)
{}

void				Character::unequip(int idx)
{}

void				Character::use(int idx, Character &target)
{}

Character			&Character::operator=(Character const &obj)
{}
