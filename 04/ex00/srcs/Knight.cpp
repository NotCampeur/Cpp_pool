/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Knight.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:24:12 by user42            #+#    #+#             */
/*   Updated: 2021/05/06 16:42:57 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Knight.hpp"

	Knight::Knight() : Victim()
{
}

	Knight::Knight(std::string const &name, std::string const &title)
	: Victim(name)
{
	_Title = title;
	std::cout << "Me, " << _Title << " will slay the darkness!" << std::endl;
}

	Knight::Knight(Knight const &obj)
{
	*this = obj;
}

	Knight::~Knight()
{
	std::cout << "I... failed" << std::endl;
}

void		Knight::getPolymorphed() const
{
	std::cout << _Name << ", " << _Title << " has been turned into a cute frog!" << std::endl;
}

std::string		Knight::Title(void) const
{
	return _Title;
}

void			Knight::setTitle(std::string const &title)
{
	_Title = title;
}

Knight	&Knight::operator=(Knight const &obj)
{
	_Name = obj._Name;
	_Title = obj._Title;
	return *this;
}

std::ostream		&operator<<(std::ostream &os,Knight const &obj)
{
	os << "I am " << obj.Name() << ", " << obj.Title() << " and I like otters too!" << std::endl;
	return os;
}
