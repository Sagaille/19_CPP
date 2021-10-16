/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Book.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 16:21:12 by ldavids           #+#    #+#             */
/*   Updated: 2021/06/06 15:59:10 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Book.hpp"

Book::Book()
{
	std::cout << "# phonebook open" << std::endl;
	std::cout << "# Enter your command [ADD, SEARCH, EXIT]:" << std::endl;
	this->contact_nb = 0;
}

Book::~Book()
{
}

void	Book::add_contact(void)
{
	if (contact_nb >= 8)
		std::cout << "# Phonebook is full" << std::endl;
	else
	{
		if (this->contacts[this->contact_nb].set_informations(this->contact_nb) == 1)
			this->contact_nb++;
	}
}

void	Book::search_contact(void)
{
	int	i;
	char str[1000];

	i = 0;
	if (this->contact_nb == 0)
	{
		std::cout << "# Phonebook is empty" << std::endl;
		return ;
	}
	std::cout << "-----Enter index to display informations-----" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	while (i < this->contact_nb)
	{
		this->contacts[i].display_header();
		i++;
	}
	std::cin >> str;
	i = 0;
	while (str[i])
	{
		if (str[i] < 48 || str[i] > 59)
		{
			std::cout << "# Invalid Index" << std::endl;
				return ;
		}
		i++;
	}
	i = std::stoi(str);
	if (!(i) || i < 0 || i > this->contact_nb)
	{
		std::cout << "# Invalid Index" << std::endl;
		return ;
	}
	if (i > 0)
		this->contacts[i - 1].display();
}
