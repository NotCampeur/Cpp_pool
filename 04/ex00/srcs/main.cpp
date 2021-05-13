/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:39:29 by user42            #+#    #+#             */
/*   Updated: 2021/05/13 09:39:52 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Knight.hpp"

int		main()
{
	Sorcerer	robert("Robert", "the Magnificent");

	Victim		jim("Jimmy");
	Peon		joe("Joe");
	Knight		paul("paul", "the right one");
	
	std::cout << robert << jim << joe << paul;
	std::cerr << robert << jim << joe << paul;

	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(paul);

	return 0;
}
