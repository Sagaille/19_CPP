/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 11:30:58 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/13 12:10:17 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	protected:
				AMateria				*inv[4];
	public:
										MateriaSource();
										MateriaSource(const MateriaSource &src);
				virtual					~MateriaSource();
				MateriaSource			&operator=(const MateriaSource &src);
				virtual void			learnMateria(AMateria* src);
				virtual AMateria		*createMateria(std::string const & type);
};

#endif
