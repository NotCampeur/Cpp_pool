/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 19:14:14 by user42            #+#    #+#             */
/*   Updated: 2021/05/08 13:26:59 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

#include <string>
#include <iostream>
#include "ISpaceMarine.hpp"

class ISquad
{
	public:
		virtual					~ISquad() {};
		virtual int				getCount() const = 0;
		virtual	ISpaceMarine	*getUnit(int) const = 0;
		virtual	int				push(ISpaceMarine *marine) = 0;
};

#endif
