/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 23:11:41 by ldavids           #+#    #+#             */
/*   Updated: 2021/06/07 21:23:51 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	public :
			Zombie();
			~Zombie();
			Zombie(std::string name, std::string type);
			void	announce(void);
			void	set_name_type(std::string name, std::string type);

	private :
			std::string	_name;
			std::string	_type;
};

#endif
