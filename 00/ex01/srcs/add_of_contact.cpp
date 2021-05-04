/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_of_contact.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 13:05:20 by user42            #+#    #+#             */
/*   Updated: 2021/05/04 13:05:20 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"

void    add_first_name(c_contact &contact)
{
    std::string answer;

    std::cout << "Enter the" BBLUE " first name" NRM " please:" << std::endl;
	std::getline(std::cin, answer);
	contact.set_first_name(answer);
}

void    add_last_name(c_contact &contact)
{
    std::string answer;

	std::cout << "Enter the" BBLUE " last name" NRM " please:" << std::endl;
	std::getline(std::cin, answer);
	contact.set_last_name(answer);
}

void    add_nickname(c_contact &contact)
{
    std::string answer;

	std::cout << "Enter the" BBLUE " nickname" NRM " please:" << std::endl;
	std::getline(std::cin, answer);
	contact.set_nickname(answer);
}	

void    add_login(c_contact &contact)
{
    std::string answer;

	std::cout << "Enter the" BBLUE " login" NRM " please:" << std::endl;
	std::getline(std::cin, answer);
	contact.set_login(answer);
}	

void    add_email_address(c_contact &contact)
{
    std::string answer;

	std::cout << "Enter the" BBLUE " email address" NRM " please:" << std::endl;
	std::getline(std::cin, answer);
	contact.set_email_address(answer);
}

void    add_favorite_meal(c_contact &contact)
{
    std::string answer;

	std::cout << "Enter the" BBLUE " favorite meal" NRM " please:" << std::endl;
	std::getline(std::cin, answer);
	contact.set_favorite_meal(answer);
}

void    add_underwear_color(c_contact &contact)
{
    std::string answer;

	std::cout << "Enter the" BBLUE " underwear color" NRM " it's for a friend:" << std::endl;
	std::getline(std::cin, answer);
	contact.set_underwear_color(answer);
}

void    add_darkest_secret(c_contact &contact)
{
    std::string answer;

	std::cout << "Enter the" BBLUE " darkest secret" NRM " please:" << std::endl;
	std::getline(std::cin, answer);
	contact.set_darkest_secret(answer);
}

void    add_birthday_date(c_contact &contact)
{
    std::string answer;

	std::cout << "Enter the" BBLUE " birthday date" NRM " please:" << std::endl;
	std::getline(std::cin, answer);
	contact.set_birthday_date(answer);
}

void    add_postal_address(c_contact &contact)
{
    std::string answer;

	std::cout << "Enter the" BBLUE " postal address" NRM " please:" << std::endl;
	std::getline(std::cin, answer);
	contact.set_postal_address(answer.c_str());
}

void    add_phone_number(c_contact &contact)
{
    std::string answer;

	std::cout << "Enter the" BBLUE " phone number" NRM " please:" << std::endl;
	std::getline(std::cin, answer);
	contact.set_phone_number(answer.c_str());
}
