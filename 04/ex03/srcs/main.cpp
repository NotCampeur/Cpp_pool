/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 13:49:11 by user42            #+#    #+#             */
/*   Updated: 2021/05/10 15:44:23 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << "XP : " << src->createMateria("cure")->getXP() << std::endl;
	me->use(2, *bob);
	std::cout << "XP : " << src->createMateria("cure")->getXP() << std::endl;
	me->unequip(2);
	me->unequip(2);
	me->use(2, *bob);
	me->equip(src->createMateria("ice"));
	me->use(2, *bob);

	delete bob;
	delete me;
	delete src;
	
	return 0;
}
