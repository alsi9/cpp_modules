/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:31:26 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/12 15:31:30 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    public:
        ScavTrap(std::string name = "Noname");
        ScavTrap(const ScavTrap &x);
        ScavTrap &operator=(const ScavTrap &x);
        ~ScavTrap();

        void guardGate();
        void attack(const std::string& target);
};

#endif
