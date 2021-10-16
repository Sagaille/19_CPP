/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 11:27:11 by ldavids           #+#    #+#             */
/*   Updated: 2021/06/08 14:16:48 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string const &name, const Weapon &weapon) : name(name), weapon1(weapon)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with his " << this->weapon1.getType() << std::endl;
}
