/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 22:04:05 by ldavids           #+#    #+#             */
/*   Updated: 2021/06/11 17:35:44 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	public :
						Fixed();
						Fixed(const int &value);
						Fixed(const float &value);
						Fixed(Fixed const &src);
			virtual		~Fixed();
			Fixed		&operator=(Fixed const &src);
			int			getRawBits(void) const;
			void		setRawBits(int const raw);
			//https://stackoverflow.com/questions/10819436/bit-shifting-for-fixed-point-arithmetic-on-float-numbers-in-c
			//https://xcore.github.io/doc_tips_and_tricks/fixed-point.html
			float		toFloat(void) const;
			int			toInt(void) const;

	private :
			int					_nb;
			static const int	_bits = 8;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &value);

#endif
