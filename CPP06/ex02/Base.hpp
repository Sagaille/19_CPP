/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 12:24:37 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/22 12:51:35 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

class Base
{
	public :
			virtual ~Base();	
};

Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);

#endif