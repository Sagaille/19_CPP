/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 14:32:39 by ldavids           #+#    #+#             */
/*   Updated: 2021/06/30 18:10:08 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap	robot("Termininator");

	robot.highFivesGuys();
	robot.attack("Lulu");
	robot.takeDamage(10);
	robot.beRepaired(1);
	robot.guardGate();
	robot.highFivesGuys();
	robot.show_stats();
	robot.takeDamage(2000);
	robot.highFivesGuys();
	robot.whoAmI();
}
