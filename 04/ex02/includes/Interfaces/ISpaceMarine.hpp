/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 19:14:14 by user42            #+#    #+#             */
/*   Updated: 2021/05/08 13:26:30 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

#include <string>
#include <iostream>

class ISpaceMarine
{
	public:
		virtual					~ISpaceMarine() {};
		virtual ISpaceMarine	*clone() const = 0;
		virtual void			battleCry() const = 0;
		virtual void			rangedAttack() const = 0;
		virtual void			meleeAttack() const = 0;
};

#endif
