/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 18:44:19 by user42            #+#    #+#             */
/*   Updated: 2021/05/01 14:24:27 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int					_value;
		static const int	_f_bits = 8;

	public:
							Fixed(void);
							Fixed(Fixed &object);
							~Fixed(void);

		int					getRawBits(void) const;
		void				setRawBits(int const raw);

		Fixed				&operator=(Fixed const &object);
};

#endif
