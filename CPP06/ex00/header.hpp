/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:13:43 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/21 15:44:42 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
#define HEADER_HPP

#include <string>
#include <climits>
#include <iostream>
#include <exception>

void	ft_convert_int(std::string src);
void	ft_convert_char(char src);
void	ft_convert_float(char *src);
void	ft_convert_double(char *src);
int		spec_double(char *src);
int		spec_float(char *src);

#endif
