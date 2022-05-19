/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 16:33:20 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/12 16:33:23 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << GREEN"ScavTrap " << name << ": hello! (constructor)"END << std::endl;
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << GREEN"ScavTrap " << name << ": hello! (constructor)"END << std::endl;
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &x) : ClapTrap(x)
{
    std::cout << GREEN"Copy constructor called (ScavTrap)"END << std::endl;
    *this = x;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &x)
{
    std::cout << "Copy assignment operator called (ScavTrap)" << std::endl;
    if (this == &x)
        return (*this);
    name = x.getName();
    hit_points = x.getHitPoints();
    energy_points = x.getEnergyPoints();
    attack_damage = x.getAttackDamage();
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << RED"ScavTrap " << name << ": goodbye! (destructor)"END << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode!" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (hit_points <= 0)
    {
        hit_points = 0;
        std::cout << "ScavTrap " << name << " can't attack because it has no hit points!" << std::endl;
        return ;
    }
    if (energy_points <= 0)
    {
        energy_points = 0;
        std::cout << "ScavTrap " << name << " can't attack because it has no energy points!" << std::endl;
        return ;
    }
    energy_points--;
    std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
}

