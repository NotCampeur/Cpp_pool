/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 11:14:54 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/12 11:21:11 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MININGBARGE_HPP
# define MININGBARGE_HPP

# include "IMiningLaser.hpp"
# include "IAsteroid.hpp"

class MiningBarge
{
		IMiningLaser	*_Lasers[4];
		
	public:
						MiningBarge();
						MiningBarge(MiningBarge const &obj);
						~MiningBarge();

		void			equip(IMiningLaser *laser);
		void			mine(IAsteroid *asteroid) const;

		MiningBarge		&operator=(MiningBarge const &obj);
};

#endif
