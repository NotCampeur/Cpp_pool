/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 13:06:59 by user42            #+#    #+#             */
/*   Updated: 2021/05/04 13:06:59 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK
# define PHONE_BOOK

# include <iostream>
# include <string>
# include <limits>
# include <cstdlib>
# include "contact.hpp"
# include "colorCode.hpp"

void    add_first_name(c_contact &contact);
void    add_last_name(c_contact &contact);
void    add_nickname(c_contact &contact);
void    add_login(c_contact &contact);
void    add_email_address(c_contact &contact);
void    add_favorite_meal(c_contact &contact);
void    add_underwear_color(c_contact &contact);
void    add_darkest_secret(c_contact &contact);
void    add_birthday_date(c_contact &contact);
void    add_postal_address(c_contact &contact);
void    add_phone_number(c_contact &contact);

#endif
