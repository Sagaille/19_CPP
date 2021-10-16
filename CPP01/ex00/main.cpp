/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 22:30:54 by ldavids           #+#    #+#             */
/*   Updated: 2021/06/06 22:57:05 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack()
{
	Pony stack("Stack");

	stack.dance();
	stack.sing();
}

void	ponyOnTheHeap()
{
	Pony *heap;

	heap = new Pony("Heap");
	heap->dance();
	heap->sing();
	delete heap;
}

int	main(void)
{
	std::cout << "STACK :" << std::endl;
	ponyOnTheStack();
	std::cout << "HEAP :" << std::endl;
	ponyOnTheHeap();
	std::cout << "DONE" << std::endl;
	return (0);
}
