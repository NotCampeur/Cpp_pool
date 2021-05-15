/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 17:10:46 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/15 20:08:42 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

class Bureaucrat
{
	private:
		const std::string	_Name;
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
