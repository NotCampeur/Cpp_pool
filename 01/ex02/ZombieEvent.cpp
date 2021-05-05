/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 18:50:50 by user42            #+#    #+#             */
/*   Updated: 2021/05/04 19:17:31 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

// CONSTRUCTORS | DESTRUCTOR
		ZombieEvent::ZombieEvent()
{
	_type = basic;
}

Zombie	ZombieEvent::randomChump(void)
{
	Zombie result;

	result.set_type(_type);
	result.rand_name_gen();
	result.announce();
	return result;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	Zombie *result;

	result = new Zombie(_type, name);
	return result;
}

		ZombieEvent::~ZombieEvent()
{

}

// ACCESSORS
void	ZombieEvent::setZombieType(ZombieType type)
{
	_type = type;
}
