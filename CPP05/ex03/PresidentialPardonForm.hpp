/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 13:23:13 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/27 17:00:53 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALFORM_HPP
#define PRESIDENTIALFORM_HPP

#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
#include "Form.hpp"
class Bureaucrat;
class Form;

class PresidentialPardonForm : public Form
{
	public :
					/////////////COPLIEN\\\\\\\\\\\\\\\\\\\\\\\\\\\\\//
											PresidentialPardonForm();
											PresidentialPardonForm(std::string name);
											PresidentialPardonForm(PresidentialPardonForm &src);
					virtual					~PresidentialPardonForm();
					PresidentialPardonForm	&operator=(PresidentialPardonForm &src);
					////////////GET-SET-OTHER\\\\\\\\\\\\\\\\\\\\\\\\//
					virtual void			execute(Bureaucrat const &executor) const;
};

#endif
