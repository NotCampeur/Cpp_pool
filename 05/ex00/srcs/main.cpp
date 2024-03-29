/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 17:08:20 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/12 14:34:40 by ldutriez         ###   ########.fr       */
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

		std::cout << Joe;
		Joe.incrementGrade();
		std::cout << Joe;
		Joe.incrementGrade();
		std::cout << Joe;
		Joe.incrementGrade();
		std::cout << Joe;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		Bureaucrat	Leo("Leo", 148);

		std::cout << Leo;
		Leo.decrementGrade();
		std::cout << Leo;
		Leo.decrementGrade();
		std::cout << Leo;
		Leo.decrementGrade();
		std::cout << Leo;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}