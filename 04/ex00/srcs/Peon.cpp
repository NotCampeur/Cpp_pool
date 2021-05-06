/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:24:12 by user42            #+#    #+#             */
/*   Updated: 2021/05/06 16:29:00 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

	Peon::Peon() : Victim()
{
}

	Peon::Peon(std::string const &name)
	: Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

	Peon::Peon(Peon const &obj)
{
	*this = obj;
}

	Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

void		Peon::getPolymorphed() const
{
	std::cout << _Name << " has been turned into a pink pony!" << std::endl;
}

Peon	&Peon::operator=(Peon const &obj)
{
	_Name = obj._Name;
	return *this;
}

std::ostream		&operator<<(std::ostream &os,Peon const &obj)
{
	os << "I am " << obj.Name() << " and I like otters!" << std::endl;
	return os;
}
