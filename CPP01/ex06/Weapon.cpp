/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 11:27:21 by ldavids           #+#    #+#             */
/*   Updated: 2021/06/08 14:09:05 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string const name) : type(name)
{
}

Weapon::~Weapon()
{
}

std::string	const		&Weapon::getType(void) const
{
	return (this->type);
}

void			Weapon::setType(std::string const &newtype)
{
	this->type = newtype;
}
