/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 13:07:19 by user42            #+#    #+#             */
/*   Updated: 2021/05/07 18:32:01 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <string>
# include <iostream>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
					PlasmaRifle();
					PlasmaRifle(PlasmaRifle const &obj);
		virtual		~PlasmaRifle();

		void		attack() const;

		PlasmaRifle		&operator=(PlasmaRifle const &obj);
};

#endif
