/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 13:39:31 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/10 21:46:23 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string.h>

class Animal
{
	protected :
				std::string				type;

	public :
										Animal();
										Animal(Animal const &src);
				virtual					~Animal();
				Animal					&operator=(Animal const &src);
				virtual	void			makeSound() const;
				virtual	std::string		getType() const;
				virtual Animal*			clone() const;
};

#endif
