/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:31:11 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/11 17:31:15 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#define GREEN "\x1b[3;32m"
#define END "\x1b[0m"
#define RED "\x1b[0;31m"

#include <iostream>
#include <string>

class Zombie
{
    public:
		Zombie();
        Zombie(std::string new_name);
        ~Zombie();
        void announce( void );

    private:
        std::string name;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif
