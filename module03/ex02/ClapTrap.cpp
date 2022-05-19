/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 16:30:18 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/12 16:30:25 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Noname")
{
    std::cout << GREEN"ClapTrap " << name << ": hello! (default constructor)"END << std::endl;
    hit_points = 10;
    energy_points = 10;
    attack_damage = 0;
}

ClapTrap::ClapTrap(std::string n_name) : name(n_name)
{
    std::cout << GREEN"ClapTrap " << name << ": hello! (name constructor)"END << std::endl;
    hit_points = 10;
    energy_points = 10;
    attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &x)
{
    std::cout << GREEN"Copy constructor called (ClapTrap)"END << std::endl;
    *this = x;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &x)
{
    std::cout << "Copy assignment operator called (ClapTrap)" << std::endl;
    if (this == &x)
        return (*this);
    name = x.getName();
    hit_points = x.getHitPoints();
    energy_points = x.getEnergyPoints();
    attack_damage = x.getAttackDamage();
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << RED"ClapTrap " << name << ": goodbye! (destructor)"END << std::endl;
}

void ClapTrap::setName(std::string n_name)
{
    name = n_name;
}

void ClapTrap::setHitPoints(int hit)
{
    hit_points = hit;
}

void ClapTrap::setEnergyPoints(int energy)
{
    energy_points = energy;
}

void ClapTrap::setAttackDamage(int attack)
{
    attack_damage = attack;
}

std::string ClapTrap::getName(void) const
{
    return (name);
}

int ClapTrap::getHitPoints(void) const
{
    return (hit_points);
}

int ClapTrap::getEnergyPoints(void) const
{
    return (energy_points);
}

int ClapTrap::getAttackDamage(void) const
{
    return (attack_damage);
}

void ClapTrap::attack(const std::string& target)
{
    if (hit_points <= 0)
    {
        hit_points = 0;
        std::cout << "ClapTrap " << name << " can't attack because it has no hit points!" << std::endl;
        return ;
    }
    if (energy_points <= 0)
    {
        energy_points = 0;
        std::cout << "ClapTrap " << name << " can't attack because it has no energy points!" << std::endl;
        return ;
    }
    energy_points--;
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hit_points <= 0)
    {
        hit_points = 0;
        std::cout << "ClapTrap " << name << " can't take damage because is already dead!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << name << " lost " << amount << " hit points!" << std::endl;
    hit_points -= amount;
    if (hit_points < 0)
        hit_points = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (hit_points <= 0)
    {
        std::cout << "ClapTrap " << name <<  " can't be repaired because is already dead!" << std::endl;
        return ;
    }
    if (energy_points <= 0)
    {
        energy_points = 0;
        std::cout << "ClapTrap " << name << " can't be repaired because it has no energy points!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << name << " repaired by " << amount << " points!" << std::endl;
    hit_points += amount;
    energy_points--;
}

void ClapTrap::getInfo()
{
    std::cout << "\n<<<<< Information >>>>>" << std::endl;
    std::cout << "Name: " << getName() << std::endl;
    std::cout << "Hit points: " <<  getHitPoints() << std::endl;
    std::cout << "Energy points: " << getEnergyPoints() << std::endl;
    std::cout << "Damage: " <<  getAttackDamage() << std::endl;
    std::cout << std::endl;
}
