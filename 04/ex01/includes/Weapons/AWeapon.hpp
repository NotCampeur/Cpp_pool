/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 13:07:19 by user42            #+#    #+#             */
/*   Updated: 2021/05/07 13:49:07 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <string>
# include <iostream>

class AWeapon
{
	protected:
		std::string	_Name;
		int			_ApCost;
		int			_Damage;
					AWeapon();
	
	public:
					AWeapon(std::string const &name, int apcost, int damage);
					AWeapon(AWeapon const &obj);
		virtual		~AWeapon();

		std::string	getName() const;
		int			getApCost() const;
		int			getDamage() const;

virtual	void		attack() const = 0;

		AWeapon		&operator=(AWeapon const &obj);
};

#endif
