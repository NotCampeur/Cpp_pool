/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 14:45:19 by user42            #+#    #+#             */
/*   Updated: 2021/05/06 16:30:42 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <string>
# include <iostream>

class Victim
{
	protected:
		std::string		_Name;
						Victim();
	public:

						Victim(std::string const &name);
						Victim(Victim const &obj);
						~Victim();

		virtual void	getPolymorphed(void) const;

		std::string		Name(void) const;

		void			setName(std::string const &name);

		Victim			&operator=(Victim const &obj);
};

std::ostream			&operator<<(std::ostream &os,Victim const &obj);

#endif
