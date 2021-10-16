/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 10:19:40 by ldavids           #+#    #+#             */
/*   Updated: 2021/06/08 11:03:16 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
}

Brain::~Brain()
{
}

std::string		Brain::identify(void) const
{
	const long int	i  = (long)this;

	std::stringstream address;
	address << std::uppercase << std::hex << "0x" << i;
	return (address.str());
}
