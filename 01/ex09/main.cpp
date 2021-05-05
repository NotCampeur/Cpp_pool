/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 13:37:57 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/05 10:06:27 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"
#include <unistd.h>

int		main()
{
	Logger	logger("wtf");

	logger.log("Console", "This is a test");
	logger.log("File", "This is a file test");
	sleep(2);
	logger.log("File", "which I hope work");
	return 0;
}