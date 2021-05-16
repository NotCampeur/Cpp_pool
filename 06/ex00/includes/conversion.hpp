/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 17:59:32 by user42            #+#    #+#             */
/*   Updated: 2021/05/16 18:55:52 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTOR_HPP
# define CONVERTOR_HPP

#include <iostream>
#include <cstdlib>
#include <string>
#include <climits>
#include <cmath>
#include <cfloat>
#include <iomanip>

class NonDisplayable : std::exception
{
		std::string	_msg;
		
	public:
		NonDisplayable(const std::string &msg)
		: _msg(msg){}
		~NonDisplayable() throw() {}
		const char *what() const throw()
		{return _msg.c_str();}
};
class Impossible : std::exception
{
		std::string	_msg;
		
	public:
		Impossible(const std::string &msg)
		: _msg(msg){}
		~Impossible() throw() {}
		const char *what() const throw()
		{return _msg.c_str();}
};

char	ConvertToChar(void *val, std::string type);
int		ConvertToInt(void *val, std::string type);
float	ConvertToFloat(void *val, std::string type);
double	ConvertToDouble(void *val, std::string type);

bool	check_char(std::string input);
bool	check_int(std::string input);
bool	check_float(std::string input);
bool	check_double(std::string input);

void	print_convert(char c);
void	print_convert(int i);
void	print_convert(float f);
void	print_convert(double d);

#endif
