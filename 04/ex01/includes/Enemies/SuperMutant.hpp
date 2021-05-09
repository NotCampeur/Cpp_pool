/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 13:07:19 by user42            #+#    #+#             */
/*   Updated: 2021/05/07 16:21:27 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <string>
# include <iostream>
# include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
					SuperMutant();
					SuperMutant(SuperMutant const &obj);
		virtual		~SuperMutant();

virtual	void		takeDamage(int amount);

		SuperMutant		&operator=(SuperMutant const &obj);
};

#endif
