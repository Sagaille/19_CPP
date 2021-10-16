/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 17:41:18 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/14 18:17:22 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
	private :
					const std::string		name;
					const int				req_grade_sign;
					const int				req_grade_exec;
					bool					sign;

	public :
					/////////////COPLIEN\\\\\\\\\\\\\\\\\\\\\\\\\\\\\//
											Form();
											Form(std::string name, int req_grade_sign, int req_grade_exec);
											Form(Form &src);
											~Form();
					Form					&operator=(Form &src);
					////////////GET-SET-OTHER\\\\\\\\\\\\\\\\\\\\\\\\//
					std::string				getName() const;
					int						getReq_grade_sign() const;
					int						getReq_grade_exec() const;
					bool					getSign() const;
					void					beSigned(Bureaucrat &target);
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

std::ostream		&operator<<(std::ostream &o, Form &src);

#endif
