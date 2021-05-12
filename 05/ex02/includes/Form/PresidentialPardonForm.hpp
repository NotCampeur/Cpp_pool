/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 16:04:13 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/12 20:02:42 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <string>
#include <fstream>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
		std::string					_Target;
									PresidentialPardonForm();
	public:
									PresidentialPardonForm(std::string target);
									PresidentialPardonForm(const PresidentialPardonForm &obj);
									~PresidentialPardonForm();

		void						execute(const Bureaucrat &executor) const;

		PresidentialPardonForm		&operator=(const PresidentialPardonForm &obj);
};

#endif
