/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 10:56:30 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/17 13:04:53 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

# include <string>
# include <iostream>

namespace ft
{
	template <typename T>
	void	swap(T &a, T &b)
	{
		T	tmp(a);
		
		a = b;
		b = tmp;
	}

	template <typename T>
	T		&min(const T &a, const T &b)
	{
		return (a < b ? const_cast<T &>(a) : const_cast<T &>(b));
	}

	template <typename T>
	T		&max(const T &a, const T &b)
	{
		return (a > b ? const_cast<T &>(a) : const_cast<T &>(b));
	}
}

#endif
