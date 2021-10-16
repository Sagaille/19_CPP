/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 23:11:44 by ldavids           #+#    #+#             */
/*   Updated: 2021/06/09 14:10:21 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	this->_type = "standard";
}

ZombieEvent::~ZombieEvent()
{
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie	*ZombieEvent::newZombie (std::string name)
{
	return (new Zombie(this->_type, name));
}

Zombie	*ZombieEvent::randomChump(void)
{
	Zombie	*zombie;
	int		random;
	std::string list[6] = {"Alfred", "Romero", "Casper", "Bozo", "Luke", "Jean-Paul"};

	srand(time(NULL));
	random = rand() % 6;
	zombie = new Zombie(this->_type, list[random]);
	zombie->announce();
	return (zombie);
}
