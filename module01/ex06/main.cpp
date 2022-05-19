/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:34:18 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/11 17:34:21 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl H;

    if (argc != 2)
    {
        std::cout << "Wrong count of program arguments!" << std::endl;
        return (1);
    }
    H.complain((std::string) argv[1]);
    return (0);
}


