/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convers.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 18:23:48 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/14 18:23:51 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERS_HPP
#define CONVERS_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Convers
{
    public:
		Convers();
        Convers(std::string strr);
        Convers(const Convers &x);
        Convers &operator=(const Convers &x);
        ~Convers();
        std::string getStr() const;
        void printChar();
        void printInt();
        void printFloat();
        void printDouble();
    private:
        std::string str;
};

#endif
