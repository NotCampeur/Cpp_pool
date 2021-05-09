/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 19:14:14 by user42            #+#    #+#             */
/*   Updated: 2021/05/08 13:27:55 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

#include <string>
#include <iostream>
#include <vector>
#include "ISquad.hpp"

class Squad : public ISquad
{
	private:
		std::vector<ISpaceMarine*>	_Units;
		
	public:
						Squad();
						Squad(Squad const &obj);
						~Squad();

		int				getCount() const;
		ISpaceMarine	*getUnit(int index) const;
		int				push(ISpaceMarine *marine);

		Squad			&operator=(Squad const &obj);
};

#endif
