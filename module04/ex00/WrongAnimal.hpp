/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 21:32:24 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/12 21:32:28 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

#define GREEN "\x1b[3;32m"
#define END "\x1b[0m"
#define RED "\x1b[0;31m"

class WrongAnimal
{
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &x);
        WrongAnimal &operator=(const WrongAnimal &x);
        ~WrongAnimal();

        void makeSound() const;
        std::string getType() const;

    protected:
        std::string type;
};

#endif
