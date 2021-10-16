/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:36:10 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/21 15:45:36 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int		spec_double(char *src)
{
	std::string		spec;

	spec = src;
	if (spec.compare("-inf") != 0 && spec.compare("inf") != 0 && spec.compare("nan") != 0 )
		return (0);
	if (spec.compare("nan") == 0)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return (1);
	}
	if (spec.compare("inf") == 0)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: inff" << std::endl;
		std::cout << "double: inf" << std::endl;
		return (1);
	}
	if (spec.compare("-inf") == 0)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		return (1);
	}
	return (0);
}

int		spec_float(char *src)
{
	std::string		spec;

	spec = src;
	if (spec.compare("-inff") != 0 && spec.compare("inff") != 0 && spec.compare("nanf") != 0 )
		return (0);
	if (spec.compare("nanf") == 0)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return (1);
	}
	if (spec.compare("inff") == 0)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: inff" << std::endl;
		std::cout << "double: inf" << std::endl;
		return (1);
	}
	if (spec.compare("-inff") == 0)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		return (1);
	}
	return (0);
}
