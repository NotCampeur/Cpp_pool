/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 13:33:59 by user42            #+#    #+#             */
/*   Updated: 2021/05/13 09:42:35 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Grenade.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Ghoul.hpp"
#include "Character.hpp"

int main()
{
	Character	*me = new Character("me");

	me->recoverAP();
	std::cout << *me;

	Enemy		*b = new RadScorpion();

	AWeapon		*pr = new PlasmaRifle();
	AWeapon		*pf = new PowerFist();
	AWeapon		*g = new Grenade();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	me->equip(g);
	std::cout << *me;
	b = new Ghoul();
	me->attack(b);
	b = new SuperMutant();
	me->attack(b);
	std::cout << *me;
	me->recoverAP();
	me->recoverAP();
	me->attack(b);
	std::cout << *me;

	delete (pr);
	delete (pf);
	delete (g);
	delete (me);
	return 0;
}
