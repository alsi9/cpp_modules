/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 16:32:08 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/12 16:32:11 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

#define GREEN "\x1b[3;32m"
#define END "\x1b[0m"
#define RED "\x1b[0;31m"

class ClapTrap
{
    public:
        ClapTrap();
        ClapTrap(std::string n_name);
        ClapTrap(const ClapTrap &x);
        ClapTrap &operator=(const ClapTrap &x);
        ~ClapTrap();

        void setName(std::string n_name);
        void setHitPoints(int hit);
        void setEnergyPoints(int energy);
        void setAttackDamage(int attack);
        std::string getName(void) const;
        int getHitPoints(void) const;
        int getEnergyPoints(void) const;
        int getAttackDamage(void) const;

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        void getInfo();

    protected:
        std::string name;
        int hit_points;
        int energy_points;
        int attack_damage;
};

#endif
