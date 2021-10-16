/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 20:11:23 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/30 20:31:21 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <vector>

template <typename T>
int		easyfind(T &t, int val)
{
	typename T::iterator		iterator;

	iterator = std::find(t.begin(), t.end(), val);
	if (iterator != t.end())
		return (*iterator);
	throw std::exception();
}

#endif
