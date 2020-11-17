/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 09:42:34 by ldutriez          #+#    #+#             */
/*   Updated: 2020/09/08 11:21:31 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

#include "Zombie.hpp"

class ZombieEvent
{
	private:
	Zombie::ZombieType _type;
	
	public:

// CONSTRUCTORS | DESTRUCTOR
			ZombieEvent();
	Zombie	randomChump(void);
	Zombie	*newZombie(std::string name);
			~ZombieEvent();

// ACCESSORS
	void	setZombieType(Zombie::ZombieType type);
};

#endif