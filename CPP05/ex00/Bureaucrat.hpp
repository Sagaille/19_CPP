/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:01:31 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/27 14:17:05 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <stdexcept>

class Bureaucrat
{
	private :
				const std::string		name;
				int						grade;
	public :
										Bureaucrat();
										Bureaucrat(std::string name, int grade);
										Bureaucrat(Bureaucrat &src);
				virtual					~Bureaucrat();
				Bureaucrat				&operator=(Bureaucrat &src);

				std::string				getName();
				int						getGrade();
				void					setGrade(int grade);
				void					incrementGrade();
				void					decrementGrade();

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
