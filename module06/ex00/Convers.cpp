/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convers.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 18:23:41 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/14 18:23:44 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convers.hpp"

Convers::Convers() : str("0") {}

Convers::Convers(std::string strr) : str(strr) {}

Convers::Convers(const Convers &x)
{
    *this = x;
}
Convers &Convers::operator=(const Convers &x)
{
    if (this == &x)
        return (*this);
    str = x.getStr();
    return (*this);
}

Convers::~Convers() {}

std::string Convers::getStr() const
{
    return (str);
}

void    Convers::printChar()
{
    std::cout << "char: ";
    int number = 0;
    if (str.length() == 1)
    {
        try
        {
            number = std::stoi(str);
            if (number < 33 || number > 126)
                std::cout << "Non displayable" << std::endl;
            else
            {
                char a = static_cast<char>(number);
                std::cout << "'" << a << "'" << std::endl;
            }
        }
        catch (std::invalid_argument &x)
        {
            std::cout << "'" << str[0] << "'" << std::endl;

        }
        catch (const std::out_of_range &x)
		{
            std::cout << "impossible" << std::endl;
        }
    }
    else
    {
        try
        {
            number = std::stoi(str);
            if (number < CHAR_MIN || number > CHAR_MAX)
                std::cout << "impossible" << std::endl;
            else if (number < 33 || number > 126)
                std::cout << "Non displayable" << std::endl;
            else
            {
                char a = static_cast<char>(number);
                std::cout << "'" << a << "'" << std::endl;
            }
        }
        catch (std::invalid_argument &x)
        {
            std::cout << "impossible" << std::endl;

        }
        catch (const std::out_of_range &x)
        {
            std::cout << "impossible" << std::endl;
        }
    }
}

void     Convers::printInt()
{
    std::cout << "int: ";
    int number = 0;
    try
    {
        number = std::stoi(str);
        std::cout << number << std::endl;
    }
    catch (std::invalid_argument &x)
    {
        std::cout << "impossible" << std::endl;

    }
    catch (const std::out_of_range &x)
    {
        std::cout << "impossible" << std::endl;
    }
}

void   Convers::printFloat()
{
    std::cout << "float: ";
    float number = 0;
    try
    {
        number = std::stof(str);
        std::cout << std::fixed << std::setprecision(1) << number << "f" << std::endl;
    }
    catch (std::invalid_argument &x)
    {
        std::cout << "impossible" << std::endl;

    }
    catch (const std::out_of_range &x)
    {
        std::cout << "impossible" << std::endl;
    }
}

void  Convers::printDouble()
{
    std::cout << "double: ";
    double number = 0;
    try
    {
        number = std::stod(str);
        std::cout << std::fixed << std::setprecision(1) << number << std::endl;
    }
    catch (std::invalid_argument &x)
    {
        std::cout << "impossible" << std::endl;

    }
    catch (const std::out_of_range &x)
    {
        std::cout << "impossible" << std::endl;
    }
}
