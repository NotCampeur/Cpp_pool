/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 13:26:44 by ldutriez          #+#    #+#             */
/*   Updated: 2020/11/02 13:26:46 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack(int legs_nbr, int eyes_nbr, int mph)
{
	Pony	stackPony(legs_nbr, eyes_nbr, mph);

	stackPony.to_graze();
	stackPony.print();
}

Pony	*ponyOnTheHeap(int legs_nbr, int eyes_nbr, int mph)
{
	Pony	*heapPony;

	heapPony = new Pony(legs_nbr, eyes_nbr, mph);
	heapPony->to_mine();
	heapPony->print();
	return heapPony;
}

int	 main(void)
{
	Pony	*cyberPony;
	
	cyberPony = ponyOnTheHeap(86, 134, 89025);
	ponyOnTheStack(86, 134, 89025);
	std::cout << "The heap Pony still alive!!" << std::endl;
	cyberPony->to_mine();
	system("wait 2000");
	delete cyberPony;
	std::cout << "heap Pony has been deleted, LEAKS ARE NOT ACCEPTED" << std::endl;
	return 0;
}