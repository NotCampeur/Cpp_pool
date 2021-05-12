/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMiningLaser.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 10:25:39 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/12 14:02:09 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMININGLASER_HPP
# define IMININGLASER_HPP

# include "IAsteroid.hpp"

class IMiningLaser
{
	public:
		virtual					~IMiningLaser() {}
		virtual void			mine(IAsteroid *asteroid) = 0;
		virtual IMiningLaser	*clone(void) = 0;
};

#endif
