/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 16:59:09 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/11 16:59:13 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string s_name, Weapon &w_weapon ) : name(s_name), weapon(w_weapon) {}

HumanA::~HumanA() {}

void HumanA::attack ( void )
{
    std::cout << name << " attacks with their " <<  weapon.getType() << std::endl;
}

