/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:01:38 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/22 14:52:08 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat john("John", 27);

	std::cout << john << std::endl;
	std::cout << "-- Setting grade to 151 --" << std::endl;
	try
	{
		john.setGrade(151);
	}
	catch(std::exception &e)
	{
		std::cout << "Error when setting grade: " << e.what() << "." << std::endl;
	}
	std::cout << john << std::endl;
	std::cout << "-- Setting grade to 1. --" << std::endl;
	try
	{
		john.setGrade(1);
	}
	catch(std::exception &e)
	{
		std::cout << "Error when setting grade: " << e.what() << "." << std::endl;
	}
	std::cout << john << std::endl;
	std::cout << "-- Setting grade to -1. --" << std::endl;
	try
	{
		john.setGrade(-1);
	}
	catch(std::exception &e)
	{
		std::cout << "Error when setting grade: " << e.what() << "." << std::endl;
	}
	std::cout << john << std::endl;
	std::cout << "-- Incrementing grade --" << std::endl;
	try
	{
		john.incrementGrade();
	}
	catch(std::exception &e)
	{
		std::cout << "Error when incrementing grade: " << e.what() << "." << std::endl;
	}
	std::cout << "-- Decrementing grade --" << std::endl;
	try
	{
		john.decrementGrade();
	}
	catch(std::exception &e)
	{
		std::cout << "Error when decrementing grade: " << e.what() << "." << std::endl;
	}
	std::cout << john << std::endl;
	std::cout << "-- Creating a Bureaucrat with invalid grade --"<< std::endl;
	try
	{
		Bureaucrat alice("Alice", 500);
	}
	catch(std::exception &e)
	{
		std::cout << "Error when creating Bureaucrat: " << e.what() << "." << std::endl;
	}
	return (0);
}
