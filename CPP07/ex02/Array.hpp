/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 15:55:08 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/28 15:22:35 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template <typename T> class Array
{
	public :
						Array() : array(NULL), _n(0)
						{};
						Array(unsigned int n) : array(new T[n]), _n(n)
						{};
						Array(Array &src) : array(NULL), _n(src._n)
						{
							*this = src;
						};
						~Array()
						{
							if (array != NULL)
								delete [] array;
						};
				Array	&operator=(Array &src)
						{
							if (array != NULL)
								delete [] array;
							array = new T[src._n];
							_n = src._n;
							unsigned int i = 0;
							while (i < _n)
							{
								array[i] = src.array[i];
								i++;
							}
							return (*this);
						};
				T		&operator[](unsigned int elem)
						{
							if (!this->array || elem >= _n)
								throw std::exception();
							return (this->array[elem]);
						};
		unsigned int	size() const
						{
							return (_n);
						}

	private :
				T				*array;
				unsigned int	_n;
};

#endif
