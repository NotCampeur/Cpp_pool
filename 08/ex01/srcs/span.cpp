/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 19:25:59 by user42            #+#    #+#             */
/*   Updated: 2021/05/17 20:54:50 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

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

unsigned int		Span::shortestSpan() const
{
	unsigned int	min = UINT_MAX;

	if (_act_size <= 1)
		throw Span::notEnoughValues();	
	std::vector<int>::const_iterator i = _content.begin();
	std::vector<int>::const_iterator j;
	std::vector<int>::const_iterator end = _content.end();
	for (; i < end; ++i)
		for (j = i + 1; j < end ; ++j)
			if ((unsigned int)*i - (unsigned int)*j < min && *i - *j >= 0)
				min = *i - *j;
	return min;
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
