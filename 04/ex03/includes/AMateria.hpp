/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 13:52:19 by user42            #+#    #+#             */
/*   Updated: 2021/05/08 14:00:22 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include "ICharacter.hpp"

class AMateria
{
	protected:
		unsigned int		_xp;
							AMateria();

	public:
							AMateria(std::string const &type);
							AMateria(AMateria const &obj);
							~AMateria();

		std::string const	&getType() const;
		unsigned int		getXP() const;

		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);

		AMateria			&operator=(AMateria const &obj);
};

#endif
