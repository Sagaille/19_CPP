/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 10:22:40 by ldavids           #+#    #+#             */
/*   Updated: 2021/06/08 11:17:21 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Human
{
	public :
							Human();
							~Human();
			std::string		identify(void) const;
			const Brain		&getBrain(void) const;

	private :
			const Brain		brain;
};

#endif
