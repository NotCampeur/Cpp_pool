/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 16:11:05 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/15 20:17:00 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

						PresidentialPardonForm::PresidentialPardonForm()
					: Form("PresidentialPardonForm", 25, 5)
{
}

						PresidentialPardonForm::PresidentialPardonForm(std::string target)
					: Form("PresidentialPardonForm", 25, 5)
{
	_Target = target;
}

						PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj)
					: Form(obj)
{
	_Target = obj._Target;
}

						PresidentialPardonForm::~PresidentialPardonForm()
{
}

void					PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	try
	{
		executor.executeForm(*this);
		std::cout << executor.getName() << " contact Zaphod Beeblebrox. " << _Target
		<< " has been pardoned!" << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << " (needed " << _gradeToExec << " actual "
		<< executor.getGrade() << ")\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &obj)
{
	if (this != &obj)
	{
		_Target = obj._Target;
	}
	return *this;
}
