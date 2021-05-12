/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 16:04:13 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/12 22:22:32 by user42           ###   ########.fr       */
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
		
		static Form			*alloc(std::string target);
		
		RobotomyRequestForm	&operator=(const RobotomyRequestForm &obj);
};

#endif
