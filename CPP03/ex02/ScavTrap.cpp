/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 14:56:31 by ldavids           #+#    #+#             */
/*   Updated: 2021/07/01 14:15:26 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->name = "Unidentified";
	this->hitpoints = set_hp();
	this->energy_points = set_ep();
	this->attack_damage = set_att();
	this->max_hp = hitpoints;
	this->is_alive = 1;
	std::cout << name << " is a lil Scavtrap! (scavtrap)" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->hitpoints = set_hp();
	this->energy_points = set_ep();
	this->attack_damage = set_att();
	this->max_hp = hitpoints;
	this->is_alive = 1;
	std::cout << name << " is a lil Scavtrap! (scavtrap)" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << name << " went to scav-heaven... (scavtrap)" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	std::cout << src.name << " copied himself through mitosis (scavtrap)" << std::endl;
	this->name = src.name;
	this->hitpoints = src.hitpoints;
	this->energy_points = src.energy_points;
	this->attack_damage = src.attack_damage;
	this->is_alive = src.is_alive;
	this->max_hp = src.max_hp;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &src)
{
	std::cout << src.name << " copied himself through mitosis (scavtrap)" << std::endl;
	this->name = src.name;
	this->hitpoints = src.hitpoints;
	this->energy_points = src.energy_points;
	this->attack_damage = src.attack_damage;
	this->is_alive = src.is_alive;
	this->max_hp = src.max_hp;
	return (*this);
}

void	ScavTrap::attack(std::string const &target)
{
	std::cout << name << " shives " << target << " causing " << attack_damage << " points of damage! (scavtrap)" << std::endl;
}

void ScavTrap::guardGate()
{
	if (is_alive == 1)
		std::cout << name << " has entered Scavtrap specific mode and is guarding the gate (scavtrap)" << std::endl;
	if (is_alive == 0)
		std::cout << name << " is already dead (scavtrap)" << std::endl;
}

int ScavTrap::set_hp(void)
{
	return (100);
}

int ScavTrap::set_ep(void)
{
	return (50);
}

int ScavTrap::set_att(void)
{
	return (20);
}
