/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 21:24:34 by ldavids           #+#    #+#             */
/*   Updated: 2021/10/02 23:00:25 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MutantStack_HPP
#define MutantStack_HPP

#include <algorithm>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public :

		typedef	typename	std::stack<T>::container_type::iterator iterator;
		/* We can also use the line below for the same effect */
		/*using iterator		= typename std::stack<T>::container_type::iterator;*/
		typedef	typename	std::stack<T>::container_type::const_iterator const_iterator;

							MutantStack() : std::stack<T>()
							{};
							MutantStack(const MutantStack &src) : std::stack<T>(src)
							{};
		virtual				~MutantStack()
							{};
		MutantStack			&operator=(const MutantStack &src)
							{
								if (this == &src)
									return (*this);
								std::stack<T>::operator=(src);
								return (*this);
							}

					/**
					* @brief Get an iterator of the
					* std::stack real container (c is member of stack and is the real container - most often deque).
					*
					* @return the iterator.
					*/
		iterator			begin(void)
							{
								return (std::stack<T>::c.begin());
							}
		iterator			end(void)
							{
								return (std::stack<T>::c.end());
							}
		const_iterator		begin(void) const
							{
								return (std::stack<T>::c.begin());
							}
		const_iterator		end(void) const
							{
								return (std::stack<T>::c.end());
							}
};

#endif
