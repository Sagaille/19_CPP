/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 13:38:44 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/10 21:46:26 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "A wild Animal just appeared" << std::endl;
}

Animal::Animal(Animal const &src)
{
	std::cout << "Animal has been created by copy" << std::endl;
	this->type = src.type;
}

Animal::~Animal()
{
	std::cout << "The Animal vanished in the bushes" << std::endl;
}

Animal	&Animal::operator=(Animal const &src)
{
	std::cout << "Animal has been created by operator=" << std::endl;
	this->type = src.type;
	return (*this);
}

Animal*		Animal::clone() const
{
	return new Animal(*this);
}

void		Animal::makeSound() const
{
	std::cout << "You hear a weird sound comming from an undefined form" << std::endl;
}

std::string		Animal::getType() const
{
	return (this->type);
}
