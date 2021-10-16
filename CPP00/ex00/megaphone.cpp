/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 15:21:22 by ldavids           #+#    #+#             */
/*   Updated: 2021/06/07 19:08:17 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <locale>

int	main(int argc, char **argv)
{
	int	i;
	int j;
	char x;

	j = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (j < argc)
		{
			i = 0;
			while (argv[j][i])
			{
				x = 0;
				if (argv[j][i] > 96 && argv[j][i] < 123)
					x = argv[j][i] - 32;
				else
					x = argv[j][i];
				std::cout << x;
				i++;
			}
			j++;
		}
		std::cout << std::endl;
	}
	return (0);
}
