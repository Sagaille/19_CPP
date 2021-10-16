/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 14:56:05 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/28 15:00:59 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "header.hpp"

int		ft_int(char *src)
{
	int				i = 0;
	int				j = 0;

	if (src[i] == '-')
		i++;
	while (src[i])
	{
		if (!isdigit(src[i]))
			break ;
		i++;
	}
	while (src[j])
		j++;
	if (src[0] == '-' && i == 1)
		return (0);
	if (i == j)
		return (1);
	return (0);
}

int		ft_char(char *src)
{
	if (src[0] != '\'' || src[2] != '\'')
		return (0);
	if (isprint(src[1]))
		return (1);
	return (0);
}

int		ft_float(char *src)
{
	int				i = 0;
	int				j = 0;

	if (src[i] == '-')
		i++;
	while (src[i])
	{
		if (!isdigit(src[i]) && src[i] != '.')
			break ;
		if (src[i] == '.')
			j++;
		if (j > 1)
			break ;
		i++;
	}
	j = 0;
	while (src[j])
		j++;
	if (i + 1 == j && src[i] == 'f')
		return (1);
	return (0);
}

int		ft_double(char *src)
{
	int				i = 0;
	int				j = 0;

	if (src[i] == '-')
		i++;
	while (src[i])
	{
		if (!isdigit(src[i]) && src[i] != '.')
			break ;
		if (src[i] == '.')
			j++;
		if (j > 1)
			break ;
		i++;
	}
	j = 0;
	while (src[j])
		j++;
	if (i == j && src[i - 1] != '.')
		return (1);
	return (0);
}

int		ft_type(char *src)
{
	std::string		spec;

	spec = src;
	if (spec.compare("-inff") == 0 || spec.compare("inff") == 0 || spec.compare("nanf") == 0 )
		return (3);
	if (spec.compare("-inf") == 0 || spec.compare("inf") == 0 || spec.compare("nan") == 0 )
		return (4);
	if (ft_int(src))
		return (1);
	if (ft_char(src))
		return (2);
	if (ft_float(src))
		return (3);
	if (ft_double(src))
		return (4);
	return (-1);
}

void	ft_convert(char *src, int type)
{
	std::string		str;

	str = std::string(src);
	if (type == 1)
		ft_convert_int(str);
	else if (type == 2)
		ft_convert_char(src[1]);
	else if (type == 3)
		ft_convert_float(src);
	else if (type == 4)
		ft_convert_double(src);
	else
		std::cout << "bad arguments" << std::endl;
}

int main(int argc, char **argv)
{
	int type = 0;

	if (argc != 2)
	{
		std::cout << "Bad arguments" << std::endl;
		return (0);
	}
	type = ft_type(argv[1]);
	ft_convert(argv[1], type);
	return (0);
}
