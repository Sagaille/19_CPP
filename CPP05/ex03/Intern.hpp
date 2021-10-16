/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 12:46:46 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/21 12:13:39 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <stdexcept>

class Intern
{
	public :
							Intern();
							Intern(Intern &src);
							~Intern();
				Intern		&operator=(Intern &src);

				Form		*makeForm(std::string name, std::string target);
	private :
				std::string	form_type[3];
				Form		**form_creator;
				int			form_switch;
};

#endif
