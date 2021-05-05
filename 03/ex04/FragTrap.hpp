/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 16:26:25 by user42            #+#    #+#             */
/*   Updated: 2021/05/05 21:44:38 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <vector>
# include "colorCode.hpp"
# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	public:
// CONSTRUCTORS | DESTRUCTOR

						FragTrap();
						FragTrap(std::string const &name);
						FragTrap(FragTrap const &obj);
						~FragTrap();
// METHODS

		bool			rangedAttack(std::string const &target);
		bool			meleeAttack(std::string const &target);
		bool			takeDamage(unsigned int amount);
		bool			beRepaired(unsigned int amount);
		
		bool			vaulthunter_dot_exe(std::string const &target);
// OPERATORS

		FragTrap		&operator=(FragTrap const &obj);
};

#endif
