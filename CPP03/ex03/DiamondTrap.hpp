/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 15:34:23 by ldavids           #+#    #+#             */
/*   Updated: 2021/07/01 14:18:55 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include <string.h>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public :
						DiamondTrap();
						DiamondTrap(std::string name);
						DiamondTrap(DiamondTrap const &src);
		virtual			~DiamondTrap();
		DiamondTrap		&operator=(DiamondTrap const &src);
		void			whoAmI(void);
	private :
		std::string		name;
};

#endif
