/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 11:06:03 by ldavids           #+#    #+#             */
/*   Updated: 2021/06/08 11:10:43 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
}

Human::~Human()
{
}

std::string		Human::identify(void) const
{
	return (brain.identify());
}

const Brain		&Human::getBrain(void) const
{
	return (this->brain);
}
