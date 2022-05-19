/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 21:31:33 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/12 21:31:37 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << GREEN"Dog default constructor called"END << std::endl;
    type = "dog";
}

Dog::Dog(const Dog &x)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = x;
}

Dog &Dog::operator=(const Dog &x)
{
    if (this == &x)
        return (*this);
    type = x.getType();
    return (*this);
}

Dog::~Dog()
{
    std::cout << RED"Dog destructor called"END << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof! Woof! Woof!" << std::endl;
}

