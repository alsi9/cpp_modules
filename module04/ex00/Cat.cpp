/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 21:31:13 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/12 21:31:16 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << GREEN"Cat default constructor called"END << std::endl;
    type = "cat";
}

Cat::Cat(const Cat &x)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = x;
}

Cat &Cat::operator=(const Cat &x)
{
    if (this == &x)
        return (*this);
    type = x.getType();
    return (*this);
}

Cat::~Cat()
{
    std::cout << RED"Cat destructor called"END << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow... meow... meow" << std::endl;
}
