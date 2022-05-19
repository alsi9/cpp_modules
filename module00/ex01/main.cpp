/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 12:33:47 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/11 12:33:50 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
    PhoneBook My_Book;
    std::string input;

    while(true)
    {
        std::cout << "Please enter a command(ADD/SEARCH/EXIT): ";
        getline(std::cin, input);
        if (input == "EXIT")
        {
            std::cout << "You chose the EXIT... Goodbye!" << std::endl;
            break;
        }
        else if (input == "ADD")
        {
            std::cout << " ... Add contact ... " << std::endl;
            if (My_Book.AddContact())
                continue;
            std::cout << " ... Contact added ... " << std::endl;
        }
        else if (input == "SEARCH")
            My_Book.SearchContact();
		else
			std::cout << "Error!" << std::endl;
    }
    return (0);
}

