/* ************************************************************************** */
/**/
/*:::  ::::::::   */
/*   main.cpp   :+:  :+::+:   */
/*+:+ +:+ +:+ */
/*   By: ldavids <ldavids@student.s19.be>   +#+  +:+   +#+*/
/*+#+#+#+#+#+   +#+   */
/*   Created: 2021/09/30 21:44:15 by ldavids   #+##+# */
/*   Updated: 2021/10/02 16:13:47 by ldavids  ###   ########.fr   */
/**/
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	Span sp = Span(5);
	try
	{
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Cant get the span because range is empty" << std::endl;
	}
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	try
	{
		sp.addNumber(12);
	}
	catch (std::exception &e)
	{
		std::cout << "Cant add a number because the container is full" << std::endl;
	}
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	Span sp_short = Span(5);
	sp_short.addNumber(5);
	sp_short.addNumber(3);
	sp_short.addNumber(17);
	sp_short.addNumber(-8925);
	sp_short.addNumber(11);
	sp_short.display_vector();
	std::cout << std::endl;
	std::cout << sp_short.shortestSpan() << std::endl;

	Span sp_short_hard = Span(2);
	sp_short_hard.addNumber(2147483647);
	sp_short_hard.addNumber(-2147483648);
	std::cout << sp_short_hard.shortestSpan() << std::endl;

	Span sp_empty = Span(80);
	sp_empty.display_vector();
	try
	{
		std::cout << sp_empty.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error : empty" <<  std::endl;
	}
	sp_empty.addNumber(5);
	try
	{
		std::cout << sp_empty.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error : only one number" <<  std::endl;
	}

	Span sp_long = Span(4);
	sp_long.addNumber(8);
	sp_long.addNumber(-3);
	sp_long.addNumber(80);
	sp_long.addNumber(-8);
	try
	{
		std::cout << sp_long.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error : " << e.what() <<  std::endl;
	}

	Span sp_long_hard = Span(4);
	sp_long_hard.addNumber(2147483647);
	sp_long_hard.addNumber(-2147483648);
	try
	{
		std::cout << sp_long_hard.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error : " << e.what() <<  std::endl;
	}
	try
	{
		std::cout << sp_empty.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error : empty " <<  std::endl;
	}

	Span	sp_range_overflow = Span(10);
	sp_range_overflow.addNumber(5);
	sp_range_overflow.addNumber(5);
	std::vector<int> range(10, 10);
	try
	{
		sp_range_overflow.addNumber(range.begin(), range.end());
		sp_range_overflow.display_vector();
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error : cant pass range because it would overflow" <<  std::endl;
	}

	Span	sp_long_long = Span(20000);
	std::vector<int> range2(20000, 10);
	range2[3256] = 40;
	range2[3] = 250;
	sp_long_long.addNumber(range2.begin(), range2.end());
	/*sp_range_overflow.display_vector();
	std::cout << std::endl;*/
	try
	{
		std::cout << sp_long_long.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error : " << e.what() <<  std::endl;
	}
	try
	{
		std::cout << sp_long_long.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error : " << e.what() <<  std::endl;
	}
}
