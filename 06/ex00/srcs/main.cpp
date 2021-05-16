/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 17:40:28 by user42            #+#    #+#             */
/*   Updated: 2021/05/16 19:08:16 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"

int		main(int ac, char **av)
{
	if (ac <= 1 || av[1] == NULL)
	{
		std::cout << "The caster need one argument." << std::endl;
		return 0;
	}
	std::cout << "The argument is " << av[1] << std::endl;
	if (check_char(av[1]))
	{
		std::cout << "Char detected." << std::endl;
		print_convert(av[1][0]);
	}
	else if(check_int(av[1]))
	{
		std::cout << "Int detected." << std::endl;
		print_convert(std::atoi(av[1]));
	}
	else if(check_float(av[1]))
	{
		std::cout << "Float detected." << std::endl;
		print_convert(static_cast<float>(std::atof(av[1])));
	}
	else if(check_double(av[1]))
	{
		std::cout << "Double detected." << std::endl;
		print_convert(std::atof(av[1]));
	}
	else
	{
		std::cout << "The argument seems to be non-scalar" << std::endl
		<< "char: impossible" << std::endl
		<< "int: impossible" << std::endl
		<< "float: impossible" << std::endl
		<< "double: impossible" << std::endl;
	}
	return 0;
}
