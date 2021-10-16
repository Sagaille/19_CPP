/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 20:59:34 by ldavids           #+#    #+#             */
/*   Updated: 2021/10/02 16:00:11 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <vector>
#include <iostream>
#include <exception>
#include <iterator>

class Span
{
	public :
								Span();
								Span(unsigned int n);
								~Span();
								Span(const Span &src);
			Span 				&operator=(const Span& op);
			void				addNumber(int);
			void				addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);
			long				shortestSpan();
			long				longestSpan();
			void				display_vector();

	private :
			std::vector<int>	contain;
			unsigned int		max;
};

#endif
