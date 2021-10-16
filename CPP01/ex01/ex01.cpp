/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 23:07:22 by ldavids           #+#    #+#             */
/*   Updated: 2021/06/06 23:10:07 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

void	memoryLeak()
{
	std::string*panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;
	delete panthere;
}
