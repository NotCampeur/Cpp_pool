/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 16:11:05 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/15 20:19:06 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

						RobotomyRequestForm::RobotomyRequestForm()
					: Form("RobotomyRequestForm", 72, 45)
{
}

						RobotomyRequestForm::RobotomyRequestForm(std::string target)
					: Form("RobotomyRequestForm", 72, 45)
{
	_Target = target;
}

						RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj)
					: Form(obj)
{
	_Target = obj._Target;
}

						RobotomyRequestForm::~RobotomyRequestForm()
{
}

void					RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	try
	{
		executor.executeForm(*this);
		std::cout << "* Drill noise *\n...\n" << _Target
		<< " has been SUCCESSFULLY robotmised by " << executor.getName() << std::endl;
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

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &obj)
{
	if (this != &obj)
	{
		_Target = obj._Target;
	}
	return *this;
}
