/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 16:27:14 by user42            #+#    #+#             */
/*   Updated: 2021/05/05 18:19:42 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

static void	scavTrapTests(void)
{
	ScavTrap	Tom("Tom");
	ScavTrap	Bill(Tom);

	srand(time(NULL));
	Bill.setName("Bill");
	Tom.challengeNewcomer(Bill.Name());
	Bill.challengeNewcomer(Tom.Name());
	Tom.challengeNewcomer(Bill.Name());
	Tom.challengeNewcomer(Bill.Name());
	Tom.challengeNewcomer(Bill.Name());
	Tom.challengeNewcomer(Bill.Name());
	Tom.challengeNewcomer(Bill.Name());
	if (Bill.meleeAttack(Tom.Name()) == true)
		Tom.takeDamage(Bill.MeleeDamage());
	if (Bill.meleeAttack(Tom.Name()) == true)
		Tom.takeDamage(Bill.MeleeDamage());
	if (Bill.meleeAttack(Tom.Name()) == true)
		Tom.takeDamage(Bill.MeleeDamage());
	if (Bill.meleeAttack(Tom.Name()) == true)
		Tom.takeDamage(Bill.MeleeDamage());
	if (Bill.meleeAttack(Tom.Name()) == true)
		Tom.takeDamage(Bill.MeleeDamage());
	if (Tom.rangedAttack(Bill.Name()) == true)
		Bill.takeDamage(Tom.RangedDamage());
	Tom.beRepaired(1500);
	Tom.beRepaired(1500);
	if (Tom.rangedAttack(Bill.Name()) == true)
		Bill.takeDamage(Tom.RangedDamage());
}

static void	fragTrapTests(void)
{
	FragTrap	Tom("Tom");
	FragTrap	Bill(Tom);

	srand(time(NULL));
	Bill.setName("Bill");
	Tom.vaulthunter_dot_exe(Bill.Name());
	Bill.vaulthunter_dot_exe(Tom.Name());
	Tom.vaulthunter_dot_exe(Bill.Name());
	Tom.vaulthunter_dot_exe(Bill.Name());
	Tom.vaulthunter_dot_exe(Bill.Name());
	Tom.vaulthunter_dot_exe(Bill.Name());
	Tom.vaulthunter_dot_exe(Bill.Name());
	if (Bill.meleeAttack(Tom.Name()) == true)
		Tom.takeDamage(Bill.MeleeDamage());
	if (Bill.meleeAttack(Tom.Name()) == true)
		Tom.takeDamage(Bill.MeleeDamage());
	if (Bill.meleeAttack(Tom.Name()) == true)
		Tom.takeDamage(Bill.MeleeDamage());
	if (Bill.meleeAttack(Tom.Name()) == true)
		Tom.takeDamage(Bill.MeleeDamage());
	if (Bill.meleeAttack(Tom.Name()) == true)
		Tom.takeDamage(Bill.MeleeDamage());
	if (Tom.rangedAttack(Bill.Name()) == true)
		Bill.takeDamage(Tom.RangedDamage());
	Tom.beRepaired(1500);
	Tom.beRepaired(1500);
	if (Tom.rangedAttack(Bill.Name()) == true)
		Bill.takeDamage(Tom.RangedDamage());
}

int			main(void)
{
	std::cout << BWHITE "\nThe test about the FragTrap : \n\n" NRM;
	fragTrapTests();
	std::cout << BWHITE "\nThe test about the ScavTrap : \n\n" NRM;
	scavTrapTests();
	return 0;
}
