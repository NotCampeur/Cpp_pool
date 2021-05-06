/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:24:12 by user42            #+#    #+#             */
/*   Updated: 2021/05/06 16:14:24 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

	Victim::Victim()
{
}

	Victim::Victim(std::string const &name)
	: _Name(name)
{
	std::cout << "Some random victim called " << _Name
	<< " just appeared!" << std::endl;
}

	Victim::Victim(Victim const &obj)
{
	*this = obj;
}

	Victim::~Victim()
{
	std::cout << "Victim " << _Name << " just died for no apparent reason!" << std::endl;
}

void		Victim::getPolymorphed() const
{
	std::cout << _Name << " has been turned into a cute little sheep!" << std::endl;
}

std::string	Victim::Name(void) const
{
	return _Name;
}

void	Victim::setName(std::string const &name)
{
	_Name = name;
}

Victim	&Victim::operator=(Victim const &obj)
{
	_Name = obj._Name;
	return *this;
}

std::ostream		&operator<<(std::ostream &os,Victim const &obj)
{
	os << "I am " << obj.Name() << " and I like otters!" << std::endl;
	return os;
}
