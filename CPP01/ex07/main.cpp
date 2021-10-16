/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 14:24:08 by ldavids           #+#    #+#             */
/*   Updated: 2021/06/08 23:23:35 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main(int argc, char **argv)
{
	Sed		sed;
	if (argc != 4)
	{
		std::cout << "Not enough args" << std::endl;
		return (0);
	}
	sed.replace(argv[1], argv[2], argv[3]);
	return (0);
}
