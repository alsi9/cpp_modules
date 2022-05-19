/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 21:37:26 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/12 21:37:30 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

int main()
{
//		Animal test;
	{
		Dog a;

		std::cout << "Type is: " << a.getType() << std::endl;
		a.getBrain()->setIdeas("Meat");
		a.getBrain()->printIdeas();
	}
	{
		Cat b;

		std::cout << "Type is: " << b.getType() << std::endl;
		b.getBrain()->setIdeas("Milk");
		b.getBrain()->printIdeas();
	}

    return 0;
}

