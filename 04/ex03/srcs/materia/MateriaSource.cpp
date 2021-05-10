/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 13:34:20 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/10 16:15:00 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

				MateriaSource::MateriaSource()
{
	for (int i(0); i < 4; i++)
		_Learned_m[i] = NULL;
}

				MateriaSource::MateriaSource(MateriaSource const &obj)
{
	*this = obj;
}

				MateriaSource::~MateriaSource()
{
}

void			MateriaSource::learnMateria(AMateria *materia)
{
	if (materia != NULL)
		for (int i(0); i < 4; i++)
			if (_Learned_m[i] == NULL)
			{
				_Learned_m[i] = materia;
				i = 4;
			}
}

AMateria		*MateriaSource::createMateria(std::string const &type)
{
	for (int i(0); i < 4; i++)
		if (_Learned_m[i] != NULL && _Learned_m[i]->getType() == type)
		{
			return _Learned_m[i];
			i = 4;
		}
	return NULL;
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &obj)
{
	for (int i(0); i < 4; i++)
		_Learned_m[i] = obj._Learned_m[i];
	return *this;
}
