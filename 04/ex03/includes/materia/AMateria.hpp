/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 13:52:19 by user42            #+#    #+#             */
/*   Updated: 2021/05/10 15:29:06 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
	protected:
		unsigned int		_xp;
		std::string			_Type;
							AMateria();

	public:
							AMateria(std::string const &type);
							AMateria(AMateria const &obj);
		virtual				~AMateria();

		std::string const	&getType() const;
		unsigned int		getXP() const;

		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);

		AMateria			&operator=(AMateria const &obj);
};

#endif
