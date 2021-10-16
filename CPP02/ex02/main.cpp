/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 14:47:18 by ldavids           #+#    #+#             */
/*   Updated: 2021/06/26 14:47:20 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Fixed.hpp"

int main()
{
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);

	a = Fixed(1234.4321f);

	std::cout << "PART 1" << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << " " << std::endl;

	std::cout << "PART 2" << std::endl;
	if (c > b)
		std::cout << c << " is superior to " << b << std::endl << "c is superior to b" << std::endl;
	if (b < c)
		std::cout << b << " is inferior to " << c << std::endl << "b is inferior to c" << std::endl;
	if (b >= d)
		std::cout << b << " is sup or equal to " << d << std::endl << "b is sup or equal to d" << std::endl;
	if (c <= a)
		std::cout << c << " is infe or equal to " << a << std::endl << "c is infe or equal to a" << std::endl;
	if (b == d)
		std::cout << b << " is equal to " << d << std::endl << "b is equal to d" << std::endl;
	if (a != c)
	{
		std::cout << a << " is different to " << c << std::endl << "a is different to c" << std::endl;
	}
	std::cout << " " << std::endl;

	std::cout << "PART 3" << std::endl;
	std::cout << "b + c = " << b + c << std::endl;
	std::cout << "c - b = " << c - b << std::endl;
	std::cout << "b * b = " << b * b << std::endl;
	std::cout << "a / b = " << a / b << std::endl;
	std::cout << "" << std::endl;

	std::cout << "PART 4" << std::endl;
	Fixed e;
	Fixed const f(Fixed(5.05f) * Fixed(2));
	std::cout << e << std::endl;
	std::cout << ++e << std::endl;
	std::cout << e << std::endl;
	std::cout << e++ << std::endl;
	std::cout << e << std::endl;

	std::cout << f << std::endl;
	std::cout << Fixed::max(e, f) << std::endl;
	std::cout << "" << std::endl;

	std::cout << "PART 5" << std::endl;
	Fixed h(48.6874f);
	Fixed j(Fixed(8.14f) * Fixed(2));
	std::cout << h << std::endl;
	std::cout << ++h << std::endl;
	std::cout << h << std::endl;
	std::cout << h++ << std::endl;
	std::cout << h << std::endl;
	std::cout << j << std::endl;
	std::cout << Fixed::min(h, j) << std::endl;

}
