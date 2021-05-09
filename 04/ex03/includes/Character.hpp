/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 20:06:38 by user42            #+#    #+#             */
/*   Updated: 2021/05/08 20:43:14 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include <vector>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		std::vector<AMateria*>	_Materias;
								Character();

	public:
								Character(Character const &obj);
								~Character();

		std::string const		&getName() const;

		void					equip(AMateria *m);
		void					unequip(int idx);
		void					use(int idx, Character& target);

		Character 				&operator=(Character const &obj);
};

#endif
