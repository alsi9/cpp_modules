/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 16:30:51 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/12 16:30:54 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP

#include "ClapTrap.hpp"

class FlagTrap: public ClapTrap
{
    public:
        FlagTrap(std::string name);
        FlagTrap(const FlagTrap &x);
        FlagTrap &operator=(const FlagTrap &x);
        ~FlagTrap();
        void attack(const std::string &target);
        void highFivesGuys(void);
};

#endif
