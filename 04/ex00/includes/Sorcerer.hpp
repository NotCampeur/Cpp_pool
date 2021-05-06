/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 14:45:19 by user42            #+#    #+#             */
/*   Updated: 2021/05/06 16:08:45 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
		std::string	_Name;
		std::string	_Title;
					Sorcerer();
	public:

					Sorcerer(std::string const &name, std::string const &title);
					Sorcerer(Sorcerer const &obj);
					~Sorcerer();

		void		polymorph(Victim const &victim) const;

		std::string	Name(void) const;
		std::string	Title(void) const;

		void		setName(std::string const &name);
		void		setTitle(std::string const &title);

		Sorcerer	&operator=(Sorcerer const &obj);
};

std::ostream		&operator<<(std::ostream &os,Sorcerer const &obj);

#endif
