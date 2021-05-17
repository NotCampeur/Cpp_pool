/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 16:25:51 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/17 17:07:08 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <exception>
# include <string>

class notFound : public std::exception
{
	private:
		std::string	_msg;

	public:
		notFound(const std::string msg) _GLIBCXX_USE_NOEXCEPT  : _msg(msg) {}
		~notFound() _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_USE_NOEXCEPT {}
		const char *what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_USE_NOEXCEPT
		{return _msg.c_str();}
};

template <typename T>
typename T::iterator	easyfind(T &container, int nb)
{
	typename T::iterator it = std::find(container.begin(), container.end(), nb);

	if (it == container.end())
		throw notFound("Number not found in container");
	return it;
}

#endif