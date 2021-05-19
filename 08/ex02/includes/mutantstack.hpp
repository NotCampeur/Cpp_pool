/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 16:25:51 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/18 13:36:58 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <algorithm>
# include <stack>
# include <iterator>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

							MutantStack() : std::stack<T>() {}
							MutantStack(const MutantStack &to_copy)
							{this->c = to_copy.c;}
							~MutantStack() {}

		iterator			begin() {return this->c.begin();}
		iterator			end() {return this->c.end();}
		reverse_iterator	rbegin() {return this->c.rbegin();}
		reverse_iterator	rend() {return this->c.rend();}

		MutantStack			&operator=(const MutantStack &to_assign)
		{
			if (this != &to_assign)
				this->c = to_assign.c;
			return *this;
		}
};

#endif
