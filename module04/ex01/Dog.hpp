/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 21:35:07 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/12 21:35:12 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
    public:
        Dog();
        Dog(const Dog &x);
        Dog &operator=(const Dog &x);
        virtual ~Dog();

        void makeSound() const;
        Brain *getBrain() const;

    private:
        Brain *brain;
};

#endif
