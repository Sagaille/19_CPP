/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:20:39 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/27 16:08:37 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include <fstream>

#include "Bureaucrat.hpp"
#include "Form.hpp"
class Bureaucrat;
class Form;

class ShrubberyCreationForm : public Form
{
	public :
					/////////////COPLIEN\\\\\\\\\\\\\\\\\\\\\\\\\\\\\//
											ShrubberyCreationForm();
											ShrubberyCreationForm(std::string name);
											ShrubberyCreationForm(ShrubberyCreationForm &src);
					virtual					~ShrubberyCreationForm();
					ShrubberyCreationForm		&operator=(ShrubberyCreationForm &src);
					////////////GET-SET-OTHER\\\\\\\\\\\\\\\\\\\\\\\\//
					virtual void			execute(Bureaucrat const &executor) const;
					////////////EXCEPTIONS\\\\\\\\\\\\\\\\\\\\\\\\\\\//
					class FileFailException : public std::exception
					{
						public :
														FileFailException();
									virtual const char	*what() const throw();
					};
};

#endif
