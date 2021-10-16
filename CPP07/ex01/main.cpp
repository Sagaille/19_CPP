/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 15:07:25 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/28 15:19:20 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	ft_array_int(int &num)
{
	num++;
}

int main(void)
{
	int list[] = {0, 2, 3, -5, 6, 42, 8};
	std::string list2[] = {"My", "name", "is", "Bond"};

	std::cout << "int array with template function" << std::endl;
	iter(list, 7, &ft_print_array);
	std::cout << std::endl;
	std::cout << "int array with modifier function" << std::endl;
	iter(list, 7, &ft_array_int);
	std::cout << "int array with template function" << std::endl;
	iter(list, 7, &ft_print_array);
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "string with template function" << std::endl;
	iter(list2, 4, &ft_print_array);
	std::cout << std::endl;
}
