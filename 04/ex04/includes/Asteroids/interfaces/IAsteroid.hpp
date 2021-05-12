/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IAsteroid.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 10:28:25 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/12 12:37:29 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IASTEROID_HPP
# define IASTEROID_HPP

# include <string>

class DeepCoreMiner;
class StripMiner;

class IAsteroid
{
	public:
		virtual				~IAsteroid() {}

		virtual std::string	beMined(DeepCoreMiner const *laser) const = 0;
		virtual std::string	beMined(StripMiner const *laser) const = 0;
		
		virtual std::string	getName() const = 0;
};

#endif
