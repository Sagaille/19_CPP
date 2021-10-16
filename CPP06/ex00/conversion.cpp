/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:12:45 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/22 15:36:36 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void	ft_convert_int(std::string src)
{
	int		x;

	try
	{
		x = std::stoi(src);
	}
	catch (std::exception(&e))
	{
		std::cout << "int is out of bound or conversion impossible"	<< std::endl;
		return ;
	}
	if (isprint(static_cast<unsigned char>(x)) != 0 && x <= CHAR_MAX && x >= CHAR_MIN)
		std::cout << "char: \'" << static_cast<char>(x) << "\'" << std::endl;
	else if (x > CHAR_MAX || x < CHAR_MIN)
		std::cout << "char: impossible" << std::endl;
	else if (isprint(static_cast<unsigned char>(x)) == 0)
		std::cout << "char: non displayable" << std::endl;
	std::cout << "int: " << x << std::endl;
	std::cout << "float: " << static_cast<float>(x) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(x) << ".0" << std::endl;
}

void	ft_convert_char(char src)
{
	char	c;

	c = src;
	std::cout << "char: " << "\'" << c << "\'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void	ft_convert_float(char *src)
{
	float	f;
	int		i = 0;
	std::string zero = "";
	int		x = 0;
	int		y = -1;
	int		z = 0;

	if (spec_float(src) == 1)
		return ;
	try
	{
		f = std::stof(src);
	}
	catch (std::exception(&e))
	{
		std::cout << "float is out of bound or conversion impossible"	<< std::endl;
		return ;
	}
	while (src[i])
	{
		if (src[i] == '.')
			x++;
		if (x == 1)
			y++;
		if (x == 1 && src[i] == '0')
			z++;
		i++;
	}
	if (x == 0 || y - 1 == z)
		zero = ".0";
	if (isprint(static_cast<unsigned char>(f)) != 0 && f <= CHAR_MAX && f >= CHAR_MIN)
		std::cout << "char: " << "\'" << static_cast<unsigned char>(f) << "\'" << std::endl;
	else if (f > CHAR_MAX || f < CHAR_MIN)
		std::cout << "char: impossible" << std::endl;
	else if (isprint(static_cast<unsigned char>(f)) == 0)
		std::cout << "char: non displayable" << std::endl;
	if (f > INT_MAX || f < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	std::cout << "float: " << f << zero << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(f) << zero << std::endl;
}

void	ft_convert_double(char *src)
{
	double	d;
	int		i = 0;
	std::string zero = "";
	int		x = 0;
	int		y = -1;
	int		z = 0;

	if (spec_double(src) == 1)
		return ;
	try
	{
		d = std::stof(src);
	}
	catch (std::exception(&e))
	{
		std::cout << "double is out of bound or conversion impossible"	<< std::endl;
		return ;
	}
	while (src[i])
	{
		if (src[i] == '.')
			x++;
		if (x == 1)
			y++;
		if (x == 1 && src[i] == '0')
			z++;
		i++;
	}
	if (x == 0 || y == z)
		zero = ".0";
	if (isprint(static_cast<unsigned char>(d)) != 0 && d <= CHAR_MAX && d >= CHAR_MIN)
		std::cout << "char: " << "\'" << static_cast<unsigned char>(d) << "\'" << std::endl;
	else if (d > CHAR_MAX || d < CHAR_MIN)
		std::cout << "char: impossible" << std::endl;
	else if (isprint(static_cast<unsigned char>(d)) == 0)
		std::cout << "char: non displayable" << std::endl;
	if (d > INT_MAX || d < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
	std::cout << "int: " << static_cast<int>(d) << std::endl;
	std::cout << "float: " << static_cast<float>(d) << zero << "f" << std::endl;
	std::cout << "double: " << d << zero << std::endl;
}
