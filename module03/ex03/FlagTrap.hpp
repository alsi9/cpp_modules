/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 16:32:50 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/12 16:32:54 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP

#include "ClapTrap.hpp"

class FlagTrap: virtual public ClapTrap
{
    public:
        FlagTrap();
        FlagTrap(std::string name);
        FlagTrap(const FlagTrap &x);
        FlagTrap &operator=(const FlagTrap &x);
        ~FlagTrap();
        void attack(const std::string &target);
        void highFivesGuys(void);
};

#endif
