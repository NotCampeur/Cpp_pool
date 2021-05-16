/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 16:56:26 by user42            #+#    #+#             */
/*   Updated: 2021/05/16 19:10:06 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

char	randalphanum(void)
{
	if (std::rand() % 2 == 0)
		return 97 + std::rand() % 26;
	else
		return 48 + std::rand() % 10;
}

void *serialize(void)
{
	char	*str = new char [21];

	for (int i(0); i < 8; i++)
		str[i] = randalphanum();
	for (int i(8); i < 12; i++)
	{
		int n = std::rand() % 256;
		str[i] = n;
	}
	std::cout << "INTEGER: " << *reinterpret_cast<int *>(&(str[8])) << std::endl;
	for (int i(12); i < 20; i++)
		str[i] = randalphanum();
	str[20] = '\0';
	return reinterpret_cast<void *>(str);
}

Data *deserialize(void *raw)
{
	char *str = reinterpret_cast<char *>(raw);
	Data  *data = new Data();
	int length = std::string(str).length();

	data->s1 = "";
	data->s2 = "";
	for (int i = 0; i < 8; i++)
		data->s1 += str[i];
	data->s1[8] = '\0';
	data->n = *reinterpret_cast<int *>(&(str[8]));
	for (int i = 0; i < 8; i++)
		data->s2 += str[length - 8 + i];
	data->s1[20] = '\0';
	return data;
}

int		main()
{
	srand(static_cast<unsigned int>(time(NULL)));
	void *data = serialize();

	std::cout << "raw string: " << reinterpret_cast<char *>(data) << std::endl;
	
	Data *test = deserialize(data);

	std::cout << "string1: " << test->s1 << std::endl;
	std::cout << "int: " << test->n << std::endl;
	std::cout << "string2: " << test->s2 << std::endl;

	delete test;
	delete [] reinterpret_cast<char *>(data);
	return 0;
}
