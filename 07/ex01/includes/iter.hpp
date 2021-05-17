/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 10:56:30 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/17 13:07:31 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <string>
# include <iostream>

namespace ft
{
	template <typename T>
	void	print(const T &a)
	{
		std::cout << a;
	}
	
	template <typename T>
	void	divide(T &a)
	{
		a = a >> 1;
	}
}

template <typename T>
void	iter(T *array, unsigned int size, void (*f)(T &))
{
	for (unsigned int i(0); i < size; i++)
	{
		f(array[i]);
	}
}

template <typename T>
void	iter(const T *array, unsigned int size, void (*f)(const T &))
{
	for (unsigned int i(0); i < size; i++)
	{
		f(array[i]);
	}
}
#endif
