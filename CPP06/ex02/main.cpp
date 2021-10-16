/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 12:54:07 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/28 14:59:04 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "Classes.hpp"

int main()
{
	Base	*temp1;
	Base	*temp2;
	Base	*temp3;
	Base	*temp4;
	
	std::cout << "random generator : " << std::endl;
	temp1 = generate();
	Base	&ref1 = *temp1;
	identify(temp1);
	identify(ref1);
	std::cout << std::endl;
	
	std::cout << "new A : " << std::endl;
	temp2 = new A();
	Base	&ref2 = *temp2;
	identify(temp2);
	identify(ref2);
	std::cout << std::endl;

	std::cout << "new B : " << std::endl;	
	temp3 = new B();
	Base	&ref3 = *temp3;
	identify(temp3);
	identify(ref3);
	std::cout << std::endl;

	std::cout << "new C : " << std::endl;
	temp4 = new C();
	Base	&ref4 = *temp4;
	identify(temp4);
	identify(ref4);
	delete temp1;
	delete temp2;
	delete temp3;
	delete temp4;
}