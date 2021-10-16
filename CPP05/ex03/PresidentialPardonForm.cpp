/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonPresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 13:22:19 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/15 13:35:51 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("no name", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string name) : Form(name, 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &src) : Form(src.getName(), 25, 5)
{
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm			&PresidentialPardonForm::operator=(PresidentialPardonForm &src)
{
	if (this == &src)
		return (*this);
	Form::operator=(src);
	return (*this);
}

void							PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (this->getSign() == false)
		throw NotSignedException();
	else if (executor.getGrade() > 5)
		throw GradeTooLowException();
	else
		std::cout << getName() << " has been pardonned by Zafod Beeblebrox" << std::endl;
}
