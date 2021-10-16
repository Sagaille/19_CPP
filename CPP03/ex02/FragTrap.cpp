/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 16:05:45 by ldavids           #+#    #+#             */
/*   Updated: 2021/07/01 14:15:19 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->name = "Unidentified";
	this->hitpoints = set_hp();
	this->energy_points = set_ep();
	this->attack_damage = set_att();
	this->max_hp = hitpoints;
	this->is_alive = 1;
	std::cout << name << " is a lil Fragger! (fragtrap)" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->hitpoints = set_hp();
	this->energy_points = set_ep();
	this->attack_damage = set_att();
	this->max_hp = hitpoints;
	this->is_alive = 1;
	std::cout << name << " is a lil Fragger! (fragtrap)" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << name << " went to robot-heaven... (fragtrap)" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src)
{
	std::cout << src.name << " copied himself through mitosis (fragtrap)" << std::endl;
	this->name = src.name;
	this->hitpoints = src.hitpoints;
	this->energy_points = src.energy_points;
	this->attack_damage = src.attack_damage;
	this->is_alive = src.is_alive;
	this->max_hp = src.max_hp;
}

FragTrap	&FragTrap::operator=(FragTrap const &src)
{
	std::cout << src.name << " copied himself through mitosis (fragtrap)" << std::endl;
	this->name = src.name;
	this->hitpoints = src.hitpoints;
	this->energy_points = src.energy_points;
	this->attack_damage = src.attack_damage;
	this->is_alive = src.is_alive;
	this->max_hp = src.max_hp;
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	if (is_alive == 1)
		std::cout << name << " asks for a collective high five! (fragtrap)" << std::endl;
	if (is_alive == 0)
		std::cout << name << " is already dead (fragtrap)" << std::endl;
}

int FragTrap::set_hp(void)
{
	return (100);
}

int FragTrap::set_ep(void)
{
	return (100);
}

int FragTrap::set_att(void)
{
	return (30);
}
