/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 17:08:20 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/12 15:54:09 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main(void)
{
	try
	{
		Bureaucrat	Tom("Tom", 0);
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat	Bill("Bill", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		Bureaucrat	Joe("Joe", 2);
		Bureaucrat	Leo("Leo", 148);

		Joe.incrementGrade();
		std::cout << Joe;

		Leo.decrementGrade();
		std::cout << Leo;
		
		Form	fo("fo", 148, 150);

		std::cout << fo;
		fo.beSigned(Joe);
		fo.beSigned(Leo);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}