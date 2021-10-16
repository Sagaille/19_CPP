/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 14:25:58 by ldavids           #+#    #+#             */
/*   Updated: 2021/06/09 14:48:25 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed()
{
}

Sed::~Sed()
{
}

void	Sed::replace(const char *filename, \
					std::string const &str1, \
					std::string const &str2)
{
	int	pos;
	int	pos1;
	int	len;
	std::ofstream output;
	std::ifstream reader(filename);
	std::stringstream ss;
	std::string filecopy(filename);

	len = 0;
	pos1 = 0;

	if (filecopy.length() == 0 || str1.length() == 0 || str2.length() == 0)
	{
		std::cout << "Empty string(s) \n";
		return ;
	}
	if (!reader.is_open())
	{
		std::cout << "Cant open file \n";
		return ;
	}
	ss << reader.rdbuf();
	std::string file = ss.str();
	while ((pos = file.find(str1, (pos1))) > -1)
	{
		len = str1.length();
		if (pos > -1)
			file.replace(pos, len, str2);
	//	std::cout << "in the loop \n";
		pos1 = pos + str2.length();
	}
	std::string filecopy2 = std::string(filename) + std::string(".replace");
	const char *copy = filecopy2.c_str();
	output.open(copy, std::ios::trunc); // ios::trunc used to delete previous content and overwrite as opposed to ios::out
	// https://stackoverflow.com/questions/48085781/what-is-the-difference-among-iosapp-out-and-trunc-in-c
	if (!output.is_open())
	{
		std::cout << "Cant open output file \n";
		return ;
	}
	output << file;
	reader.close();
	output.close();
}
