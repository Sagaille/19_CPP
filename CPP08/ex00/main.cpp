/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 20:11:25 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/30 20:56:18 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "easyfind.hpp"
#include <list>

int	main()
{
	std::vector<int>			contain1;
	std::list<int>				contain2;
	std::list<int>::iterator	it;
	int							i = 0;

	////////////VECTOR\/////////////////////
	while (i < 10)
	{
		contain1.push_back(i);
		i++;
	}
	for (int x : contain1)
		std::cout << x << ' ';
	std::cout << std::endl;
	try
	{
		std::cout << easyfind(contain1, 5) << std ::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Not so easy to find 5" << std ::endl;
	}
	try
	{
		std::cout << easyfind(contain1, 10) << std ::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Not so easy to find 10" << std ::endl;
	}
	try
	{
		std::cout << easyfind(contain1, 0) << std ::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Not so easy to find 0" << std ::endl;
	}
	////////////LIST\////////////////////////
	i = 0;
	while (i < 10)
	{
		contain2.push_back(10 - (i * 5));
		i++;
	}
	it = contain2.begin();
	while (it != contain2.end())
	{
		std::cout << *it << " ";
		it++;
	}
	std::cout << std::endl;
	try
	{
		std::cout << easyfind(contain2, 5) << std ::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Not so easy to find 5" << std ::endl;
	}
	try
	{
		std::cout << easyfind(contain2, 13) << std ::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Not so easy to find 13" << std ::endl;
	}
	try
	{
		std::cout << easyfind(contain2, 0) << std ::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Not so easy to find 0" << std ::endl;
	}
}
