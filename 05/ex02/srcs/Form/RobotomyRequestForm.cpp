/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 16:11:05 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/12 18:19:46 by ldutriez         ###   ########.fr       */
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
}

						RobotomyRequestForm::~RobotomyRequestForm()
{
}

void					RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	try
	{
		executor.executeForm(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "* Drill noise *\n...\n" << _Target
	<< " has been SUCCESSFULLY robotmised by " << executor.getName() << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &obj)
{
	if (this != &obj)
	{
		RobotomyRequestForm *result = new RobotomyRequestForm(obj);
		return *result;
	}
	return *this;
}
