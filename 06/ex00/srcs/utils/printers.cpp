/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printers.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 18:12:42 by user42            #+#    #+#             */
/*   Updated: 2021/05/16 19:07:14 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"

void	print_convert(char c)
{
	std::cout << "char: " << c << std::endl;
	try
	{
		std::cout << "int: " << ConvertToInt((void *)&c, "char") << std::endl;
	}
	catch (Impossible & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "float: " << std::fixed << std::setprecision(1) << ConvertToFloat((void *)&c, "char") << "f" << std::endl;
	}
	catch (Impossible & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "double: " << ConvertToDouble((void *)&c, "char") << std::endl;
	}
	catch (Impossible & e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	print_convert(int i)
{
	try
	{
		std::cout << "char: " << ConvertToChar((void *)&i, "int") << std::endl;
	}
	catch (NonDisplayable & e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (Impossible & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "int: " << i << std::endl;
	try
	{
		std::cout << "float: " << std::fixed << std::setprecision(1) << ConvertToFloat((void *)&i, "int") << "f" << std::endl;
	}
	catch (Impossible & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "double: " << ConvertToDouble((void *)&i, "int") << std::endl;
	}
	catch (Impossible & e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	print_convert(float f)
{
	try
	{
		std::cout << "char: " << ConvertToChar((void *)&f, "float") << std::endl;
	}
	catch (NonDisplayable & e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (Impossible & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "int: " << ConvertToInt((void *)&f, "float") << std::endl;
	}
	catch (Impossible & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	try
	{
		std::cout << "double: " << ConvertToDouble((void *)&f, "float") << std::endl;
	}
	catch (Impossible & e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	print_convert(double d)
{
	try
	{
		std::cout << "char: " << ConvertToChar((void *)&d, "double") << std::endl;
	}
	catch (NonDisplayable & e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (Impossible & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "int: " << ConvertToInt((void *)&d, "double") << std::endl;
	}
	catch (Impossible & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "float: " << std::fixed << std::setprecision(1) << ConvertToFloat((void *)&d, "double") << "f" << std::endl;
	}
	catch (Impossible & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "double: " << d << std::endl;
}
