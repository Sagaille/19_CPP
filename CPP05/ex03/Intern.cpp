/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 12:46:43 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/28 14:26:53 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	form_switch = 0;
}

Intern::Intern(Intern &src)
{
	*this = src;
}

Intern		&Intern::operator=(Intern &src)
{
	if (this == &src)
		return (*this);
	return (*this);
}

Intern::~Intern(void)
{
	if (this->form_switch == 1)
		delete [] form_creator;
}

Form		*Intern::makeForm(std::string name, std::string target)
{
	int i = 0;
	int x = 3;

	if (this->form_switch == 1)
		delete [] form_creator;
	this->form_switch = 1;
	form_creator = new Form*[3];
	Form		*shrub = new ShrubberyCreationForm(target);
	form_creator[0] = shrub;
	form_type[0] = "shrubbery creation";
	Form		*robot = new RobotomyRequestForm(target);
	form_creator[1] = robot;
	form_type[1] = "robotomy request";
	Form		*presi = new PresidentialPardonForm(target);
	form_creator[2] = presi;
	form_type[2] = "presidential pardon";
	while (i < 3)
	{
		if (this->form_type[i] == name)
			x = i;
		else
			delete this->form_creator[i];
		i++;
	}
	if (x >= 0 && x < 3)
	{
		std::cout << "Intern creates " << this->form_type[x] << " form with " <<\
		 form_creator[x]->getName() << " as target" << std::endl;
		return (this->form_creator[x]);
	}
	std::cout << "No corresonding form " << name << "." << std::endl;
	return (NULL);
}
