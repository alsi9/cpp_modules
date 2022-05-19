/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 21:33:27 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/12 21:33:31 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << GREEN"Animal default constructor called"END << std::endl;
    type = "animal";
}

Animal::Animal(const Animal &x)
{
    std::cout << GREEN"Animal copy constructor called"END << std::endl;
    *this = x;
}

Animal &Animal::operator=(const Animal &x)
{
	std::cout << "Copy assignment operator called (Animal)" << std::endl;
    if (this == &x)
        return (*this);
    type = x.getType();
    return (*this);
}

Animal::~Animal()
{
    std::cout << RED"Animal destructor called"END << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Animals can make sound..." << std::endl;
}

std::string Animal::getType() const
{
    return (type);
}

