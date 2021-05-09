/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 19:46:26 by user42            #+#    #+#             */
/*   Updated: 2021/05/08 13:45:33 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

				Squad::Squad() : ISquad()
{
	_Units.clear();
}

				Squad::Squad(Squad const &obj)
{
	*this = obj;
}

				Squad::~Squad()
{
	size_t	size(_Units.size());
	
	for (size_t i(0); i < size; i++)
		delete _Units[i];
	_Units.clear();
}

int		Squad::getCount() const
{
	return static_cast <int> (_Units.size());
}

ISpaceMarine	*Squad::getUnit(int index) const
{
	if (index >= 0)
		return _Units[index];
	return NULL;
}

int				Squad::push(ISpaceMarine *marine)
{
	bool	is_present(false);
	size_t	size(_Units.size());

	if (marine != NULL)
	{
		for(size_t i(0); i < size && is_present == false; i++)
			if (marine == _Units[i])
				is_present = true;
		if (is_present == false)
			_Units.push_back(marine);
	}
	return _Units.size();
}

Squad	&Squad::operator=(Squad const &obj)
{
	size_t	size(_Units.size());
	
	for (size_t i(0); i < size; i++)
		delete _Units[i];
	_Units.clear();
	size = obj.getCount();
	return *this;
}
