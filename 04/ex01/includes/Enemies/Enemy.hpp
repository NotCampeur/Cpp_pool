/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 13:07:19 by user42            #+#    #+#             */
/*   Updated: 2021/05/07 15:04:32 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <string>
# include <iostream>

class Enemy
{
	protected:
		std::string	_Type;
		int			_HP;
					Enemy();
	
	public:
					Enemy(int hp, std::string const &type);
					Enemy(Enemy const &obj);
		virtual		~Enemy() = 0;

		std::string	getType() const;
		int			getHP() const;

virtual	void		takeDamage(int amount);

		Enemy		&operator=(Enemy const &obj);
};

#endif
