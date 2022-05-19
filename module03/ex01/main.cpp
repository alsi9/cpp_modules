/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:31:39 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/12 15:31:48 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ClapTrap a("Lilo");
    ScavTrap b("Stitch");

    a.getInfo();
    b.getInfo();
    a.setAttackDamage(5);
    a.attack(b.getName());
    b.takeDamage(5);
    b.beRepaired(5);
    b.setAttackDamage(10);
    b.attack(a.getName());
    a.takeDamage(10);
    b.guardGate();

    return (0);
}

