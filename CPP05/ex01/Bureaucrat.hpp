/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:01:31 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/27 14:18:09 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private :
				const std::string		name;
				int						grade;
	public :
				/////////////COPLIEN\\\\\\\\\\\\\\\\\\\\\\\\\\\\\//
										Bureaucrat();
										Bureaucrat(std::string name, int grade);
										Bureaucrat(Bureaucrat &src);
				virtual					~Bureaucrat();
				Bureaucrat				&operator=(Bureaucrat &src);
				////////////GET-SET-OTHER\\\\\\\\\\\\\\\\\\\\\\\\//
				std::string				getName() const;
				int						getGrade() const;
				void					setGrade(int grade);
				void					incrementGrade();
				void					decrementGrade();
				void					signForm(Form &form);
				////////////EXCEPTIONS\\\\\\\\\\\\\\\\\\\\\\\\\\\//
				class GradeTooLowException : public std::exception
				{
						public :
														GradeTooLowException();
									virtual const char	*what() const throw();
				};
				class GradeTooHighException : public std::exception
				{
						public :
														GradeTooHighException();
									virtual const char	*what() const throw();
				};
};

std::ostream		&operator<<(std::ostream &o, Bureaucrat &src);

#endif
