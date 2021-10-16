/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:22:11 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/28 13:54:45 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("no name", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : Form(name, 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &src) : Form(src.getName(), 145, 137)
{
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm			&ShrubberyCreationForm::operator=(ShrubberyCreationForm &src)
{
	if (this == &src)
		return (*this);
	Form::operator=(src);
	return (*this);
}

void							ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::string filename = getName() + "_shrubbery";
	if (this->getSign() == false)
	{
		throw NotSignedException();
		return ;
	}	
	else if (executor.getGrade() > 137)
		throw GradeTooLowException();
	std::ofstream MyFile(filename);
	if (MyFile.fail())
	{
		throw FileFailException();
		return ;
	}
  	MyFile << " " << std::endl;
	MyFile << "   oxoxoo    ooxoo" << std::endl;
 	MyFile << " ooxoxo oo  oxoxooo  "<< std::endl;
 	MyFile << "oooo xxoxoo ooo ooox "<< std::endl;
	MyFile << " oxo o oxoxo  xoxxoxo " << std::endl;
 	MyFile << "   oxo xooxoooo o ooo " << std::endl;
  	MyFile << "    ooo|oo|  |o|o " << std::endl;
    MyFile << "       |  | | " << std::endl;
    MyFile << "       |   | " << std::endl;
	MyFile << "       |  | " << std::endl;
    MyFile << "       | D| " << std::endl;
    MyFile << "       |  | " << std::endl;
    MyFile << "       |  | " << std::endl;
  	MyFile << " ______|___|____" << std::endl;
  	MyFile.close();
}

ShrubberyCreationForm::FileFailException::FileFailException()
{
}

const char	*ShrubberyCreationForm::FileFailException::what() const throw()
{
	return ("cannot create/open file");
}
