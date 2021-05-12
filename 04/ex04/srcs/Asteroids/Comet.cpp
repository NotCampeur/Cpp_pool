/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Comet.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 10:54:18 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/12 12:35:59 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Comet.hpp"

			Comet::Comet() : _Name("Comet")
{
}

			Comet::Comet(Comet const &obj)
{
	*this = obj;
}

			Comet::~Comet()
{
}
					

std::string	Comet::getName() const
{
	return _Name;
}


std::string	Comet::beMined(DeepCoreMiner const *laser) const
{
	(void)laser;
	return "Meium";
}

std::string	Comet::beMined(StripMiner const *laser) const
{
	(void)laser;
	return "Tartarite";
}

Comet		&Comet::operator=(Comet const &obj)
{
	if (this != &obj)
	{
		_Name = obj._Name;
	}
	return *this;
}
