/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 10:56:30 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/17 14:09:14 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <string>
# include <iostream>

template <typename T>
class Array
{
	private:
		typedef unsigned int	size_type;
		T			*_content;
		size_type	_size;
		
	public:
	// CONSTRUCTORS / DESTRUCTOR
		// DEFAULT CONSTRUCTOR
					Array()
		{
			_size = 0;
			_content = new T[0];
		}
		// COPY CONSTRUCTOR
					Array(const Array &to_copy)
		{
			*this = to_copy;
		}
		// SIZE CONSTRUCTOR
					Array(unsigned int n)
		{
			_size = n;
			_content = new T[n];
			for (unsigned int i(0); i < n; i++)
				_content[i] = T();
		}
		// DEFAULT DESTRUCTOR
					~Array()
		{
			delete [] _content;
		}

	// ACCESSORS
		size_type	size(void) const
		{
			return _size;
		}

	// OPERATORS
		Array		&operator=(const Array &to_assign)
		{
			if (this != &to_assign)
			{
				_size = to_assign._size;
				delete [] _content;
				_content = new T[_size];
				for (unsigned int i(0); i < _size; i++)
					_content[i] = to_assign[i];
			}
			return *this;
		}

		T		&operator[](const int &index)
		{
			if ((size_type)index >= _size || index < 0)
				throw Array::outOfRange("Can't access this index of Array.");
			return _content[index];
		}

		class outOfRange : public std::exception
		{
			private:
				std::string		_msg;

			public:
				outOfRange(const std::string &msg) _GLIBCXX_USE_NOEXCEPT : _msg(msg) {}
				~outOfRange() _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_USE_NOEXCEPT {}
				const char	*what(void) const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_USE_NOEXCEPT
				{return _msg.c_str();};
		};
};

#endif
