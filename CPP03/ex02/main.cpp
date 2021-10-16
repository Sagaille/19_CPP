/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 14:32:39 by ldavids           #+#    #+#             */
/*   Updated: 2021/07/01 14:16:55 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main()
{
	FragTrap	robot("Termininator");

	robot.highFivesGuys();
	robot.attack("Lulu");
	robot.takeDamage(10);
	robot.beRepaired(1);
	robot.takeDamage(2000);
	robot.highFivesGuys();
}
