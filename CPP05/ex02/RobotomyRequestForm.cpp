/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 14:20:43 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/28 13:54:28 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("no name", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string name) : Form(name, 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &src) : Form(src.getName(), 72, 45)
{
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm			&RobotomyRequestForm::operator=(RobotomyRequestForm &src)
{
	if (this == &src)
		return (*this);
	Form::operator=(src);
	return (*this);
}

void							RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (this->getSign() == false)
		throw NotSignedException();
	else if (executor.getGrade() > 45)
		throw GradeTooLowException();
	else
	{
			std::cout << "**Drill noises**" << std::endl;
			int			succed;
			srand (time(NULL));
			succed = rand() % 2;
			if (succed == 0)
				std::cout << getName() << "'s robotomy has been successfull!" << std::endl;
			else
				throw RobotomyFailException();
	}		
}

RobotomyRequestForm::RobotomyFailException::RobotomyFailException()
{
}

const char	*RobotomyRequestForm::RobotomyFailException::what() const throw()
{
	return ("**bad drill noises.. Machine error");
}