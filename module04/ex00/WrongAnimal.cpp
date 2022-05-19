/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 21:32:15 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/12 21:32:19 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << GREEN"WrongAnimal default constructor called"END << std::endl;
    type = "Wrong Animal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &x)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = x;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &x)
{
    if (this == &x)
        return (*this);
    type = x.getType();
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << RED"WrongAnimal destructor called"END << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimals can make sound..." << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (type);
}

