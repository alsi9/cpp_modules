/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 21:40:48 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/12 21:40:51 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main()
{
	{
		IMateriaSource *src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter *me = new Character("me");

		AMateria *tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter *bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}

//	std::cout << "--------------------------------------------" << std::endl;
//	{
//		AMateria *array;
//
//		ICharacter *me = new Character("me");
//		ICharacter *mark = new Character("mark");
//
//		IMateriaSource *mat = new MateriaSource();
//		mat->learnMateria(new Cure());
//
//		array = mat->createMateria("cure");
//		if (array)
//			std::cout << "Create materia: " <<  array->getType() << std::endl;
//		else
//			std::cout << "Create materia: -" << std::endl;
//
//		me->equip(array);
//		me->use(0, *mark);
//		me->unequip(0);
//
//		delete me;
//		delete mark;
//		delete mat;
//		delete array;
//	}

	return 0;
}
