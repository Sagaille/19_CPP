/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 14:19:59 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/10 21:49:23 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->brain = new Brain();
	std::cout << "It's a tiny Dog!" << std::endl;
	this->type = "Dog";
}

Dog::Dog(Dog const &src)
{
	this->brain = new Brain(*(src.brain));
	std::cout << "The Dog copied itself! Amazing!" << std::endl;
	this->type = src.type;
}

Dog		&Dog::operator=(Dog const &src)
{
	this->brain = new Brain(*(src.brain));
	std::cout << "The Dog copied itself through the operator=! Amazing!" << std::endl;
	this->type = src.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "The Dog went after a deer and ran" << std::endl;
	delete this->brain;
}

Dog*		Dog::clone() const
{
	return new Dog(*this);
}

void		Dog::makeSound() const
{
	std::cout << "WOOOOF!!" << std::endl;
}
