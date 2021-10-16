/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:11:06 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/27 13:21:30 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"
#include <cstddef>

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*		deserialize(uintptr_t raw)
{
	Data	*temp /*= new Data*/;
	/*temp->s1 = std::string(reinterpret_cast<char *>(raw) + 1);
	temp->n = *(reinterpret_cast<int *>(raw) + 8);
	temp->s2 = std::string(reinterpret_cast<char *>(raw) + 33);*/
	//result is +- the same but obviously, the reinterpret cast of the whole struct address is better
	//creates shallow copy obiously coz ptr manipulation
	temp = reinterpret_cast<Data*>(raw);
	return (temp);
}

int main()
{
	Data			*test = new Data;
	uintptr_t		raw;
	Data			*clone;

	test->s1 = "first string";
	test->s2 = "second string";
	test->n = 42;
	test->x = 5;
	std::cout << test->s1 << std::endl;
	std::cout << test->s2 << std::endl;
	std::cout << test->n << std::endl;
	std::cout << test->x << std::endl;
	std::cout << "SERIALIZE" << std::endl;
	raw = serialize(test);
	std::cout << raw << std::endl;
	std::cout << "DESERIALIZE" << std::endl;
	clone = deserialize(raw);
	std::cout << clone->s1 << std::endl;
	std::cout << clone->s2 << std::endl;
	std::cout << clone->n << std::endl;
	std::cout << clone->x << std::endl;
	delete test;
}

