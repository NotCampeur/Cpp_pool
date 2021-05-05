/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 09:42:34 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/04 19:14:35 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

#include "Zombie.hpp"

class ZombieEvent
{
	private:
	ZombieType _type;
	
	public:

// CONSTRUCTORS | DESTRUCTOR
			ZombieEvent();
	Zombie	randomChump(void);
	Zombie	*newZombie(std::string name);
			~ZombieEvent();

// ACCESSORS
	void	setZombieType(ZombieType type);
};

#endif
