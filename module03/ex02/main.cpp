/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 16:31:41 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/12 16:31:45 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FlagTrap.hpp"

int main()
{
    ClapTrap a("Lilo");
    FlagTrap b("Stitch");

    a.getInfo();
    b.getInfo();
    a.setAttackDamage(5);
    a.attack(b.getName());
    b.takeDamage(5);
    b.beRepaired(5);
    b.setAttackDamage(15);
    b.attack(a.getName());
    a.takeDamage(15);
    b.highFivesGuys();
}

