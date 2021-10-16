/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 11:27:16 by ldavids           #+#    #+#             */
/*   Updated: 2021/06/08 14:19:54 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string const &name) : name(name), weapon1(NULL)
{
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon const &weapon)
{
	this->weapon1 = &weapon;
}

void	HumanB::attack(void)
{
	if (this->weapon1)
		std::cout << this->name << " attacks with his " << weapon1->getType() << std::endl;
	else
		std::cout << this->name << " has no weapon " << std::endl;
}
