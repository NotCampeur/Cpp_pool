/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact_creators.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 13:05:28 by user42            #+#    #+#             */
/*   Updated: 2021/05/04 13:05:28 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"

c_contact::c_contact()
{
    _first_name = "NONE";
    _last_name = "NONE";
    _nickname = "NONE";
    _login = "NONE";
    _email_address = "NONE";
    _favorite_meal = "NONE";
    _underwear_color = "NONE";
    _darkest_secret = "NONE";
    _birthday_date = "NONE";
    _postal_address = "NONE";
    _phone_number = "NONE";
    _fill = false;
}
