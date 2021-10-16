/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 23:11:37 by ldavids           #+#    #+#             */
/*   Updated: 2021/06/09 14:24:44 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void	other_dimension(void)
{
	Zombie one("heaped basic", "Bobby");
	Zombie two;
	two.set_name_type("heaped advanced", "Billy");

	one.announce();
	two.announce();
}

int	main(void)
{
	Zombie *unique;
	ZombieEvent	event;

	unique = new Zombie("stacked genius", "Roger");
	other_dimension();
	unique->announce();
	delete unique;

	unique = new Zombie("recycled master", "Donald");
	unique->announce();
	delete unique;

	unique = event.newZombie("Alpha");
	unique->announce();
	delete unique;

	event.setZombieType("new");
	unique = event.newZombie("Coco");
	unique->announce();
	delete unique;

	event.setZombieType("random");
	unique = event.randomChump();
	delete unique;
	return (0);
}
