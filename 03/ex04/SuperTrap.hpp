/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 20:03:24 by user42            #+#    #+#             */
/*   Updated: 2021/05/05 22:01:41 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <vector>
# include "colorCode.hpp"
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap
{
	public:
// CONSTRUCTORS | DESTRUCTOR

						SuperTrap();
						SuperTrap(std::string const &name);
						SuperTrap(SuperTrap const &obj);
						~SuperTrap();
// METHODS

		bool			rangedAttack(std::string const &target);
		bool			meleeAttack(std::string const &target);
		bool			takeDamage(unsigned int amount);
		bool			beRepaired(unsigned int amount);
		
		bool			ninjaShoebox(SuperTrap const &target);
		bool			ninjaShoebox(ScavTrap const &target);
		bool			ninjaShoebox(FragTrap const &target);
		bool			ninjaShoebox(NinjaTrap const &target);
		
		bool			vaulthunter_dot_exe(std::string const &target);
// OPERATORS

		SuperTrap		&operator=(SuperTrap const &obj);
};

#endif
