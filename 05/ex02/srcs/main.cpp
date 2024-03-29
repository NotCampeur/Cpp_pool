/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 17:08:20 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/12 20:23:25 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main(void)
{
	Bureaucrat	Joe("Joe", 2);
	Bureaucrat	Leo("Leo", 148);

	Joe.incrementGrade();
	std::cout << Joe;

	Leo.decrementGrade();
	std::cout << Leo;
	
	std::cout << "\n_____TEST OF SHRUBBERY CREATION FORM_____\n\n";
	
	ShrubberyCreationForm	scf("fuc*?#!");

	std::cout << scf;
	scf.beSigned(Leo);
	scf.beSigned(Joe);
	scf.execute(Joe);
	scf.execute(Leo);

	std::cout << "\n_____TEST OF ROBOTOMY REQUEST FORM_____\n\n";

	RobotomyRequestForm	rrf("Marvin");

	std::cout << rrf;
	rrf.beSigned(Leo);
	rrf.beSigned(Joe);
	rrf.execute(Joe);
	rrf.execute(Leo);
	
	std::cout << "\n_____TEST OF PRESIDENTIAL PARDON FORM_____\n\n";

	PresidentialPardonForm	ppf("Arthur");

	std::cout << ppf;
	ppf.beSigned(Leo);
	ppf.beSigned(Joe);
	ppf.execute(Joe);
	ppf.execute(Leo);
	
	return 0;
}
