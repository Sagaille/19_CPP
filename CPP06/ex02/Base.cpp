/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 12:24:35 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/22 13:14:52 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "Classes.hpp"

Base::~Base()
{
}

Base	*generate(void)
{
	int		i = 0;
	Base	*temp;
	
	srand (time(NULL));
	i = rand() % 3;
	if (i == 0)
		temp = new A();
	if (i == 1)
		temp = new B();
	if (i == 2)
		temp = new C();
	return (temp);
}

void	identify(Base *p)
{
	A	*temp1;
	if ((temp1 = dynamic_cast<A*>(p)) != NULL)
	{
		std::cout << "class A" << std::endl;
		return ;
	}
	B	*temp2;
	if ((temp2 = dynamic_cast<B*>(p)) != NULL)
	{
		std::cout << "class B" << std::endl;
		return ;
	}
	C	*temp3;
	if ((temp3 = dynamic_cast<C*>(p)) != NULL)
	{
		std::cout << "class C" << std::endl;
		return ;
	}
	return ;
}

void	identify(Base &p)
{
	A	temp1;
	try
	{
		temp1 = dynamic_cast<A&>(p);
		std::cout << "class A" << std::endl;
		return ;
	}
	catch (std::bad_cast err)
	{
	}
	B	temp2;
	try
	{
		temp2 = dynamic_cast<B&>(p);
		std::cout << "class B" << std::endl;
		return ;
	}
	catch (std::bad_cast err)
	{
	}
	C	temp3;
	try
	{
		temp3 = dynamic_cast<C&>(p);
		std::cout << "class C" << std::endl;
		return ;
	}
	catch (std::bad_cast err)
	{
	}
	return ;
}