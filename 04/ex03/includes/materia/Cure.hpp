/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 13:52:19 by user42            #+#    #+#             */
/*   Updated: 2021/05/10 12:37:01 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
				Cure();
				Cure(Cure const &obj);
				~Cure();


		Cure	*clone() const;
		void	use(ICharacter &target);

		Cure	&operator=(Cure const &obj);
};

#endif
