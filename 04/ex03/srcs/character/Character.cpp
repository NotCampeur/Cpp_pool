/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 20:25:19 by user42            #+#    #+#             */
/*   Updated: 2021/05/10 16:23:35 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

					Character::Character()
{
	_Name = "I'm a mistake";
	for (int i(0); i < 4; i++)
		_Materias[i] = NULL;
}

					Character::Character(std::string const &name)
{
	_Name = name;
	for (int i(0); i < 4; i++)
		_Materias[i] = NULL;
}

					Character::Character(Character const &obj)
{
	*this = obj;
}

					Character::~Character()
{
	for (int i(0); i < 4; i++)
		if (_Materias[i] != NULL)
			delete _Materias[i];
}

std::string const	&Character::getName() const
{
	return _Name;
}

void				Character::equip(AMateria *m)
{
	if (m != NULL)
		for (int i(0); i < 4; i++)
			if (_Materias[i] == NULL)
			{
				_Materias[i] = m;
				i = 4;
			}
}

void				Character::unequip(int idx)
{
	if (idx >= 0 && 4 > idx)
		if (_Materias[idx] != NULL)
			_Materias[idx] = NULL;
}

void				Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && 4 > idx)
		if (_Materias[idx] != NULL)
			_Materias[idx]->use(target);
}

Character			&Character::operator=(Character const &obj)
{
	_Name = obj._Name;
	for (int i(0); i < 4; i++)
		delete _Materias[i];
	return *this;
}
