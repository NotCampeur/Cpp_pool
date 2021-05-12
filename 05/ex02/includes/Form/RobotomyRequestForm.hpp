/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 16:04:13 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/12 18:09:32 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <string>
#include <fstream>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
		std::string			_Target;
							RobotomyRequestForm();
	public:
							RobotomyRequestForm(std::string target);
							RobotomyRequestForm(const RobotomyRequestForm &obj);
							~RobotomyRequestForm();

		void				execute(const Bureaucrat &executor) const;

		RobotomyRequestForm	&operator=(const RobotomyRequestForm &obj);
};

#endif
