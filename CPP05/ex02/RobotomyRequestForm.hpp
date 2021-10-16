/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 14:15:15 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/27 16:07:19 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h> 

#include "Bureaucrat.hpp"
#include "Form.hpp"
class Bureaucrat;
class Form;

class RobotomyRequestForm : public Form
{
	public :
					/////////////COPLIEN\\\\\\\\\\\\\\\\\\\\\\\\\\\\\//
											RobotomyRequestForm();
											RobotomyRequestForm(std::string name);
											RobotomyRequestForm(RobotomyRequestForm &src);
					virtual					~RobotomyRequestForm();
					RobotomyRequestForm		&operator=(RobotomyRequestForm &src);
					////////////GET-SET-OTHER\\\\\\\\\\\\\\\\\\\\\\\\//
					virtual void			execute(Bureaucrat const &executor) const;
					////////////EXCEPTIONS\\\\\\\\\\\\\\\\\\\\\\\\\\\//
					class RobotomyFailException : public std::exception
					{
						public :
														RobotomyFailException();
									virtual const char	*what() const throw();		
					};
};

#endif
