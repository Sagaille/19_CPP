/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 22:07:02 by ldavids           #+#    #+#             */
/*   Updated: 2021/06/26 13:53:35 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _nb(0)
{
	/*std::cout << "Default constructor called" << std::endl;*/
}

Fixed::~Fixed()
{
	/*std::cout << "Destructor called" << std::endl;*/
}

Fixed::Fixed(const int &value)
{
	/*std::cout << "Int constructor called" << std::endl;*/
	_nb = (value << _bits);
}

Fixed::Fixed(const float &value)
{
	/*std::cout << "Float constructor called" << std::endl;*/
	_nb = (roundf(value * (1 << _bits)));
}

Fixed::Fixed(Fixed const &src)
{
	/*std::cout << "Copy constructor called" << std::endl;*/
	this->_nb = src.getRawBits();
}

Fixed	&Fixed::operator=(Fixed const &src)
{
	/*std::cout << "Assignation operator called" << std::endl;*/
	this->_nb = src.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	/*std::cout << "getRawBits member function called" << std::endl;*/
	return (_nb);
}

void	Fixed::setRawBits(int const raw)
{
	/*std::cout << "setRawBits member function called" << std::endl;*/
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

bool Fixed::operator>(Fixed const &src) const
{
	return (getRawBits() > src.getRawBits());
}

bool Fixed::operator<(Fixed const &src) const
{
	return (getRawBits() < src.getRawBits());
}

bool Fixed::operator>=(Fixed const &src) const
{
	return (getRawBits() >= src.getRawBits());
}

bool Fixed::operator<=(Fixed const &src) const
{
	return (getRawBits() <= src.getRawBits());
}

bool Fixed::operator==(Fixed const &src) const
{
	return (getRawBits() == src.getRawBits());
}

bool Fixed::operator!=(Fixed const &src) const
{
	return (getRawBits() != src.getRawBits());
}

Fixed		Fixed::operator+(Fixed const &src) const
{
	Fixed add(*this);

	add.setRawBits(getRawBits() + src.getRawBits());
	return (add);
}

Fixed		Fixed::operator-(Fixed const &src) const
{
	Fixed sub(*this);

	sub.setRawBits(getRawBits() - src.getRawBits());
	return (sub);
}

Fixed		Fixed::operator/(Fixed const &src) const
{
	Fixed div(*this);
	long	val2;

	val2 = src.getRawBits();
	div.setRawBits((_nb << _bits) / val2);
	return (div);
}

Fixed		Fixed::operator*(Fixed const &src) const
{
	Fixed mul(*this);
	long	val2;

	val2 = src.getRawBits();
	mul.setRawBits((_nb * val2) >> _bits);
	return (mul);
}

Fixed		&Fixed::operator++(void)
{
	_nb++;
	return (*this);
}

Fixed		Fixed::operator++(int)
{
	Fixed inc(*this);
	operator++();
	return (inc);
}

Fixed		&Fixed::operator--(void)
{
    _nb--;
    return (*this);
}

Fixed		Fixed::operator--(int)
{
    Fixed dec(*this);
    operator--();
    return (dec);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

//-----------------------------Non member-----------------------------//

std::ostream	&operator<<(std::ostream &o, Fixed const &src)
{
	o << src.toFloat();
	return (o);
}

Fixed		&min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed		&max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed	const &min(Fixed const &a, Fixed const &b)
{
	return (a < b ? a : b);
}

Fixed	const &max(Fixed const &a, Fixed const &b)
{
	return (a > b ? a : b);
}
