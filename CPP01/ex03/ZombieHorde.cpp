/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 21:20:18 by ldavids           #+#    #+#             */
/*   Updated: 2021/06/07 22:04:06 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde() : _nb(0)
{
}

ZombieHorde::ZombieHorde(int num) : _nb(num)
{
	int			i;
	std::string list[11] = {"Alfred", "Romero", "Casper", "Bozo", "Luke", "Jean-Paul", "Hungry Creepy", "Arnold", "Emmanuel", "Dude", "Huxley"};
	int			random;

	i = 0;
	if (_nb < 0)
	{
		std::cout << "Invalid number of zobs" << std::endl;
		_nb = 0;
		return ;
	}
	this->_zombies = new Zombie[_nb];
	srand(time(NULL));
	while (i < _nb)
	{

		random = rand() % 11;
		this->_zombies[i].set_name_type("zombie", list[random]);
		i++;
	}
}

ZombieHorde::~ZombieHorde()
{
	if (_nb > 0)
		delete [] _zombies;
}

void	ZombieHorde::announce(void)
{
	int	i;

	i = 0;
	while (i < _nb)
	{
		_zombies[i].announce();
		i++;
	}
}
