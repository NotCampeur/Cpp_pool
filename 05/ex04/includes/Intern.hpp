/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 20:36:29 by user42            #+#    #+#             */
/*   Updated: 2021/05/15 20:07:14 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <string>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:
				Intern();
				Intern(const Intern &obj);
				~Intern();

		Form	*makeForm(std::string wantedForm, std::string target) const;

		Intern	&operator=(const Intern &obj);

		class BadFormRequest : public std::exception
		{
				std::string	_msg;
			public:
							BadFormRequest(const std::string &msg)
							: _msg(msg){}
							~BadFormRequest() _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_USE_NOEXCEPT {}

				const char	*what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_USE_NOEXCEPT
				{return _msg.c_str();}
		};
};

#endif
