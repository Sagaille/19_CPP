/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 17:41:06 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/14 18:39:12 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() :
name("no name"), req_grade_sign(150), req_grade_exec(150)
{
	this->sign = false;
}

Form::Form(std::string name, int req_grade_sign, int req_grade_exec) :
name(name), req_grade_sign(req_grade_sign), req_grade_exec(req_grade_exec)
{
	if (req_grade_exec < 1 || req_grade_sign < 1)
		throw GradeTooHighException();
	if (req_grade_exec > 150 || req_grade_sign > 150)
		throw GradeTooLowException();
	this->sign = false;
}

Form::Form(Form &src) :
name(src.getName()), req_grade_sign(src.getReq_grade_sign()), req_grade_exec(src.getReq_grade_exec()), sign(src.getSign())
{
	*this = src;
}

Form::~Form()
{
}

Form					&Form::operator=(Form &src)
{
	if (this == &src)
		return (*this);
	if (src.getSign() == true)
		this->sign = true;
	return (*this);
}

std::string				Form::getName() const
{
	return (this->name);
}

int						Form::getReq_grade_sign() const
{
	return (this->req_grade_sign);
}

int						Form::getReq_grade_exec() const
{
	return (this->req_grade_exec);
}

bool					Form::getSign() const
{
	return (this->sign);
}

Form::GradeTooLowException::GradeTooLowException()
{
}

Form::GradeTooHighException::GradeTooHighException()
{
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("grade too high");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("grade too low");
}

void		Form::beSigned(Bureaucrat &target)
{
	if (this->sign == true)
		return ;
	if (target.getGrade() > this->getReq_grade_sign())
		throw GradeTooLowException();
	else
		this->sign = true;
}

std::ostream		&operator<<(std::ostream &o, Form &src)
{
	std::string		sign;
	if (src.getSign() == 0)
		sign = "no";
	else
		sign = "yes";
	o << src.getName() << " : " << std::endl \
	<< "minimum requested signing grade = " << src.getReq_grade_sign() << std::endl \
	<< "minimum requested execution grade = " << src.getReq_grade_exec() << std::endl \
	<< "signed = " << sign << std::endl;
	return (o);
}
