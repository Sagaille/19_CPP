/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 11:27:13 by ldavids           #+#    #+#             */
/*   Updated: 2021/06/08 14:17:11 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
	public :
					HumanA(std::string const &name, const Weapon &weapon);
					~HumanA();
			void	attack(void);


	private :
			std::string			name;
			const Weapon		&weapon1;
};

#endif
