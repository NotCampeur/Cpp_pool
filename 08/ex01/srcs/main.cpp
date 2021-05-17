/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 16:26:45 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/17 21:04:13 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>
#include <cstdlib>

void	big_span_tests(void)
{
	try
	{
		Span sp(10000);
		std::vector<int>	vec;

		srand(static_cast<unsigned int>(time(NULL)));
		for (unsigned int i(0); i < 9999; i++)
		{
			vec.push_back(rand() % UINT_MAX - INT_MIN);
			// std::cout << vec[i] << " | ";
		}
		sp.addNumber(vec.begin(), vec.end());

		std::cout << std::endl << "The shortest span found : " << sp.shortestSpan() << std::endl;
		std::cout << "The longest span found : "  << sp.longestSpan() << std::endl;
		sp.addNumber(11);
		sp.addNumber(42);
	}
	catch(const std::exception& e)
	{
		std::cerr << std::endl << e.what() << std::endl;
		std::cerr << "The span will not achieve to store the data." << std::endl;
	}
}

void	small_span_tests(void)
{
	try
	{
		Span sp = Span(5);
		
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << std::endl << "The shortest span found : " << sp.shortestSpan() << std::endl;
		std::cout << "The longest span found : " << sp.longestSpan() << std::endl;
		sp.addNumber(11);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Span sp = Span(5);
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int		main(void)
{
	std::cout << "SMALL TESTS FOR SPAN CLASS" << std::endl;
	small_span_tests();
	std::cout << std::endl << "BIG TESTS FOR SPAN CLASS" << std::endl;
	big_span_tests();
	return 0;
}
