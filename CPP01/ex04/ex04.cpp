/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 22:06:13 by ldavids           #+#    #+#             */
/*   Updated: 2021/06/07 22:11:23 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *brained = &brain;
	std::string &brainref = brain;

	std::cout << *brained << std::endl;
	std::cout << brainref << std::endl;
	return (0);
}
