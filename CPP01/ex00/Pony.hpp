/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 22:30:52 by ldavids           #+#    #+#             */
/*   Updated: 2021/06/06 23:04:49 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>
#include <string>

class Pony
{
	public :

				Pony(std::string name);
				~Pony();

	void		dance(void);
	void		sing(void);

	private :

	std::string name;
};

#endif
