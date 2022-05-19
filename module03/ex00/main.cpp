/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:30:07 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/12 16:29:59 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("Lilo");
    ClapTrap b("Stitch");

    a.getInfo();
    b.getInfo();

    a.setAttackDamage(5);
    a.attack(b.getName());
    b.takeDamage(5);
    b.beRepaired(5);
    b.setAttackDamage(10);
    b.attack(a.getName());
    a.takeDamage(10);

    a.getInfo();
    b.getInfo();
}

