/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 16:05:47 by ldavids           #+#    #+#             */
/*   Updated: 2021/06/30 17:58:32 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string.h>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public :
						FragTrap();
						FragTrap(std::string name);
						FragTrap(FragTrap const &src);
		virtual			~FragTrap();
		FragTrap		&operator=(FragTrap const &src);

		void			highFivesGuys(void);
		int				set_hp(void);
		int				set_ep(void);
		int				set_att(void);
};

#endif
