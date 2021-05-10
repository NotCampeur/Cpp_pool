/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 14:00:52 by user42            #+#    #+#             */
/*   Updated: 2021/05/10 15:26:41 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

// # include "AMateria.hpp"
# include <string>

class AMateria;

class ICharacter
{
	public:
		virtual 					~ICharacter() {}
		
		virtual std::string const	&getName() const = 0;
		
		virtual void				equip(AMateria *m) = 0;
		virtual void				unequip(int idx) = 0;
		virtual void				use(int idx, ICharacter &target) = 0;
};

#endif
