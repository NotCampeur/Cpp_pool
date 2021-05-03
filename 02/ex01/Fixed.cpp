/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 18:44:33 by user42            #+#    #+#             */
/*   Updated: 2021/05/03 12:33:10 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

				Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	_value = 0;
}

				Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	_value = value << _f_bits;
}

				Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	_value = roundf((1 << _f_bits) * value);
}

				Fixed::Fixed(const Fixed &object)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = object;
}

				Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int				Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _value;
}

void			Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}

float			Fixed::toFloat(void) const
{
	float	tmp(1 << _f_bits);
	return _value / tmp;
}

int				Fixed::toInt(void) const
{
	return roundf(this->toFloat());
}

//OPERATORS OVERLOAD

Fixed			&Fixed::operator=(Fixed const &object)
{
	std::cout << "Assignation operator called" << std::endl;
	_value = object._value;
	return *this;
}

std::ostream	&operator<<(std::ostream &os, const Fixed &obj)
{
	os << obj.toFloat();
	return os;
}
