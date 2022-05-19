/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:00:22 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/11 17:00:25 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string w_type )
{
    type = w_type;
}

Weapon::~Weapon() {}

void Weapon::setType(std::string w_type)
{
    type = w_type;
}

std::string const &Weapon::getType(void) const
{
    return (type);
}

