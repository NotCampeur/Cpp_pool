/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 16:04:13 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/12 22:22:43 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <string>
#include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
		std::string				_Target;
								ShrubberyCreationForm();
	public:
								ShrubberyCreationForm(std::string target);
								ShrubberyCreationForm(const ShrubberyCreationForm &obj);
								~ShrubberyCreationForm();

		void					execute(const Bureaucrat &executor) const;

		static Form				*alloc(std::string target);

		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &obj);
};

#endif
