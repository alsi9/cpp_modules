/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 21:35:30 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/12 21:35:33 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

int main()
{
	{
		Animal *array[4];

		for (int i = 0; i < 4; i++)
		{
			if (i % 2)
				array[i] = new Dog();
			else
				array[i] = new Cat();
		}
		for (int i = 0; i < 4; i++)
		{
			std::cout << array[i]->getType() << ": ";
			array[i]->makeSound();
		}
		for (int i = 0; i < 4; i++)
			delete (array[i]);
	}
	{
		std::cout << "--------------------------------------" << std::endl;

		Dog *a = new Dog;
		Cat *b = new Cat;

		std::cout << "-----Type is: " << a->getType() << "-----" << std::endl;
		a->getBrain()->setIdeas("Meat");
		a->getBrain()->setIdeas("Walk");
		a->getBrain()->setIdeas("Water");
		a->getBrain()->printIdeas();

		std::cout << "-----Type is: " << b->getType() << "-----" << std::endl;
		b->getBrain()->setIdeas("Milk");
		b->getBrain()->printIdeas();

		std::cout << "---------------Copy constructor-------------" << std::endl;

		Dog *c = new Dog(*a);
		c->getBrain()->printIdeas();

		std::cout << "------------Copy assignment operator------------" << std::endl;
		Cat *d = new Cat();

		*d = *b;
		d->getBrain()->printIdeas();

		delete a;
		delete b;
		delete c;
		delete d;
	}

    return 0;
}

