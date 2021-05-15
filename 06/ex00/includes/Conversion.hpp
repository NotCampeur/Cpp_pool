/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 17:59:32 by user42            #+#    #+#             */
/*   Updated: 2021/05/15 17:59:35 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTOR_HPP
# define CONVERTOR_HPP

#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <cmath>
#include <sstream>
#include <float.h>
#include <cstdlib>
#include <cstring>
#include <limits.h>

class	Conversion
{
	private:
		Conversion(Conversion const & instance);
		Conversion	& operator=(Conversion const & rhs);
		
	public:
		Conversion(void);
		~Conversion(void);
		
		static char ConvertToChar(void * val, std::string type);
		static int ConvertToInt(void * val, std::string type);
		static float ConvertToFloat(void * val, std::string type);
		static double ConvertToDouble(void * val, std::string type);

		class NonDisplayable : std::exception
		{
			public:
				NonDisplayable();
				~NonDisplayable() throw();
				virtual const char * what() const throw();
				NonDisplayable(NonDisplayable const & instance);
				NonDisplayable	& operator=(NonDisplayable const & rhs);
		};
		class Impossible : std::exception
		{
			public:
				Impossible();
				~Impossible() throw();
				virtual const char * what() const throw();
				Impossible(Impossible const & instance);
				Impossible	& operator=(Impossible const & rhs);
		};
};

#endif
