/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 13:26:44 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/04 18:34:32 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack(int legs_nbr, int eyes_nbr, int mph)
{
	Pony	stackPony(legs_nbr, eyes_nbr, mph);

	stackPony.to_graze();
	stackPony.print();
}

void	ponyOnTheHeap(Pony	*heapPony, int legs_nbr, int eyes_nbr, int mph)
{
	heapPony = new Pony(legs_nbr, eyes_nbr, mph);
	heapPony->to_mine();
	heapPony->print();
	std::cout << "Address during Heap use " << heapPony << std::endl;
	std::cout << "heap Pony has been deleted, LEAKS ARE NOT ACCEPTED"
	<< std::endl << std::endl;
	delete heapPony;
}

int	 main(void)
{
	Pony	*cyberPoney(NULL);

	std::cout << "Address before Heap use " << cyberPoney  << std::endl << std::endl;
	ponyOnTheHeap(cyberPoney, 86, 134, 89025);
	ponyOnTheStack(86, 134, 89025);
	std::cout << "Address after Heap use " << cyberPoney << std::endl;
	return 0;
}
