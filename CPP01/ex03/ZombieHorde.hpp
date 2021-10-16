/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 21:20:20 by ldavids           #+#    #+#             */
/*   Updated: 2021/06/09 14:26:37 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h> //rand - srand
#include "Zombie.hpp"

class ZombieHorde
{
	public :
			ZombieHorde();
			~ZombieHorde();
			ZombieHorde(int zombies_num);
			void	announce(void);
			void	set_name_type(std::string name);

	private :
			std::string	_name;
			std::string	_type;
			int			_nb;
			Zombie		*_zombies;
};

#endif
