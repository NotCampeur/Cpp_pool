/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 16:25:51 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/18 11:56:49 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <vector>
# include <exception>
# include <climits>
# include <string>

class Span
{
		typedef unsigned int size_type;
		std::vector<int>	_content;
		size_type			_max_size;
		size_type			_act_size;
							Span();
	
	public:
							Span(size_type N);
							Span(const Span &to_copy);
							~Span();

		void				addNumber(int number);
		void				addNumber(std::vector<int>::iterator begin
									, std::vector<int>::iterator end);

		unsigned int		shortestSpan() const;
		unsigned int		longestSpan() const;

		Span				&operator=(const Span &to_assign);
		
		class maxSizeReach : public std::exception
		{
			public:
				const char *what() const throw()
				{return "The span is full.";}
		};
				
		class notEnoughValues : public std::exception
		{
			public:
				const char *what() const throw()
				{return "Not full enough to call this function.";}
		};
};

#endif
