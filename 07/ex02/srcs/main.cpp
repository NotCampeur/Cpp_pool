/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 10:47:42 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/17 14:10:42 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

void	array_tests()
{
	try 
	{
		Array<int>			i_tab;
		
		std::cout << "\"" ;
		try
		{
			std::cout << i_tab[0];
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << "\" is the content of array of size " << i_tab.size() << std::endl;

		Array<float>		f_tab(2);
		
		f_tab[1] = 42.42;
		
		std::cout << "\"" ;
		for (int i(0); i < 2; i++)
		{
			std::cout << f_tab[i];
			std::cout << " ";
		}
		std::cout << "\" is the content of array of size " << f_tab.size() << std::endl;
		
		Array<std::string>	s_tab(5);

		s_tab[0] = "salut";
		s_tab[1] = " les";
		s_tab[2] = " potes";
		std::cout << "\"" ;
		for (int i(0); i < 5; i++)
			std::cout << s_tab[i];
		std::cout << "\" is the content of array of size " << s_tab.size() << std::endl;
	}
	catch (const std::exception &e)
	// catch (const Array<int>::outOfRange &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int		main(void)
{
	std::cout << "ARRAY TESTS" << std::endl;
	array_tests();
	return 0;
}