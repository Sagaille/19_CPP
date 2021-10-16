/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 14:00:55 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/10 21:40:29 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->brain = new Brain();
	std::cout << "It's a tiny Cat!" << std::endl;
	this->type = "Cat";
}

Cat::Cat(Cat const &src)
{
	this->brain = new Brain(*(src.brain));
	std::cout << "The Cat copied itself! Amazing!" << std::endl;
	this->type = src.type;
}

Cat		&Cat::operator=(Cat const &src)
{
	this->brain = new Brain(*(src.brain));
	std::cout << "The Cat copied itself through the operator=! Amazing!" << std::endl;
	this->type = src.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "The Cat got bored and left" << std::endl;
	delete this->brain;
}

Cat*		Cat::clone() const
{
	return new Cat(*this);
}

void		Cat::makeSound() const
{
	std::cout << "MEOWWW!!" << std::endl;
}

Brain				&Cat::getBrain() const
{
	return (*this->brain);
}
