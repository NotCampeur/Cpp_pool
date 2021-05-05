/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 14:00:38 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/04 19:39:11 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"

			Brain::Brain()
{
}

			Brain::~Brain()
{
}

std::string	Brain::identify(void) const
{
	std::stringstream	str_stream;
    
    str_stream << this;
    return str_stream.str();
}
