/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 19:25:59 by user42            #+#    #+#             */
/*   Updated: 2021/05/19 13:46:50 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

					Span::Span()
{
}

					Span::Span(size_type N)
					: _content(), _max_size(N), _act_size(0)
{
}

					Span::Span(const Span &to_copy)
{
	*this = to_copy;
}

					Span::~Span()
{
}

void				Span::addNumber(int number)
{
	if (_act_size < _max_size)
	{
		_content.push_back(number);
		_act_size++;
	}
	else
		throw Span::maxSizeReach();
}

void				Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if ((long)_act_size + std::distance(begin, end) >= (long)_max_size)
		throw Span::maxSizeReach();
	for (; begin < end; begin++)
	{
		_content.push_back(*begin);
		_act_size++;
	}
}

#include <iostream>

unsigned int		Span::shortestSpan() const
{
	std::vector<int>			tmp(_content);
	long int					min = LONG_MAX;
	std::vector<int>::size_type	size(tmp.size());

	if (_act_size <= 1)
		throw Span::notEnoughValues();
	std::sort(tmp.begin(), tmp.end());
	for (size_t i(0); i < (size - 1); i++)
		if ((long int)tmp[i + 1] - (long int)tmp[i] < min)
			min = (long int)tmp[i + 1] - (long int)tmp[i];
	return static_cast<unsigned int>(min);
}

unsigned int		Span::longestSpan() const
{
	unsigned int	result(0);

	if (_act_size <= 1)
		throw Span::notEnoughValues();	
	result = static_cast<unsigned int>(*std::max_element(_content.begin(), _content.end()));
	result -= static_cast<unsigned int>(*std::min_element(_content.begin(), _content.end()));
	return result;
}

Span				&Span::operator=(const Span &to_assign)
{
	if (this != &to_assign)
	{
		_max_size = to_assign._max_size;
		_act_size = to_assign._act_size;
		_content = to_assign._content;
	}
	return *this;
}
