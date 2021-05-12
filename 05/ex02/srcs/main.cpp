/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 17:08:20 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/12 18:20:16 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int		main(void)
{
	Bureaucrat	Joe("Joe", 2);
	Bureaucrat	Leo("Leo", 148);

	Joe.incrementGrade();
	std::cout << Joe;

	Leo.decrementGrade();
	std::cout << Leo;
	
	std::cout << "\n_____TEST OF SHRUBBERY CREATION FORM_____\n\n";
	
	ShrubberyCreationForm	sform("fuc*?#!");

	std::cout << sform;
	sform.beSigned(Leo);
	sform.beSigned(Joe);
	sform.execute(Joe);
	sform.execute(Leo);

	std::cout << "\n_____TEST OF ROBOTOMY REQUEST FORM_____\n\n";

	RobotomyRequestForm	rform("leaks");

	std::cout << rform;
	rform.beSigned(Leo);
	rform.beSigned(Joe);
	rform.execute(Joe);
	rform.execute(Leo);
	
	return 0;
}