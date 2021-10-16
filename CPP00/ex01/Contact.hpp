/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 12:05:54 by ldavids           #+#    #+#             */
/*   Updated: 2021/06/06 12:22:06 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
	public:

			Contact();
			~Contact();

	int		set_informations(int i);
	void	display_header(void);
	void	display(void);

	private:

	int		i;
	std::string infos[11];
};

#endif
