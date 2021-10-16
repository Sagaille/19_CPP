/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 22:04:05 by ldavids           #+#    #+#             */
/*   Updated: 2021/06/26 13:53:01 by ldavids          ###   ########.fr       */
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

			Fixed		operator+(Fixed const &src) const;
			Fixed		operator-(Fixed const &src) const;
			Fixed		operator*(Fixed const &src) const;
			Fixed		operator/(Fixed const &src) const;

			Fixed		&operator++(void);				//pre increment
			Fixed		operator++(int);				//post increment
			Fixed		&operator--(void);				//pre decrement
			Fixed		operator--(int);				//post decrement

			bool		operator>(Fixed const &src) const;
			bool		operator<(Fixed const &src) const;
			bool		operator>=(Fixed const &src) const;
			bool		operator<=(Fixed const &src) const;
			bool		operator==(Fixed const &src) const;
			bool		operator!=(Fixed const &src) const;

			static	Fixed		&max(Fixed &a, Fixed &b);
			static	Fixed const &max(Fixed const &a, Fixed const &b);
			static	Fixed		&min(Fixed &a, Fixed &b);
			static	Fixed const &min(Fixed const &a, Fixed const &b);


			int			getRawBits(void) const;
			void		setRawBits(int const raw);
			float		toFloat(void) const;
			int			toInt(void) const;

	private :
			int					_nb;
			static const int	_bits = 8;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &value);

Fixed		&min(Fixed &a, Fixed &b);
Fixed		&max(Fixed &a, Fixed &b);
Fixed		const &min(Fixed const &value1, Fixed const &value2);
Fixed		const &max(Fixed const &value1, Fixed const &value2);

#endif
