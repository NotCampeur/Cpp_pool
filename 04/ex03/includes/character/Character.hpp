/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 20:06:38 by user42            #+#    #+#             */
/*   Updated: 2021/05/11 14:46:24 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		AMateria				*_Materias[4];
		std::string				_Name;
								Character();

	public:
								Character(std::string const &name);
								Character(Character const &obj);
								~Character();

		std::string const		&getName() const;

		void					equip(AMateria *m);
		void					unequip(int idx);
		void					use(int idx, ICharacter &target);

		Character 				&operator=(Character const &obj);
};

#endif
