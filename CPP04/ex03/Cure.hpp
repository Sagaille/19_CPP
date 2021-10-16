/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 17:46:02 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/12 17:52:55 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include <string>

#include "AMateria.hpp"

class Cure :public AMateria
{
	public:
									Cure();
									Cure(const Cure &src);
				virtual				~Cure();
				Cure				&operator=(const Cure &op);

				virtual AMateria*	clone() const;
				virtual void		use(ICharacter &target);
};

#endif
