/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 15:07:05 by user42            #+#    #+#             */
/*   Updated: 2021/05/14 16:22:41 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICEBLOCK_HPP
# define OFFICEBLOCK_HPP

# include <string>
# include "Intern.hpp"
# include "Bureaucrat.hpp"

class OfficeBlock
{
	private:
		Intern		*_Slave;
		Bureaucrat	*_Signer;
		Bureaucrat	*_Executor;
		
	public:
					OfficeBlock();
					OfficeBlock(Intern &intern, Bureaucrat &signer, Bureaucrat &executor);
					~OfficeBlock();
		
		void		setIntern(Intern &intern);
		void		setSigner(Bureaucrat &signer);
		void		setExecutor(Bureaucrat &executor);
		
		void		doBureaucracy(std::string formName, std::string targetName);

		class InternIsUseless : public std::exception
		{
				std::string	_msg;
			public:
							InternIsUseless(const std::string &msg)
							: _msg(msg){}
							~InternIsUseless() _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_USE_NOEXCEPT {}
							
				const char	*what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_USE_NOEXCEPT
				{return _msg.c_str();}
		};

		class BureaucratCantSign : public std::exception
		{
				std::string	_msg;
			public:
							BureaucratCantSign(const std::string &msg)
							: _msg(msg){}
							~BureaucratCantSign() _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_USE_NOEXCEPT {}
							
				const char	*what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_USE_NOEXCEPT
				{return _msg.c_str();}
		};

		class BureaucratCantExecute : public std::exception
		{
				std::string	_msg;
			public:
							BureaucratCantExecute(const std::string &msg)
							: _msg(msg){}
							~BureaucratCantExecute() _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_USE_NOEXCEPT {}
							
				const char	*what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_USE_NOEXCEPT
				{return _msg.c_str();}
		};
};

#endif
