/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 21:35:57 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/12 21:36:00 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

#define GREEN "\x1b[3;32m"
#define END "\x1b[0m"
#define RED "\x1b[0;31m"

class Animal
{
    public:
        Animal();
        Animal(const Animal &x);
        Animal &operator=(const Animal &x);
        virtual ~Animal();
        virtual void makeSound() const = 0;
        std::string getType() const;

    protected:
        std::string type;
};

#endif
