/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 18:27:40 by user42            #+#    #+#             */
/*   Updated: 2021/05/16 19:07:19 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"

char ConvertToChar(void *val, std::string type)
{
	char c;
	int i;
	float f;
	double d;

	c = 0;
	i = 0;
	f = 0;
	d = 0;
	if (type == "int")
	{
		i = *(static_cast<int *>(val));
		if (i > CHAR_MAX || i < CHAR_MIN)
			throw(Impossible("impossible"));
		c = static_cast<char>(i);
	}
	else if (type == "float")
	{
		f = *(static_cast<float *>(val));
		if (f > CHAR_MAX || f < CHAR_MIN)
			throw(Impossible("impossible"));
		c = static_cast<char>(f);
	}
	else if (type == "double")
	{
		d = *(static_cast<double *>(val));
		if (std::isnan(d) || std::isinf(d))
			throw(Impossible("impossible"));
		if (d > CHAR_MAX || d < CHAR_MIN)
			throw(Impossible("impossible"));
		c = static_cast<char>(d);
	}
	if (c < 32 || c > 127)
		throw(NonDisplayable("Non displayable"));
	return c;
}

int ConvertToInt(void *val, std::string type)
{
	int i;
	float f;
	double d;

	i = 0;
	f = 0;
	d = 0;
	if (type == "char")
		i = static_cast<int>(*(static_cast<char *>(val)));
	else if (type == "float")
	{
		f = *(static_cast<float *>(val));
		if (f > INT_MAX || f < INT_MIN)
			throw(Impossible("impossible"));
		i = static_cast<int>(f);
	}
	else if (type == "double")
	{
		d = *(static_cast<double *>(val));
		if (d > INT_MAX || d < INT_MIN || std::isnan(d) || std::isinf(d))
			throw(Impossible("impossible"));
		i = static_cast<int>(d);
	}
	return i;
}

float ConvertToFloat(void *val, std::string type)
{
	float f;
	double d;

	f = 0;
	d = 0;
	if (type == "char")
		f = static_cast<float>(*(static_cast<char *>(val)));
	else if (type == "int")
		f = static_cast<float>(*(static_cast<int *>(val)));
	else if (type == "double")
	{
		d = *(static_cast<double *>(val));
		if ((d > FLT_MAX || d < FLT_MIN)
			&& !std::isnan(d) && !std::isinf(d))
			throw(Impossible("impossible"));
		f = static_cast<float>(d);
	}
	return f;
}

double ConvertToDouble(void *val, std::string type)
{
	double d;

	d = 0;
	if (type == "char")
		d = static_cast<double>(*(static_cast<char *>(val)));
	else if (type == "int")
		d = static_cast<double>(*(static_cast<int *>(val)));
	else if (type == "float")
		d = static_cast<double>(*(static_cast<float *>(val)));
	return d;
}
