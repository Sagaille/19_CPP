/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:45:39 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/09 22:55:18 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string.h>
#include <ctime>
#include <unistd.h>

class Brain
{
	public :
								Brain();
								Brain(Brain const &src);
				Brain			&operator=(Brain const &src);
								~Brain();
				std::string		getIdeas() const;
				Brain*			clone() const;
	protected :
				std::string		ideas[100];
};

std::string gen_random(const int len);

#endif
