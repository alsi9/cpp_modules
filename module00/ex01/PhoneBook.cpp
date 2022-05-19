/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 12:33:29 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/11 12:33:31 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook() {}
PhoneBook::~PhoneBook() {}

int PhoneBook::AddContact()
{
    static int index = -1;
    std::string input;

    index = index < 7 ? index + 1 : 0;

    std::cout << "Enter first name: ";
    std::getline(std::cin, input);
    if (input.empty())
    {
        std::cout << "Empty line: first name!" << std::endl;
        return (1);
    }
    contacts[index].setFirstName(input);

    std::cout << "Enter last name: ";
    std::getline(std::cin, input);
    if (input.empty())
    {
        std::cout << "Empty line: last name!" << std::endl;
        return (1);
    }
    contacts[index].setLastName(input);

    std::cout << "Enter nickname: ";
    std::getline(std::cin, input);
    if (input.empty())
    {
        std::cout << "Empty line: nickname!" << std::endl;
        return (1);
    }
    contacts[index].setNickName(input);

    std::cout << "Enter phone number: ";
    std::getline(std::cin, input);
    if (input.empty())
    {
        std::cout << "Empty line: phone number" << std::endl;
        return (1);
    }
    contacts[index].setPhoneNumber(input);

    std::cout << "Enter darkest secret: " << std::endl;
    std::getline(std::cin, input);
    if (input.empty())
    {
        std::cout << "Empty line: darkest secret" << std::endl;
        return (1);
    }
    contacts[index].setDarkestSecret(input);
    return (0);
}

void PhoneBook::SearchContact()
{
    int index;
    int size;

    size = 0;
    std::cout << "|----------|----------|----------|----------|" << std::endl;
    std::cout << "|   Index  |First name|Last  name| Nickname |" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;
    for (int i = 0; i < 8; i++)
    {
       std::string FirstName = contacts[i].getFirstName();
       if (FirstName.empty())
           break;
       std::cout << "|" << std::right << std::setw(10) << i + 1 << "|";

       std::string catFirstName = FirstName.length() > 10 ? FirstName.substr(0, 9) + ".": FirstName;
       std::cout <<  std::right << std::setw(10) << catFirstName << "|";

       std::string LastName = contacts[i].getLastName();
       std::string catLastName = LastName.length() > 10 ? LastName.substr(0, 9) + ".": LastName;
       std::cout <<  std::right << std::setw(10) << catLastName << "|";

       std::string NickName = contacts[i].getNickName();
       std::string catNickName = NickName.length() > 10 ? NickName.substr(0, 9) + ".": NickName;
       std::cout <<  std::right << std::setw(10) << catNickName << "|" << std::endl;
       size++;
    }
    std::cout << "|----------|----------|----------|----------|" << std::endl;
    std::cout << std::endl;
    std::cout << "Enter contact index: ";
   if (!(std::cin >> index) || index < 1 || index > size)
   {
       std::cin.clear();
       std::cout << "Index entered incorrectly" << std::endl;
   }
   else
   {
       std::cout << std::endl;
       std::cout << "Index: " << index << std::endl;
       index--;
       std::cout << "First name: " << contacts[index].getFirstName() << std::endl;
       std::cout << "Last name: " << contacts[index].getLastName() << std::endl;
       std::cout << "Nickname: " << contacts[index].getNickName() << std::endl;
       std::cout << "Phone number: " <<  contacts[index].getPhoneNumber() << std::endl;
       std::cout << "Darkest secret: " <<  contacts[index].getDarkestSecret() << std::endl;
       std::cout << std::endl;
   }
    std::cin.ignore(100, '\n');
}




