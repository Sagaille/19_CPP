/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 15:33:54 by ldavids           #+#    #+#             */
/*   Updated: 2021/07/01 14:20:44 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap()
{
	name = "Unidentified";
	DiamondTrap::name = name;
	ClapTrap::name = name + "_clap_name";
	hitpoints = FragTrap::set_hp();
	energy_points = ScavTrap::set_ep();
	attack_damage = FragTrap::set_att();
	max_hp = hitpoints;
	is_alive = 1;
	std::cout << name << " is a huge Diamond-Monster! (diamondtrap)" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	DiamondTrap::name = name;
	this->ClapTrap::name = name + "_clap_name";
	hitpoints = FragTrap::set_hp();
	energy_points = ScavTrap::set_ep();
	attack_damage = FragTrap::set_att();
	max_hp = hitpoints;
	this->is_alive = 1;
	std::cout << name << " is a huge Diamond-Monster! (diamondtrap)" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << name << " went to monster-heaven... (diamondtrap)" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src)
{
	std::cout << src.name << " copied himself through mitosis (diamondtrap)" << std::endl;
	this->name = src.name;
	this->hitpoints = src.hitpoints;
	this->energy_points = src.energy_points;
	this->attack_damage = src.attack_damage;
	this->is_alive = src.is_alive;
	this->max_hp = src.max_hp;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &src)
{
	std::cout << src.name << " copied himself through mitosis (diamondtrap)" << std::endl;
	this->name = src.name;
	this->hitpoints = src.hitpoints;
	this->energy_points = src.energy_points;
	this->attack_damage = src.attack_damage;
	this->is_alive = src.is_alive;
	this->max_hp = src.max_hp;
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << name << " is my monster name and " << ClapTrap::name << " is my claptrap name (diamondtrap)" << std::endl;
}
