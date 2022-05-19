/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 16:32:20 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/12 16:32:24 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    ClapTrap::name = name + "_clap_name";
    this->name = "Noname";
    this->hit_points = FlagTrap::hit_points;
    this->energy_points = ScavTrap::energy_points;
    this->attack_damage = FlagTrap::attack_damage;
    std::cout << GREEN"DiamondTrap " << name << ": hello! (constructor)"END << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FlagTrap(name)
{
    ClapTrap::name = name + "_clap_name";
    this->name = name;
    this->hit_points = FlagTrap::hit_points;
    this->energy_points = ScavTrap::energy_points;
    this->attack_damage = FlagTrap::attack_damage;
    std::cout << GREEN"DiamondTrap " << name << ": hello! (constructor)"END << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &x) : ClapTrap(x)
{
    std::cout << GREEN"Copy constructor called (DiamondTrap)"END << std::endl;
    *this = x;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &x)
{
    std::cout << "Copy assignment operator called (DiamondTrap)" << std::endl;
    if (this == &x)
        return (*this);
    name = x.getName();
    hit_points = x.getHitPoints();
    energy_points = x.getEnergyPoints();
    attack_damage = x.getHitPoints();
    return(*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << RED"DiamondTrap " << name << ": goodbye! (destructor)"END << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name is " << name << std::endl;
    std::cout << "ClapTrap name is " << ClapTrap::name << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}


