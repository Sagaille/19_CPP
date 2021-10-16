/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 11:35:53 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/13 17:02:47 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	int i = 0;

	while (i < 4)
	{
		inv[i] = NULL;
		i++;
	}
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	int i = 0;

	while (i < 4)
	{
		if (src.inv[i])
			inv[i] = src.inv[i];
		i++;
	}
}

MateriaSource::~MateriaSource()
{
	int i = 0;

	while (i < 4)
	{
		if (inv[i] != NULL)
			delete inv[i];
		i++;
	}
}

MateriaSource			&MateriaSource::operator=(const MateriaSource &src)
{
	if (this == &src)
		return (*this);

	int i = 0;
	while (i < 4)
	{
		if (inv[i] != NULL)
			inv[i] = src.inv[i];
		i++;
	}
	return (*this);
}

void					MateriaSource::learnMateria(AMateria *src)
{
	int i = 0;

	while (i < 4 && inv[i] != NULL)
		i++;
	if (i < 4)
		inv[i] = src;
}

AMateria		*MateriaSource::createMateria(std::string const &type)
{
	int i = 0;

	while (i < 4)
	{
		if (this->inv[i] != NULL && this->inv[i]->getType() == type)
			return (this->inv[i]->clone());
		i++;
	}
	return (0);
}

