/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 13:15:55 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/10 13:40:43 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <string>

class MateriaSource : public IMateriaSource
{
	private:
		AMateria		*_Learned_m[4];

	public:
						MateriaSource();
						MateriaSource(MateriaSource const &obj);
						~MateriaSource();
		
		void			learnMateria(AMateria*);
		AMateria		*createMateria(std::string const &type);

		MateriaSource	&operator=(MateriaSource const &obj);
};

#endif