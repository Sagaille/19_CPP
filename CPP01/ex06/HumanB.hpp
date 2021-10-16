/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 11:27:18 by ldavids           #+#    #+#             */
/*   Updated: 2021/06/08 14:17:44 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
	public :
					HumanB(std::string const &name);
					~HumanB();
			void	attack(void);
			void	setWeapon(Weapon const &weapon);

	private :
			std::string			name;
			const Weapon		*weapon1;
};

#endif
