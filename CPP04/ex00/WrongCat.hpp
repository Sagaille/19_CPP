/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:03:54 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/13 16:36:28 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>
#include <string.h>

class WrongCat : public WrongAnimal
{
	public :
									WrongCat();
									WrongCat(WrongCat const &src);
				virtual				~WrongCat();
				WrongCat			&operator=(WrongCat const &src);
				void				makeSound() const;
};

#endif
