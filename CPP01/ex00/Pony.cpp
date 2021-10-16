/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 22:30:57 by ldavids           #+#    #+#             */
/*   Updated: 2021/06/06 23:04:43 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name) : name(name)
{
	std::cout << "Pony " << this->name << " has been created" << std::endl;
}

Pony::~Pony()
{
	std::cout << "Pony " << this->name << " has been killed" << std::endl;
}

void	Pony::dance()
{
	std::cout << "lil Pony " << this->name << " is dancing" << std::endl;
}

void	Pony::sing()
{
	std::cout << "lil Pony " << this->name << " sings like Miley C." << std::endl;
}
