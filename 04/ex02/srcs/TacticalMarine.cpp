/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 19:46:26 by user42            #+#    #+#             */
/*   Updated: 2021/05/08 13:29:27 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

				TacticalMarine::TacticalMarine() : ISpaceMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

				TacticalMarine::TacticalMarine(TacticalMarine const &obj)
{
	*this = obj;
}

				TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
}

ISpaceMarine	*TacticalMarine::clone() const
{
	ISpaceMarine	*result = new TacticalMarine(*this);
	
	return result;
}

void			TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void			TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void			TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}

TacticalMarine	&TacticalMarine::operator=(TacticalMarine const &obj)
{
	(void)obj;
	return *this;
}
