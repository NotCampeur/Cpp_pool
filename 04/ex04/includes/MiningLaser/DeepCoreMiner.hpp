/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 10:25:39 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/12 14:02:23 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEEPCOREMINER_HPP
# define DEEPCOREMINER_HPP

# include <iostream>

# include "IMiningLaser.hpp"
# include "IAsteroid.hpp"

class DeepCoreMiner : public IMiningLaser
{
	public:
						DeepCoreMiner();
						DeepCoreMiner(DeepCoreMiner const &obj);
						~DeepCoreMiner();
						
		void			mine(IAsteroid *asteroid);
		IMiningLaser	*clone(void);

		DeepCoreMiner	&operator=(DeepCoreMiner const &obj);
};

#endif
