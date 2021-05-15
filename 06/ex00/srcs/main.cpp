/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 17:59:39 by user42            #+#    #+#             */
/*   Updated: 2021/05/15 17:59:41 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

bool	check_char(char * input)
{
	if (std::strlen(input) != 1)
		return false;
	if (std::isdigit(input[0]))
		return false;
	return true;
}

bool	check_int(char * input)
{
	int		i;

	i = 0;
	while (input[i])
	{
		if (!std::isdigit(input[i])
		&& !((input[i] == '-' || input[i] == '+') and i == 0))
			return false;
		i++;
	}
	std::istringstream is((std::string(input)));
	int d;
	is >> d;
	if (is.fail())
		return false;
	return true;
}

bool	check_float(char * input)
{
	int		i;
	int		length;

	length = std::strlen(input);
	if (length == 0)
		return false;
	i = 0;
	while (input[i])
	{
		if (!std::isdigit(input[i]) && input[i] != '.'
			&& !(input[i] == 'f' && i == (length - 1))
			&& !((input[i] == '-' || input[i] == '+') and i == 0))
			return false;
		i++;
	}
	if (input[length - 1] == 'f')
		return true;
	std::istringstream is((std::string(input)));
	float d;
	is >> d;
	if (is.fail())
		return false;
	return false;
}

std::string	strlow(char * input)
{
	std::string res = "";

	int i = 0;
	while (input[i])
	{
		res += std::tolower(input[i]);
		i++;
	}
	return res;
}

bool	check_double(char * input)
{
	int		i;
	int		length;

	length = std::strlen(input);
	if (length == 0)
		return false;
	i = 0;
	if (strlow(input) == "nan" || strlow(input) == "nanf")
		return true;
	else if (strlow(input) == "inf" || strlow(input) == "inff")
		return true;
	else if (strlow(input) == "+inf" || strlow(input) == "+inff")
		return true;
	else if (strlow(input) == "-inf" || strlow(input) == "-inff")
		return true;
	while (input[i])
	{
		if (!std::isdigit(input[i]) && input[i] != '.'
			&& !(input[i] == 'f' && i == (length - 1))
			&& !((input[i] == '-' || input[i] == '+') and i == 0))
			return false;
		i++;
	}
	return true;
}

int		main(int ac, char ** av)
{
	char c;
	int i;
	float f;
	double d;

	if (ac <= 1 or !av[1])
	{
		std::cout << "Please provide a string to convert." << std::endl;
		return 0;
	}

	if (check_char(av[1]))
	{
		c = av[1][0];
		try
		{
			std::cout << "char: ";
			std::cout << Conversion::ConvertToChar((void *)&c, "char") << std::endl;
		}
		catch (Conversion::NonDisplayable & e)
		{
			std:: cout << e.what() << std::endl;
		}
		catch (Conversion::Impossible & e)
		{
			std:: cout << e.what() << std::endl;
		}
		try
		{
			std::cout << "int: ";
			std::cout << Conversion::ConvertToInt((void *)&c, "char") << std::endl;
		}
		catch (Conversion::Impossible & e)
		{
			std:: cout << e.what() << std::endl;
		}
		try
		{
			std::cout << "float: ";
			std::cout << std::fixed << std::setprecision(1) << Conversion::ConvertToFloat((void *)&c, "char") << "f" << std::endl;
		}
		catch (Conversion::Impossible & e)
		{
			std:: cout << e.what() << std::endl;
		}
		try
		{
			std::cout << "double: ";
			std::cout << Conversion::ConvertToDouble((void *)&c, "char") << std::endl;
		}
		catch (Conversion::Impossible & e)
		{
			std:: cout << e.what() << std::endl;
		}
	}
	else if(check_int(av[1]))
	{
		i = std::atoi(av[1]);
		try
		{
			std::cout << "char: ";
			std::cout << Conversion::ConvertToChar((void *)&i, "int") << std::endl;
		}
		catch (Conversion::NonDisplayable & e)
		{
			std:: cout << e.what() << std::endl;
		}
		catch (Conversion::Impossible & e)
		{
			std:: cout << e.what() << std::endl;
		}
		try
		{
			std::cout << "int: ";
			std::cout << Conversion::ConvertToInt((void *)&i, "int") << std::endl;
		}
		catch (Conversion::Impossible & e)
		{
			std:: cout << e.what() << std::endl;
		}
		try
		{
			std::cout << "float: ";
			std::cout << std::fixed << std::setprecision(1) << Conversion::ConvertToFloat((void *)&i, "int") << "f" << std::endl;
		}
		catch (Conversion::Impossible & e)
		{
			std:: cout << e.what() << std::endl;
		}
		try
		{
			std::cout << "double: ";
			std::cout << Conversion::ConvertToDouble((void *)&i, "int") << std::endl;
		}
		catch (Conversion::Impossible & e)
		{
			std:: cout << e.what() << std::endl;
		}
	}
	else if(check_float(av[1]))
	{
		d = std::atof(av[1]);
		f = static_cast<float>(d);
		try
		{
			std::cout << "char: ";
			std::cout << Conversion::ConvertToChar((void *)&f, "float") << std::endl;
		}
		catch (Conversion::NonDisplayable & e)
		{
			std:: cout << e.what() << std::endl;
		}
		catch (Conversion::Impossible & e)
		{
			std:: cout << e.what() << std::endl;
		}
		try
		{
			std::cout << "int: ";
			std::cout << Conversion::ConvertToInt((void *)&f, "float") << std::endl;
		}
		catch (Conversion::Impossible & e)
		{
			std:: cout << e.what() << std::endl;
		}
		try
		{
			std::cout << "float: ";
			std::cout << std::fixed << std::setprecision(1) << Conversion::ConvertToFloat((void *)&f, "float") << "f" << std::endl;
		}
		catch (Conversion::Impossible & e)
		{
			std:: cout << e.what() << std::endl;
		}
		try
		{
			std::cout << "double: ";
			std::cout << Conversion::ConvertToDouble((void *)&f, "float") << std::endl;
		}
		catch (Conversion::Impossible & e)
		{
			std:: cout << e.what() << std::endl;
		}
	}
	else if(check_double(av[1]))
	{
		d = std::atof(av[1]);
		try
		{
			std::cout << "char: ";
			std::cout << Conversion::ConvertToChar((void *)&d, "double") << std::endl;
		}
		catch (Conversion::NonDisplayable & e)
		{
			std:: cout << e.what() << std::endl;
		}
		catch (Conversion::Impossible & e)
		{
			std:: cout << e.what() << std::endl;
		}
		try
		{
			std::cout << "int: ";
			std::cout << Conversion::ConvertToInt((void *)&d, "double") << std::endl;
		}
		catch (Conversion::Impossible & e)
		{
			std:: cout << e.what() << std::endl;
		}
		try
		{
			std::cout << "float: ";
			std::cout << std::fixed << std::setprecision(1) << Conversion::ConvertToFloat((void *)&d, "double") << "f" << std::endl;
		}
		catch (Conversion::Impossible & e)
		{
			std:: cout << e.what() << std::endl;
		}
		try
		{
			std::cout << "double: ";
			std::cout << Conversion::ConvertToDouble((void *)&d, "double") << std::endl;
		}
		catch (Conversion::Impossible & e)
		{
			std:: cout << e.what() << std::endl;
		}
	}
	else
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
}
