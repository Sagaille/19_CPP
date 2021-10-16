/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 11:27:23 by ldavids           #+#    #+#             */
/*   Updated: 2021/06/08 14:09:07 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
	public :
								Weapon();
								Weapon(std::string const name);
								~Weapon();
			std::string	const	&getType() const;
			void				setType(std::string const &newtype);

	private :
			std::string	type;
};

#endif
