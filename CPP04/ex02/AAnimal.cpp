/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 13:38:44 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/10 21:46:26 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "A wild AAnimal just appeared" << std::endl;
}

AAnimal::AAnimal(AAnimal const &src)
{
	std::cout << "AAnimal has been created by copy" << std::endl;
	this->type = src.type;
}

AAnimal::~AAnimal()
{
	std::cout << "The AAnimal vanished in the bushes" << std::endl;
}

AAnimal	&AAnimal::operator=(AAnimal const &src)
{
	std::cout << "AAnimal has been created by operator=" << std::endl;
	this->type = src.type;
	return (*this);
}

/*AAnimal*		AAnimal::clone() const
{
	return new AAnimal(*this);
}*/

/*void		AAnimal::makeSound() const
{
	std::cout << "You hear a weird sound comming from an undefined form" << std::endl;
}

std::string		AAnimal::getType() const
{
	return (this->type);
}*/
