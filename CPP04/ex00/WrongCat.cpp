/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:05:08 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/07 15:22:48 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "It's a tiny Robot-Cat!" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &src)
{
	std::cout << "The Robot-Cat copied itself! Terrifying!" << std::endl;
	this->type = src.type;
}

WrongCat		&WrongCat::operator=(WrongCat const &src)
{
	std::cout << "The Robot-Cat copied itself through the operator=! Terrifying!" << std::endl;
	this->type = src.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "The Robot-Cat got bored and left" << std::endl;	
}

void		WrongCat::makeSound() const
{
	std::cout << "SCHRRRRREEECH (robot noises with purring)!!" << std::endl;
}