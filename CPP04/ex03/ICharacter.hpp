/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 17:16:07 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/13 11:56:43 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <string>

class IMateriaSource;
class AMateria;
class ICharacter;

class ICharacter
{
	public:
				virtual						~ICharacter() {}
				virtual std::string const 	&getName() const = 0;
				virtual void				equip(AMateria* m) = 0;
				virtual void				unequip(int idx) = 0;
				virtual void				use(int idx, ICharacter& target) = 0;
};

#endif
