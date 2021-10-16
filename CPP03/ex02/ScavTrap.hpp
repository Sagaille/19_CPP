/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 14:53:47 by ldavids           #+#    #+#             */
/*   Updated: 2021/06/30 17:59:49 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string.h>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
						ScavTrap();
						ScavTrap(std::string name);
						ScavTrap(ScavTrap const &src);
		virtual			~ScavTrap();
		ScavTrap		&operator=(ScavTrap const &src);

		void			attack(std::string const &target);
		void			guardGate();
		int				set_hp(void);
		int				set_ep(void);
		int				set_att(void);
};

#endif
