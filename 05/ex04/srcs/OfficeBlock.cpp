/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 15:42:03 by user42            #+#    #+#             */
/*   Updated: 2021/05/14 16:34:50 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

		OfficeBlock::OfficeBlock()
{
	_Slave = NULL;
	_Signer = NULL;
	_Executor = NULL;
}

		OfficeBlock::OfficeBlock(Intern &intern, Bureaucrat &signer, Bureaucrat &executor)
{
	_Slave = &intern;
	_Signer = &signer;
	_Executor = &executor;
}

		OfficeBlock::~OfficeBlock()
{
}
		
void	OfficeBlock::setIntern(Intern &intern)
{
	_Slave = &intern;
}

void	OfficeBlock::setSigner(Bureaucrat &signer)
{
	_Signer = &signer;
}

void	OfficeBlock::setExecutor(Bureaucrat &executor)
{
	_Executor = &executor;
}


void	OfficeBlock::doBureaucracy(std::string formName, std::string targetName)
{
	Form	*aForm(NULL);

	try
	{
		aForm = _Slave->makeForm(formName, targetName);
		aForm->beSigned(*_Signer);
		aForm->execute(*_Executor);
		delete aForm;
	}
	catch (const Intern::BadFormRequest &e)
	{
		std::cerr << "Arg the intern...\n";
		throw OfficeBlock::InternIsUseless(e.what());
	}
	catch (const Bureaucrat::GradeTooLowException &e)
	{
		delete aForm;
		throw OfficeBlock::InternIsUseless(e.what());
	}
}
