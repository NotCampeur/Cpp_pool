/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 11:19:50 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/12 14:18:42 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MiningBarge.hpp"

			MiningBarge::MiningBarge()
{
	for (int i(0); i < 4; i++)
		_Lasers[i] = NULL;
}

			MiningBarge::MiningBarge(MiningBarge const &obj)
{
	*this = obj;
}

			MiningBarge::~MiningBarge()
{
	for (int i(0); i < 4; i++)
	{

		delete _Lasers[i];
		_Lasers[i] = NULL;
	}
}

void		MiningBarge::equip(IMiningLaser *laser)
{
	if (laser != NULL)
		for (int i(0); i < 4 && _Lasers[i] != laser; i++)
			if (_Lasers[i] == NULL)
			{
				_Lasers[i] = laser;
				i = 4;
			}
}

void		MiningBarge::mine(IAsteroid *asteroid) const
{
	for (int i(0); i < 4; i++)
		if (_Lasers[i] != NULL)
			_Lasers[i]->mine(asteroid);
}

MiningBarge	&MiningBarge::operator=(MiningBarge const &obj)
{
	if (this != &obj)
	{
		for (int i(0); i < 4; i++)
		{
			delete _Lasers[i];
			_Lasers[i] = NULL;
			equip(obj._Lasers[i]->clone());
		}
	}
	return *this;
}
