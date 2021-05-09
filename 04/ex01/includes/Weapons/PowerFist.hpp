/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 13:07:19 by user42            #+#    #+#             */
/*   Updated: 2021/05/07 18:27:36 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <string>
# include <iostream>
# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
					PowerFist();
					PowerFist(PowerFist const &obj);
		virtual		~PowerFist();

		void		attack() const;

		PowerFist		&operator=(PowerFist const &obj);
};

#endif
