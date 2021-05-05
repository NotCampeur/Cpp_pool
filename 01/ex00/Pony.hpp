/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 13:26:21 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/04 18:17:13 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>

class Pony
{
	private:

		int			 _legs_nbr;
		int			 _eyes_nbr;
		int			 _mph;
	public:
//CREATORS | DESTRUCTOR
						Pony();
						Pony(int legs_nbr,int eyes_nbr = 0, int mph = 0);
						~Pony();

//ACCESSORS
		void			set_legs_nbr(int nbr);
		void			set_eyes_nbr(int nbr);
		void			set_mph(int nbr);

		int			 	legs_nbr(void) const;
		int			 	eyes_nbr(void) const;
		int			 	mph(void) const;

//METHOD
		void			to_graze(void) const;
		void			to_mine(void) const;

		void			print(void) const;
};

void					ponyOnTheStack(int legs_nbr = 0,int eyes_nbr = 0, int mph = 0);
void					onyOnTheHeap(int legs_nbr = 0,int eyes_nbr = 0, int mph = 0);

#endif
