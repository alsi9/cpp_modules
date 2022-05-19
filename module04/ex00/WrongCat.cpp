/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 21:32:41 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/12 21:32:47 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << GREEN"WrongCat default constructor called"END << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &x)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = x;
}

WrongCat &WrongCat::operator=(const WrongCat &x)
{
    if (this == &x)
        return (*this);
    type = x.getType();
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << RED"WrongCat destructor called"END << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Meow... meow... meow" << std::endl;
}

