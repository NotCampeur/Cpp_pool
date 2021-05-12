/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 17:21:03 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/12 15:59:28 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

					Form::Form()
					: _Name("Form"), _isSigned(false), _gradeToSign(1), _gradeToExec(1)
{
}

					Form::Form(const std::string &name, unsigned int gradeToSign, unsigned int gradeToExec)
					: _Name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
	if (0 >= _gradeToSign)
		throw Form::GradeTooHighException("The Grade required to sign is too high to create " + _Name);
	else if (_gradeToSign > 150)
		throw Form::GradeTooLowException("The Grade required to sign is too low to create " + _Name);
	else if (0 >= _gradeToExec)
		throw Form::GradeTooHighException("The Grade required to exec is too high to create " + _Name);
	else if (_gradeToExec > 150)
		throw Form::GradeTooLowException("The Grade required to exec is too low to create " + _Name);
}

					Form::Form(const Form &obj)
					: _Name(obj._Name), _isSigned(obj._isSigned)
					, _gradeToSign(obj._gradeToSign), _gradeToExec(obj._gradeToExec)
{
}

					Form::~Form()
{
}

std::string			Form::Name(void) const
{
	return _Name;
}

bool				Form::isSigned(void) const
{
	return _isSigned;
}

unsigned int		Form::gradeToSign(void) const
{
	return _gradeToSign;
}

unsigned int		Form::gradeToExec(void) const
{
	return _gradeToExec;
}

void			Form::beSigned(const Bureaucrat &Bureaucrat)
{
	try 
	{
		Bureaucrat.signForm(*this);
	}
	catch (const std::exception& e)
	{
		std::cerr << Bureaucrat.getName() << " cant sign " << _Name
		<< " because " << e.what() << " (" << _gradeToSign << " required "
		<< Bureaucrat.getName() << " has " << Bureaucrat.getGrade() << ")\n";
	}
}

Form			&Form::operator=(Form const &obj)
{
	if (this != &obj)
	{
		Form *result = new Form(obj._Name, obj._gradeToSign, obj._gradeToExec);
		return *result;
	}
	return *this;
}

std::ostream		&operator<<(std::ostream &os, Form const &obj)
{
	os << "The form " << obj.Name() << " need at least a " << obj.gradeToSign()
	<< " grade bureaucrat to be signed and a " << obj.gradeToExec()
	<< " grade bureaucrat to be executed" << std::endl;
	return os;
}
