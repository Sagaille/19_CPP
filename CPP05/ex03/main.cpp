/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:01:38 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/28 14:28:49 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	Intern someRandomIntern;
	Bureaucrat joe("Joe Biden", 10);
	Form* rrf;

	rrf = someRandomIntern.makeForm("shrubbery creation", "the tree");
	joe.executeForm(*rrf);
	joe.signForm(*rrf);
	joe.executeForm(*rrf);
	joe.setGrade(2);
	std::cout << joe;
	joe.executeForm(*rrf);
	delete rrf;
	rrf = someRandomIntern.makeForm("presidential pardon", "Trump");
	joe.signForm(*rrf);
	joe.executeForm(*rrf);
	delete rrf;
	rrf = someRandomIntern.makeForm("Absurd request", "fail");
	delete rrf;
	return (0);
}
