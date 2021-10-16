/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 17:49:43 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/12 17:58:39 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure &src) : AMateria(src)
{
}

Cure::~Cure()
{
}

Cure			&Cure::operator=(const Cure &op)
{
	if (this == &op)
		return (*this);
	AMateria::operator=(op);
	return (*this);
}

AMateria*		Cure::clone() const
{
	return new Cure(*this);
}

void			Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
