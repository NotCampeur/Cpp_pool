/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 16:27:14 by user42            #+#    #+#             */
/*   Updated: 2021/05/05 19:58:06 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

static void	NinjaTrapTests(void)
{
	NinjaTrap	Tom("Tom");
	NinjaTrap	Bill(Tom);
	ScavTrap	scavo("Scavo");
	FragTrap	frago("Frago");
	ClapTrap	clapo("Clapo");

	srand(time(NULL));
	Bill.setName("Bill");
	Tom.ninjaShoebox(Bill);
	Bill.ninjaShoebox(clapo);
	Tom.ninjaShoebox(scavo);
	Tom.ninjaShoebox(frago);
	Tom.ninjaShoebox(clapo);
	Tom.ninjaShoebox(clapo);
	Tom.ninjaShoebox(clapo);
	Tom.ninjaShoebox(clapo);
	Tom.ninjaShoebox(clapo);
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
	std::cout << BWHITE "\nThe test about the NinjaTrap : \n\n" NRM;
	NinjaTrapTests();
	return 0;
}
