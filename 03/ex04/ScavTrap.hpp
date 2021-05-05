/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 16:26:25 by user42            #+#    #+#             */
/*   Updated: 2021/05/05 19:18:46 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SVAVTRAP_HPP
# define SVAVTRAP_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <vector>
# include "colorCode.hpp"
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
// CONSTRUCTORS | DESTRUCTOR

						ScavTrap();
						ScavTrap(std::string const &name);
						ScavTrap(ScavTrap const &obj);
						~ScavTrap();
// METHODS

		bool			rangedAttack(std::string const &target);
		bool			meleeAttack(std::string const &target);
		bool			takeDamage(unsigned int amount);
		bool			beRepaired(unsigned int amount);
		bool			challengeNewcomer(std::string const &target);
// OPERATORS

		ScavTrap		&operator=(ScavTrap const &obj);
};

#endif
