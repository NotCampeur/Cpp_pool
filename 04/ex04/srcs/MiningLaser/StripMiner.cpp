/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 10:41:59 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/12 14:03:27 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StripMiner.hpp"

				StripMiner::StripMiner()
{
}

				StripMiner::StripMiner(StripMiner const &obj)
{
	*this = obj;
}

				StripMiner::~StripMiner()
{
}

IMiningLaser	*StripMiner::clone(void)
{
	return new StripMiner(*this);
}

void			StripMiner::mine(IAsteroid *asteroid)
{
	std::cout << "* strip mining... got " << asteroid->beMined(this) << "! *" << std::endl;
}

StripMiner		&StripMiner::operator=(StripMiner const &obj)
{
	if (this != &obj)
	{
	}
	return *this;
}
