/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 21:33:08 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/12 21:33:11 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		const Animal *meta = new Animal();
		const Animal *j = new Dog();
		const Animal *i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		j->makeSound();
		i->makeSound();
		meta->makeSound();

		delete (j);
		delete (i);
		delete (meta);
	}
	std::cout << std::endl;
	{
		const WrongAnimal *metaWrong = new WrongAnimal();
		const WrongAnimal *catWrong = new WrongCat();
//		const WrongCat a;

		std::cout << catWrong->getType() << " " << std::endl;
		catWrong->makeSound();
		metaWrong->makeSound();
//		a.makeSound();

		delete metaWrong;
		delete catWrong;
	}
    return 0;
}

