/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 15:00:49 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/05 09:52:20 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int		main()
{
	Human	tom;

	tom.action("meleeAttack", "segfaults");
	tom.action("rangedAttack", "leaks");
	tom.action("intimidatingShoot", "bugs");
	tom.action("GetOutStanding", "module01");
	return 0;
}