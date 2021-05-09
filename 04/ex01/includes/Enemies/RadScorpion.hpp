/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 13:07:19 by user42            #+#    #+#             */
/*   Updated: 2021/05/07 16:38:44 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include <string>
# include <iostream>
# include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
					RadScorpion();
					RadScorpion(RadScorpion const &obj);
		virtual		~RadScorpion();

virtual	void		takeDamage(int amount);

		RadScorpion		&operator=(RadScorpion const &obj);
};

#endif
