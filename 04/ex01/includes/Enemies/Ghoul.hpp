/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ghoul.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 13:07:19 by user42            #+#    #+#             */
/*   Updated: 2021/05/07 18:45:13 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GHOUL_HPP
# define GHOUL_HPP

# include <string>
# include <iostream>
# include "Enemy.hpp"

class Ghoul : public Enemy
{
	public:
					Ghoul();
					Ghoul(Ghoul const &obj);
		virtual		~Ghoul();

virtual	void		takeDamage(int amount);

		Ghoul		&operator=(Ghoul const &obj);
};

#endif
