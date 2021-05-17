/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 10:47:42 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/17 11:54:37 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

void	swap_tests(void)
{
	std::string	str0("Hello");
	std::string	str1("Mates");
	
	int			x(42);
	int			y(120);

	double		i(42.046);
	double		j(120.953);

	std::cout << "str0: " << str0 << " str1: " << str1 << std::endl;
	ft::swap<std::string>(str0, str1);
	std::cout << "str0: " << str0 << " str1: " << str1 << std::endl;
	
	std::cout << "x: " << x << " y: " << y << std::endl;
	ft::swap<int>(x, y);
	std::cout << "x: " << x << " y: " << y << std::endl;

	std::cout << "i: " << i << " j: " << j << std::endl;
	ft::swap(i, j);
	std::cout << "i: " << i << " j: " << j << std::endl;
}

void	min_tests(void)
{
	std::string	str0("Hello");
	std::string	str1("Mates");
	
	int			x(42);
	int			y(120);

	double		i(42.046);
	double		j(120.953);

	std::cout << "The mininal value is " << ft::min<std::string>(str0, str1) << std::endl;
	
	std::cout << "The mininal value is " << ft::min<int>(x, y) << std::endl;

	std::cout << "The mininal value is " << ft::min(i, j) << std::endl;
}

void	max_tests(void)
{
	std::string	str0("Hello");
	std::string	str1("Mates");
	
	int			x(42);
	int			y(120);

	double		i(42.046);
	double		j(120.953);

	std::cout << "The maximal value is " << ft::max<std::string>(str0, str1) << std::endl;
	
	std::cout << "The maximal value is " << ft::max<int>(x, y) << std::endl;

	std::cout << "The maximal value is " << ft::max(i, j) << std::endl;
}

int		main(void)
{
	std::cout << "SWAP TESTS" << std::endl;
	swap_tests();
	std::cout << std::endl << "MIN TESTS" << std::endl;
	min_tests();
	std::cout << std::endl << "MAX TESTS" << std::endl;
	max_tests();
	return 0;
}