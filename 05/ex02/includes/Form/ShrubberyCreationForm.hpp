/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 16:04:13 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/12 17:00:38 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <string>
#include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
		std::string					_Target;
									ShrubberyCreationForm();
	public:
									ShrubberyCreationForm(std::string target);
									ShrubberyCreationForm(const ShrubberyCreationForm &obj);
									~ShrubberyCreationForm();

		void						execute(const Bureaucrat &executor) const;

		ShrubberyCreationForm		&operator=(const ShrubberyCreationForm &obj);
};

#endif
