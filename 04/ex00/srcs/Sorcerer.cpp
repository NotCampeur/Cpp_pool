/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:24:12 by user42            #+#    #+#             */
/*   Updated: 2021/05/06 16:09:01 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

	Sorcerer::Sorcerer()
{
}

	Sorcerer::Sorcerer(std::string const &name, std::string const &title)
	: _Name(name), _Title(title)
{
	std::cout << _Name << ", " << _Title << ", is born!" << std::endl;
}

	Sorcerer::Sorcerer(Sorcerer const &obj)
{
	*this = obj;
}

	Sorcerer::~Sorcerer()
{
	std::cout << _Name << ", " << _Title
	<< ", is dead. Consequences will never be the same!" << std::endl;
}

void		Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

std::string	Sorcerer::Name(void) const
{
	return _Name;
}

std::string	Sorcerer::Title(void) const
{
	return _Title;
}

void	Sorcerer::setName(std::string const &name)
{
	_Name = name;
}

void	Sorcerer::setTitle(std::string const &title)
{
	_Title = title;
}

Sorcerer	&Sorcerer::operator=(Sorcerer const &obj)
{
	_Name = obj._Name;
	_Title = obj._Title;
	return *this;
}

std::ostream		&operator<<(std::ostream &os,Sorcerer const &obj)
{
	os << "I am " << obj.Name() << ", " << obj.Title()
	<< ", and I like ponies!" << std::endl;
	return os;
}
