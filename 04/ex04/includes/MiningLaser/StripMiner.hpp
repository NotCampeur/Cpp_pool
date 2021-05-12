/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 10:25:39 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/12 14:02:17 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRIPMINER_HPP
# define STRIPMINER_HPP

# include <iostream>
# include "IMiningLaser.hpp"
# include "IAsteroid.hpp"

class IAsteroid;

class StripMiner : public IMiningLaser
{
	public:
						StripMiner();
						StripMiner(StripMiner const &obj);
						~StripMiner();

		void			mine(IAsteroid *asteroid);
		IMiningLaser	*clone(void);
		
		StripMiner		&operator=(StripMiner const &obj);
};

#endif
