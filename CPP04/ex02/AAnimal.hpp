/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 13:39:31 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/10 21:46:23 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
#define AAnimal_HPP

#include <iostream>
#include <string.h>

class AAnimal
{
	protected :
				std::string				type;

	public :
										AAnimal();
										AAnimal(AAnimal const &src);
				virtual					~AAnimal();
				AAnimal					&operator=(AAnimal const &src);
				virtual	void			makeSound() const = 0;
				/*virtual	std::string		getType() const;*/
				/*virtual AAnimal*		clone() const;*/
};

#endif
