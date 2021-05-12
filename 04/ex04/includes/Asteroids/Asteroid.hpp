/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Asteroid.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 10:28:25 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/12 11:43:25 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASTEROID_HPP
# define ASTEROID_HPP

# include <string>
# include "IAsteroid.hpp"
# include "IMiningLaser.hpp"

class Asteroid : public IAsteroid
{
		std::string	_Name;
	public:
					Asteroid();
					Asteroid(Asteroid const &obj);
					~Asteroid();

		std::string	getName() const;
		
		std::string	beMined(DeepCoreMiner const *laser) const;
		std::string	beMined(StripMiner const *laser) const;

		Asteroid	&operator=(Asteroid const &obj);
};

#endif
