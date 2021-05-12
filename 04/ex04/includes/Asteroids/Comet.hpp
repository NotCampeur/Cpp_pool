/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Comet.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 10:28:25 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/12 11:43:36 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMET_HPP
# define COMET_HPP

# include <string>
# include "IAsteroid.hpp"
# include "IMiningLaser.hpp"

class Comet : public IAsteroid
{
		std::string	_Name;
	public:
					Comet();
					Comet(Comet const &obj);
					~Comet();

		std::string	getName() const;
		
		std::string	beMined(DeepCoreMiner const *laser) const;
		std::string	beMined(StripMiner const *laser) const;

		Comet		&operator=(Comet const &obj);
};

#endif
