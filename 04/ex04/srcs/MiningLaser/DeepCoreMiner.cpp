/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 10:41:59 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/12 14:16:29 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DeepCoreMiner.hpp"

				DeepCoreMiner::DeepCoreMiner()
{
}

				DeepCoreMiner::DeepCoreMiner(DeepCoreMiner const &obj)
{
	*this = obj;
}

				DeepCoreMiner::~DeepCoreMiner()
{
}

IMiningLaser	*DeepCoreMiner::clone(void)
{
	return new DeepCoreMiner(*this);
}

void			DeepCoreMiner::mine(IAsteroid *asteroid)
{
	std::cout << "* mining deep... got " << asteroid->beMined(this) << "! *" << std::endl;
}

DeepCoreMiner	&DeepCoreMiner::operator=(DeepCoreMiner const &obj)
{
	if (this != &obj)
	{
	}
	return *this;
}
