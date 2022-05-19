/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 16:57:22 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/11 16:57:25 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *horde;
    int number;

    number = 5;
	std::cout << "---- Number of zombies: " << number << " ----" << std::endl;
    horde = zombieHorde(number, "Member of the horde");
    for (int i = 0; i < number; i++)
        horde[i].announce();
    delete [] horde;

    return (0);
}

