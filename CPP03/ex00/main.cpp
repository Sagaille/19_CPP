/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 14:32:39 by ldavids           #+#    #+#             */
/*   Updated: 2021/07/01 14:08:48 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	er_two("R2");

	er_two.attack("Lulu");
	std::cout << "He inflicts himself damage in his confusion!" << std::endl;
	er_two.takeDamage(5);
	er_two.beRepaired(1);
	ClapTrap	de_two(er_two);
	std::cout << "Seeing his failures, he commits seppuku!" << std::endl;
	er_two.takeDamage(20);
}
