/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 16:59:40 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/11 16:59:47 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
    public:
        HumanB( std::string n_name );
        ~HumanB();
        void attack ( void );
        void setWeapon(Weapon &w);

    private:
        std::string name;
        Weapon *weapon;
};

#endif
