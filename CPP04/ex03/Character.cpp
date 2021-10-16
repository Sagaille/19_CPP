/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 18:09:18 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/13 16:59:44 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name)
{
	int	i = 0;

	this->name = name;
	while (i < 4)
	{
		inv[i] = NULL;
		i++;
	}
}

Character::Character(const Character &src)
{
	int i = 0;

	this->name = std::string(src.getName());
	while (i < 4)
	{
		if (inv[i] != NULL)
			delete inv[i];
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (src.inv[i] != NULL)
			inv[i] = src.inv[i]->clone();
		else
			inv[i] = NULL;
		i++;
	}
}

Character::~Character()
{
	int i = 0;

	while (i < 4)
	{
		if (this->inv[i] != NULL)
			delete inv[i];
		i++;
	}
}

Character				&Character::operator=(const Character &src)
{
	int i = 0;

	if (this == &src)
		return (*this);
	name = src.getName();
	while (i < 4)
	{
		if (inv[i] != NULL)
			delete inv[i];
		if (src.inv[i] != NULL)
			this->inv[i] = src.inv[i]->clone();
		else
			this->inv[i] = NULL;
		i++;
	}
	return (*this);
}

std::string const		&Character::getName() const
{
	return (this->name);
}

void					Character::equip(AMateria *m)
{
	int i = 0;

	while (i < 4 && inv[i] != NULL)
	{
		if (inv[i] == m) // don't equip duplicates (causes segf)
			return ;
		i++;
	}
	if (i < 4)
		this->inv[i] = m;
}

void					Character::unequip(int idx)
{
	if (idx < 4 && idx >= 0)
		this->inv[idx] = NULL;
}

void					Character::use(int idx, ICharacter &target)
{
	if (idx < 4 && idx >= 0 && this->inv[idx] != NULL)
		this->inv[idx]->use(target);
}
