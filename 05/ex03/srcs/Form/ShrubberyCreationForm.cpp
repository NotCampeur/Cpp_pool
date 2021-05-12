/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 16:11:05 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/12 21:56:59 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

						ShrubberyCreationForm::ShrubberyCreationForm()
					: Form("ShrubberyCreationForm", 145, 137)
{
}

						ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
					: Form("ShrubberyCreationForm", 145, 137)
{
	_Target = target + "_shrubbery";
}

						ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj)
					: Form(obj)
{
}

						ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void					ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	std::ofstream of;

	try
	{
		executor.executeForm(*this);
			of.open(_Target.c_str(), std::ofstream::out);
		of << "          *\n"
		   << "         / \\\n"
		   << "        /   \\\n"
		   << "       *     \\\n"
		   << "      / \\     *\n"
		   << "     *   *   / \\\n"
		   << "            *   \\\n"
		   << "                 *\n"
		   << "                /\n"
		   << "               *\n"
		   << "     *\n"
		   << "    / \\\n"
		   << "   /   \\\n"
		   << "  *     \\\n"
		   << " / \\     *\n"
		   << "*   *   / \\\n"
		   << "       *   \\\n"
		   << "            *                      *\n"
		   << "           / \\                    / \\\n"
		   << "          *   *                  /   \\\n"
		   << "                                *     \\\n"
		   << "                               /       *\n"
		   << "                              *       / \\\n"
		   << "                                     *   \\\n"
		   << "                                          *\n"
		   << "     *                                   / \\\n"
		   << "    / \\                                 *   *\n"
		   << "   /   \\\n"
		   << "  *     \\\n"
		   << " / \\     *\n"
		   << "*   *   / \\\n"
		   << "       *   \\\n"
		   << "            *\n"
		   << "             \\\n"
		   << "              *\n"
		   << "\nBy " << executor.getName() << std::endl;
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

Form	*ShrubberyCreationForm::alloc(std::string target)
{
	return new ShrubberyCreationForm(target);
}


ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj)
{
	if (this != &obj)
	{
		ShrubberyCreationForm *result = new ShrubberyCreationForm(obj);
		return *result;
	}
	return *this;
}
