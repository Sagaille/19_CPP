/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 18:01:43 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/13 12:09:56 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	protected:
				std::string					name;
				AMateria*					inv[4];
	public:
											Character(std::string const &name);
											Character(const Character &src);
				Character					&operator=(const Character &src);
				virtual						~Character();

				virtual std::string const 	&getName() const;
				virtual void				equip(AMateria *m);
				virtual void				unequip(int idx);
				virtual void				use(int idx, ICharacter &target);
};

#endif
