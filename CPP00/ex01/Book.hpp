/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Book.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 12:06:00 by ldavids           #+#    #+#             */
/*   Updated: 2021/06/06 12:07:39 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOOK_HPP
#define BOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Contact.hpp"

class Book
{
	public:
				Book();
				~Book();


		void	add_contact(void);
		void	search_contact(void);

	private:
		Contact	contacts[8];
		int		contact_nb;
};

#endif
