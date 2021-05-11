/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 13:49:11 by user42            #+#    #+#             */
/*   Updated: 2021/05/11 14:41:34 by ldutriez         ###   ########.fr       */
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

	std::cout << "XP : " << tmp->getXP() << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->unequip(1);
	me->unequip(2);
	me->unequip(2);
	std::cout << "XP : " << tmp->getXP() << std::endl;
	me->equip(tmp);
	me->use(1, *bob);
	me->unequip(1);
	std::cout << "XP : " << tmp->getXP() << std::endl;
	me->equip(src->createMateria("ice"));
	me->use(1, *bob);
	std::cout << "XP : " << tmp->getXP() << std::endl;

	delete bob;
	delete tmp;
	delete me;
	delete src;
	
	return 0;
}
