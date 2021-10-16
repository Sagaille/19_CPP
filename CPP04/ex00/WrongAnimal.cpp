/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:00:45 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/07 15:10:20 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "A robot just appeared" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	std::cout << "Robot has been created by copy" << std::endl;
	this->type = src.type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "The robot vanished in the bushes" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &src)
{
	std::cout << "Robot has been created by operator=" << std::endl;
	this->type = src.type;
	return (*this);
}

void		WrongAnimal::makeSound() const
{
	std::cout << "You hear a weird sound comming from a metalic thing (robot noises)" << std::endl;
}

std::string		WrongAnimal::getType() const
{
	return (this->type);
}