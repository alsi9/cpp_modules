/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 16:56:48 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/11 16:56:52 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : name("DefaultNameZombie") {}

Zombie::Zombie(std::string new_name) : name(new_name) {}

Zombie::~Zombie()
{
    std::cout << name << RED" died!"END << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}

void Zombie::announce( void )
{
    std::cout << name << GREEN" BraiiiiiiinnnzzzZ..."END << std::endl;
}

