/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:01:35 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/28 13:56:11 by ldavids          ###   ########.fr       */
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

std::string	Bureaucrat::getName() const
{
	return (name);
}

int			Bureaucrat::getGrade() const
{
	return (grade);
}

void		Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw GradeTooGradeTooHighException();
	else if (grade > 150)
		throw GradeTooGradeTooLowException();
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

void		Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->name << " signs " << form.getName() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << this->name << " cannot sign " << form.getName() << "'s form" << " because " << e.what() << std::endl;
	}
}

void		Bureaucrat::executeForm(Form const &form)
{
	try
	{
			form.execute(*this);
	}
	catch (std::exception &e)
	{
		std::cout << this->name << " coudn't execute " << form.getName() << "'s form" << " because " << e.what() << std::endl;
		return ;
	}
	std::cout << this->name << " successfully executed " << form.getName() << "'s form " << std::endl;
}

std::ostream			&operator<<(std::ostream &o, Bureaucrat &src)
{
	o << src.getName() << ", bureaucrat grade " << src.getGrade() << ".";
	return (o);
}

Bureaucrat::GradeTooGradeTooLowException::GradeTooGradeTooLowException()
{
}

const char	*Bureaucrat::GradeTooGradeTooLowException::what() const throw()
{
	return ("grade too low");
}

Bureaucrat::GradeTooGradeTooHighException::GradeTooGradeTooHighException()
{
}

const char	*Bureaucrat::GradeTooGradeTooHighException::what() const throw()
{
	return ("grade too high");
}
