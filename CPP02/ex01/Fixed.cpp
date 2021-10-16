/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 22:07:02 by ldavids           #+#    #+#             */
/*   Updated: 2021/06/11 17:01:49 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _nb(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int &value)
{
	std::cout << "Int constructor called" << std::endl;
	_nb = (value << _bits);
}

Fixed::Fixed(const float &value)
{
	std::cout << "Float constructor called" << std::endl;
	_nb = (roundf(value * (1 << _bits)));
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_nb = src.getRawBits();
}

Fixed	&Fixed::operator=(Fixed const &src)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_nb = src.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_nb);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_nb = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_nb / (float)(1 << _bits));
}

int		Fixed::toInt(void) const
{
	return (_nb >> _bits);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &src)
{
	o << src.toFloat();
	return (o);
}
