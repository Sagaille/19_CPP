/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 23:11:46 by ldavids           #+#    #+#             */
/*   Updated: 2021/06/09 14:09:32 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h> //rand - srand
#include "Zombie.hpp"

class ZombieEvent
{
	public :
			ZombieEvent();
			~ZombieEvent();

			Zombie	*newZombie(std::string name);
			Zombie	*randomChump(void);
			void	setZombieType(std::string type);

	private :
			std::string _type;

};

#endif
