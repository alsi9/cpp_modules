/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 16:59:30 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/11 16:59:34 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string n_name ) : name(n_name)
{
    weapon = NULL;
}

HumanB::~HumanB() {}

void HumanB::attack ( void )
{
    if (this->weapon)
        std::cout << name << " attacks with their " <<  weapon->getType() << std::endl;
    else
        std::cout << name << " has no weapon" << std::endl;
}

void HumanB::setWeapon(Weapon &w)
{
    weapon = &w;
}
