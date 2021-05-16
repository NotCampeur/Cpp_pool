/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 17:06:18 by user42            #+#    #+#             */
/*   Updated: 2021/05/16 17:11:32 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	int n = std::rand() % 3;
	Base * base;

	if (n == 0)
	{
		base = new A();
		std::cout << "New A" << std::endl;
	}
	else if (n == 1)
	{
		base = new B();
		std::cout << "New B" << std::endl;
	}
	else
	{
		base = new C();
		std::cout << "New C" << std::endl;
	}
	return base;
}

void identify_from_pointer(Base * p)
{
	A * test = dynamic_cast<A*>(p);
	if (test)
		std::cout << "A" << std::endl;
	B * test1 = dynamic_cast<B*>(p);
	if (test1)
		std::cout << "B" << std::endl;
	C * test2 = dynamic_cast<C*>(p);
	if (test2)
		std::cout << "C" << std::endl;
}

void identify_from_reference(Base & p)
{
	A * test = dynamic_cast<A*>(&p);
	if (test)
		std::cout << "A" << std::endl;
	B * test1 = dynamic_cast<B*>(&p);
	if (test1)
		std::cout << "B" << std::endl;
	C * test2 = dynamic_cast<C*>(&p);
	if (test2)
		std::cout << "C" << std::endl;
}


int		main()
{
	std::cout << "Generation of the classes" << std::endl;
	srand(static_cast<unsigned int>(time(NULL)));
	Base * base1 = generate();
	Base * base2 = generate();
	Base * base3 = generate();
	Base * base4 = generate();
	Base * base5 = generate();

	std::cout << "Identify by pointer" << std::endl;
	identify_from_pointer(base1);
	identify_from_pointer(base2);
	identify_from_pointer(base3);
	identify_from_pointer(base4);
	identify_from_pointer(base5);

	std::cout << "Identify by ref" << std::endl;
	identify_from_reference(*base1);
	identify_from_reference(*base2);
	identify_from_reference(*base3);
	identify_from_reference(*base4);
	identify_from_reference(*base5);

	delete base1;
	delete base2;
	delete base3;
	delete base4;
	delete base5;
	return 0;
}
