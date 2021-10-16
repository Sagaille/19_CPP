/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 14:32:39 by ldavids           #+#    #+#             */
/*   Updated: 2021/06/29 15:58:18 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ScavTrap	birdperson("Phoenix");
	
	birdperson.guardGate();
	birdperson.attack("Lulu");
	birdperson.takeDamage(10);
	birdperson.beRepaired(1);
	birdperson.takeDamage(2000);
}