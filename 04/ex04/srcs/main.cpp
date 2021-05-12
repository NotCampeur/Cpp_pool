/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 10:24:32 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/12 14:21:22 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IAsteroid.hpp"
#include "IMiningLaser.hpp"
#include "Asteroid.hpp"
#include "Comet.hpp"
#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"
#include "MiningBarge.hpp"

int	main(void)
{
	IAsteroid	*comet = new Comet();
	IAsteroid	*asteroid = new Asteroid();
	
	StripMiner	tooMuch;

	MiningBarge	barge;
	MiningBarge	bargeExt;

	bargeExt.equip(new StripMiner());
	bargeExt.equip(new StripMiner());
	bargeExt.equip(new StripMiner());
	bargeExt.equip(new StripMiner());

	barge.equip(new DeepCoreMiner());
	std::cout << "____________________________________________" << std::endl;
	std::cout << "\n* Mining Comet *\n" << std::endl;
	barge.mine(comet);
	barge.equip(new StripMiner());
	std::cout << "____________________________________________" << std::endl;
	std::cout << "\n* Mining Asteroid *\n" << std::endl;
	barge.mine(asteroid);
	barge.equip(new StripMiner());
	std::cout << "____________________________________________" << std::endl;
	std::cout << "\n* Mining Comet *\n" << std::endl;
	barge.mine(comet);
	barge.equip(new DeepCoreMiner());
	barge.equip(&tooMuch);
	barge.equip(&tooMuch);
	barge.equip(&tooMuch);
	barge.equip(&tooMuch);
	std::cout << "____________________________________________" << std::endl;
	std::cout << "\n* Mining Comet *\n" << std::endl;
	barge.mine(comet);
	std::cout << "\n* Mining Asteroid *\n" << std::endl;
	barge.mine(asteroid);

	bargeExt = barge;
	bargeExt.equip(&tooMuch);
	bargeExt.equip(&tooMuch);

	std::cout << "____________________________________________" << std::endl;
	std::cout << "\n* Mining Comet *\n" << std::endl;
	bargeExt.mine(comet);
	std::cout << "\n* Mining Asteroid *\n" << std::endl;
	bargeExt.mine(asteroid);
	
	delete comet;
	delete asteroid;
	return 0;
}