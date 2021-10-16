/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 14:32:39 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/13 16:49:59 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <unistd.h>

int main()
{
	int		x = 0;
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	/*const AAnimal* i = new AAnimal();*/
	// doesnt work coz cant instantiate abstract classes
	const AAnimal* array[20];

	while (x < 20)
	{
		if (x % 2)
			array[x] = new Dog();
		else
			array[x] = new Cat();
		x++;
	}
	x--;
	while (x >= 0)
	{
		delete array[x];
		x--;
	}

	//Deep copy
	std::cout << std::endl;
	std::cout << "DEEP COPY" << std::endl;
	const Cat* y = new Cat();
	const Cat* z;
	const Cat* w = new Cat();
	z = y->clone();
	z->makeSound();
	std::cout << y->getBrain().getIdeas() << std::endl;
	std::cout << z->getBrain().getIdeas() << std::endl;
	std::cout << w->getBrain().getIdeas() << std::endl;

	//Shallow copy

	//this provokes double free coz shallow copy
	/*const AAnimal* e;
	e = y;
	std::cout << e->getType() << " " << std::endl;
	e->makeSound();
	delete e;*/

	delete y;
	delete z;
	delete w;
	delete j;
	delete i;
}
