/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 13:05:11 by user42            #+#    #+#             */
/*   Updated: 2021/05/04 14:08:45 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"

static std::string	format_string(std::string input)
{
	std::string	result;
	int	space_nbr(0);

	space_nbr = 10 - input.size();
	result.push_back('|');
	if (space_nbr < 0)
	{
		for (int i(0); i < 9; i++)
			result.push_back(input[i]);
		result.push_back('.');
	}
	else
	{
		for (int i(0); i < space_nbr; i++)
			result.push_back(' ');
		result.append(input);
	}
	return result;
}

static void	print_main_infos(c_contact const phone_book[8])
{
	std::cout << "|     " BYELLOW "index" NRM "|" BBLUE "first name" NRM "| " BBLUE "last name" NRM "|  " BBLUE "nickname" NRM "|" << std::endl;
	for (int i(0); i < 8; i++)
	{
		std::cout << "|" << "         " << i + 1;
		std::cout << format_string(phone_book[i].first_name());
		std::cout << format_string(phone_book[i].last_name());
		std::cout << format_string(phone_book[i].login()) << '|' << std::endl;
	}
}

static void	search_contact(c_contact const phone_book[8])
{
	std::string		input("DEFAULT");
	int 			index(0);

	print_main_infos(phone_book);
	while (std::atoi(input.c_str()) <= 0 || std::atoi(input.c_str()) >= 9
			|| input.size() > 1)
	{
		std::cout << "Choose an" BYELLOW " index" NRM << std::endl;
		std::getline(std::cin, input);
	}
	index = std::atoi(input.c_str()) - 1;
	phone_book[index].print_first_name_endl();
	phone_book[index].print_last_name_endl();
	phone_book[index].print_nickname_endl();
	phone_book[index].print_login_endl();
	phone_book[index].print_email_address_endl();
	phone_book[index].print_favorite_meal_endl();
	phone_book[index].print_underwear_color_endl();
	phone_book[index].print_darkest_secret_endl();
	phone_book[index].print_birthday_date_endl();
	phone_book[index].print_postal_address_endl();
	phone_book[index].print_phone_number_endl();
	std::cout << std::endl << "You can type " BMAGENTA "add" NRM " | " BMAGENTA "search" NRM " | " BMAGENTA "exit" NRM "" << std::endl;
}

static void	add_contact(c_contact phone_book[8])
{
	int			index(0);

	while (phone_book[index].fill() == true)
	{
		index++;
		if (index == 8)
			index = 0;
	}
	if (index < 7)
		phone_book[index + 1].set_fill(false);
	else if (index == 7)
		phone_book[0].set_fill(false);
	add_first_name(phone_book[index]);
	add_last_name(phone_book[index]);
	add_nickname(phone_book[index]);
	add_login(phone_book[index]);
	add_email_address(phone_book[index]);
	add_favorite_meal(phone_book[index]);
	add_underwear_color(phone_book[index]);
	add_darkest_secret(phone_book[index]);
	add_birthday_date(phone_book[index]);
	add_postal_address(phone_book[index]);
	add_phone_number(phone_book[index]);
	phone_book[index].set_fill(true);
	std::cout << std::endl << "You can type " BMAGENTA "add" NRM " | " BMAGENTA "search" NRM " | " BMAGENTA "exit" NRM "" << std::endl;
}

int		main(void)
{
	std::string answer;
	c_contact	phone_book[8];

	std::cout << BWHITE "Welcome in your" BGRN " phone book!" NRM << std::endl;
	std::cout << std::endl << "You can type " BMAGENTA "add" NRM " | " BMAGENTA "search" NRM " | " BMAGENTA "exit" NRM "" << std::endl;
	while (answer != "exit")
	{
		std::getline(std::cin, answer);
		if (answer == "add")
			add_contact(phone_book);
		else if (answer == "search")
			search_contact(phone_book);
		else if (answer != "exit")
			answer.clear();
	}
	std::cout << "Goodbye." << std::endl;
	return 0;
}
