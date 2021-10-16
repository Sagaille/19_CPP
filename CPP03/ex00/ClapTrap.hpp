/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 13:57:41 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/01 21:02:14 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string.h>

class ClapTrap
{
protected:
		std::string		name;
		int				hitpoints;
		int				energy_points;
		int				attack_damage;
		int				max_hp;
		int				is_alive;
public:
						ClapTrap();
						ClapTrap(std::string name);
						ClapTrap(ClapTrap const &src);
		virtual			~ClapTrap();
		ClapTrap		&operator=(ClapTrap const &src);

		void			attack(std::string const &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			show_stats(void);
};

#endif
