/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 17:32:31 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/13 16:59:54 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(4, *bob);
	me->use(-1, *bob);
	me->unequip(1);
	me->use(1, *bob);
	me->equip(tmp); //you have to reequip to avoid leak, as said in subj

	std::cout << std::endl << "=== CHARACTER COPY ===" << std::endl << std::endl;
	Character *a = new Character("A");
	Character *b = new Character("B");
	Character *enemy = new Character("other");
	tmp = src->createMateria("cure");
	a->equip(tmp);
	a->use(0, *enemy);
	*b = *a;
	b->use(0, *enemy);
	tmp = src->createMateria("ice");
	b->equip(tmp);
	b->use(1, *enemy);
	a->use(1, *enemy);

	delete a;
	delete b;
	delete enemy;

	delete bob;
	delete me;
	delete src;

	/*IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* moi = new Character("moi");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	moi->equip(tmp);
	tmp = src->createMateria("cure");
	moi->equip(tmp);
	tmp = src->createMateria("ice");
	moi->equip(tmp);
	ICharacter* bob = new Character("bob");
	moi->use(0, *bob);
	moi->use(1, *bob);
	moi->use(2, *bob);
	moi->use(3, *bob);
	moi->use(-1, *bob);
	std::cout << "Unequip 3rd" << std::endl;
	moi->unequip(2);
	moi->use(2, *bob);
	std::cout << "Requip 3rd" << std::endl;
	moi->equip(tmp);
	moi->use(2, *bob);
	delete bob;
	delete moi;
	delete src;*/

	return 0;
}
