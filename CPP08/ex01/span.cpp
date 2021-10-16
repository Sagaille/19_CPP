/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 20:59:31 by ldavids           #+#    #+#             */
/*   Updated: 2021/10/02 16:38:38 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <algorithm>
#include <exception>
#include <iostream>

Span::Span() : max(0)
{
}

Span::Span(unsigned int n) : max(n)
{
}

Span::~Span()
{
}

Span::Span(const Span &src) : max(src.max)
{
	contain = src.contain;
}

Span	&Span::operator=(const Span &src)
{
	if (this != &src)
	{
		this->max = src.max;
		this->contain = src.contain;
	}
	return (*this);
}

void	Span::addNumber(int num)
{
	if (this->contain.size() >= max)
		throw (std::exception());
	/*std::cout << "contain size = " << contain.size() << std::endl;*/
	contain.push_back(num);
	std::sort(contain.begin(), contain.end());
}

void	Span::addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	if (end - start + contain.size() > max)
		throw std::exception();
	std::copy(start, end, std::back_inserter(contain));
	std::sort(contain.begin(), contain.end());
}

/*long	Span::shortestSpan()
{
	if (this->contain.size() <= 1)
		throw (std::exception());

	std::vector<int>::iterator	it;
	std::vector<int>::iterator	it2;
	long						shortest = (long)contain[1] - (long)contain[0];

	it = contain.begin();
	while (it != contain.end())
	{
		it2 = contain.begin();
		while (it2 != contain.end())
		{
			if (it != it2)
			{
				if (abs(*it2 - *it) < shortest)
					shortest = abs(*it2 - *it);
			}
			it2++;
		}
		it++;
	}
	if (shortest < 0)
		shortest = std::abs(shortest);
	return ((unsigned long)shortest);
}*/

/*long	Span::longestSpan()
{
	if (this->contain.size() <= 1)
		throw (std::exception());

	std::vector<int>::iterator	it;

	it = contain.begin();
	long	i = *it;
	long	j = *it;
	while (it != contain.end())
	{
		if (*it > i)
			i = *it;
		if (*it < j)
			j = *it;
		it++;
	}
	long	longest = i - j;
	if ((i - j) < 0)
		longest = (i - j) * (-1);
	return (longest);
}*/

long	Span::shortestSpan()
{
	if (this->contain.size() <= 1)
		throw (std::exception());

	long	shortest = (long)contain[1] - (long)contain[0];
	unsigned int i = 0;
	while (i < contain.size() - 1)
	{
		if (((long)contain[i + 1] - (long)contain[i]) < shortest)
			shortest = (long)contain[i + 1] - (long)contain[i];
		i++;
	}
	if (shortest < 0)
		shortest = std::abs(shortest);
	return ((unsigned long)shortest);
}

long	Span::longestSpan()
{
	if (this->contain.size() <= 1)
		throw (std::exception());

	std::vector<int>::iterator	max = std::max_element(contain.begin(), contain.end());
	std::vector<int>::iterator	min = std::min_element(contain.begin(), contain.end());

	long	result = (long)*max - (long)*min;
	if (result < 0)
		result = std::abs(result);
	return (result);
}

void	Span::display_vector()
{
	std::copy(contain.begin(), contain.end(),
		std::ostream_iterator<int>(std::cout, " "));
}
