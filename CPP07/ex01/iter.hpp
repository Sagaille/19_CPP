/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 15:07:27 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/28 15:16:48 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template<typename	T>
void	iter(T *array, unsigned int len, void (*f)(T &elem))
{
	unsigned int	i = 0;

	if (!array)
		return ;
	while (i < len)
	{
		f(array[i]);
		i++;
	}
}

template<typename	T>
void	ft_print_array(T &array)
{
	std::cout << array << " ";
}

#endif
