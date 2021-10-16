/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 14:21:27 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/10 22:12:21 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string.h>

class Dog : public AAnimal
{
	public :
									Dog();
									Dog(Dog const &src);
				virtual				~Dog();
				Dog					&operator=(Dog const &src);
				virtual	void		makeSound() const;
				virtual	Dog*		clone() const;
	private :
				Brain				*brain;
};

#endif
