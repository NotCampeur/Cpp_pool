/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 16:26:45 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/19 12:09:55 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <iostream>

void	stack_tests(void)
{
	std::stack<int>    stack;
	
	stack.push(5);
	stack.push(17);

	std::cout << stack.top() << std::endl;

	stack.pop();

	std::cout << stack.size() << std::endl;

	stack.push(3);
	stack.push(5);
	stack.push(737);
	//[...]
	stack.push(0);

	std::cout << std::endl << "Listing the stack : " << std::endl;
	while(stack.size() != 0)
	{
		std::cout << stack.top() << std::endl;
		stack.pop();
	}
}

void	mutantstack_tests(void)
{
	MutantStack<int>    mstack;
	
	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	std::cout << std::endl << "Listing the stack : " << std::endl;
	while(it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();

	++rit;
	--rit;
	std::cout << std::endl << "Reverse listing the stack : " << std::endl;
	while(rit != rite)
	{
		std::cout << *rit << std::endl;
		++rit;
	}
	std::stack<int> s(mstack);
}

int	main()
{
	std::cout << "STACK TESTS : " << std::endl;
	stack_tests();
	std::cout << "MUTANT STACK TESTS : " << std::endl;
	mutantstack_tests();
	return 0;
}
