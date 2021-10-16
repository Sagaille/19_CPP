/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 14:00:55 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/09 21:40:16 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "It's a tiny Cat!" << std::endl;
	this->type = "Cat";
}

Cat::Cat(Cat const &src)
{
	std::cout << "The Cat copied itself! Amazing!" << std::endl;
	this->type = src.type;
}

Animal		&Cat::operator=(Cat const &src)
{
	this->type = src.type;
	std::cout << "The Cat copied itself through the operator=! Amazing!" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "The Cat got bored and left" << std::endl;
}

void		Cat::makeSound() const
{
	std::cout << "MEOWWW!!" << std::endl;
}
