/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 10:47:42 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/17 13:02:27 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	iter_tests()
{
	char			c_arr[3] = {'T', 'O', 'M'};
	int				i_arr[8] = {3, 1, 4, 1, 5, 9, 2, 6};
	std::string		s_arr[2] = {"Hello", " mates"};
 
	iter(c_arr, 3, ft::print);
	std::cout << std::endl;
	iter(i_arr, 8, ft::print);
	std::cout << std::endl;
	iter(i_arr, 8, ft::divide);
	iter(i_arr, 8, ft::print);
	std::cout << std::endl;
	iter(s_arr, 2, ft::print);
	std::cout << std::endl;
}

int		main(void)
{
	std::cout << "ITER TESTS" << std::endl;
	iter_tests();
	return 0;
}