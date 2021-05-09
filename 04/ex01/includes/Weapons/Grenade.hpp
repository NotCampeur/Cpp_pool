/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Grenade.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 13:07:19 by user42            #+#    #+#             */
/*   Updated: 2021/05/07 18:41:03 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRENADE_HPP
# define GRENADE_HPP

# include <string>
# include <iostream>
# include "AWeapon.hpp"

class Grenade : public AWeapon
{
	public:
					Grenade();
					Grenade(Grenade const &obj);
		virtual		~Grenade();

		void		attack() const;

		Grenade		&operator=(Grenade const &obj);
};

#endif
