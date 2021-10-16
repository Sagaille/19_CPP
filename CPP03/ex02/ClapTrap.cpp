/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 14:05:00 by ldavids           #+#    #+#             */
/*   Updated: 2021/07/01 14:15:07 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Unidentified")
{
	this->hitpoints = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
	this->max_hp = 10;
	this->is_alive = 1;
	std::cout << name << " called to be awesome (claptrap)" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name)
{
	this->hitpoints = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
	this->max_hp = 10;
	this->is_alive = 1;
	std::cout << name << " called to be awesome (claptrap)" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << name << " kinda vanished (claptrap)" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << src.name << " copied himself through mitosis (claptrap)" << std::endl;
	this->name = src.name;
	this->hitpoints = src.hitpoints;
	this->energy_points = src.energy_points;
	this->attack_damage = src.attack_damage;
	this->max_hp = src.max_hp;
	this->is_alive = src.is_alive;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &src)
{
	std::cout << src.name << " copied himself through mitosis (claptrap)" << std::endl;
	this->name = src.name;
	this->hitpoints = src.hitpoints;
	this->energy_points = src.energy_points;
	this->attack_damage = src.attack_damage;
	this->max_hp = src.max_hp;
	this->is_alive = src.is_alive;
	return (*this);
}

void	ClapTrap::attack(std::string const &target)
{
	std::cout << name << " headbutts " << target << " causing " << attack_damage << " points of damage! (claptrap)" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (is_alive == 1)
	{
		std::cout << name << " is hit and took " << amount << " points of damage! (claptrap)" << std::endl;
		hitpoints -= amount;
		if (hitpoints <= 0)
		{
			std::cout << name << " has been transformed into a pile of scrap (claptrap)" << std::endl;
			is_alive = 0;
		}
	}
}

void	ClapTrap::show_stats(void)
{
	std::cout << name << " got " << hitpoints << " hp(s) and " << energy_points << " energy points! (claptrap)" << std::endl;
	std::cout << "He also got " << attack_damage << " dmg in attack mode " << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (is_alive == 1)
	{
		this->hitpoints += amount;
		if (this->hitpoints >= max_hp)
			this->hitpoints = max_hp;
		std::cout << name << " repaired himself and has now " << hitpoints << " hitpoints! (claptrap)" << std::endl;
	}
	else
		std::cout << name << " is already dead (claptrap)" << std::endl;
}
