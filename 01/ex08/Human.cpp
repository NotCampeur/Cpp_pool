/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 15:01:23 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/04 20:26:13 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void	Human::meleeAttack(std::string const &target)
{
	std::cout << "the human punch the " << target << std::endl;
}

void	Human::rangedAttack(std::string const &target)
{
	std::cout << "the human shoot the " << target << std::endl;
}

void	Human::intimidatingShout(std::string const &target)
{
	std::cout << "the human scream at the " << target << std::endl;
}

void	Human::action(std::string const &action_name, std::string const &target)
{
	void (Human::*ptr[3])(std::string const &target);
	std::string	availableAction[3];
	
	ptr[0] = &Human::meleeAttack;
	availableAction[0] = "meleeAttack";
	ptr[1] = &Human::rangedAttack;
	availableAction[1] = "rangedAttack";
	ptr[2] = &Human::intimidatingShout;
	availableAction[2] = "intimidatingShoot";
	for (int i(0); i < 3; i++)
	{
		if (availableAction[i] == action_name)
		{
			(this->*ptr[i])(target);
			return ;
		}
	}
	std::cerr << "The action must be either \"meleeAttack\", " <<
				"\"rangedAttack\" or \"intimidatingShoot\"" << std::endl;
}
