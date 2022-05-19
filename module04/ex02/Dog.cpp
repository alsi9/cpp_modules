/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 21:34:52 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/12 21:34:57 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    brain = new Brain();
    std::cout << GREEN"Dog default constructor called"END << std::endl;
    type = "dog";
}

Dog::Dog(const Dog &x)
{
    std::cout << GREEN"Dog copy constructor called"END << std::endl;
	type = x.getType();
	brain = new Brain(*(x.getBrain()));
}

Dog &Dog::operator=(const Dog &x)
{
	std::cout << "Copy assignment operator called (Dog)" << std::endl;
    if (this == &x)
        return (*this);
    type = x.getType();
    if (brain)
        delete brain;
    brain = new Brain(*(x.getBrain()));
    return (*this);
}

Dog::~Dog()
{
    delete(brain);
    std::cout << RED"Dog destructor called"END << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof! Woof! Woof!" << std::endl;
}

Brain *Dog::getBrain() const
{
    return (brain);
}
