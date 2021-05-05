/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 18:59:58 by user42            #+#    #+#             */
/*   Updated: 2021/05/04 19:15:46 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

static void	aux_func(Zombie stacko, Zombie *heapo)
{
	stacko.set_name("STACKO");
	heapo->set_name("HEAPO");
}

int			main(void)
{
	ZombieEvent event;
	Zombie		randomZombie;
	Zombie		eventLessZombie(static_cast<ZombieType>(2), "Tom");
	Zombie		buggedZombie(static_cast<ZombieType>(-42), "dumb");
	Zombie		*heapZombie;

	srand(time(NULL));
	eventLessZombie.announce();
	buggedZombie.announce();
	event.setZombieType(static_cast<ZombieType>(rand()%9));
	randomZombie = event.randomChump();
	event.setZombieType(static_cast<ZombieType>(rand()%9));
	heapZombie = event.newZombie("Charles");
	heapZombie->advert();
	aux_func(eventLessZombie, heapZombie);
	eventLessZombie.advert();
	heapZombie->advert();
	delete heapZombie;
	return 0;
}
