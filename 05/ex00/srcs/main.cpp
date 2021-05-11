/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 17:08:20 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/11 18:18:13 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main(void)
{
		Bureaucrat	Tom("Tom", 0);
		Bureaucrat	Bill("Bill", 151);

	std::cout << Tom;
	std::cout << Bill;
	return 0;
}