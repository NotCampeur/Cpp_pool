/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 19:46:26 by user42            #+#    #+#             */
/*   Updated: 2021/05/08 13:29:39 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

				AssaultTerminator::AssaultTerminator() : ISpaceMarine()
{
	std::cout << "* teleports from space *" << std::endl;
}

				AssaultTerminator::AssaultTerminator(AssaultTerminator const &obj)
{
	*this = obj;
}

				AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I'll be back..." << std::endl;
}

ISpaceMarine	*AssaultTerminator::clone() const
{
	ISpaceMarine	*result = new AssaultTerminator(*this);
	
	return result;
}

void			AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void			AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void			AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}

AssaultTerminator	&AssaultTerminator::operator=(AssaultTerminator const &obj)
{
	(void)obj;
	return *this;
}
