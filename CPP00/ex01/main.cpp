/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 16:16:56 by ldavids           #+#    #+#             */
/*   Updated: 2021/06/06 16:10:26 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Book.hpp"

int	main(void)
{
	Book phonebook;
	std::string s;

	while (1)
	{
		std::cout << ">";
		if (!std::getline(std::cin, s))
		{
			std::cout << std::endl;
			std::cout << "# Closing phonebook" << std::endl;
			return (0);
		}
		if (s == "ADD")
			phonebook.add_contact();
		else if (s == "SEARCH")
			phonebook.search_contact();
		else if (s == "EXIT")
		{
			std::cout << "# Closing phonebook" << std::endl;
			return (0);
		}
	}
	return (0);
}
