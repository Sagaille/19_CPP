/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 14:57:39 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/13 16:36:42 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string.h>

class WrongAnimal
{
	protected :

				std::string				type;

	public :
										WrongAnimal();
										WrongAnimal(WrongAnimal const &src);
				virtual					~WrongAnimal();
				WrongAnimal				&operator=(WrongAnimal const &src);
				void					makeSound() const;
				std::string				getType() const;
};

#endif
