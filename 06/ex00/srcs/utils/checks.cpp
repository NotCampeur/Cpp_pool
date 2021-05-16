/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 17:57:59 by user42            #+#    #+#             */
/*   Updated: 2021/05/16 19:07:22 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"

bool	check_char(std::string input)
{
	if (input.size() != 1)
		return false;
	if (std::isdigit(input[0]))
		return false;
	return true;
}

bool	check_int(std::string input)
{
	int	i;

	i = 0;
	while (input[i])
	{
		if (!std::isdigit(input[i])
		&& !((input[i] == '-' || input[i] == '+') and i == 0))
			return false;
		i++;
	}
	return true;
}

bool	check_float(std::string input)
{
	size_t	i(0);

	if (input.size() == 0)
		return false;
	if (input == "nanf" || input == "inff" || input == "+inff" || input == "-inff")
		return true;
	while (input[i])
	{
		if (!std::isdigit(input[i]) && input[i] != '.'
			&& (input[i] != 'f' || i != (input.size() - 1))
			&& ((input[i] != '-' && input[i] != '+') && i != 0))
			return false;
		i++;
	}
	if (input[input.size() - 1] == 'f')
		return true;
	return false;
}

bool	check_double(std::string input)
{
	int		i;

	if (input.size() == 0)
		return false;
	i = 0;
	if (input == "nan" || input == "inf" || input == "+inf" || input == "-inf")
		return true;
	while (input[i])
	{
		if (std::isdigit(input[i]) == false && input[i] != '.'
			&& ((input[i] != '-' && input[i] != '+') && i != 0))
			return false;
		i++;
	}
	return true;
}
