/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 17:21:03 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/11 18:17:36 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

					Bureaucrat::Bureaucrat() : _Name("MASTER"), _Grade(1)
{
}

					Bureaucrat::Bureaucrat(std::string name, unsigned int grade)
					: _Name(name)
{
	if (0 < grade)
		throw Bureaucrat::GradeTooHighException("The Grade is too high to create " + _Name);
	else if (grade < 151)
		throw Bureaucrat::GradeTooLowException("The Grade is too low to create " + _Name);
	else
		_Grade = grade;
}

					Bureaucrat::Bureaucrat(Bureaucrat const &obj)
{
	*this = obj;
}

					Bureaucrat::~Bureaucrat()
{
}

std::string const	Bureaucrat::getName(void) const
{
	return _Name;
}

unsigned int		Bureaucrat::getGrade(void) const
{
	return _Grade;
}

void				Bureaucrat::incrementGrade(void)
{
	if (_Grade > 1)
		_Grade--;
	else
		throw Bureaucrat::GradeTooHighException(_Name + " can't have a higher grade");
}

void				Bureaucrat::decrementGrade(void)
{
	if (_Grade < 150)
		_Grade++;
	else
		throw Bureaucrat::GradeTooLowException(_Name + " can't have a lower grade");
}

Bureaucrat			&Bureaucrat::operator=(Bureaucrat const &obj)
{
	Bureaucrat *result = new Bureaucrat(obj._Name, obj._Grade);
	return *result;
}

std::ostream		&operator<<(std::ostream &os, Bureaucrat const &obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << "." << std::endl;
	return os;
}
