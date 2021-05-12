/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 20:39:49 by user42            #+#    #+#             */
/*   Updated: 2021/05/12 22:37:41 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

		Intern::Intern()
{
}

		Intern::Intern(const Intern &obj)
{
	*this = obj;
}

		Intern::~Intern()
{
}

Form	*Intern::makeForm(std::string wantedForm, std::string target) const
{
	std::string	possibleForm[3];

	Form	*(*functer[3])(std::string target);

	possibleForm[0] = "shrubbery creation";
	functer[0] = ShrubberyCreationForm::alloc;
	possibleForm[1] = "robotomy request";
	functer[1] = RobotomyRequestForm::alloc;
	possibleForm[2] = "presidential pardon";
	functer[2] = PresidentialPardonForm::alloc;
	for (int i(0); i < 3; i++)
		if (wantedForm == possibleForm[i])
		{
			std::cout << "Intern creates a " << wantedForm << " form" << std::endl;
			return functer[i](target);
		}
	std::cerr << "The " << wantedForm << " is not a valid form !" << std::endl;
	return NULL;
}


Intern	&Intern::operator=(const Intern &obj)
{
	if (this != &obj)
	{
	}
	return *this;
}

