/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 17:08:20 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/12 22:33:55 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int		main(void)
{
	Bureaucrat	Joe("Joe", 2);
	Bureaucrat	Leo("Leo", 148);
	
	Intern  slave;

	Joe.incrementGrade();
	std::cout << Joe;

	Leo.decrementGrade();
	std::cout << Leo;
	
	std::cout << "\n_____TEST OF SHRUBBERY CREATION FORM_____\n\n";
	
	Form*	scf;

	scf = slave.makeForm("shrubbery creation", "milkyWay");

	std::cout << *scf;
	scf->beSigned(Leo);
	scf->beSigned(Joe);
	scf->execute(Joe);
	scf->execute(Leo);

	delete scf;

	std::cout << "\n_____TEST OF ROBOTOMY REQUEST FORM_____\n\n";

	Form*	rrf;
	
	rrf = slave.makeForm("robotomy request", "Marvin");
	
	std::cout << *rrf;
	rrf->beSigned(Leo);
	rrf->beSigned(Joe);
	rrf->execute(Joe);
	rrf->execute(Leo);
	
	delete rrf;

	std::cout << "\n_____TEST OF PRESIDENTIAL PARDON FORM_____\n\n";

	Form*	ppf;

	ppf = slave.makeForm("presidential pardon", "Arthur");

	std::cout << *ppf;
	ppf->beSigned(Leo);
	ppf->beSigned(Joe);
	ppf->execute(Joe);
	ppf->execute(Leo);
	
	delete ppf;

	return 0;
}
