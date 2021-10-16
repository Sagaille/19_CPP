/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 14:01:12 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/10 21:55:57 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string.h>

class Cat : public AAnimal
{
	public :
									Cat();
									Cat(Cat const &src);
				virtual				~Cat();
				Cat					&operator=(Cat const &src);
				virtual	void		makeSound() const;
				virtual	Cat*		clone() const;
				virtual	Brain		&getBrain() const;
	private :
				Brain				*brain;
};

#endif
