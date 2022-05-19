/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:31:22 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/11 17:31:27 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie DefaultZombie;
    Zombie StackZombie("StackZombie");
    Zombie *HeapZombie = newZombie("HeapZombie");

    DefaultZombie.announce();
    StackZombie.announce();
    HeapZombie->announce();
    randomChump("RandomChumpZombie");

    delete HeapZombie;
    return (0);
}


