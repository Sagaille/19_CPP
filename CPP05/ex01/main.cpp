/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:01:38 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/28 13:43:04 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat	john("John", 3);
	Form		deal("Deal", 11, 1);
	Form		newdeal(deal);
	Form		deal2("Deal2", 50, 50);
	
	deal.beSigned(john);
	deal2 = deal;
	std::cout << deal << std::endl;
	std::cout << deal2 << std::endl;
	std::cout << john << std::endl;
	try
	{
		john.setGrade(151);
	}
	catch(std::exception)
	{
		std::cout << "Error when setting grade." << std::endl;
	}
	std::cout << john << std::endl;
	try
	{
		john.setGrade(1);
	}
	catch(std::exception)
	{
		std::cout << "Error when setting grade." << std::endl;
	}
	std::cout << john << std::endl;
	try
	{
		john.incrementGrade();
	}
	catch(std::exception)
	{
		std::cout << "Error when incrementing grade." << std::endl;
	}
	std::cout << std::endl;
	john.setGrade(12);
	std::cout << john << std::endl;
	std::cout << deal << std::endl;
	john.signForm(deal);
	try
	{
		deal.beSigned(john);
	}
	catch(std::exception)
	{
		std::cout << john.getName() << " can't sign " << deal.getName() << " because his grade is too low." << std::endl;
	}
	john.setGrade(11);
	std::cout << john << std::endl;
	john.signForm(deal);
	std::cout << std::endl;
	std::cout << deal << std::endl;
	return (0);
}
