/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 18:44:19 by user42            #+#    #+#             */
/*   Updated: 2021/05/03 11:09:27 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					_value;
		static const int	_f_bits = 8;

	public:
							Fixed(void);
							Fixed(const int value);
							Fixed(const float value);
							Fixed(const Fixed &object);
							~Fixed(void);

		int					getRawBits(void) const;
		void				setRawBits(int const raw);

		float				toFloat(void) const;
		int					toInt(void) const;

		Fixed				&operator=(const Fixed &object);
};

std::ostream				&operator<<(std::ostream &os, const Fixed &obj);

#endif
