/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 21:34:20 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/12 21:34:24 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
    public:
        Cat();
        Cat(const Cat &x);
        Cat &operator=(const Cat &x);
        virtual ~Cat();

        void makeSound() const;
        Brain *getBrain() const;

    private:
        Brain *brain;
};

#endif
