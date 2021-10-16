/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 17:08:24 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/13 12:56:41 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>

#include "ICharacter.hpp"

class AMateria
{
	protected:
				std::string			type;
	public:
									AMateria(std::string const &type);
									AMateria(const AMateria &src);
				virtual				~AMateria();
				AMateria			&operator=(const AMateria &op);

				std::string const	&getType() const; //Returns the materia type
				virtual AMateria*	clone() const = 0;
				virtual void		use(ICharacter &target);
};

#endif
