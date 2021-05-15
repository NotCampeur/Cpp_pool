/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 14:21:39 by malluin           #+#    #+#             */
/*   Updated: 2021/05/15 17:44:20 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion() {};
Conversion::~Conversion() {};

Conversion::Impossible::Impossible(void) {}
Conversion::Impossible::~Impossible(void) throw() {}
Conversion::Impossible::Impossible(Impossible const & instance)
{
	*this = instance;
}
Conversion::Impossible	& Conversion::Impossible::operator=(Impossible const & rhs)
{
	(void) rhs;
	return (*this);
}

const char * Conversion::Impossible::what() const throw()
{
	return "impossible";
}

Conversion::NonDisplayable::NonDisplayable(void) {}
Conversion::NonDisplayable::~NonDisplayable(void) throw() {}
Conversion::NonDisplayable::NonDisplayable(NonDisplayable const & instance)
{
	*this = instance;
}
Conversion::NonDisplayable	& Conversion::NonDisplayable::operator=(NonDisplayable const & rhs)
{
	(void) rhs;
	return (*this);
}

const char * Conversion::NonDisplayable::what() const throw()
{
	return "Non displayable";
}

char Conversion::ConvertToChar(void * val, std::string type)
{
	char c;
	int i;
	float f;
	double d;

	c = 0;
	i = 0;
	f = 0;
	d = 0;
	if (type == "char")
	{
		c = *(static_cast<char *>(val));
	}
	else if (type == "int")
	{
		i = *(static_cast<int *>(val));
		if (i > CHAR_MAX or i < CHAR_MIN)
			throw(Impossible());
		c = static_cast<char>(i);
	}
	else if (type == "float")
	{
		f = *(static_cast<float *>(val));
		if (f > CHAR_MAX or f < CHAR_MIN)
			throw(Impossible());
		c = static_cast<char>(f);
	}
	else if (type == "double")
	{
		d = *(static_cast<double *>(val));
		if (std::isnan(d) or std::isinf(d))
			throw(Impossible());
		if (d > CHAR_MAX or d < CHAR_MIN)
			throw(Impossible());
		c = static_cast<char>(d);
	}
	if (c < 32 or c > 127)
		throw(NonDisplayable());
	return c;
}

int Conversion::ConvertToInt(void * val, std::string type)
{
	char c;
	int i;
	float f;
	double d;

	c = 0;
	i = 0;
	f = 0;
	d = 0;
	if (type == "char")
	{
		c = *(static_cast<char *>(val));
		i = static_cast<int>(c);
	}
	else if (type == "int")
	{
		i = *(static_cast<int *>(val));
	}
	else if (type == "float")
	{
		f = *(static_cast<float *>(val));
		if (f > INT_MAX or f < INT_MIN)
			throw(Impossible());
		i = static_cast<int>(f);
	}
	else if (type == "double")
	{
		d = *(static_cast<double *>(val));
		if (d > INT_MAX or d < INT_MIN)
			throw(Impossible());
		if (std::isnan(d) or std::isinf(d))
			throw(Impossible());
		i = static_cast<int>(d);
	}
	return i;
}

float Conversion::ConvertToFloat(void * val, std::string type)
{
	char c;
	int i;
	float f;
	double d;

	c = 0;
	i = 0;
	f = 0;
	d = 0;
	if (type == "char")
	{
		c = *(static_cast<char *>(val));
		f = static_cast<float>(c);
	}
	else if (type == "int")
	{
		i = *(static_cast<int *>(val));
		f = static_cast<float>(i);
	}
	else if (type == "float")
	{
		f = *(static_cast<float *>(val));
	}
	else if (type == "double")
	{
		d = *(static_cast<double *>(val));
		if ((d > FLT_MAX or d < FLT_MIN)
			&& !std::isnan(d) && !std::isinf(d))
			throw(Impossible());
		f = static_cast<float>(d);
	}
	return f;
}

double Conversion::ConvertToDouble(void * val, std::string type)
{
	char c;
	int i;
	float f;
	double d;

	c = 0;
	i = 0;
	f = 0;
	d = 0;
	if (type == "char")
	{
		c = *(static_cast<char *>(val));
		d = static_cast<double>(c);
	}
	else if (type == "int")
	{
		i = *(static_cast<int *>(val));
		d = static_cast<double>(i);
	}
	else if (type == "float")
	{
		f = *(static_cast<float *>(val));
		d = static_cast<double>(f);
	}
	else if (type == "double")
	{
		d = *(static_cast<double *>(val));
	}
	return d;
}
