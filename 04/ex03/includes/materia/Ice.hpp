/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 13:52:19 by user42            #+#    #+#             */
/*   Updated: 2021/05/10 12:23:47 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
							Ice();
							Ice(Ice const &obj);
							~Ice();


		Ice					*clone() const;
		void				use(ICharacter &target);

		Ice					&operator=(Ice const &obj);
};

#endif
