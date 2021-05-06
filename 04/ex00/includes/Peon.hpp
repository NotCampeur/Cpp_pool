/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 14:45:19 by user42            #+#    #+#             */
/*   Updated: 2021/05/06 16:22:54 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class Peon : public Victim
{
					Peon();
	public:

					Peon(std::string const &name);
					Peon(Peon const &obj);
					~Peon();

		void		getPolymorphed(void) const;

		Peon	&operator=(Peon const &obj);
};

std::ostream		&operator<<(std::ostream &os,Peon const &obj);

#endif
