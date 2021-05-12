/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 17:10:46 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/12 15:34:37 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		std::string const	_Name;
		unsigned int		_Grade;
							Bureaucrat();

	public:
							Bureaucrat(std::string name, unsigned int grade);
							Bureaucrat(Bureaucrat const &obj);
							~Bureaucrat();

		std::string const	getName(void) const;
		unsigned int		getGrade(void) const;

		void				incrementGrade(void);
		void				decrementGrade(void);

		void				signForm(const Form &form) const;

		Bureaucrat			&operator=(Bureaucrat const &obj);

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

std::ostream				&operator<<(std::ostream &os, Bureaucrat const &obj);

#endif
