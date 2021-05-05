/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 19:24:32 by user42            #+#    #+#             */
/*   Updated: 2021/05/05 21:45:05 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <vector>
# include "colorCode.hpp"
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public virtual ClapTrap
{
	public:
// CONSTRUCTORS | DESTRUCTOR

						NinjaTrap();
						NinjaTrap(std::string const &name);
						NinjaTrap(NinjaTrap const &obj);
						~NinjaTrap();
// METHODS

		bool			rangedAttack(std::string const &target);
		bool			meleeAttack(std::string const &target);
		bool			takeDamage(unsigned int amount);
		bool			beRepaired(unsigned int amount);

		bool			ninjaShoebox(ScavTrap const &target);
		bool			ninjaShoebox(FragTrap const &target);
		bool			ninjaShoebox(NinjaTrap const &target);
// OPERATORS

		NinjaTrap		&operator=(NinjaTrap const &obj);
};

#endif
