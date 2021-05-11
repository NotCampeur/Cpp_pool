/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 19:12:56 by user42            #+#    #+#             */
/*   Updated: 2021/05/11 16:53:15 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISpaceMarine.hpp"
#include "ISquad.hpp"

#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"

#include "Squad.hpp"

int main()
{
	ISpaceMarine	*bob = new TacticalMarine;
	ISpaceMarine	*jim = new AssaultTerminator;
	ISpaceMarine	*bill = new TacticalMarine;
	
	ISquad			*vlc = new Squad;
	std::cout << "Size of the squad : " << vlc->getCount() << std::endl;
	vlc->push(bob);
	std::cout << "Size of the squad : " << vlc->getCount() << std::endl;
	vlc->push(jim);
	std::cout << "Size of the squad : " << vlc->getCount() << std::endl;
	vlc->push(bill);
	std::cout << "Size of the squad : " << vlc->getCount() << std::endl;
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	vlc->getUnit(-425);
	vlc->getUnit(2);
	delete vlc;
	
	return 0;
}
