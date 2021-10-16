/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 22:04:05 by ldavids           #+#    #+#             */
/*   Updated: 2021/06/10 22:20:56 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
	public :
						Fixed();
						Fixed(Fixed const &src);
			virtual		~Fixed();
			Fixed		&operator=(Fixed const &src);
			int			getRawBits(void) const;
			void		setRawBits(int const raw);

	private :
			int					_nb;
			static const int	_bits_nb = 8;
};

#endif
