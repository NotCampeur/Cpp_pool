/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 19:46:26 by user42            #+#    #+#             */
/*   Updated: 2021/05/13 11:01:05 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

				Squad::Squad() : ISquad()
{
	_Units = NULL;
	_Size = 0;
}

				Squad::Squad(Squad const &obj)
{
	*this = obj;
}

				Squad::~Squad()
{
	if (_Units != NULL)
	{
		for (unsigned int i(0); i < _Size; i++)
			delete _Units[i];
		delete[] _Units;
	}
}

int				Squad::getCount() const
{
	return _Size;
}

ISpaceMarine	*Squad::getUnit(int index) const
{
	if (index >= 0 && index < (int)_Size)
		return _Units[index];
	return NULL;
}

int				Squad::push(ISpaceMarine *marine)
{
	bool			is_present(false);
	ISpaceMarine	**tmp;

	if (marine != NULL)
	{
		for(unsigned int i(0); i < _Size && is_present == false; i++)
			if (marine == _Units[i])
				is_present = true;
		if (is_present == false)
		{
			_Size++;
			tmp = new ISpaceMarine*[_Size];
			for(unsigned int i(0); i < _Size - 1; i++)
				tmp[i] = _Units[i];
			tmp[_Size - 1] = marine;
			if (_Units != NULL)
				delete[] _Units;
			_Units = tmp;
		}
	}
	return _Size;
}

Squad			&Squad::operator=(Squad const &obj)
{
	for (size_t i(0); i < _Size; i++)
		delete _Units[i];
	delete _Units;
	_Size = obj._Size;
	_Units = new ISpaceMarine*[_Size];
	for (size_t i(0); i < _Size; i++)
		_Units[i] = obj._Units[i]->clone();
	return *this;
}
