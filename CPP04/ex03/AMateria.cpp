/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 17:37:15 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/13 12:43:20 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : type(type)
{
}

AMateria::AMateria(const AMateria &src) : type(src.type)
{
}

AMateria::~AMateria()
{
}

AMateria			&AMateria::operator=(const AMateria &op)
{
	return (*this);
}

std::string const	&AMateria::getType() const
{
	return (this->type);
}

void				AMateria::use(ICharacter &target)
{
	/*(void)target;*/
}
