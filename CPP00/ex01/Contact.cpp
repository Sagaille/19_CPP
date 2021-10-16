/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 12:07:51 by ldavids           #+#    #+#             */
/*   Updated: 2021/06/06 16:14:24 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	int	i;

	i = 0;
	while (i < 11)
	{
		this->infos[i] = std::string();
		i++;
	}
}

Contact::~Contact()
{
}

int Contact::set_informations(int index)
{
	int	y;
	int	len;

	len = 0;
	y = 0;
	this->i = index;
	std::cout << "# " << "first name " << std::endl;
	if (std::getline(std::cin, this->infos[0]))
		std::cout << "# " << "last name " << std::endl;
	if (std::getline(std::cin, this->infos[1]))
		std::cout << "# " << "nickname " << std::endl;
	if (std::getline(std::cin, this->infos[2]))
		std::cout << "# " << "login " << std::endl;
	if (std::getline(std::cin, this->infos[3]))
		std::cout << "# " << "postal address " << std::endl;
	if (std::getline(std::cin, this->infos[4]))
		std::cout << "# " << "email address " << std::endl;
	if (std::getline(std::cin, this->infos[5]))
		std::cout << "# " << "phone number " << std::endl;
	if (std::getline(std::cin, this->infos[6]))
		std::cout << "# " << "birthday date " << std::endl;
	if (std::getline(std::cin, this->infos[7]))
		std::cout << "# " << "favorite meal " << std::endl;
	if (std::getline(std::cin, this->infos[8]))
		std::cout << "# " << "underwear color " << std::endl;
	if (std::getline(std::cin, this->infos[9]))
		std::cout << "# " << "darkest secret " << std::endl;
	if (std::getline(std::cin, this->infos[10]))
	while (y < 11)
	{
		len += this->infos[y].length();
		y++;
	}
	if (len == 0)
	{
		std::cout << "# Contact is empty " << std::endl;
		return (0);
	}
	std::cout << "# Contact added " << std::endl;
	return (1);
}

void	Contact::display_header(void)
{
	std::cout << "|" << std::setw(10) << this->i + 1;
	std::cout << "|";
	if (this->infos[0].length() > 10)
		std::cout << this->infos[0].substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << this->infos[0];
	std::cout << "|";
	if (this->infos[1].length() > 10)
		std::cout << this->infos[1].substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << this->infos[1];
	std::cout << "|";
	if (this->infos[2].length() > 10)
		std::cout << this->infos[2].substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << this->infos[2];
	std::cout << "|\n";
	std::cout << "---------------------------------------------" << std::endl;
}

void	Contact::display(void)
{
	std::cout << "# Contact [" << this->i + 1 << "]" << std::endl;
	std::cout << "# " << "first name : ";
	std::cout << this->infos[0] << std::endl;
	std::cout << "# " << "last name : ";
	std::cout << this->infos[1] << std::endl;
	std::cout << "# " << "nickname : ";
	std::cout << this->infos[2] << std::endl;
	std::cout << "# " << "login : ";
	std::cout << this->infos[3] << std::endl;
	std::cout << "# " << "postal address : ";
	std::cout << this->infos[4] << std::endl;
	std::cout << "# " << "email address : ";
	std::cout << this->infos[5] << std::endl;
	std::cout << "# " << "phone number : ";
	std::cout << this->infos[6] << std::endl;
	std::cout << "# " << "birthday date : ";
	std::cout << this->infos[7] << std::endl;
	std::cout << "# " << "favorite meal : ";
	std::cout << this->infos[8] << std::endl;
	std::cout << "# " << "underwear color : ";
	std::cout << this->infos[9] << std::endl;
	std::cout << "# " << "darkest secret : ";
	std::cout << this->infos[10] << std::endl;
}
