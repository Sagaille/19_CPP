/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 10:58:50 by ldavids           #+#    #+#             */
/*   Updated: 2021/06/08 11:16:42 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Human.hpp"

int main(void)
{
	Brain	occipital;
	Human	arthur;

	std::cout << "detached brain part : ";
	std::cout << occipital.identify() << std::endl;
	std::cout << "brain still with his host" << std::endl;
	std::cout << arthur.identify() << std::endl;
	std::cout << arthur.getBrain().identify() << std::endl;
	return (0);
}
