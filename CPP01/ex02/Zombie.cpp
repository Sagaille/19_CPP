/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 23:11:39 by ldavids           #+#    #+#             */
/*   Updated: 2021/06/07 21:23:51 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _name(std::string()), _type(std::string())
{
}

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
}


Zombie::~Zombie()
{
}

void	Zombie::announce(void)
{
	std::cout << this->_name << " " << this->_type << " loves braiiiiiiinnnnnsss..." << std::endl;
}

void	Zombie::set_name_type(std::string name, std::string type)
{
	this->_name = name;
	this->_type = type;
}
