/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 16:32:42 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/12 16:32:46 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"

FlagTrap::FlagTrap() : ClapTrap()
{
    std::cout << GREEN"FlagTrap " << name << ": hello! (constructor)"END << std::endl;
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
}

FlagTrap::FlagTrap(std::string name) : ClapTrap(name)
{
    std::cout << GREEN"FlagTrap " << name << ": hello! (constructor)"END << std::endl;
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
}

FlagTrap::FlagTrap(const FlagTrap &x) : ClapTrap(x)
{
    std::cout << GREEN"Copy constructor called (FlagTrap)"END << std::endl;
    *this = x;
}

FlagTrap &FlagTrap::operator=(const FlagTrap &x)
{
    std::cout << "Copy assignment operator called (FlagTrap)" << std::endl;
    if (&x == this)
        return (*this);
    name = x.getName();
    hit_points = x.getHitPoints();
    energy_points = x.getEnergyPoints();
    attack_damage = x.getAttackDamage();
    return (*this);
}

FlagTrap::~FlagTrap()
{
    std::cout << RED"FlagTrap " << name << ": goodbye! (destructor)"END << std::endl;
}

void FlagTrap::highFivesGuys(void)
{
    std::cout << "FlagTrap " << name << ": high five guys!" << std::endl;
}

void FlagTrap::attack(const std::string& target) {
    if (hit_points <= 0) {
        hit_points = 0;
        std::cout << "FlagTrap " << name << " can't attack because it has no hit points!" << std::endl;
        return;
    }
    if (energy_points <= 0) {
        energy_points = 0;
        std::cout << "FlagTrap " << name << " can't attack because it has no energy points!" << std::endl;
        return;
    }
    energy_points--;
    std::cout << "FlagTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!"
              << std::endl;
}
