/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:01:38 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/28 13:57:56 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	Bureaucrat				borris("Borris", 4);
	Bureaucrat				johnson("Johnson", 140);
	ShrubberyCreationForm	form1("tree");
	RobotomyRequestForm		form2("Arnold");
	PresidentialPardonForm	form3("The dude");

	std::cout << johnson << std::endl;
	johnson.signForm(form1);
	try
	{
		std::cout << johnson.getName() << " tries to execute " << form1.getName() << " form" << std::endl;
		form1.execute(johnson);
	}
	catch (std::exception(&e))
	{
		std::cout << "Form execution error : " << e.what() << std::endl;
	}
	johnson.executeForm(form1);
	std::cout << borris << std::endl;
	borris.executeForm(form1);
	borris.executeForm(form2);
	borris.signForm(form2);
	borris.executeForm(form2);
	johnson.signForm(form3);
	borris.executeForm(form3);
	borris.signForm(form3);
	borris.executeForm(form3);
	return (0);
}
