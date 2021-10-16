/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 14:24:12 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/24 14:58:54 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void	swap(T &a, T &b)
{
	T	temp;
	temp = a;
	a = b;
	b = temp;
}

template <typename T>
T		&min(T &a, T &b)
{
	if (a == b)
		return (b);
	if (a < b)
		return (a);
	return (b);
}

template <typename T>
T		&max(T &a, T &b)
{
	if (a == b)
		return (b);
	if (a > b)
		return (a);
	return (b);
}

class A
{
	private:
				int				num;
				std::string		name;
	public:
				A(int n = 0, std::string name = "No name") : num(n), name(name)
				{};
				int getNum(void) const
				{
					return (num);
				};
				void setNum(int	nb)
				{
					this->num = nb;
				};
				std::string getName(void) const
				{
					return (name);
				};
				bool operator>(const A &src)
				{
					return (num > src.num);
				};
				bool operator<(const A &src)
				{
					return (num < src.num);
				};
				bool operator==(const A &src)
				{
					return (num == src.num);
				};
};

std::ostream		&operator<<(std::ostream &o, A &src)
{
	o << src.getNum() << " ( " << src.getName() << " ) ";
	return (o);
}

#endif
