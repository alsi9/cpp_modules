/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 21:34:10 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/12 21:34:14 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    brain = new Brain();
    std::cout << GREEN"Cat default constructor called"END << std::endl;
    type = "cat";
}

Cat::Cat(const Cat &x)
{
    std::cout << GREEN"Cat copy constructor called"END << std::endl;
	type = x.getType();
	brain = new Brain(*(x.getBrain()));
}

Cat &Cat::operator=(const Cat &x)
{
	std::cout << "Copy assignment operator called (Cat)" << std::endl;
    if (this == &x)
        return (*this);
    type = x.getType();
    if (brain)
		delete brain;
	brain = new Brain(*(x.getBrain()));
    return (*this);
}

Cat::~Cat()
{
    delete (brain);
    std::cout << RED"Cat destructor called"END << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow... meow... meow" << std::endl;
}

Brain *Cat::getBrain() const
{
    return (brain);
}
