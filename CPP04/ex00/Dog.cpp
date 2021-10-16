/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 14:19:59 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/09 21:40:02 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "It's a tiny Dog!" << std::endl;
	this->type = "Dog";
}

Dog::Dog(Dog const &src)
{
	std::cout << "The Dog copied itself! Amazing!" << std::endl;
	this->type = src.type;
}

Dog		&Dog::operator=(Dog const &src)
{
	std::cout << "The Dog copied itself through the operator=! Amazing!" << std::endl;
	this->type = src.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "The Dog went after a deer and ran" << std::endl;
}

void		Dog::makeSound() const
{
	std::cout << "WOOOOF!!" << std::endl;
}
