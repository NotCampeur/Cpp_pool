/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Asteroid.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 10:54:18 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/12 12:35:46 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Asteroid.hpp"

			Asteroid::Asteroid() : _Name("Asteroid")
{
}

			Asteroid::Asteroid(Asteroid const &obj)
{
	*this = obj;
}

			Asteroid::~Asteroid()
{
}
					

std::string	Asteroid::getName() const
{
	return _Name;
}


std::string	Asteroid::beMined(DeepCoreMiner const *laser) const
{
	(void)laser;
	return "Dragonite";
}

std::string	Asteroid::beMined(StripMiner const *laser) const
{
	(void)laser;
	return "Flavium";
}

Asteroid		&Asteroid::operator=(Asteroid const &obj)
{
	if (this != &obj)
	{
		_Name = obj._Name;
	}
	return *this;
}
