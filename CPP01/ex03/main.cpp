/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 21:20:22 by ldavids           #+#    #+#             */
/*   Updated: 2021/06/07 21:58:58 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int	main(void)
{
	std::cout << "----------NO-HORDE---------" << std::endl;
	ZombieHorde no_horde;

	no_horde.announce();
	std::cout << "---------------------------" << std::endl;

	std::cout << "----------LIL-HORDE--------" << std::endl;
	ZombieHorde lil_horde(5);

	lil_horde.announce();
	std::cout << "---------------------------" << std::endl;

	std::cout << "---------FALSE-HORDE-------" << std::endl;
	ZombieHorde false_horde(-5);

	false_horde.announce();
	std::cout << "---------------------------" << std::endl;
	return (0);
}
