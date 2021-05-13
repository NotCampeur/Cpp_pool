/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 19:14:14 by user42            #+#    #+#             */
/*   Updated: 2021/05/13 10:55:46 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

#include <string>
#include <iostream>
#include "ISquad.hpp"

class Squad : public ISquad
{
	private:
		ISpaceMarine	**_Units;
		unsigned int	_Size;
		
	public:
						Squad();
						Squad(Squad const &obj);
						~Squad();

		int				getCount() const;
		ISpaceMarine	*getUnit(int index) const;
		int				push(ISpaceMarine *marine);

		Squad			&operator=(Squad const &obj);
		ISquad			&operator=(ISquad const &obj);
};

#endif
