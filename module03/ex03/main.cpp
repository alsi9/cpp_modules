/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 16:33:42 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/12 16:33:46 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FlagTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    {
        ClapTrap a("Lilo");
        a.getInfo();
        a.attack("Plikli");
        a.takeDamage(6);
        a.beRepaired(4);
    }
    std::cout << "------------------------------------------------------" << std::endl;
    {
        ScavTrap b("Plikli");
        b.getInfo();
        b.attack("Jumba");
        b.takeDamage(7);
        b.beRepaired(3);
        b.guardGate();
    }
    std::cout << "-----------------------------------------" << std::endl;
    {
        FlagTrap c("Jumba");
        c.getInfo();
        c.attack("Stitch");
        c.takeDamage(5);
        c.beRepaired(5);
        c.highFivesGuys();
    }
    std::cout << "-----------------------------------------" << std::endl;
    {
        DiamondTrap d("Stitch");
        d.getInfo();
        d.attack("Lilo");
        d.takeDamage(8);
        d.beRepaired(2);
        d.whoAmI();
    }
}

