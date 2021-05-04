/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact_printers_endl.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 13:06:08 by user42            #+#    #+#             */
/*   Updated: 2021/05/04 13:06:08 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"
    
void	c_contact::print_first_name_endl() const
{
    std::cout << "First Name : " BBLUE << _first_name << NRM << std::endl;
}

void	c_contact::print_last_name_endl() const
{
    std::cout << "Last Name : " BBLUE << _last_name << NRM << std::endl;
}

void	c_contact::print_nickname_endl() const
{
    std::cout << "Nickame : " BBLUE << _nickname << NRM << std::endl;
}

void	c_contact::print_login_endl() const
{
    std::cout << "Login : " BBLUE << _login << NRM << std::endl;
}

void	c_contact::print_email_address_endl() const
{
    std::cout << "Email : " BBLUE << _email_address << NRM << std::endl;
}

void	c_contact::print_favorite_meal_endl() const
{
    std::cout << "Favorite Meal : " BBLUE << _favorite_meal << NRM << std::endl;
}

void	c_contact::print_underwear_color_endl() const
{
    std::cout << "Underwear Color : " BBLUE << _underwear_color << NRM << std::endl;
}

void	c_contact::print_darkest_secret_endl() const
{
    std::cout << "Darkest Secret : " BBLUE << _darkest_secret << NRM << std::endl;
}

void	c_contact::print_birthday_date_endl() const
{
    std::cout << "Birthday Date : " BBLUE << _birthday_date << NRM << std::endl;
}

void	c_contact::print_postal_address_endl() const
{
    std::cout << "Postal Address : " BBLUE << _postal_address << NRM << std::endl;
}

void	c_contact::print_phone_number_endl() const
{
    std::cout << "Phone Number : " BBLUE << _phone_number << NRM << std::endl;
}

void	c_contact::print_fill_endl() const
{
    std::cout << BBLUE << _fill << NRM << std::endl;
}
