/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:01:35 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/28 13:35:38 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("no name")
{
	this->setGrade(150);
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	this->setGrade(grade);
}

Bureaucrat::Bureaucrat(Bureaucrat &src) : name(src.name)
{
	this->grade = src.grade;
	*this = src;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat &src)
{
	if (this == &src)
		return (*this);
	this->grade = src.grade;
	return (*this);
}

std::string	Bureaucrat::getName()
{
	return (name);
}

int			Bureaucrat::getGrade()
{
	return (grade);
}

void		Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		this->grade = grade;
}

void		Bureaucrat::incrementGrade()
{
	this->setGrade(this->getGrade() - 1);
}

void		Bureaucrat::decrementGrade()
{
	this->setGrade(this->getGrade() + 1);
}

std::ostream			&operator<<(std::ostream &o, Bureaucrat &src)
{
	o << src.getName() << ", bureaucrat grade " << src.getGrade() << ".";
	return (o);
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("grade too low");
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("grade too high");
}
