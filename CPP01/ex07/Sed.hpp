/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 14:26:00 by ldavids           #+#    #+#             */
/*   Updated: 2021/06/09 14:45:27 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <fstream>
#include <iostream>
#include <sstream>

class Sed
{
	public :
				Sed();
				~Sed();
		void	replace(const char *filename, \
						std::string const &str1, \
						std::string const &str2);
};

#endif
