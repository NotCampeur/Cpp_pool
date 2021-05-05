/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 18:52:21 by user42            #+#    #+#             */
/*   Updated: 2021/05/04 19:17:13 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// CONSTRUCTORS | DESTRUCTOR
					Zombie::Zombie()
{
	_type = static_cast<ZombieType>(8);
	_name = "Tom";
}

					Zombie::Zombie(ZombieType type, std::string name)
{
	_type = type;
	_name = name;
}

					Zombie::~Zombie()
{
	
}

// ACCESSORS
ZombieType			Zombie::type(void) const
{
	return _type;
}

std::string			Zombie::name(void) const
{
	return _name;
}

std::string			Zombie::type_str(void) const
{
	std::string result("Basic");

	if (_type == boomer)
		result.assign("Boomer");
	else if (_type == hunter)
		result.assign("Hunter");
	else if (_type == smoker)
		result.assign("Smoker");
	else if (_type == tank)
		result.assign("Tank");
	else if (_type == charger)
		result.assign("Charger");
	else if (_type == jockey)
		result.assign("Jockey");
	else if (_type == spitter)
		result.assign("Spitter");
	else if (_type == witch)
		result.assign("Witch");
	return result;
}

void				Zombie::set_type(ZombieType type)
{
	_type = type;
}

void				Zombie::set_name(std::string name)
{
	_name = name;
}

// METHOD
void				Zombie::advert(void) const
{
	std::cout << _name << " the " << type_str() << " wander" << std::endl;
}

void				Zombie::announce() const
{
	std::cout << _name << " the Zombie is a " << type_str() << std::endl;
}

void				Zombie::rand_name_gen()
{
	_name.clear();
	int			name_size(0);

	name_size = 3 + rand() % 5;
	for (int i(0); i < name_size; i++)
	{
		_name.push_back(97 + rand() % 26);
	}
}
