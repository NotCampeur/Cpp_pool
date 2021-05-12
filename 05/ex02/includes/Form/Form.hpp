/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 14:38:21 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/12 18:07:11 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	protected:
		const std::string	_Name;
		bool				_isSigned;
		const unsigned int	_gradeToSign;
		const unsigned int	_gradeToExec;
							Form();
		
	public:
							Form(const std::string &name
													, unsigned int gradeToSign
													, unsigned int gradeToExec);
							Form(const Form &obj);
		virtual				~Form();

		std::string			Name(void) const;
		bool				isSigned(void) const;
		unsigned int		gradeToSign(void) const;
		unsigned int		gradeToExec(void) const;

		void				beSigned(const Bureaucrat &bureaucrat);
		virtual void		execute(const Bureaucrat &executor) const = 0;

		Form				&operator=(const Form &obj);

		class GradeTooHighException : public std::exception
		{
				std::string	_msg;
			public:
							GradeTooHighException(const std::string &msg)
							: _msg(msg){}
							~GradeTooHighException() _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_USE_NOEXCEPT {}
							
				const char	*what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_USE_NOEXCEPT
				{return _msg.c_str();}
		};

		class GradeTooLowException : public std::exception
		{
				std::string	_msg;
			public:
							GradeTooLowException(const std::string &msg)
							: _msg(msg){}
							~GradeTooLowException() _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_USE_NOEXCEPT {}
									
				const char	*what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_USE_NOEXCEPT
				{return _msg.c_str();}
		};
};

std::ostream				&operator<<(std::ostream &os, Form const &obj);

#endif
