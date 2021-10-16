/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 16:08:18 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/09 22:46:59 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "I got a new Brain!" << std::endl;
	this->ideas[0] = gen_random(6);
}

Brain::Brain(Brain const &src)
{
	std::cout << "I got a copied Brain!" << std::endl;
	this->ideas[0] = src.ideas[0];
}

Brain		&Brain::operator=(Brain const &src)
{
	std::cout << "I got a copied Brain!" << std::endl;
	this->ideas[0] = src.ideas[0];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "My brain left unexpectedly" << std::endl;
}

Brain*		Brain::clone() const
{
	return new Brain(*this);
}

std::string		Brain::getIdeas() const
{
	return (this->ideas[0]);
}

std::string gen_random(const int len)
{
    std::string tmp_s;
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";
	// I took the srand out to avoid getting same results each function call
    tmp_s.reserve(len);
    for (int i = 0; i < len; ++i)
	{
        tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];
	}
    return tmp_s;
}
