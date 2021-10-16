/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 14:21:03 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/28 15:16:04 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int		main()
{
	int		a = 0;
	int		b = 5;


	std::cout << "====INT====" << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;

	std::cout << "====SWAP INT====" << std::endl;
	swap(a, b);
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "====MAX INT====" << std::endl;
	std::cout << max(a, b) << std::endl;
	std::cout << "====MIN INT====" << std::endl;
	std::cout << min(a, b) << std::endl;
	std::cout << "====MAX with EQUALS (both are 5)====" << std::endl;
	a = 5;
	b = 5;
	std::cout << max(a, b) << std::endl << std::endl << std::endl;

	A	c(50, "alpha");
	A	d(42, "beta");
	std::cout << "====OBJECTS====" << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;

	std::cout << "====SWAP Object====" << std::endl;
	swap(c, d);
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << "====MAX Object====" << std::endl;
	std::cout << max(c, d) << std::endl;
	std::cout << "====MIN Object====" << std::endl;
	std::cout << min(c, d) << std::endl;
	std::cout << "====MAX with EQUALS (both are 50)====" << std::endl;
	std::cout << "set c to 50" << std::endl;
	c.setNum(50);
	std::cout << "c = " << c << std::endl;
	std::cout << "max(c, d) = ";
	std::cout << max(c, d) << std::endl;

	//Main officiel
	/*int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;*/

	return (0);
}
