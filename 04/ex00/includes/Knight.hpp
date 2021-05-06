/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Knight.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 14:45:19 by user42            #+#    #+#             */
/*   Updated: 2021/05/06 16:34:04 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KNIGHT_HPP
# define KNIGHT_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class Knight : public Victim
{
		std::string	_Title;
					Knight();
	public:

					Knight(std::string const &name, std::string const &title);
					Knight(Knight const &obj);
					~Knight();

		void		getPolymorphed(void) const;

		std::string	Title(void) const;

		void		setTitle(std::string const &title);

		Knight	&operator=(Knight const &obj);
};

std::ostream		&operator<<(std::ostream &os,Knight const &obj);

#endif
