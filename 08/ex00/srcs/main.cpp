/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 16:26:45 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/17 17:08:01 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>

int		main(void)
{
	try
	{
		int	arr[5] = {0, 42, -53, 12, 42568};
		std::vector<int>	vec(arr, arr + 5);

		std::cout << *easyfind(vec, -53) << std::endl;
		std::cout << *easyfind(vec, -69998746) << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}