/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact_setters.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 13:06:29 by user42            #+#    #+#             */
/*   Updated: 2021/05/04 13:06:29 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"
    
void	c_contact::set_first_name(std::string first_name)
{
    _first_name = first_name;
}

void	c_contact::set_last_name(std::string last_name)
{
    _last_name = last_name;
}

void	c_contact::set_nickname(std::string nickname)
{
    _nickname = nickname;
}

void	c_contact::set_login(std::string login)
{
    _login = login;
}

void	c_contact::set_email_address(std::string email_address)
{
    _email_address = email_address;
}

void	c_contact::set_favorite_meal(std::string favorite_meal)
{
    _favorite_meal = favorite_meal;
}

void	c_contact::set_underwear_color(std::string underwear_color)
{
    _underwear_color = underwear_color;
}

void	c_contact::set_darkest_secret(std::string darkest_secret)
{
    _darkest_secret = darkest_secret;
}

void	c_contact::set_birthday_date(std::string birthday_date)
{
    _birthday_date = birthday_date;
}

void	c_contact::set_postal_address(std::string postal_address)
{
    _postal_address = postal_address;
}

void	c_contact::set_phone_number(std::string phone_number)
{
    _phone_number = phone_number;
}

void	c_contact::set_fill(bool state)
{
    _fill = state;
}
